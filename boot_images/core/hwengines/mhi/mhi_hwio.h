/**
  @file mhi_hwio.h
  @brief This file contains the HWIO definitions for MMIO register space
s  
    

*/
/*
===============================================================================

                             Edit History

 $Header: 

when       who     what, where, why
--------   ---     ------------------------------------------------------------
05/30/13   nk      UPdate to FLAT file v15
03/08/13   nk      Updated to latest MHI flat file in PHASE3 
01/15/13   nk      Created
===============================================================================
                   Copyright (c) 2013-2014 QUALCOMM Technologies Incorporated.
                          All Rights Reserved.
                        Qualcomm Confidential and Proprietary.
===============================================================================
*/

#define MHI_MMIO_CTRL_INT_STATUS_Q6                                               (0x0000)
#define MHI_MMIO_CTRL_INT_STATUS_Q6_STATUS_MASK                                   0xffffffff
#define MHI_MMIO_CTRL_INT_STATUS_Q6_STATUS_SHIFT                                  0x0


#define MHI_MMIO_CTRL_INT_STATUS_A7                                               (0x0004)
#define MHI_MMIO_CTRL_INT_STATUS_A7_STATUS_MASK                                   0xffffffff
#define MHI_MMIO_CTRL_INT_STATUS_A7_STATUS_SHIFT                                  0x0


#define MHI_DB_INT_STATUS_Q6_n(n)                                                 ( 0x0008 + 0x4 * (n) )
#define MHI_DB_INT_STATUS_Q6_n_STATUS_MASK                                        0xffffffff
#define MHI_DB_INT_STATUS_Q6_n_STATUS_SHIFT                                       0x0


#define MHI_DB_INT_STATUS_A7_n(n)                                                 ( 0x0028 + 0x4 * (n) )
#define MHI_DB_INT_STATUS_A7_n_STATUS_MASK                                        0xffffffff
#define MHI_DB_INT_STATUS_A7_n_STATUS_SHIFT                                       0x0


#define MHI_MMIO_CTRL_INT_CLEAR_Q6                                                (0x0048)
#define MHI_MMIO_CTRL_INT_CLEAR_Q6_CLEAR_MASK                                     0xffffffff
#define MHI_MMIO_CTRL_INT_CLEAR_Q6_CLEAR_SHIFT                                    0x0


#define MHI_MMIO_CTRL_INT_CLEAR_A7                                                (0x004C)
#define MHI_MMIO_CTRL_INT_CLEAR_A7_CLEAR_MASK                                     0xffffffff
#define MHI_MMIO_CTRL_INT_CLEAR_A7_CLEAR_SHIFT                                    0x0


#define MHI_DB_INT_CLEAR_Q6_n(n)                                                  ( 0x0050 + 0x4 * (n) )
#define MHI_DB_INT_CLEAR_Q6_n_CLEAR_MASK                                          0xffffffff
#define MHI_DB_INT_CLEAR_Q6_n_CLEAR_SHIFT                                         0x0


#define MHI_DB_INT_CLEAR_A7_n(n)                                                  ( 0x0070 + 0x4 * (n) )
#define MHI_DB_INT_CLEAR_A7_n_CLEAR_MASK                                          0xffffffff
#define MHI_DB_INT_CLEAR_A7_n_CLEAR_SHIFT                                         0x0


#define MHI_MMIO_CTRL_INT_MASK_Q6                                                 (0x0090)
#define MHI_MMIO_CTRL_INT_MASK_Q6_MASK_MASK                                       0xffffffff
#define MHI_MMIO_CTRL_INT_MASK_Q6_MASK_SHIFT                                      0x0


#define MHI_MMIO_CTRL_INT_MASK_A7                                                 (0x0094)
#define MHI_MMIO_CTRL_INT_MASK_A7_MASK_MASK                                       0xffffffff
#define MHI_MMIO_CTRL_INT_MASK_A7_MASK_SHIFT                                      0x0


#define MHI_CHDB_INT_MASK_Q6_n(n)                                                 ( 0x0098 + 0x4 * (n) )
#define MHI_CHDB_INT_MASK_Q6_n_MASK_MASK                                          0xffffffff
#define MHI_CHDB_INT_MASK_Q6_n_MASK_SHIFT                                         0x0


#define MHI_ERDB_INT_MASK_Q6_n(n)                                                 ( 0x00A8 + 0x4 * (n) )
#define MHI_ERDB_INT_MASK_Q6_n_MASK_MASK                                          0xffffffff
#define MHI_ERDB_INT_MASK_Q6_n_MASK_SHIFT                                         0x0


