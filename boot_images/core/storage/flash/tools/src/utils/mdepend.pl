#! /usr/bin/env perl

#===================================================================
#
#                            M D E P E N D
#
# GENERAL DESCRIPTION
#   Merge dependencies generated by getdep.pl into the real makefile.
#
#   The makefile is searched for a line beginning with
#    # DO NOT EDIT BELOW THIS LINE
#   All lines below this line are removed and the dependencies are
#   placed at this point.
#
# INVOCATION
#   perl mdepend.pl target.mak TARGET
#
# Copyright (c) 2008-2009 Qualcomm Incorporated. 
#  All Rights Reserved.
#  Qualcomm Confidential and Proprietary
#===================================================================
#===================================================================
#                          EDIT HISTORY FOR MODULE
#
#  This section contains comments describing changes made to the module.
#  Notice that changes are listed in reverse chronological order.
#
#  $Header: //components/rel/boot.bf/3.1.2.c3/boot_images/core/storage/flash/tools/src/utils/mdepend.pl#1 $ $DateTime: 2015/09/01 00:30:35 $ $Author: pwbldsvc $
#  
# when       who     what, where, why
# --------   ---     -------------------------------------------------
# 10/29/08    mm      Initial version
#=====================================================================
die "Usage: perl mdepend.pl target.mak TARGET\n"
    unless $#ARGV == 1;


$makefile = $ARGV[0];
$target   = $ARGV[1];

############################################################
# Begin by copying the normal part of the makefile.
############################################################

$found_line = 0;

open (IN, "<$makefile") || die "Can't read makefile\n";
while (<IN>) {
  chomp;
  s/\r//;
  if (/^\# DO NOT EDIT BELOW THIS LINE/) {
    print "$_\n";
    $found_line = 1;
    last;
  }
  print "$_\n";
}
close (IN);

die "No '# DO NOT EDIT BELOW THIS LINE' found in makefile\n"
    unless $found_line;

############################################################
# Now merge in the dependencies.
############################################################

for $name (<$target/*.dep>) {
  open (IN, "<$name") || die "Can't read file: $name";
  print "\n";
  while (<IN>) {
    chomp;
    s/\r//;
    print "$_\n";
  }
  close IN;
}

print "\n# End of auto generated dependencies.\n";

###########################################################################
# End of Perl script.
###########################################################################
