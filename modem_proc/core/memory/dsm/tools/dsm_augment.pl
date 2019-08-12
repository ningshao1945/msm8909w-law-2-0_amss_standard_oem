# *====*====*====*====*====*====*====*====*====*====*====*====*====*====*====*
#
#                                dsm_augment.pl
#
# GENERAL DESCRIPTION
#   A script to parse the output received from running the dsmX.cmm file. 
#
#   Usage: perl dsm_augment.pl dsm_memory_pool_dump.txt  > output.csv
#
#
# Copyright(c) 2014 by QUALCOMM, Incorporated. All Rights Reserved.
# *====*====*====*====*====*====*====*====*====*====*====*====*====*====*====
#
#                       EDIT HISTORY FOR FILE
#
#   This section contains comments describing changes made to this file.
#   Notice that changes are listed in reverse chronological order.
#
# $Header: //source/qcom/qct/modem/mcs/dsm/rel/1h09/tools/dsm_augment.pl#1
#
# when       who     what, where, why
# --------   ---     ---------------------------------------------  
# 05/13/14  sko      Summary sheet ( A2 requirement/ merged A2 scripts)
# ---------------------------------------------------------------------------


use strict;
use Data::Dumper;

if (defined $ARGV[0] && $ARGV[0] eq "--help") {
    print "Usage:\n";
    print " perl dsm_augment.pl DSM_DUMP_FILE > output.csv\n";
    print "  DSM_DUMP_FILE should be the file generated by the dsm augment cmm script.\n";
    exit 0;
} elsif (!defined $ARGV[0]) {
    print "No input file specified. Please call with --help for usage.\n";
    exit 1;
}

# Array indices for the array containing the read-in file contents.
use constant REFERENCES_IDX => 6;


# Global hash structures
my %addr_hash;
my %pktptr_hash;
my %stats_hash;
my %pool_name;

# Read in and normalize the datafile
my %item;
my @temp_arr_for_csv;

# Read the filename from the command line
my $dsm_dump = $ARGV[0];
my $dsm_csv = $dsm_dump;
$dsm_csv =~ s/\.txt/\.csv/;

# Read the file into an array row wise
open INPUT, "<$dsm_dump" or die "Cannot open $dsm_dump: $!";
my @array = <INPUT>;
close INPUT;


# This is how to format various keys on output.
my %fkeys = ("POOL" => "0x%08x",
             "POOLNAME" => "%-5s",
             "ADDR" => "0x%08X",
             "PKT_PTR" => "0x%08X",
             "DUP_PTR" => "0x%08X",
             "LINK" => "0x%08X",
             "POOL_ID_EXT" => "%2d",
             "REFERENCES" => "%2d",
             "USED" => "%4d",
             "SIZE" => "%4d",
             "DATA_PTR" => "0x%08X",
             "PKT_HEAD" => "0x%08X",
             "PKT_FILE" => "%-20s",
             "PKT_LINE" => "%-5d",
             "KIND" => "%3d",
             "PRIORITY" => "%3d",
             "APP_FIELD" => "0x%08X",
             "APP_PTR" => "0x%08X",
             "PKT_LEN" => "%2d",
             "PKT_BITFIELD" => "%08b",
             "FILE" => "%-20s",
             "LINE" => "%-5d",
             "DESC" => "%-20s");

# This is the order of fields in the input file.
my @ikeys = ("POOL",
             "ADDR",
             "PKT_PTR",
             "DUP_PTR",
             "LINK",
             "POOL_ID_EXT",
             "REFERENCES",
             "USED",
             "SIZE",
             "DATA_PTR",
             "KIND",
             "PRIORITY",
             "APP_FIELD",
             "APP_PTR",
             "PKT_LEN",
             "PKT_BITFIELD",
             "FILE",
             "LINE",
             "DESC");

# This is the order of fields in the output file.
my @okeys = ("POOL",
             "ADDR",
             "PKT_PTR",
             "DUP_PTR",
             "LINK",
             "POOL_ID_EXT",
             "REFERENCES",
             "USED",
             "SIZE",
             "DATA_PTR",
             "PKT_HEAD",
             "PKT_FILE",
             "PKT_LINE",
             "KIND",
             "PRIORITY",
             "APP_FIELD",
             "APP_PTR",
             "PKT_LEN",
             "PKT_BITFIELD",
             "FILE",
             "LINE",
             "DESC"
  );

#print the header
sub print_header {
print "\n\n";
print "#";
my $first = 0;
my $key;

foreach $key (@okeys) {
	if($first == 0) {
		$first = 1;
	} else {
		print ",";
	}
	print $key;
}
print "\n";
}

