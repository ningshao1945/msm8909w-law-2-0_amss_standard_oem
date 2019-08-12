'''
   CoreBSP Preprocessor cleaner
'''
#===============================================================================
#
# CoreBSP Preprocessor cleaner
#
# GENERAL DESCRIPTION
#    celans junk generated by preprocessor
#
# Copyright (c) 2009-2010 by Qualcomm Technologies, Incorporated.
# All Rights Reserved.
# QUALCOMM Proprietary/GTDR
#
#-------------------------------------------------------------------------------
#
#  $Header: //commercial/MPSS.JO.2.0.c1.4/Main/modem_proc/tools/build/scons/scripts/ppasm.py#1 $
#  $DateTime: 2016/12/13 07:57:53 $
#  $Author: mplcsds1 $
#  $Change: 11985114 $
#                      EDIT HISTORY FOR FILE
#
#  This section contains comments describing changes made to the module.
#  Notice that changes are listed in reverse chronological order.
#
# when       who     what, where, why
# --------   ---     ---------------------------------------------------------
# 05/01/10   wd      Create
#
#===============================================================================
#import os
import re
import sys
from optparse import OptionParser
import textwrap

#------------------------------------------------------------------------------
# Parse command line arguments
#------------------------------------------------------------------------------
def parse_args():
    '''
       parse_args

       Parse command line arguments
    '''
    usage = "usage: %prog [options]"
    version = "%prog 1.0"
   
    parser = OptionParser(usage=usage, version=version)
    parser.add_option("-f", "--ppfile", dest="pp_filename",
                      help="Read preprocess data from FILE", metavar="FILE")
    parser.add_option("-o", "--outfile", dest="output_filename",
                      help="Write output to FILE", metavar="FILE")
    parser.add_option("-m", "--maxlinelength", dest="max_line_length",
                      help="break up COMMENT line if max_line_length is exceeded",
                      default=0, type="int", metavar="INTEGER")

    (options, args) = parser.parse_args()
    
    if options.pp_filename is None:
        parser.error("-f option must be defined")
        sys.exit(2)
                  
                  
    return (options, args)
   
#------------------------------------------------------------------------------
# main
#------------------------------------------------------------------------------
def main():
    '''
       main
    '''
    # get args from cmd line
    (options, args) = parse_args()
    
    max_line_length = options.max_line_length - 2
   
    file_item = open(options.pp_filename, 'r')
    data = file_item.readlines()
    file_item.close()
   
    if options.output_filename is None:
        file_item = sys.stdout
    else:
        file_item = open(options.output_filename, 'w')
   
    re_bad_line = re.compile('(^\s*#line.*$)|(^\s*#\s\d.*$)|(^\s*$)')
    comment_line = re.compile(r'\s*[;].*')
   
    for line in data:
        if re_bad_line.match(line) is None:
            if comment_line.match(line) and max_line_length != -2 and len(line) > max_line_length:
                wrapped_lines = "\n".join(textwrap.wrap(line,max_line_length, break_on_hyphens=False, subsequent_indent='; '))
                for wrapped_line in wrapped_lines:
                    file_item.write(wrapped_line)
            else:
               file_item.write(line)

    file_item.close()
   
main()