#define MHI_CHDB_INT_MASK_A7_n(n)                                                 ( 0x00B8 + 0x4 * (n) )
#define MHI_CHDB_INT_MASK_A7_n_MASK_MASK                                          0xffffffff
#define MHI_CHDB_INT_MASK_A7_n_MASK_SHIFT                                         0x0


#define MHI_ERDB_INT_MASK_A7_n(n)                                                 ( 0x00C8 + 0x4 * (n) )
#define MHI_ERDB_INT_MASK_A7_n_MASK_MASK                                          0xffffffff
#define MHI_ERDB_INT_MASK_A7_n_MASK_SHIFT                                         0x0


#define MHIREGLEN                                                                 (0x0100)
#define MHIREGLEN_MHIREGLEN_MASK                                                  0xffffffff
#define MHIREGLEN_MHIREGLEN_SHIFT                                                 0x0


#define MHIVER                                                                    (0x0108)
#define MHIVER_MHIVER_MASK                                                        0xffffffff
#define MHIVER_MHIVER_SHIFT                                                       0x0


#define MHICFG                                                                    (0x0110)
#define MHICFG_RESERVED_BITS31_24_MASK                                            0xff000000
#define MHICFG_RESERVED_BITS31_24_SHIFT                                           0x18
#define MHICFG_NER_MASK                                                           0xff0000
#define MHICFG_NER_SHIFT                                                          0x10
#define MHICFG_RESERVED_BITS15_8_MASK                                             0xff00
#define MHICFG_RESERVED_BITS15_8_SHIFT                                            0x8
#define MHICFG_NCH_MASK                                                           0xff
#define MHICFG_NCH_SHIFT                                                          0x0


#define CHDBOFF                                                                   (0x0118)
#define CHDBOFF_CHDBOFF_MASK                                                      0xffffffff
#define CHDBOFF_CHDBOFF_SHIFT                                                     0x0


#define ERDBOFF                                                                   (0x0120)
#define ERDBOFF_ERDBOFF_MASK                                                      0xffffffff
#define ERDBOFF_ERDBOFF_SHIFT                                                     0x0


#define BHIOFF                                                                    (0x0128)
#define BHIOFF_BHIOFF_MASK                                                        0xffffffff
#define BHIOFF_BHIOFF_SHIFT                                                       0x0


#define DEBUGOFF                                                                  (0x0130)
#define DEBUGOFF_DEBUGOFF_MASK                                                    0xffffffff
#define DEBUGOFF_DEBUGOFF_SHIFT                                                   0x0


#define MHICTRL                                                                   (0x0138)
#define MHICTRL_MHISTATE_MASK                                                     0x0000FF00
#define MHICTRL_MHISTATE_SHIFT                                                    0x8
#define MHICTRL_RESET_MASK                                                        0x2
#define MHICTRL_RESET_SHIFT                                                       0x1


#define MHISTATUS                                                                 (0x0148)
#define MHISTATUS_MHISTATE_MASK                                                   0x0000ff00
#define MHISTATUS_MHISTATE_SHIFT                                                  0x8
#define MHISTATUS_SYSERR_MASK                                                     0x4
#define MHISTATUS_SYSERR_SHIFT                                                    0x2
#define MHISTATUS_READY_MASK                                                      0x1
#define MHISTATUS_READY_SHIFT                                                     0x0


#define CCABAP_LOWER                                                              (0x0158)
#define CCABAP_LOWER_CCABAP_LOWER_MASK                                            0xffffffff
#define CCABAP_LOWER_CCABAP_LOWER_SHIFT                                           0x0


#define CCABAP_HIGHER                                                             (0x015C)
#define CCABAP_HIGHER_CCABAP_HIGHER_MASK                                          0xffffffff
#define CCABAP_HIGHER_CCABAP_HIGHER_SHIFT                                         0x0


#define ECABAP_LOWER                                                              (0x0160)
#define ECABAP_LOWER_ECABAP_LOWER_MASK                                            0xffffffff
#define ECABAP_LOWER_ECABAP_LOWER_SHIFT                                           0x0


#define ECABAP_HIGHER                                                             (0x0164)
#define ECABAP_HIGHER_ECABAP_HIGHER_MASK                                          0xffffffff
#define ECABAP_HIGHER_ECABAP_HIGHER_SHIFT                                         0x0


#define CRCBAP_LOWER                                                              (0x0168)
#define CRCBAP_LOWER_CRCBAP_LOWER_MASK                                            0xffffffff
#define CRCBAP_LOWER_CRCBAP_LOWER_SHIFT                                           0x0


