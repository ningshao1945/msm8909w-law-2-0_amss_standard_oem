/*===========================================================================

                       QFPROM  Driver Source  Code

DESCRIPTION
 Contains target specific defintions and APIs to be used to read and write
 qfprom values for sec ctrl 3.0 (used by 9x07).

INITIALIZATION AND SEQUENCING REQUIREMENTS
  None

Copyright  2015 by Qualcomm Technologies, Incorporated.  All Rights Reserved.
============================================================================*/

/*===========================================================================

                           EDIT HISTORY FOR FILE

This section contains comments describing changes made to this file.
Notice that changes are listed in reverse chronological order.

$Header: //components/rel/tz.bf/2.5.c10/trustzone_images/core/boot/qfprom/hw/core_2_0/qfprom_fuse_region_v9.c#1 $

when       who     what, where, why
--------   ---     ---------------------------------------------------------- 
10/13/15   lm      Initial revision for MDM9x07

============================================================================*/

/*=============================================================================

                            INCLUDE FILES FOR MODULE

=============================================================================*/
#include QFPROM_HWIO_REG_INCLUDE_H
#include QFPROM_TARGET_INCLUDE_H

/*=============================================================================

            LOCAL DEFINITIONS AND DECLARATIONS FOR MODULE

This section contains local definitions for constants, macros, types,
variables and other items needed by this module.

=============================================================================*/
/*
**  Array containing QFPROM data items that can be read and associated
**  registers, mask and shift values for the same.
*/
const QFPROM_REGION_INFO qfprom_region_data[] =
{
  {
    QFPROM_JTAG_ID_REGION,
    1,
    QFPROM_FEC_NONE,
    HWIO_QFPROM_RAW_JTAG_ID_ADDR,
    HWIO_QFPROM_CORR_JTAG_ID_ADDR,
    HWIO_QFPROM_CORR_RD_WR_PERM_LSB_PTE_BMSK,
    HWIO_QFPROM_CORR_RD_WR_PERM_MSB_PTE_BMSK,
    QFPROM_ROW_LSB,
    TRUE,
    1
  },
  
  {
    QFPROM_FEATURE_ID_REGION,
    1,
    QFPROM_FEC_NONE,
    HWIO_QFPROM_RAW_JTAG_ID_ADDR,
    HWIO_QFPROM_CORR_JTAG_ID_ADDR,
    HWIO_QFPROM_CORR_RD_WR_PERM_LSB_PTE_BMSK,
    HWIO_QFPROM_CORR_RD_WR_PERM_MSB_PTE_BMSK,
    QFPROM_ROW_LSB,
    TRUE,
    1
  },
  
  {
    QFPROM_PTE0_REGION,
    1,
    QFPROM_FEC_NONE,
    HWIO_QFPROM_RAW_JTAG_ID_ADDR,
    HWIO_QFPROM_CORR_JTAG_ID_ADDR,
    HWIO_QFPROM_CORR_RD_WR_PERM_LSB_PTE_BMSK,
    HWIO_QFPROM_CORR_RD_WR_PERM_MSB_PTE_BMSK,
    QFPROM_ROW_LSB,
    TRUE,
    1
  },

  {
    QFPROM_PTE1_REGION,
    1,
    QFPROM_FEC_NONE,
    HWIO_QFPROM_RAW_JTAG_ID_ADDR,
    HWIO_QFPROM_CORR_JTAG_ID_ADDR,
    HWIO_QFPROM_CORR_RD_WR_PERM_LSB_PTE_BMSK,
    HWIO_QFPROM_CORR_RD_WR_PERM_MSB_PTE_BMSK,
    QFPROM_ROW_LSB,
    TRUE,
    1
  },

  {
    QFPROM_SERIAL_NUM_REGION,
    1,
    QFPROM_FEC_NONE,
    HWIO_QFPROM_RAW_SERIAL_NUM_ADDR,
    HWIO_QFPROM_CORR_SERIAL_NUM_ADDR,
    HWIO_QFPROM_CORR_RD_WR_PERM_LSB_PTE_BMSK,
    HWIO_QFPROM_CORR_RD_WR_PERM_LSB_PTE_BMSK,
    QFPROM_ROW_LSB,
    TRUE,
    1
  },

  {
    QFPROM_PTE2_REGION,
    1,
    QFPROM_FEC_NONE,
    HWIO_QFPROM_RAW_SERIAL_NUM_ADDR,
    HWIO_QFPROM_CORR_SERIAL_NUM_ADDR,
    HWIO_QFPROM_CORR_RD_WR_PERM_LSB_PTE_BMSK,
    HWIO_QFPROM_CORR_RD_WR_PERM_MSB_PTE_BMSK,
    QFPROM_ROW_LSB,
    TRUE,
    1
  },

  {
    QFPROM_READ_WRITE_PERMISSION_REGION,
    1,
    QFPROM_FEC_NONE,
    HWIO_QFPROM_RAW_RD_WR_PERM_LSB_ADDR,
    HWIO_QFPROM_CORR_RD_WR_PERM_LSB_ADDR,
    HWIO_QFPROM_CORR_RD_WR_PERM_LSB_RD_WR_PERM_BMSK,
    HWIO_QFPROM_CORR_RD_WR_PERM_MSB_RD_WR_PERM_BMSK,
    QFPROM_ROW_LSB,
    TRUE,
    2
  },

  {
    QFPROM_ANTI_ROLLBACK_1_REGION,
    1,
    QFPROM_FEC_NONE,
    HWIO_QFPROM_RAW_ANTI_ROLLBACK_1_LSB_ADDR,
    HWIO_QFPROM_CORR_ANTI_ROLLBACK_1_LSB_ADDR,
    HWIO_QFPROM_CORR_RD_WR_PERM_LSB_ANTI_ROLLBACK_1_BMSK,
    HWIO_QFPROM_CORR_RD_WR_PERM_MSB_ANTI_ROLLBACK_1_BMSK,
    QFPROM_ROW_LSB,
    TRUE,
    3
  },  

  {
    QFPROM_ANTI_ROLLBACK_2_REGION,
    1,
    QFPROM_FEC_NONE,
    HWIO_QFPROM_RAW_ANTI_ROLLBACK_2_LSB_ADDR,
    HWIO_QFPROM_CORR_ANTI_ROLLBACK_2_LSB_ADDR,
    HWIO_QFPROM_CORR_RD_WR_PERM_LSB_ANTI_ROLLBACK_2_BMSK,
    HWIO_QFPROM_CORR_RD_WR_PERM_MSB_ANTI_ROLLBACK_2_BMSK,
    QFPROM_ROW_LSB,
    TRUE,
    4
  },  

  {
    QFPROM_ANTI_ROLLBACK_3_REGION,
    1,
    QFPROM_FEC_NONE,
    HWIO_QFPROM_RAW_ANTI_ROLLBACK_3_LSB_ADDR,
    HWIO_QFPROM_CORR_ANTI_ROLLBACK_3_LSB_ADDR,
    HWIO_QFPROM_CORR_RD_WR_PERM_LSB_ANTI_ROLLBACK_3_BMSK,
    HWIO_QFPROM_CORR_RD_WR_PERM_MSB_ANTI_ROLLBACK_3_BMSK,
    QFPROM_ROW_LSB,
    TRUE,
    5
  },  

  {
    QFPROM_OEM_CONFIG_REGION,
    2,
    QFPROM_FEC_NONE,
    HWIO_QFPROM_RAW_OEM_CONFIG_ROW0_LSB_ADDR,
    HWIO_QFPROM_CORR_OEM_CONFIG_ROW0_LSB_ADDR,
    HWIO_QFPROM_CORR_RD_WR_PERM_LSB_OEM_CONFIG_BMSK,
    HWIO_QFPROM_CORR_RD_WR_PERM_MSB_OEM_CONFIG_BMSK,
    QFPROM_ROW_LSB,
    TRUE,
    6
  },
  
  {
    QFPROM_FEATURE_CONFIG_REGION,
    3,
    QFPROM_FEC_NONE,
    HWIO_QFPROM_RAW_FEAT_CONFIG_ROW0_LSB_ADDR,
    HWIO_QFPROM_CORR_FEAT_CONFIG_ROW0_LSB_ADDR,
    HWIO_QFPROM_CORR_RD_WR_PERM_LSB_FEAT_CONFIG_BMSK,
    HWIO_QFPROM_CORR_RD_WR_PERM_MSB_FEAT_CONFIG_BMSK ,
    QFPROM_ROW_LSB,
    TRUE,
    7
  },
  {
    QFPROM_CM_FEATURE_CONFIG_REGION,
    3,
    QFPROM_FEC_NONE,
    HWIO_QFPROM_RAW_CM_FEAT_CONFIG_ROW0_LSB_ADDR,
    HWIO_QFPROM_CORR_CM_FEAT_CONFIG_ROW0_LSB_ADDR,
    HWIO_QFPROM_CORR_RD_WR_PERM_LSB_CM_FEAT_CONFIG_BMSK,
    HWIO_QFPROM_CORR_RD_WR_PERM_MSB_CM_FEAT_CONFIG_BMSK ,
    QFPROM_ROW_LSB,
    TRUE,
    8
  },
  
  {
    QFPROM_PRI_KEY_DERIVATION_KEY_REGION,
    4,
    QFPROM_FEC_NONE,
    HWIO_QFPROM_RAW_PRI_KEY_DERIVATION_KEY_ROWn_LSB_ADDR(0) ,
    HWIO_QFPROM_CORR_PRI_KEY_DERIVATION_KEY_ROWn_LSB_ADDR(0) ,
    HWIO_QFPROM_CORR_RD_WR_PERM_LSB_PRI_KEY_DERIVATION_KEY_BMSK,
    HWIO_QFPROM_CORR_RD_WR_PERM_MSB_PRI_KEY_DERIVATION_KEY_BMSK,
    QFPROM_ROW_LSB,
    TRUE,
    9
  },

  {
    QFPROM_SEC_KEY_DERIVATION_KEY_REGION,
    4,
    QFPROM_FEC_NONE,
    HWIO_QFPROM_RAW_SEC_KEY_DERIVATION_KEY_ROWn_LSB_ADDR(0) ,
    HWIO_QFPROM_CORR_SEC_KEY_DERIVATION_KEY_ROWn_LSB_ADDR(0) ,
    HWIO_QFPROM_CORR_RD_WR_PERM_LSB_SEC_KEY_DERIVATION_KEY_BMSK,
    HWIO_QFPROM_CORR_RD_WR_PERM_MSB_SEC_KEY_DERIVATION_KEY_BMSK,
    QFPROM_ROW_LSB,
    TRUE,
    10
  },    

  {
    QFPROM_OEM_SEC_BOOT_REGION,
    1,
    QFPROM_FEC_63_56,
    HWIO_QFPROM_RAW_OEM_SEC_BOOT_ROW0_LSB_ADDR,
    HWIO_QFPROM_CORR_OEM_SEC_BOOT_ROW0_LSB_ADDR,
    HWIO_QFPROM_CORR_RD_WR_PERM_LSB_OEM_SEC_BOOT_BMSK,
    HWIO_QFPROM_CORR_RD_WR_PERM_MSB_OEM_SEC_BOOT_BMSK,
    QFPROM_ROW_LSB,
    TRUE,
    11
  },

  {
    QFPROM_CALIB12_BOOT_REGION,
    1,
    QFPROM_FEC_63_56,
    HWIO_QFPROM_RAW_CALIB2_ROW0_LSB_ADDR,
    HWIO_QFPROM_CORR_CALIB2_ROW0_LSB_ADDR,
    HWIO_QFPROM_CORR_RD_WR_PERM_LSB_CALIB2_BMSK,
    HWIO_QFPROM_CORR_RD_WR_PERM_MSB_CALIB2_BMSK,
    QFPROM_ROW_LSB,
    TRUE,
    12
  },

  {
    QFPROM_PK_HASH_REGION0,
    1,
    QFPROM_FEC_63_56,
    HWIO_QFPROM_RAW_PK_HASH_ROWn_LSB_ADDR(0) ,
    HWIO_QFPROM_CORR_PK_HASH_ROWn_LSB_ADDR(0) ,
    HWIO_QFPROM_CORR_RD_WR_PERM_LSB_PK_HASH_BMSK,
    HWIO_QFPROM_CORR_RD_WR_PERM_MSB_PK_HASH_BMSK,
    QFPROM_ROW_LSB,
    TRUE,
    13
  },

  {
    QFPROM_PK_HASH_REGION1,
    1,
    QFPROM_FEC_63_56,
    HWIO_QFPROM_RAW_PK_HASH_ROWn_LSB_ADDR(1) ,
    HWIO_QFPROM_CORR_PK_HASH_ROWn_LSB_ADDR(1) ,
    HWIO_QFPROM_CORR_RD_WR_PERM_LSB_PK_HASH_BMSK,
    HWIO_QFPROM_CORR_RD_WR_PERM_MSB_PK_HASH_BMSK,
    QFPROM_ROW_LSB,
    TRUE,
    13
  },

  {
    QFPROM_PK_HASH_REGION2,
    1,
    QFPROM_FEC_63_56,
    HWIO_QFPROM_RAW_PK_HASH_ROWn_LSB_ADDR(2) ,
    HWIO_QFPROM_CORR_PK_HASH_ROWn_LSB_ADDR(2) ,
    HWIO_QFPROM_CORR_RD_WR_PERM_LSB_PK_HASH_BMSK,
    HWIO_QFPROM_CORR_RD_WR_PERM_MSB_PK_HASH_BMSK,
    QFPROM_ROW_LSB,
    TRUE,
    13
  },

  {
    QFPROM_PK_HASH_REGION3,
    1,
    QFPROM_FEC_63_56,
    HWIO_QFPROM_RAW_PK_HASH_ROWn_LSB_ADDR(3) ,
    HWIO_QFPROM_CORR_PK_HASH_ROWn_LSB_ADDR(3) ,
    HWIO_QFPROM_CORR_RD_WR_PERM_LSB_PK_HASH_BMSK,
    HWIO_QFPROM_CORR_RD_WR_PERM_MSB_PK_HASH_BMSK,
    QFPROM_ROW_LSB,
    TRUE,
    13
  },

  {
    QFPROM_PK_HASH_REGION4,
    1,
    QFPROM_FEC_63_56,
    HWIO_QFPROM_RAW_PK_HASH_ROWn_LSB_ADDR(4) ,
    HWIO_QFPROM_CORR_PK_HASH_ROWn_LSB_ADDR(4) ,
    HWIO_QFPROM_CORR_RD_WR_PERM_LSB_PK_HASH_BMSK,
    HWIO_QFPROM_CORR_RD_WR_PERM_MSB_PK_HASH_BMSK,
    QFPROM_ROW_LSB,
    TRUE,
    13
  },

  {
    QFPROM_CALIB_REGION,
    10,
    QFPROM_FEC_63_56,
    HWIO_QFPROM_RAW_CALIB_ROW0_LSB_ADDR,
    HWIO_QFPROM_CORR_CALIB_ROW0_LSB_ADDR,
    HWIO_QFPROM_CORR_RD_WR_PERM_LSB_CALIB_BMSK,
    HWIO_QFPROM_CORR_RD_WR_PERM_MSB_CALIB_BMSK,
    QFPROM_ROW_LSB,
    TRUE,
    14
  },

  {
    QFPROM_MEM_CONFIG_REGION,
    11,
    QFPROM_FEC_63_56,
    HWIO_QFPROM_RAW_MEM_CONFIG_ROW0_LSB_ADDR,
    HWIO_QFPROM_CORR_MEM_CONFIG_ROW0_LSB_ADDR,
    HWIO_QFPROM_CORR_RD_WR_PERM_LSB_MEM_CONFIG_BMSK,
    HWIO_QFPROM_CORR_RD_WR_PERM_MSB_MEM_CONFIG_BMSK,
    QFPROM_ROW_LSB,
    TRUE,
    15
  },
  {
    QFPROM_FEC_EN_REGION,
    1,
    QFPROM_FEC_NONE,
    HWIO_QFPROM_RAW_FEC_EN_LSB_ADDR,
    HWIO_QFPROM_CORR_FEC_EN_LSB_ADDR,
    HWIO_QFPROM_CORR_RD_WR_PERM_LSB_FEC_EN_BMSK,
    HWIO_QFPROM_CORR_RD_WR_PERM_MSB_FEC_EN_BMSK,
    QFPROM_ROW_LSB,
    TRUE,
    17
  }, 

  {
    QFPROM_SPARE_REG18_REGION,
    1,
    QFPROM_FEC_63_56,
    HWIO_QFPROM_RAW_SPARE_REG18_LSB_ADDR,
    HWIO_QFPROM_CORR_SPARE_REG18_LSB_ADDR,
    HWIO_QFPROM_CORR_RD_WR_PERM_LSB_SPARE18_BMSK,
    HWIO_QFPROM_CORR_RD_WR_PERM_MSB_SPARE18_BMSK,
    QFPROM_ROW_LSB,
    TRUE,
    18
  },

  {
    QFPROM_SPARE_REG19_REGION,
    1,
    QFPROM_FEC_63_56,
    HWIO_QFPROM_RAW_SPARE_REG19_LSB_ADDR,
    HWIO_QFPROM_CORR_SPARE_REG19_LSB_ADDR,
    HWIO_QFPROM_CORR_RD_WR_PERM_LSB_SPARE19_BMSK,
    HWIO_QFPROM_CORR_RD_WR_PERM_MSB_SPARE19_BMSK,
    QFPROM_ROW_LSB,
    TRUE,
    19
  },

  {
    QFPROM_SPARE_REG20_REGION,
    1,
    QFPROM_FEC_63_56,
    HWIO_QFPROM_RAW_SPARE_REG20_LSB_ADDR,
    HWIO_QFPROM_CORR_SPARE_REG20_LSB_ADDR,
    HWIO_QFPROM_CORR_RD_WR_PERM_LSB_SPARE20_BMSK,
    HWIO_QFPROM_CORR_RD_WR_PERM_MSB_SPARE20_BMSK,
    QFPROM_ROW_LSB,
    TRUE,
    20
  },

  {
    QFPROM_SPARE_REG21_REGION,
    1,
    QFPROM_FEC_63_56,
    HWIO_QFPROM_RAW_SPARE_REG21_LSB_ADDR,
    HWIO_QFPROM_CORR_SPARE_REG21_LSB_ADDR,
    HWIO_QFPROM_CORR_RD_WR_PERM_LSB_SPARE21_BMSK,
    HWIO_QFPROM_CORR_RD_WR_PERM_MSB_SPARE21_BMSK,
    QFPROM_ROW_LSB,
    TRUE,
    21
  },
  
  {
    QFPROM_SPARE_REG22_REGION,
    1,
    QFPROM_FEC_63_56,
    HWIO_QFPROM_RAW_SPARE_REG22_LSB_ADDR,
    HWIO_QFPROM_CORR_SPARE_REG22_LSB_ADDR,
    HWIO_QFPROM_CORR_RD_WR_PERM_LSB_SPARE22_BMSK,
    HWIO_QFPROM_CORR_RD_WR_PERM_MSB_SPARE22_BMSK,
    QFPROM_ROW_LSB,
    TRUE,
    22
  },
  {
    QFPROM_SPARE_REG23_REGION,
    1,
    QFPROM_FEC_63_56,
    HWIO_QFPROM_RAW_SPARE_REG23_LSB_ADDR,
    HWIO_QFPROM_CORR_SPARE_REG23_LSB_ADDR,
    HWIO_QFPROM_CORR_RD_WR_PERM_LSB_SPARE23_BMSK,
    HWIO_QFPROM_CORR_RD_WR_PERM_MSB_SPARE23_BMSK,
    QFPROM_ROW_LSB,
    TRUE,
    23
  },
  {
    QFPROM_SPARE_REG24_REGION,
    1,
    QFPROM_FEC_63_56,
    HWIO_QFPROM_RAW_SPARE_REG24_LSB_ADDR,
    HWIO_QFPROM_CORR_SPARE_REG24_LSB_ADDR,
    HWIO_QFPROM_CORR_RD_WR_PERM_LSB_SPARE24_BMSK,
    HWIO_QFPROM_CORR_RD_WR_PERM_MSB_SPARE24_BMSK,
    QFPROM_ROW_LSB,
    TRUE,
    24
  },
  {
    QFPROM_SPARE_REG25_REGION,
    1,
    QFPROM_FEC_63_56,
    HWIO_QFPROM_RAW_SPARE_REG25_LSB_ADDR,
    HWIO_QFPROM_CORR_SPARE_REG25_LSB_ADDR,
    HWIO_QFPROM_CORR_RD_WR_PERM_LSB_SPARE25_BMSK,
    HWIO_QFPROM_CORR_RD_WR_PERM_MSB_SPARE25_BMSK,
    QFPROM_ROW_LSB,
    TRUE,
    25
  },
  {
    QFPROM_SPARE_REG26_REGION,
    1,
    QFPROM_FEC_63_56,
    HWIO_QFPROM_RAW_SPARE_REG26_LSB_ADDR,
    HWIO_QFPROM_CORR_SPARE_REG26_LSB_ADDR,
    HWIO_QFPROM_CORR_RD_WR_PERM_LSB_SPARE26_BMSK,
    HWIO_QFPROM_CORR_RD_WR_PERM_MSB_SPARE26_BMSK,
    QFPROM_ROW_LSB,
    TRUE,
    26
  },

  /* Add above this entry */
  {
    QFPROM_LAST_REGION_DUMMY,
    0,
    QFPROM_FEC_NONE,
    0,
    0,
    0,
    0,
    QFPROM_ROW_LSB
  }
};