sub get_record {
	my %record;
	my $line = shift;
	my $key;
	my @rest;
	my @tkeys = @ikeys;
	%record = map { shift(@tkeys) => $_ } split(",",$line);
	return \%record;
}

sub normalize_record {
        my $record = shift;
        my $first = 0;
        my $key;
        foreach $key (keys %fkeys) {
		next if(!defined($$record{$key})); 
                if($$record{$key} =~ /^\s*0x([0-9a-fA-F]+)/) {
			my $val = $1;
			$$record{$key} = hex($val); 
                } elsif ($$record{$key} =~ /^\s*(.*)$/) {
                        my $val = $1;
                        $$record{$key} = $val;
		}
        }
	return $record;
}

sub augment_record {
    my $record = shift;
	$$record{"PKT_FILE"} = $$record{"FILE"};
	$$record{"PKT_LINE"} = $$record{"LINE"};
	$$record{"PKT_HEAD"} = 0;
	return $record;
}


sub print_record {
	my $record = shift;
	my $first = 0;
	foreach my $key (@okeys) {
		if($first == 0) {
			$first = 1;
		} else { 
			print ", ";
		}

        if(defined $$record{$key}) {
            printf($fkeys{$key}, $$record{$key});
	  }

	}
	print "\n";
}

# Initialize the global hashmaps 
read_records();

# Update file stamps of DSM items.
filestamp_update();

# Add statistics fields.
print_stats();



