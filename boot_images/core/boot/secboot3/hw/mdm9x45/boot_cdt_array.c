
/*==========================================================================	
                        NOTE: This is a generated file!
===========================================================================*/	
/*==========================================================================

                   INCLUDE FILES

===========================================================================*/
#include "boot_comdef.h"
#include "boot_config_data.h"

/*=============================================================================

        LOCAL DEFINITIONS AND DECLARATIONS FOR MODULE

This section contains local definitions for constants, macros, types,
variables and other items needed by this module.

=============================================================================*/
/**
* fixed size array that holds the cdt table in memory, it's intialized to 
* CDT v1 with only one data block which is platform id. The platform id type 
* is UNKNOWN as default.
*/
uint8 config_data_table[CONFIG_DATA_TABLE_MAX_SIZE] = 
{
	/* Header */

	0x43, 0x44, 0x54, 0x00, 
	0x01, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 

	/* Meta data */

	0x16, 0x00, 0x06, 0x00, 
	0x1C, 0x00, 0x88, 0x01, 

	/* Block data */

	0x03, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x01, 0x00, 
	0x00, 0x00, 0x00, 0x52, 
	0x44, 0x44, 0xFF, 0xFF, 
	0x00, 0x00, 0x02, 0x00, 
	0x00, 0x00, 0xB8, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x02, 0x00, 
	0x00, 0x00, 0x14, 0x05, 
	0x00, 0x00, 0xA4, 0x01, 
	0x00, 0x00, 0x60, 0xAE, 
	0x0A, 0x00, 0x76, 0x02, 
	0x00, 0x00, 0x40, 0x01, 
	0x00, 0x00, 0xB0, 0x30, 
	0x01, 0x00, 0x78, 0x05, 
	0x00, 0x00, 0x4B, 0x00, 
	0x00, 0x00, 0x4B, 0x00, 
	0x00, 0x00, 0x0E, 0x01, 
	0x00, 0x00, 0x64, 0x00, 
	0x00, 0x00, 0x96, 0x00, 
	0x00, 0x00, 0x03, 0x00, 
	0x00, 0x00, 0xF0, 0x00, 
	0x00, 0x00, 0x02, 0x00, 
	0x00, 0x00, 0x0E, 0x00, 
	0x00, 0x00, 0x09, 0x00, 
	0x00, 0x00, 0x08, 0x00, 
	0x00, 0x00, 0x0E, 0x00, 
	0x00, 0x00, 0x09, 0x00, 
	0x00, 0x00, 0x08, 0x00, 
	0x00, 0x00, 0x20, 0x00, 
	0x00, 0x00, 0x04, 0x00, 
	0x00, 0x00, 0x03, 0x00, 
	0x00, 0x00, 0xF0, 0x00, 
	0x00, 0x00, 0xF4, 0x01, 
	0x00, 0x00, 0x4B, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x05, 0x00, 
	0x00, 0x00, 0x80, 0x84, 
	0x1E, 0x00, 0x10, 0x27, 
	0x00, 0x00, 0x02, 0x00, 
	0x00, 0x00, 0x10, 0x0E, 
	0x00, 0x00, 0x84, 0x03, 
	0x00, 0x00, 0x10, 0x27, 
	0x00, 0x00, 0x05, 0x00, 
	0x00, 0x00, 0x96, 0x00, 
	0x00, 0x00, 0xF4, 0x01, 
	0x00, 0x00, 0x80, 0xA2, 
	0x00, 0x00, 0x00, 0x20, 
	0x00, 0x00, 0x19, 0x00, 
	0x00, 0x00, 0x37, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 

};

/**
    cdt table size
*/
uint32 config_data_table_size = 420;