#define CRCBAP_HIGHER                                                             (0x016C)
#define CRCBAP_HIGHER_CRCBAP_HIGHER_MASK                                          0xffffffff
#define CRCBAP_HIGHER_CRCBAP_HIGHER_SHIFT                                         0x0


#define CRDB_LOWER                                                                (0x0170)
#define CRDB_LOWER_CRDB_LOWER_MASK                                                0xffffffff
#define CRDB_LOWER_CRDB_LOWER_SHIFT                                               0x0


#define CRDB_HIGHER                                                               (0x0174)
#define CRDB_HIGHER_CRDB_HIGHER_MASK                                              0xffffffff
#define CRDB_HIGHER_CRDB_HIGHER_SHIFT                                             0x0


#define MHICTRLBASE_LOWER                                                         (0x0180)
#define MHICTRLBASE_LOWER_MHICTRLBASE_LOWER_MASK                                  0xffffffff
#define MHICTRLBASE_LOWER_MHICTRLBASE_LOWER_SHIFT                                 0x0


#define MHICTRLBASE_HIGHER                                                        (0x0184)
#define MHICTRLBASE_HIGHER_MHICTRLBASE_HIGHER_MASK                                0xffffffff
#define MHICTRLBASE_HIGHER_MHICTRLBASE_HIGHER_SHIFT                               0x0


#define MHICTRLLIMIT_LOWER                                                        (0x0188)
#define MHICTRLLIMIT_LOWER_MHICTRLLIMIT_LOWER_MASK                                0xffffffff
#define MHICTRLLIMIT_LOWER_MHICTRLLIMIT_LOWER_SHIFT                               0x0


#define MHICTRLLIMIT_HIGHER                                                       (0x018C)
#define MHICTRLLIMIT_HIGHER_MHICTRLLIMIT_HIGHER_MASK                              0xffffffff
#define MHICTRLLIMIT_HIGHER_MHICTRLLIMIT_HIGHER_SHIFT                             0x0


#define MHIDATABASE_LOWER                                                         (0x0198)
#define MHIDATABASE_LOWER_MHIDATABASE_LOWER_MASK                                  0xffffffff
#define MHIDATABASE_LOWER_MHIDATABASE_LOWER_SHIFT                                 0x0


#define MHIDATABASE_HIGHER                                                        (0x019C)
#define MHIDATABASE_HIGHER_MHIDATABASE_HIGHER_MASK                                0xffffffff
#define MHIDATABASE_HIGHER_MHIDATABASE_HIGHER_SHIFT                               0x0


#define MHIDATALIMIT_LOWER                                                        (0x01A0)
#define MHIDATALIMIT_LOWER_MHIDATALIMIT_LOWER_MASK                                0xffffffff
#define MHIDATALIMIT_LOWER_MHIDATALIMIT_LOWER_SHIFT                               0x0


#define MHIDATALIMIT_HIGHER                                                       (0x01A4)
#define MHIDATALIMIT_HIGHER_MHIDATALIMIT_HIGHER_MASK                              0xffffffff
#define MHIDATALIMIT_HIGHER_MHIDATALIMIT_HIGHER_SHIFT                             0x0

#define CHDB_LOWER_n(n)                                                           ( 0x0400 + 0x8 * (n) )
#define CHDB_LOWER_n_CHDB_LOWER_MASK                                              0xffffffff
#define CHDB_LOWER_n_CHDB_LOWER_SHIFT                                             0x0


#define CHDB_HIGHER_n(n)                                                          ( 0x0404 + 0x8 * (n) )
#define CHDB_HIGHER_n_CHDB_HIGHER_MASK                                            0xffffffff
#define CHDB_HIGHER_n_CHDB_HIGHER_SHIFT                                           0x0


#define ERDB_LOWER_n(n)                                                           ( 0x0800 + 0x8 * (n) )
#define ERDB_LOWER_n_ERDB_LOWER_MASK                                              0xffffffff
#define ERDB_LOWER_n_ERDB_LOWER_SHIFT                                             0x0


#define ERDB_HIGHER_n(n)                                                          ( 0x0804 + 0x8 * (n) )
#define ERDB_HIGHER_n_ERDB_HIGHER_MASK                                            0xffffffff
#define ERDB_HIGHER_n_ERDB_HIGHER_SHIFT                                           0x0

/* BHI EXEC ENV register */
#define BHI_EXECENV                                                               ( 0x228 )
#define BHI_EXECENV_MASK                                                          0xFFFFFFFF 
#define BHI_EXECENV_SHIFT                                                         0 