# @brief
# Initializes the hash maps containing addresses -> line_number and 
# packet_pointers -> line_number with only DSM items that are referenced
# a non-zero number of times (i.e reference count = 0).
#
# @return:	None
sub read_records
{
    my $total_lines = @array;
    my $j;
    my $record;
    
    for ($j=0; $j<$total_lines; $j++)
    {
	# Remove all whitespaces.
	$array[$j] =~ s/\s//g;	

	# If line is empty, skip.
	if ($array[$j] =~ /^\s*$/) {
	    next;
	}

	# If line is heading, add TOUCHED field and skip.
	if ($array[$j] =~ /^(#.*)$/) {
	    next;
	}

	# if line starts with @, read pool information
	if ($array[$j] =~ /^(@.*)$/) {	  
  	   my @pool_val = split(/:/, $array[$j]);  	
   	   $pool_name{hex($pool_val[2])} = $pool_val[1];
	   next;
	}

	# Array corresponding to a single line in the file.
	my @col_arr = split(/,/, $array[$j]);	

	
	# If the DSM item is not already freed, store the line numbers keyed by 
	# 'ADDR' and 'PKT_PTR' fields.
	if ($col_arr[REFERENCES_IDX] ne "0x0") {		
	    $record = get_record($array[$j]);
	    augment_record($record);
	    normalize_record($record);
	
	    $addr_hash{$record->{"ADDR"}} = $record;
	    $pktptr_hash{$record->{"PKT_PTR"}} = $record;	    
	}
    }
}


# @brief
# Iterates over DSM items looking for heads of lists. For each head of list,
# propagate line and file number information to children.
#
# @return:	None	
sub filestamp_update {
    # For each referenced DSM item.

    foreach my $addr (keys %addr_hash) {
	# If DSM item is the head of a list.
	if (!exists $pktptr_hash{$addr}) {
	    my $i = $addr_hash {$addr};
	    
	    # Extract fields we need to pass down.
	    my $child = $i->{"PKT_PTR"};
	    
	    # Accumulate statistics.
	    accumulate_stats ($i->{"POOL"}, $i->{"PKT_FILE"}, $i->{"PKT_LINE"}, $i->{"USED"});

	    # Propagate fields to rest of list, if it exists.
	    if ($child ne 0) {
		propagate_fields ($child, $i->{"ADDR"}, $i->{"PKT_FILE"}, $i->{"PKT_LINE"});
	    }
	}
	}
}


# @brief
# Recursively visit each DSM item in a list, updating its file, line, and
# touched fields.
#
# @param:
# addr:         Address of DSM item to update.
# head:         Address of list's head DSM item.
# file:         Name of file that changed DSM item.
# line:         Number of line that changed DSM item.
#
# @return:      None
sub propagate_fields {
    my $addr = shift;
    my $head = shift;
    my $file = shift;
    my $line = shift;

    if (exists $addr_hash{$addr}) {
	my $i = $addr_hash{$addr};

	# Extract and replace fields.
	my $child = $i->{"PKT_PTR"};
	$i->{"PKT_FILE"} = $file;
	$i->{"PKT_LINE"} = $line;

	# Accumulate statistics.
	accumulate_stats ($i->{"POOL"}, $i->{"PKT_FILE"}, $i->{"PKT_LINE"}, $i->{"USED"});

	# Update PKT_HEAD (used only for display )
	$i->{"PKT_HEAD"} = $head;

    # Recursive call on next item, if it exists.
	if ($child ne 0) {
	    propagate_fields ($child, $i->{"ADDR"}, $i->{"PKT_FILE"}, $i->{"PKT_LINE"});
	}
    } else {
	print "ERROR: referenced DSM item not found: $addr.\n";
    }
}


# @brief
# Compile statistics on DSM items
#
# @param:
# pool:        Pool ID of DSM item.
# file:        Name of file that changed DSM item.
# line:        Line number of code that changed DSM item.
# used:        Bytes used in DSM item.
#
# @return:     None
sub accumulate_stats
{
    my $pool = shift;
    my $file = shift;
    my $line = shift;
    my $used = shift;

    if (exists $stats_hash {$pool}->{$file}->{$line}) {
	# Entry exists, update its values.
	my $current = $stats_hash {$pool}->{$file}->{$line};
	$$current[0]++;
	$$current[1] += $used;
	$stats_hash {$pool}->{$file}->{$line} = $current;
    } else {
	# No entry exists; create it.
	$stats_hash {$pool}->{$file}->{$line} = [1, $used];
    }
}


# @brief
# Prints the statistics of the DSM items to the CSV file.
#
# @param:       None
# @return:	None
sub print_stats
{
    my $i = 0;
    print "D S M MEMORY POOL USAGE SUMMARY \n";
    print "=" x 40;
    print "\nNote:  Items in a packet are updated with packet header's file stamp.\n";
    print "          All USED DSM items are printed after summary.\n";
    print "-" x 80;

    # Loop through pool ID keys.
    foreach my $pool (keys %stats_hash) {
	my $total_count = 0;
	my $total_used = 0;
	$i++;
	# Append header for pool.
	print "\n DSM ITEM POOL : ";
	if (exists $pool_name{$pool}) {
	printf("%-5s : ",$pool_name{$pool});
	}
	printf("0x%08x",$pool);
	
	print "\n";
    print "-" x 80;
	print "\n";
	
	
	# Loop through file keys.
	my $pool_hash = $stats_hash {$pool};
	foreach my $file (keys %{$pool_hash}) {
	    my $file_hash = $pool_hash->{$file};
	    print "File: $file\n";

	    # Loop through line number keys.
	    foreach my $line (keys %{$file_hash}) {
		# Append statistics for file and line.
		my $tuple = $file_hash->{$line};
		print "Line: $line  ||  Item Count: $$tuple[0]  ||  Total Used Bytes: $$tuple[1]\n";
		$total_count += $$tuple[0];
		$total_used += $$tuple[1];
	    }
	    print "\n";
	}
	print "\nTotal Used Item count: $total_count Total Bytes used : $total_used\n";
	print "-" x 80;
    }

    print "\n\n";
    print "-" x 80;
    print "\nLegend:\n";
    print "        #POOL - Pool ID \n";    
    print "        ADDR - DSM Item \n";    
    print "        FILE and LINE - Item's filestamp \n";    
    print "        PKT_HEAD - Item's packet header ;if non-zero; \n"; 
    print "        PKT_FILE and PKT_LINE - Filestamp of item's packet header \n";
    print "                             based on which summary is calculated.\n";
    print "                             Item's filestamp ;if item is not part of a packet\n";
    print "-" x 80;
  
    print_header();
    foreach my $addr (keys %addr_hash) {
    print_record($addr_hash {$addr});
    }
}

=pod

@Readme:
This script reads through an LTE crash dump of the DSM items and their meta
information and figures out chains of DSM items in order to stamp all the items
in chains with the filename and linenumber (henceforth referred to as
'filestamp') of the head of the chain. A DSM item (say 'A') is picked up and
it's chain (if any) is traversed recursively until the head is found. Then,
each of the children is filestamped until 'A' is reached. Any children of 'A'
will be filestamped when they are iterated upon or another DSM item further
down in the chain is iterated upon. At the end, all the DSM items are
guaranteed to have the filestamps of the head DSM items of their corresponding
chains.

@Optimizations:
* DSM items already visited by the recursion ('filestamp()') are avoided in the 
  serial iteration ('filestamp_update()') using '%visited_hash'.
* Primary key matching of PKT_PTR and ADDR fields done using hash maps for fast 
  random access. Initialization of hash maps ('hash_init()') amortized over 
  hash seeks.
  
@Notes:
* This script assumes that every referenced DSM item's PKT_PTR is valid.
* PKT_FILE and PKT_LINE are the file stamp of the packet head of the item's packet chain.

=cut
