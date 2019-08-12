#ifndef __HALVMIDMTHWIOTARGET_H__
#define __HALVMIDMTHWIOTARGET_H__
/*
===========================================================================
*/
/**
  @file HALvmidmtHWIOTarget.h
  @brief Auto-generated HWIO interface include file.

  Reference chip release:
    MDM9x07 (Lykan) [lykan_v1.0_p3q1r133]
 
  This file contains HWIO register definitions for the following modules:
    BLSP1_BLSP_BAM_VMIDMT
    CRYPTO0_CRYPTO_BAM_VMIDMT_BAM
    DEHR_VMIDMT
    EMAC_0_EMAC_VMIDMT
    QPIC_QPIC_VMIDMT
    RPM_VMIDMT

  'Include' filters applied: .*VMIDMT.*[QPIC_QPIC_VMIDMT] .*VMIDMT.*[DEHR_VMIDMT] .*VMIDMT.*[CRYPTO0_CRYPTO_BAM_VMIDMT_BAM] .*VMIDMT.*[BLSP1_BLSP_BAM_VMIDMT] .*VMIDMT.*[RPM_VMIDMT] .*VMIDMT.*[EMAC_0_EMAC_VMIDMT] 
  'Exclude' filters applied: RESERVED DUMMY 
*/
/*
  ===========================================================================

  Copyright (c) 2015 Qualcomm Technologies Incorporated.
  All Rights Reserved.
  Qualcomm Confidential and Proprietary

  Export of this technology or software is regulated by the U.S. Government.
  Diversion contrary to U.S. law prohibited.

  All ideas, data and information contained in or disclosed by
  this document are confidential and proprietary information of
  Qualcomm Technologies Incorporated and all rights therein are expressly reserved.
  By accepting this material the recipient agrees that this material
  and the information contained therein are held in confidence and in
  trust and will not be used, copied, reproduced in whole or in part,
  nor its contents revealed in any manner to others without the express
  written permission of Qualcomm Technologies Incorporated.

  ===========================================================================

  $Header: //components/rel/tz.bf/2.5.c10/trustzone_images/core/kernel/vmidmt/hal/config/9x07/HALvmidmtHWIOTarget.h#1 $
  $DateTime: 2016/06/17 14:31:11 $
  $Author: pwbldsvc $

  ===========================================================================
*/

/*----------------------------------------------------------------------------
 * MODULE: BLSP1_BLSP_BAM_VMIDMT
 *--------------------------------------------------------------------------*/

#define BLSP1_BLSP_BAM_VMIDMT_REG_BASE                                      (BLSP1_BLSP_BASE      + 0x00000000)

#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR0_ADDR                                (BLSP1_BLSP_BAM_VMIDMT_REG_BASE      + 0x00000000)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR0_RMSK                                0x3ff707f5
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR0_IN          \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR0_ADDR, HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR0_RMSK)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR0_INM(m)      \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR0_ADDR, m)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR0_OUT(v)      \
        out_dword(HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR0_ADDR,v)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR0_ADDR,m,v,HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR0_IN)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR0_NSCFG_BMSK                          0x30000000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR0_NSCFG_SHFT                                0x1c
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR0_WACFG_BMSK                           0xc000000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR0_WACFG_SHFT                                0x1a
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR0_RACFG_BMSK                           0x3000000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR0_RACFG_SHFT                                0x18
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR0_SHCFG_BMSK                            0xc00000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR0_SHCFG_SHFT                                0x16
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR0_SMCFCFG_BMSK                          0x200000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR0_SMCFCFG_SHFT                              0x15
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR0_MTCFG_BMSK                            0x100000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR0_MTCFG_SHFT                                0x14
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR0_MEMATTR_BMSK                           0x70000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR0_MEMATTR_SHFT                              0x10
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR0_USFCFG_BMSK                              0x400
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR0_USFCFG_SHFT                                0xa
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR0_GSE_BMSK                                 0x200
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR0_GSE_SHFT                                   0x9
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR0_STALLD_BMSK                              0x100
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR0_STALLD_SHFT                                0x8
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR0_TRANSIENTCFG_BMSK                         0xc0
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR0_TRANSIENTCFG_SHFT                          0x6
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR0_GCFGFIE_BMSK                              0x20
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR0_GCFGFIE_SHFT                               0x5
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR0_GCFGERE_BMSK                              0x10
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR0_GCFGERE_SHFT                               0x4
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR0_GFIE_BMSK                                  0x4
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR0_GFIE_SHFT                                  0x2
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR0_CLIENTPD_BMSK                              0x1
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR0_CLIENTPD_SHFT                              0x0

#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR1_ADDR                                (BLSP1_BLSP_BAM_VMIDMT_REG_BASE      + 0x00000004)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR1_RMSK                                 0x1001f00
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR1_IN          \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR1_ADDR, HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR1_RMSK)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR1_INM(m)      \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR1_ADDR, m)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR1_OUT(v)      \
        out_dword(HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR1_ADDR,v)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR1_OUTM(m,v) \
        out_dword_masked_ns(HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR1_ADDR,m,v,HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR1_IN)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR1_GASRAE_BMSK                          0x1000000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR1_GASRAE_SHFT                               0x18
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR1_NSNUMSMRGO_BMSK                         0x1f00
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR1_NSNUMSMRGO_SHFT                            0x8

#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR2_ADDR                                (BLSP1_BLSP_BAM_VMIDMT_REG_BASE      + 0x00000008)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR2_RMSK                                      0x1f
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR2_IN          \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR2_ADDR, HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR2_RMSK)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR2_INM(m)      \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR2_ADDR, m)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR2_OUT(v)      \
        out_dword(HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR2_ADDR,v)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR2_OUTM(m,v) \
        out_dword_masked_ns(HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR2_ADDR,m,v,HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR2_IN)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR2_BPVMID_BMSK                               0x1f
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SCR2_BPVMID_SHFT                                0x0

#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SACR_ADDR                                (BLSP1_BLSP_BAM_VMIDMT_REG_BASE      + 0x00000010)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SACR_RMSK                                0x70000013
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SACR_IN          \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_SACR_ADDR, HWIO_BLSP1_BLSP_BAM_VMIDMT_SACR_RMSK)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SACR_INM(m)      \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_SACR_ADDR, m)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SACR_OUT(v)      \
        out_dword(HWIO_BLSP1_BLSP_BAM_VMIDMT_SACR_ADDR,v)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SACR_OUTM(m,v) \
        out_dword_masked_ns(HWIO_BLSP1_BLSP_BAM_VMIDMT_SACR_ADDR,m,v,HWIO_BLSP1_BLSP_BAM_VMIDMT_SACR_IN)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SACR_BPRCNSH_BMSK                        0x40000000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SACR_BPRCNSH_SHFT                              0x1e
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SACR_BPRCISH_BMSK                        0x20000000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SACR_BPRCISH_SHFT                              0x1d
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SACR_BPRCOSH_BMSK                        0x10000000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SACR_BPRCOSH_SHFT                              0x1c
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SACR_BPREQPRIORITYCFG_BMSK                     0x10
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SACR_BPREQPRIORITYCFG_SHFT                      0x4
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SACR_BPREQPRIORITY_BMSK                         0x3
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SACR_BPREQPRIORITY_SHFT                         0x0

#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR0_ADDR                               (BLSP1_BLSP_BAM_VMIDMT_REG_BASE      + 0x00000020)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR0_RMSK                               0x88001eff
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR0_IN          \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR0_ADDR, HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR0_RMSK)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR0_INM(m)      \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR0_ADDR, m)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR0_SES_BMSK                           0x80000000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR0_SES_SHFT                                 0x1f
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR0_SMS_BMSK                            0x8000000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR0_SMS_SHFT                                 0x1b
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR0_NUMSIDB_BMSK                           0x1e00
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR0_NUMSIDB_SHFT                              0x9
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR0_NUMSMRG_BMSK                             0xff
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR0_NUMSMRG_SHFT                              0x0

#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR1_ADDR                               (BLSP1_BLSP_BAM_VMIDMT_REG_BASE      + 0x00000024)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR1_RMSK                                   0x9f00
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR1_IN          \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR1_ADDR, HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR1_RMSK)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR1_INM(m)      \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR1_ADDR, m)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR1_SMCD_BMSK                              0x8000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR1_SMCD_SHFT                                 0xf
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR1_SSDTP_BMSK                             0x1000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR1_SSDTP_SHFT                                0xc
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR1_NUMSSDNDX_BMSK                          0xf00
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR1_NUMSSDNDX_SHFT                            0x8

#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR2_ADDR                               (BLSP1_BLSP_BAM_VMIDMT_REG_BASE      + 0x00000028)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR2_RMSK                                     0xff
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR2_IN          \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR2_ADDR, HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR2_RMSK)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR2_INM(m)      \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR2_ADDR, m)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR2_OAS_BMSK                                 0xf0
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR2_OAS_SHFT                                  0x4
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR2_IAS_BMSK                                  0xf
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR2_IAS_SHFT                                  0x0

#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR4_ADDR                               (BLSP1_BLSP_BAM_VMIDMT_REG_BASE      + 0x00000030)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR4_RMSK                               0xffffffff
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR4_IN          \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR4_ADDR, HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR4_RMSK)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR4_INM(m)      \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR4_ADDR, m)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR4_MAJOR_BMSK                         0xf0000000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR4_MAJOR_SHFT                               0x1c
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR4_MINOR_BMSK                          0xfff0000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR4_MINOR_SHFT                               0x10
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR4_STEP_BMSK                              0xffff
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR4_STEP_SHFT                                 0x0

#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR5_ADDR                               (BLSP1_BLSP_BAM_VMIDMT_REG_BASE      + 0x00000034)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR5_RMSK                                 0xff03ff
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR5_IN          \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR5_ADDR, HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR5_RMSK)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR5_INM(m)      \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR5_ADDR, m)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR5_NUMMSDRB_BMSK                        0xff0000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR5_NUMMSDRB_SHFT                            0x10
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR5_MSAE_BMSK                               0x200
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR5_MSAE_SHFT                                 0x9
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR5_QRIBE_BMSK                              0x100
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR5_QRIBE_SHFT                                0x8
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR5_NVMID_BMSK                               0xff
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR5_NVMID_SHFT                                0x0

#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR7_ADDR                               (BLSP1_BLSP_BAM_VMIDMT_REG_BASE      + 0x0000003c)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR7_RMSK                                     0xff
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR7_IN          \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR7_ADDR, HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR7_RMSK)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR7_INM(m)      \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR7_ADDR, m)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR7_MAJOR_BMSK                               0xf0
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR7_MAJOR_SHFT                                0x4
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR7_MINOR_BMSK                                0xf
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SIDR7_MINOR_SHFT                                0x0

#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFAR0_ADDR                              (BLSP1_BLSP_BAM_VMIDMT_REG_BASE      + 0x00000040)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFAR0_RMSK                              0xffffffff
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFAR0_IN          \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFAR0_ADDR, HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFAR0_RMSK)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFAR0_INM(m)      \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFAR0_ADDR, m)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFAR0_SGFEA0_BMSK                       0xffffffff
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFAR0_SGFEA0_SHFT                              0x0

#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSR_ADDR                               (BLSP1_BLSP_BAM_VMIDMT_REG_BASE      + 0x00000048)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSR_RMSK                               0xc0000026
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSR_IN          \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSR_ADDR, HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSR_RMSK)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSR_INM(m)      \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSR_ADDR, m)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSR_OUT(v)      \
        out_dword(HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSR_ADDR,v)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSR_OUTM(m,v) \
        out_dword_masked_ns(HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSR_ADDR,m,v,HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSR_IN)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSR_MULTI_CLIENT_BMSK                  0x80000000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSR_MULTI_CLIENT_SHFT                        0x1f
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSR_MULTI_CFG_BMSK                     0x40000000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSR_MULTI_CFG_SHFT                           0x1e
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSR_CAF_BMSK                                 0x20
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSR_CAF_SHFT                                  0x5
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSR_SMCF_BMSK                                 0x4
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSR_SMCF_SHFT                                 0x2
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSR_USF_BMSK                                  0x2
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSR_USF_SHFT                                  0x1

#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSRRESTORE_ADDR                        (BLSP1_BLSP_BAM_VMIDMT_REG_BASE      + 0x0000004c)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSRRESTORE_RMSK                        0xc0000026
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSRRESTORE_IN          \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSRRESTORE_ADDR, HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSRRESTORE_RMSK)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSRRESTORE_INM(m)      \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSRRESTORE_ADDR, m)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSRRESTORE_OUT(v)      \
        out_dword(HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSRRESTORE_ADDR,v)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSRRESTORE_OUTM(m,v) \
        out_dword_masked_ns(HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSRRESTORE_ADDR,m,v,HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSRRESTORE_IN)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSRRESTORE_MULTI_CLIENT_BMSK           0x80000000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSRRESTORE_MULTI_CLIENT_SHFT                 0x1f
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSRRESTORE_MULTI_CFG_BMSK              0x40000000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSRRESTORE_MULTI_CFG_SHFT                    0x1e
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSRRESTORE_CAF_BMSK                          0x20
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSRRESTORE_CAF_SHFT                           0x5
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSRRESTORE_SMCF_BMSK                          0x4
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSRRESTORE_SMCF_SHFT                          0x2
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSRRESTORE_USF_BMSK                           0x2
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSRRESTORE_USF_SHFT                           0x1

#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSYNDR0_ADDR                           (BLSP1_BLSP_BAM_VMIDMT_REG_BASE      + 0x00000050)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSYNDR0_RMSK                                0x132
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSYNDR0_IN          \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSYNDR0_ADDR, HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSYNDR0_RMSK)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSYNDR0_INM(m)      \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSYNDR0_ADDR, m)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSYNDR0_MSSSELFAUTH_BMSK                    0x100
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSYNDR0_MSSSELFAUTH_SHFT                      0x8
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSYNDR0_NSATTR_BMSK                          0x20
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSYNDR0_NSATTR_SHFT                           0x5
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSYNDR0_NSSTATE_BMSK                         0x10
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSYNDR0_NSSTATE_SHFT                          0x4
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSYNDR0_WNR_BMSK                              0x2
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSYNDR0_WNR_SHFT                              0x1

#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSYNDR1_ADDR                           (BLSP1_BLSP_BAM_VMIDMT_REG_BASE      + 0x00000054)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSYNDR1_RMSK                           0x1f1f001f
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSYNDR1_IN          \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSYNDR1_ADDR, HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSYNDR1_RMSK)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSYNDR1_INM(m)      \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSYNDR1_ADDR, m)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSYNDR1_MSDINDEX_BMSK                  0x1f000000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSYNDR1_MSDINDEX_SHFT                        0x18
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSYNDR1_SSDINDEX_BMSK                    0x1f0000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSYNDR1_SSDINDEX_SHFT                        0x10
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSYNDR1_STREAMINDEX_BMSK                     0x1f
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSYNDR1_STREAMINDEX_SHFT                      0x0

#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSYNDR2_ADDR                           (BLSP1_BLSP_BAM_VMIDMT_REG_BASE      + 0x00000058)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSYNDR2_RMSK                           0x3f1fffff
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSYNDR2_IN          \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSYNDR2_ADDR, HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSYNDR2_RMSK)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSYNDR2_INM(m)      \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSYNDR2_ADDR, m)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSYNDR2_ATID_BMSK                      0x3f000000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSYNDR2_ATID_SHFT                            0x18
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSYNDR2_AVMID_BMSK                       0x1f0000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSYNDR2_AVMID_SHFT                           0x10
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSYNDR2_ABID_BMSK                          0xe000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSYNDR2_ABID_SHFT                             0xd
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSYNDR2_APID_BMSK                          0x1f00
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSYNDR2_APID_SHFT                             0x8
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSYNDR2_AMID_BMSK                            0xff
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SGFSYNDR2_AMID_SHFT                             0x0

#define HWIO_BLSP1_BLSP_BAM_VMIDMT_VMIDMTSCR0_ADDR                          (BLSP1_BLSP_BAM_VMIDMT_REG_BASE      + 0x00000090)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_VMIDMTSCR0_RMSK                                 0x1
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_VMIDMTSCR0_IN          \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_VMIDMTSCR0_ADDR, HWIO_BLSP1_BLSP_BAM_VMIDMT_VMIDMTSCR0_RMSK)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_VMIDMTSCR0_INM(m)      \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_VMIDMTSCR0_ADDR, m)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_VMIDMTSCR0_OUT(v)      \
        out_dword(HWIO_BLSP1_BLSP_BAM_VMIDMT_VMIDMTSCR0_ADDR,v)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_VMIDMTSCR0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_BLSP1_BLSP_BAM_VMIDMT_VMIDMTSCR0_ADDR,m,v,HWIO_BLSP1_BLSP_BAM_VMIDMT_VMIDMTSCR0_IN)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_VMIDMTSCR0_CLKONOFFE_BMSK                       0x1
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_VMIDMTSCR0_CLKONOFFE_SHFT                       0x0

#define HWIO_BLSP1_BLSP_BAM_VMIDMT_CR0_ADDR                                 (BLSP1_BLSP_BAM_VMIDMT_REG_BASE      + 0x00000000)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_CR0_RMSK                                  0xff70ff5
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_CR0_IN          \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_CR0_ADDR, HWIO_BLSP1_BLSP_BAM_VMIDMT_CR0_RMSK)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_CR0_INM(m)      \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_CR0_ADDR, m)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_CR0_OUT(v)      \
        out_dword(HWIO_BLSP1_BLSP_BAM_VMIDMT_CR0_ADDR,v)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_CR0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_BLSP1_BLSP_BAM_VMIDMT_CR0_ADDR,m,v,HWIO_BLSP1_BLSP_BAM_VMIDMT_CR0_IN)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_CR0_WACFG_BMSK                            0xc000000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_CR0_WACFG_SHFT                                 0x1a
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_CR0_RACFG_BMSK                            0x3000000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_CR0_RACFG_SHFT                                 0x18
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_CR0_SHCFG_BMSK                             0xc00000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_CR0_SHCFG_SHFT                                 0x16
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_CR0_SMCFCFG_BMSK                           0x200000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_CR0_SMCFCFG_SHFT                               0x15
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_CR0_MTCFG_BMSK                             0x100000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_CR0_MTCFG_SHFT                                 0x14
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_CR0_MEMATTR_BMSK                            0x70000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_CR0_MEMATTR_SHFT                               0x10
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_CR0_VMIDPNE_BMSK                              0x800
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_CR0_VMIDPNE_SHFT                                0xb
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_CR0_USFCFG_BMSK                               0x400
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_CR0_USFCFG_SHFT                                 0xa
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_CR0_GSE_BMSK                                  0x200
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_CR0_GSE_SHFT                                    0x9
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_CR0_STALLD_BMSK                               0x100
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_CR0_STALLD_SHFT                                 0x8
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_CR0_TRANSIENTCFG_BMSK                          0xc0
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_CR0_TRANSIENTCFG_SHFT                           0x6
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_CR0_GCFGFIE_BMSK                               0x20
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_CR0_GCFGFIE_SHFT                                0x5
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_CR0_GCFGERE_BMSK                               0x10
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_CR0_GCFGERE_SHFT                                0x4
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_CR0_GFIE_BMSK                                   0x4
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_CR0_GFIE_SHFT                                   0x2
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_CR0_CLIENTPD_BMSK                               0x1
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_CR0_CLIENTPD_SHFT                               0x0

#define HWIO_BLSP1_BLSP_BAM_VMIDMT_CR2_ADDR                                 (BLSP1_BLSP_BAM_VMIDMT_REG_BASE      + 0x00000008)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_CR2_RMSK                                       0x1f
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_CR2_IN          \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_CR2_ADDR, HWIO_BLSP1_BLSP_BAM_VMIDMT_CR2_RMSK)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_CR2_INM(m)      \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_CR2_ADDR, m)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_CR2_OUT(v)      \
        out_dword(HWIO_BLSP1_BLSP_BAM_VMIDMT_CR2_ADDR,v)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_CR2_OUTM(m,v) \
        out_dword_masked_ns(HWIO_BLSP1_BLSP_BAM_VMIDMT_CR2_ADDR,m,v,HWIO_BLSP1_BLSP_BAM_VMIDMT_CR2_IN)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_CR2_BPVMID_BMSK                                0x1f
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_CR2_BPVMID_SHFT                                 0x0

#define HWIO_BLSP1_BLSP_BAM_VMIDMT_ACR_ADDR                                 (BLSP1_BLSP_BAM_VMIDMT_REG_BASE      + 0x00000010)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_ACR_RMSK                                 0x70000013
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_ACR_IN          \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_ACR_ADDR, HWIO_BLSP1_BLSP_BAM_VMIDMT_ACR_RMSK)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_ACR_INM(m)      \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_ACR_ADDR, m)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_ACR_OUT(v)      \
        out_dword(HWIO_BLSP1_BLSP_BAM_VMIDMT_ACR_ADDR,v)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_ACR_OUTM(m,v) \
        out_dword_masked_ns(HWIO_BLSP1_BLSP_BAM_VMIDMT_ACR_ADDR,m,v,HWIO_BLSP1_BLSP_BAM_VMIDMT_ACR_IN)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_ACR_BPRCNSH_BMSK                         0x40000000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_ACR_BPRCNSH_SHFT                               0x1e
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_ACR_BPRCISH_BMSK                         0x20000000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_ACR_BPRCISH_SHFT                               0x1d
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_ACR_BPRCOSH_BMSK                         0x10000000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_ACR_BPRCOSH_SHFT                               0x1c
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_ACR_BPREQPRIORITYCFG_BMSK                      0x10
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_ACR_BPREQPRIORITYCFG_SHFT                       0x4
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_ACR_BPREQPRIORITY_BMSK                          0x3
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_ACR_BPREQPRIORITY_SHFT                          0x0

#define HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR0_ADDR                                (BLSP1_BLSP_BAM_VMIDMT_REG_BASE      + 0x00000020)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR0_RMSK                                 0x8001eff
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR0_IN          \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR0_ADDR, HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR0_RMSK)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR0_INM(m)      \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR0_ADDR, m)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR0_SMS_BMSK                             0x8000000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR0_SMS_SHFT                                  0x1b
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR0_NUMSIDB_BMSK                            0x1e00
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR0_NUMSIDB_SHFT                               0x9
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR0_NUMSMRG_BMSK                              0xff
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR0_NUMSMRG_SHFT                               0x0

#define HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR1_ADDR                                (BLSP1_BLSP_BAM_VMIDMT_REG_BASE      + 0x00000024)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR1_RMSK                                    0x9f00
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR1_IN          \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR1_ADDR, HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR1_RMSK)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR1_INM(m)      \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR1_ADDR, m)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR1_SMCD_BMSK                               0x8000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR1_SMCD_SHFT                                  0xf
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR1_SSDTP_BMSK                              0x1000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR1_SSDTP_SHFT                                 0xc
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR1_NUMSSDNDX_BMSK                           0xf00
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR1_NUMSSDNDX_SHFT                             0x8

#define HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR2_ADDR                                (BLSP1_BLSP_BAM_VMIDMT_REG_BASE      + 0x00000028)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR2_RMSK                                      0xff
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR2_IN          \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR2_ADDR, HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR2_RMSK)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR2_INM(m)      \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR2_ADDR, m)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR2_OAS_BMSK                                  0xf0
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR2_OAS_SHFT                                   0x4
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR2_IAS_BMSK                                   0xf
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR2_IAS_SHFT                                   0x0

#define HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR4_ADDR                                (BLSP1_BLSP_BAM_VMIDMT_REG_BASE      + 0x00000030)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR4_RMSK                                0xffffffff
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR4_IN          \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR4_ADDR, HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR4_RMSK)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR4_INM(m)      \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR4_ADDR, m)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR4_MAJOR_BMSK                          0xf0000000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR4_MAJOR_SHFT                                0x1c
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR4_MINOR_BMSK                           0xfff0000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR4_MINOR_SHFT                                0x10
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR4_STEP_BMSK                               0xffff
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR4_STEP_SHFT                                  0x0

#define HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR5_ADDR                                (BLSP1_BLSP_BAM_VMIDMT_REG_BASE      + 0x00000034)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR5_RMSK                                  0xff03ff
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR5_IN          \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR5_ADDR, HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR5_RMSK)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR5_INM(m)      \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR5_ADDR, m)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR5_NUMMSDRB_BMSK                         0xff0000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR5_NUMMSDRB_SHFT                             0x10
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR5_MSAE_BMSK                                0x200
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR5_MSAE_SHFT                                  0x9
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR5_QRIBE_BMSK                               0x100
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR5_QRIBE_SHFT                                 0x8
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR5_NVMID_BMSK                                0xff
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR5_NVMID_SHFT                                 0x0

#define HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR7_ADDR                                (BLSP1_BLSP_BAM_VMIDMT_REG_BASE      + 0x0000003c)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR7_RMSK                                      0xff
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR7_IN          \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR7_ADDR, HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR7_RMSK)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR7_INM(m)      \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR7_ADDR, m)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR7_MAJOR_BMSK                                0xf0
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR7_MAJOR_SHFT                                 0x4
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR7_MINOR_BMSK                                 0xf
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_IDR7_MINOR_SHFT                                 0x0

#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFAR0_ADDR                               (BLSP1_BLSP_BAM_VMIDMT_REG_BASE      + 0x00000040)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFAR0_RMSK                               0xffffffff
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFAR0_IN          \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_GFAR0_ADDR, HWIO_BLSP1_BLSP_BAM_VMIDMT_GFAR0_RMSK)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFAR0_INM(m)      \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_GFAR0_ADDR, m)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFAR0_GFEA0_BMSK                         0xffffffff
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFAR0_GFEA0_SHFT                                0x0

#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSR_ADDR                                (BLSP1_BLSP_BAM_VMIDMT_REG_BASE      + 0x00000048)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSR_RMSK                                0xc00000a6
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSR_IN          \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSR_ADDR, HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSR_RMSK)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSR_INM(m)      \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSR_ADDR, m)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSR_OUT(v)      \
        out_dword(HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSR_ADDR,v)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSR_OUTM(m,v) \
        out_dword_masked_ns(HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSR_ADDR,m,v,HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSR_IN)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSR_MULTI_CLIENT_BMSK                   0x80000000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSR_MULTI_CLIENT_SHFT                         0x1f
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSR_MULTI_CFG_BMSK                      0x40000000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSR_MULTI_CFG_SHFT                            0x1e
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSR_PF_BMSK                                   0x80
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSR_PF_SHFT                                    0x7
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSR_CAF_BMSK                                  0x20
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSR_CAF_SHFT                                   0x5
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSR_SMCF_BMSK                                  0x4
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSR_SMCF_SHFT                                  0x2
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSR_USF_BMSK                                   0x2
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSR_USF_SHFT                                   0x1

#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSRRESTORE_ADDR                         (BLSP1_BLSP_BAM_VMIDMT_REG_BASE      + 0x0000004c)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSRRESTORE_RMSK                         0xc00000a6
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSRRESTORE_IN          \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSRRESTORE_ADDR, HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSRRESTORE_RMSK)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSRRESTORE_INM(m)      \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSRRESTORE_ADDR, m)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSRRESTORE_OUT(v)      \
        out_dword(HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSRRESTORE_ADDR,v)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSRRESTORE_OUTM(m,v) \
        out_dword_masked_ns(HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSRRESTORE_ADDR,m,v,HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSRRESTORE_IN)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSRRESTORE_MULTI_CLIENT_BMSK            0x80000000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSRRESTORE_MULTI_CLIENT_SHFT                  0x1f
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSRRESTORE_MULTI_CFG_BMSK               0x40000000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSRRESTORE_MULTI_CFG_SHFT                     0x1e
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSRRESTORE_PF_BMSK                            0x80
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSRRESTORE_PF_SHFT                             0x7
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSRRESTORE_CAF_BMSK                           0x20
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSRRESTORE_CAF_SHFT                            0x5
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSRRESTORE_SMCF_BMSK                           0x4
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSRRESTORE_SMCF_SHFT                           0x2
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSRRESTORE_USF_BMSK                            0x2
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSRRESTORE_USF_SHFT                            0x1

#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSYNDR0_ADDR                            (BLSP1_BLSP_BAM_VMIDMT_REG_BASE      + 0x00000050)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSYNDR0_RMSK                                 0x132
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSYNDR0_IN          \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSYNDR0_ADDR, HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSYNDR0_RMSK)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSYNDR0_INM(m)      \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSYNDR0_ADDR, m)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSYNDR0_MSSSELFAUTH_BMSK                     0x100
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSYNDR0_MSSSELFAUTH_SHFT                       0x8
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSYNDR0_NSATTR_BMSK                           0x20
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSYNDR0_NSATTR_SHFT                            0x5
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSYNDR0_NSSTATE_BMSK                          0x10
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSYNDR0_NSSTATE_SHFT                           0x4
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSYNDR0_WNR_BMSK                               0x2
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSYNDR0_WNR_SHFT                               0x1

#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSYNDR1_ADDR                            (BLSP1_BLSP_BAM_VMIDMT_REG_BASE      + 0x00000054)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSYNDR1_RMSK                            0x1f1f001f
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSYNDR1_IN          \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSYNDR1_ADDR, HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSYNDR1_RMSK)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSYNDR1_INM(m)      \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSYNDR1_ADDR, m)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSYNDR1_MSDINDEX_BMSK                   0x1f000000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSYNDR1_MSDINDEX_SHFT                         0x18
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSYNDR1_SSDINDEX_BMSK                     0x1f0000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSYNDR1_SSDINDEX_SHFT                         0x10
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSYNDR1_STREAMINDEX_BMSK                      0x1f
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSYNDR1_STREAMINDEX_SHFT                       0x0

#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSYNDR2_ADDR                            (BLSP1_BLSP_BAM_VMIDMT_REG_BASE      + 0x00000058)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSYNDR2_RMSK                            0x3f1fffff
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSYNDR2_IN          \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSYNDR2_ADDR, HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSYNDR2_RMSK)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSYNDR2_INM(m)      \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSYNDR2_ADDR, m)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSYNDR2_ATID_BMSK                       0x3f000000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSYNDR2_ATID_SHFT                             0x18
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSYNDR2_AVMID_BMSK                        0x1f0000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSYNDR2_AVMID_SHFT                            0x10
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSYNDR2_ABID_BMSK                           0xe000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSYNDR2_ABID_SHFT                              0xd
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSYNDR2_APID_BMSK                           0x1f00
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSYNDR2_APID_SHFT                              0x8
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSYNDR2_AMID_BMSK                             0xff
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_GFSYNDR2_AMID_SHFT                              0x0

#define HWIO_BLSP1_BLSP_BAM_VMIDMT_VMIDMTCR0_ADDR                           (BLSP1_BLSP_BAM_VMIDMT_REG_BASE      + 0x00000090)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_VMIDMTCR0_RMSK                                  0x1
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_VMIDMTCR0_IN          \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_VMIDMTCR0_ADDR, HWIO_BLSP1_BLSP_BAM_VMIDMT_VMIDMTCR0_RMSK)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_VMIDMTCR0_INM(m)      \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_VMIDMTCR0_ADDR, m)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_VMIDMTCR0_OUT(v)      \
        out_dword(HWIO_BLSP1_BLSP_BAM_VMIDMT_VMIDMTCR0_ADDR,v)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_VMIDMTCR0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_BLSP1_BLSP_BAM_VMIDMT_VMIDMTCR0_ADDR,m,v,HWIO_BLSP1_BLSP_BAM_VMIDMT_VMIDMTCR0_IN)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_VMIDMTCR0_CLKONOFFE_BMSK                        0x1
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_VMIDMTCR0_CLKONOFFE_SHFT                        0x0

#define HWIO_BLSP1_BLSP_BAM_VMIDMT_VMIDMTACR_ADDR                           (BLSP1_BLSP_BAM_VMIDMT_REG_BASE      + 0x0000009c)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_VMIDMTACR_RMSK                           0xffffffff
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_VMIDMTACR_IN          \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_VMIDMTACR_ADDR, HWIO_BLSP1_BLSP_BAM_VMIDMT_VMIDMTACR_RMSK)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_VMIDMTACR_INM(m)      \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_VMIDMTACR_ADDR, m)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_VMIDMTACR_OUT(v)      \
        out_dword(HWIO_BLSP1_BLSP_BAM_VMIDMT_VMIDMTACR_ADDR,v)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_VMIDMTACR_OUTM(m,v) \
        out_dword_masked_ns(HWIO_BLSP1_BLSP_BAM_VMIDMT_VMIDMTACR_ADDR,m,v,HWIO_BLSP1_BLSP_BAM_VMIDMT_VMIDMTACR_IN)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_VMIDMTACR_RWE_BMSK                       0xffffffff
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_VMIDMTACR_RWE_SHFT                              0x0

#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSCR0_ADDR                               (BLSP1_BLSP_BAM_VMIDMT_REG_BASE      + 0x00000400)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSCR0_RMSK                                0xff70ff5
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSCR0_IN          \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_NSCR0_ADDR, HWIO_BLSP1_BLSP_BAM_VMIDMT_NSCR0_RMSK)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSCR0_INM(m)      \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_NSCR0_ADDR, m)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSCR0_OUT(v)      \
        out_dword(HWIO_BLSP1_BLSP_BAM_VMIDMT_NSCR0_ADDR,v)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSCR0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_BLSP1_BLSP_BAM_VMIDMT_NSCR0_ADDR,m,v,HWIO_BLSP1_BLSP_BAM_VMIDMT_NSCR0_IN)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSCR0_WACFG_BMSK                          0xc000000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSCR0_WACFG_SHFT                               0x1a
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSCR0_RACFG_BMSK                          0x3000000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSCR0_RACFG_SHFT                               0x18
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSCR0_SHCFG_BMSK                           0xc00000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSCR0_SHCFG_SHFT                               0x16
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSCR0_SMCFCFG_BMSK                         0x200000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSCR0_SMCFCFG_SHFT                             0x15
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSCR0_MTCFG_BMSK                           0x100000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSCR0_MTCFG_SHFT                               0x14
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSCR0_MEMATTR_BMSK                          0x70000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSCR0_MEMATTR_SHFT                             0x10
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSCR0_VMIDPNE_BMSK                            0x800
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSCR0_VMIDPNE_SHFT                              0xb
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSCR0_USFCFG_BMSK                             0x400
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSCR0_USFCFG_SHFT                               0xa
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSCR0_GSE_BMSK                                0x200
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSCR0_GSE_SHFT                                  0x9
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSCR0_STALLD_BMSK                             0x100
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSCR0_STALLD_SHFT                               0x8
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSCR0_TRANSIENTCFG_BMSK                        0xc0
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSCR0_TRANSIENTCFG_SHFT                         0x6
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSCR0_GCFGFIE_BMSK                             0x20
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSCR0_GCFGFIE_SHFT                              0x5
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSCR0_GCFGERE_BMSK                             0x10
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSCR0_GCFGERE_SHFT                              0x4
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSCR0_GFIE_BMSK                                 0x4
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSCR0_GFIE_SHFT                                 0x2
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSCR0_CLIENTPD_BMSK                             0x1
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSCR0_CLIENTPD_SHFT                             0x0

#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSCR2_ADDR                               (BLSP1_BLSP_BAM_VMIDMT_REG_BASE      + 0x00000408)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSCR2_RMSK                                     0x1f
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSCR2_IN          \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_NSCR2_ADDR, HWIO_BLSP1_BLSP_BAM_VMIDMT_NSCR2_RMSK)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSCR2_INM(m)      \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_NSCR2_ADDR, m)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSCR2_OUT(v)      \
        out_dword(HWIO_BLSP1_BLSP_BAM_VMIDMT_NSCR2_ADDR,v)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSCR2_OUTM(m,v) \
        out_dword_masked_ns(HWIO_BLSP1_BLSP_BAM_VMIDMT_NSCR2_ADDR,m,v,HWIO_BLSP1_BLSP_BAM_VMIDMT_NSCR2_IN)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSCR2_BPVMID_BMSK                              0x1f
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSCR2_BPVMID_SHFT                               0x0

#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSACR_ADDR                               (BLSP1_BLSP_BAM_VMIDMT_REG_BASE      + 0x00000410)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSACR_RMSK                               0x70000013
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSACR_IN          \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_NSACR_ADDR, HWIO_BLSP1_BLSP_BAM_VMIDMT_NSACR_RMSK)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSACR_INM(m)      \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_NSACR_ADDR, m)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSACR_OUT(v)      \
        out_dword(HWIO_BLSP1_BLSP_BAM_VMIDMT_NSACR_ADDR,v)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSACR_OUTM(m,v) \
        out_dword_masked_ns(HWIO_BLSP1_BLSP_BAM_VMIDMT_NSACR_ADDR,m,v,HWIO_BLSP1_BLSP_BAM_VMIDMT_NSACR_IN)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSACR_BPRCNSH_BMSK                       0x40000000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSACR_BPRCNSH_SHFT                             0x1e
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSACR_BPRCISH_BMSK                       0x20000000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSACR_BPRCISH_SHFT                             0x1d
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSACR_BPRCOSH_BMSK                       0x10000000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSACR_BPRCOSH_SHFT                             0x1c
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSACR_BPREQPRIORITYCFG_BMSK                    0x10
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSACR_BPREQPRIORITYCFG_SHFT                     0x4
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSACR_BPREQPRIORITY_BMSK                        0x3
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSACR_BPREQPRIORITY_SHFT                        0x0

#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFAR0_ADDR                             (BLSP1_BLSP_BAM_VMIDMT_REG_BASE      + 0x00000440)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFAR0_RMSK                             0xffffffff
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFAR0_IN          \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFAR0_ADDR, HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFAR0_RMSK)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFAR0_INM(m)      \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFAR0_ADDR, m)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFAR0_GFEA0_BMSK                       0xffffffff
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFAR0_GFEA0_SHFT                              0x0

#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSR_ADDR                              (BLSP1_BLSP_BAM_VMIDMT_REG_BASE      + 0x00000448)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSR_RMSK                              0xc00000a6
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSR_IN          \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSR_ADDR, HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSR_RMSK)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSR_INM(m)      \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSR_ADDR, m)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSR_OUT(v)      \
        out_dword(HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSR_ADDR,v)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSR_OUTM(m,v) \
        out_dword_masked_ns(HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSR_ADDR,m,v,HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSR_IN)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSR_MULTI_CLIENT_BMSK                 0x80000000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSR_MULTI_CLIENT_SHFT                       0x1f
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSR_MULTI_CFG_BMSK                    0x40000000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSR_MULTI_CFG_SHFT                          0x1e
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSR_PF_BMSK                                 0x80
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSR_PF_SHFT                                  0x7
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSR_CAF_BMSK                                0x20
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSR_CAF_SHFT                                 0x5
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSR_SMCF_BMSK                                0x4
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSR_SMCF_SHFT                                0x2
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSR_USF_BMSK                                 0x2
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSR_USF_SHFT                                 0x1

#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSRRESTORE_ADDR                       (BLSP1_BLSP_BAM_VMIDMT_REG_BASE      + 0x0000044c)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSRRESTORE_RMSK                       0xc00000a6
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSRRESTORE_IN          \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSRRESTORE_ADDR, HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSRRESTORE_RMSK)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSRRESTORE_INM(m)      \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSRRESTORE_ADDR, m)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSRRESTORE_OUT(v)      \
        out_dword(HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSRRESTORE_ADDR,v)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSRRESTORE_OUTM(m,v) \
        out_dword_masked_ns(HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSRRESTORE_ADDR,m,v,HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSRRESTORE_IN)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSRRESTORE_MULTI_CLIENT_BMSK          0x80000000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSRRESTORE_MULTI_CLIENT_SHFT                0x1f
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSRRESTORE_MULTI_CFG_BMSK             0x40000000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSRRESTORE_MULTI_CFG_SHFT                   0x1e
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSRRESTORE_PF_BMSK                          0x80
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSRRESTORE_PF_SHFT                           0x7
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSRRESTORE_CAF_BMSK                         0x20
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSRRESTORE_CAF_SHFT                          0x5
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSRRESTORE_SMCF_BMSK                         0x4
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSRRESTORE_SMCF_SHFT                         0x2
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSRRESTORE_USF_BMSK                          0x2
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSRRESTORE_USF_SHFT                          0x1

#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSYNDR0_ADDR                          (BLSP1_BLSP_BAM_VMIDMT_REG_BASE      + 0x00000450)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSYNDR0_RMSK                               0x132
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSYNDR0_IN          \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSYNDR0_ADDR, HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSYNDR0_RMSK)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSYNDR0_INM(m)      \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSYNDR0_ADDR, m)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSYNDR0_MSSSELFAUTH_BMSK                   0x100
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSYNDR0_MSSSELFAUTH_SHFT                     0x8
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSYNDR0_NSATTR_BMSK                         0x20
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSYNDR0_NSATTR_SHFT                          0x5
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSYNDR0_NSSTATE_BMSK                        0x10
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSYNDR0_NSSTATE_SHFT                         0x4
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSYNDR0_WNR_BMSK                             0x2
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSYNDR0_WNR_SHFT                             0x1

#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSYNDR1_ADDR                          (BLSP1_BLSP_BAM_VMIDMT_REG_BASE      + 0x00000454)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSYNDR1_RMSK                          0x1f1f001f
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSYNDR1_IN          \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSYNDR1_ADDR, HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSYNDR1_RMSK)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSYNDR1_INM(m)      \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSYNDR1_ADDR, m)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSYNDR1_MSDINDEX_BMSK                 0x1f000000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSYNDR1_MSDINDEX_SHFT                       0x18
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSYNDR1_SSDINDEX_BMSK                   0x1f0000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSYNDR1_SSDINDEX_SHFT                       0x10
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSYNDR1_STREAMINDEX_BMSK                    0x1f
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSYNDR1_STREAMINDEX_SHFT                     0x0

#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSYNDR2_ADDR                          (BLSP1_BLSP_BAM_VMIDMT_REG_BASE      + 0x00000458)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSYNDR2_RMSK                          0x3f1fffff
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSYNDR2_IN          \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSYNDR2_ADDR, HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSYNDR2_RMSK)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSYNDR2_INM(m)      \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSYNDR2_ADDR, m)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSYNDR2_ATID_BMSK                     0x3f000000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSYNDR2_ATID_SHFT                           0x18
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSYNDR2_AVMID_BMSK                      0x1f0000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSYNDR2_AVMID_SHFT                          0x10
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSYNDR2_ABID_BMSK                         0xe000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSYNDR2_ABID_SHFT                            0xd
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSYNDR2_APID_BMSK                         0x1f00
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSYNDR2_APID_SHFT                            0x8
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSYNDR2_AMID_BMSK                           0xff
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSGFSYNDR2_AMID_SHFT                            0x0

#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSVMIDMTCR0_ADDR                         (BLSP1_BLSP_BAM_VMIDMT_REG_BASE      + 0x00000490)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSVMIDMTCR0_RMSK                                0x1
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSVMIDMTCR0_IN          \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_NSVMIDMTCR0_ADDR, HWIO_BLSP1_BLSP_BAM_VMIDMT_NSVMIDMTCR0_RMSK)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSVMIDMTCR0_INM(m)      \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_NSVMIDMTCR0_ADDR, m)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSVMIDMTCR0_OUT(v)      \
        out_dword(HWIO_BLSP1_BLSP_BAM_VMIDMT_NSVMIDMTCR0_ADDR,v)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSVMIDMTCR0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_BLSP1_BLSP_BAM_VMIDMT_NSVMIDMTCR0_ADDR,m,v,HWIO_BLSP1_BLSP_BAM_VMIDMT_NSVMIDMTCR0_IN)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSVMIDMTCR0_CLKONOFFE_BMSK                      0x1
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_NSVMIDMTCR0_CLKONOFFE_SHFT                      0x0

#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SSDR0_ADDR                               (BLSP1_BLSP_BAM_VMIDMT_REG_BASE      + 0x00000080)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SSDR0_RMSK                               0xffffffff
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SSDR0_IN          \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_SSDR0_ADDR, HWIO_BLSP1_BLSP_BAM_VMIDMT_SSDR0_RMSK)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SSDR0_INM(m)      \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_SSDR0_ADDR, m)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SSDR0_OUT(v)      \
        out_dword(HWIO_BLSP1_BLSP_BAM_VMIDMT_SSDR0_ADDR,v)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SSDR0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_BLSP1_BLSP_BAM_VMIDMT_SSDR0_ADDR,m,v,HWIO_BLSP1_BLSP_BAM_VMIDMT_SSDR0_IN)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SSDR0_RWE_BMSK                           0xffffffff
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SSDR0_RWE_SHFT                                  0x0

#define HWIO_BLSP1_BLSP_BAM_VMIDMT_MSDR0_ADDR                               (BLSP1_BLSP_BAM_VMIDMT_REG_BASE      + 0x00000480)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_MSDR0_RMSK                                0x1ffffff
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_MSDR0_IN          \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_MSDR0_ADDR, HWIO_BLSP1_BLSP_BAM_VMIDMT_MSDR0_RMSK)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_MSDR0_INM(m)      \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_MSDR0_ADDR, m)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_MSDR0_OUT(v)      \
        out_dword(HWIO_BLSP1_BLSP_BAM_VMIDMT_MSDR0_ADDR,v)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_MSDR0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_BLSP1_BLSP_BAM_VMIDMT_MSDR0_ADDR,m,v,HWIO_BLSP1_BLSP_BAM_VMIDMT_MSDR0_IN)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_MSDR0_RWE_BMSK                            0x1ffffff
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_MSDR0_RWE_SHFT                                  0x0

#define HWIO_BLSP1_BLSP_BAM_VMIDMT_MCR_ADDR                                 (BLSP1_BLSP_BAM_VMIDMT_REG_BASE      + 0x00000494)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_MCR_RMSK                                        0x7
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_MCR_IN          \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_MCR_ADDR, HWIO_BLSP1_BLSP_BAM_VMIDMT_MCR_RMSK)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_MCR_INM(m)      \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_MCR_ADDR, m)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_MCR_OUT(v)      \
        out_dword(HWIO_BLSP1_BLSP_BAM_VMIDMT_MCR_ADDR,v)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_MCR_OUTM(m,v) \
        out_dword_masked_ns(HWIO_BLSP1_BLSP_BAM_VMIDMT_MCR_ADDR,m,v,HWIO_BLSP1_BLSP_BAM_VMIDMT_MCR_IN)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_MCR_CLKONOFFE_BMSK                              0x4
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_MCR_CLKONOFFE_SHFT                              0x2
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_MCR_BPMSACFG_BMSK                               0x2
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_MCR_BPMSACFG_SHFT                               0x1
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_MCR_BPSMSACFG_BMSK                              0x1
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_MCR_BPSMSACFG_SHFT                              0x0

#define HWIO_BLSP1_BLSP_BAM_VMIDMT_S2VRn_ADDR(n)                            (BLSP1_BLSP_BAM_VMIDMT_REG_BASE      + 0x00000c00 + 0x4 * (n))
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_S2VRn_RMSK                               0x30ff7b1f
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_S2VRn_MAXn                                       24
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_S2VRn_INI(n)        \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_S2VRn_ADDR(n), HWIO_BLSP1_BLSP_BAM_VMIDMT_S2VRn_RMSK)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_S2VRn_INMI(n,mask)    \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_S2VRn_ADDR(n), mask)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_S2VRn_OUTI(n,val)    \
        out_dword(HWIO_BLSP1_BLSP_BAM_VMIDMT_S2VRn_ADDR(n),val)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_S2VRn_OUTMI(n,mask,val) \
        out_dword_masked_ns(HWIO_BLSP1_BLSP_BAM_VMIDMT_S2VRn_ADDR(n),mask,val,HWIO_BLSP1_BLSP_BAM_VMIDMT_S2VRn_INI(n))
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_S2VRn_TRANSIENTCFG_BMSK                  0x30000000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_S2VRn_TRANSIENTCFG_SHFT                        0x1c
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_S2VRn_WACFG_BMSK                           0xc00000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_S2VRn_WACFG_SHFT                               0x16
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_S2VRn_RACFG_BMSK                           0x300000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_S2VRn_RACFG_SHFT                               0x14
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_S2VRn_NSCFG_BMSK                            0xc0000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_S2VRn_NSCFG_SHFT                               0x12
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_S2VRn_TYPE_BMSK                             0x30000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_S2VRn_TYPE_SHFT                                0x10
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_S2VRn_MEMATTR_BMSK                           0x7000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_S2VRn_MEMATTR_SHFT                              0xc
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_S2VRn_MTCFG_BMSK                              0x800
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_S2VRn_MTCFG_SHFT                                0xb
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_S2VRn_SHCFG_BMSK                              0x300
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_S2VRn_SHCFG_SHFT                                0x8
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_S2VRn_VMID_BMSK                                0x1f
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_S2VRn_VMID_SHFT                                 0x0

#define HWIO_BLSP1_BLSP_BAM_VMIDMT_AS2VRn_ADDR(n)                           (BLSP1_BLSP_BAM_VMIDMT_REG_BASE      + 0x00000e00 + 0x4 * (n))
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_AS2VRn_RMSK                              0x70000013
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_AS2VRn_MAXn                                      24
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_AS2VRn_INI(n)        \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_AS2VRn_ADDR(n), HWIO_BLSP1_BLSP_BAM_VMIDMT_AS2VRn_RMSK)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_AS2VRn_INMI(n,mask)    \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_AS2VRn_ADDR(n), mask)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_AS2VRn_OUTI(n,val)    \
        out_dword(HWIO_BLSP1_BLSP_BAM_VMIDMT_AS2VRn_ADDR(n),val)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_AS2VRn_OUTMI(n,mask,val) \
        out_dword_masked_ns(HWIO_BLSP1_BLSP_BAM_VMIDMT_AS2VRn_ADDR(n),mask,val,HWIO_BLSP1_BLSP_BAM_VMIDMT_AS2VRn_INI(n))
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_AS2VRn_RCNSH_BMSK                        0x40000000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_AS2VRn_RCNSH_SHFT                              0x1e
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_AS2VRn_RCISH_BMSK                        0x20000000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_AS2VRn_RCISH_SHFT                              0x1d
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_AS2VRn_RCOSH_BMSK                        0x10000000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_AS2VRn_RCOSH_SHFT                              0x1c
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_AS2VRn_REQPRIORITYCFG_BMSK                     0x10
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_AS2VRn_REQPRIORITYCFG_SHFT                      0x4
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_AS2VRn_REQPRIORITY_BMSK                         0x3
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_AS2VRn_REQPRIORITY_SHFT                         0x0

#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SMRn_ADDR(n)                             (BLSP1_BLSP_BAM_VMIDMT_REG_BASE      + 0x00000800 + 0x4 * (n))
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SMRn_RMSK                                0x801f001f
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SMRn_MAXn                                        24
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SMRn_INI(n)        \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_SMRn_ADDR(n), HWIO_BLSP1_BLSP_BAM_VMIDMT_SMRn_RMSK)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SMRn_INMI(n,mask)    \
        in_dword_masked(HWIO_BLSP1_BLSP_BAM_VMIDMT_SMRn_ADDR(n), mask)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SMRn_OUTI(n,val)    \
        out_dword(HWIO_BLSP1_BLSP_BAM_VMIDMT_SMRn_ADDR(n),val)
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SMRn_OUTMI(n,mask,val) \
        out_dword_masked_ns(HWIO_BLSP1_BLSP_BAM_VMIDMT_SMRn_ADDR(n),mask,val,HWIO_BLSP1_BLSP_BAM_VMIDMT_SMRn_INI(n))
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SMRn_VALID_BMSK                          0x80000000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SMRn_VALID_SHFT                                0x1f
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SMRn_MASK_BMSK                             0x1f0000
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SMRn_MASK_SHFT                                 0x10
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SMRn_ID_BMSK                                   0x1f
#define HWIO_BLSP1_BLSP_BAM_VMIDMT_SMRn_ID_SHFT                                    0x0

/*----------------------------------------------------------------------------
 * MODULE: CRYPTO0_CRYPTO_BAM_VMIDMT_BAM
 *--------------------------------------------------------------------------*/

#define CRYPTO0_CRYPTO_BAM_VMIDMT_BAM_REG_BASE                                  (CRYPTO0_CRYPTO_TOP_BASE      + 0x00000000)

#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR0_ADDR                                (CRYPTO0_CRYPTO_BAM_VMIDMT_BAM_REG_BASE      + 0x00000000)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR0_RMSK                                0x3ff707f5
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR0_IN          \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR0_ADDR, HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR0_RMSK)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR0_INM(m)      \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR0_ADDR, m)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR0_OUT(v)      \
        out_dword(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR0_ADDR,v)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR0_ADDR,m,v,HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR0_IN)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR0_NSCFG_BMSK                          0x30000000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR0_NSCFG_SHFT                                0x1c
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR0_WACFG_BMSK                           0xc000000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR0_WACFG_SHFT                                0x1a
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR0_RACFG_BMSK                           0x3000000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR0_RACFG_SHFT                                0x18
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR0_SHCFG_BMSK                            0xc00000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR0_SHCFG_SHFT                                0x16
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR0_SMCFCFG_BMSK                          0x200000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR0_SMCFCFG_SHFT                              0x15
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR0_MTCFG_BMSK                            0x100000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR0_MTCFG_SHFT                                0x14
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR0_MEMATTR_BMSK                           0x70000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR0_MEMATTR_SHFT                              0x10
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR0_USFCFG_BMSK                              0x400
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR0_USFCFG_SHFT                                0xa
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR0_GSE_BMSK                                 0x200
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR0_GSE_SHFT                                   0x9
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR0_STALLD_BMSK                              0x100
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR0_STALLD_SHFT                                0x8
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR0_TRANSIENTCFG_BMSK                         0xc0
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR0_TRANSIENTCFG_SHFT                          0x6
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR0_GCFGFIE_BMSK                              0x20
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR0_GCFGFIE_SHFT                               0x5
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR0_GCFGERE_BMSK                              0x10
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR0_GCFGERE_SHFT                               0x4
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR0_GFIE_BMSK                                  0x4
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR0_GFIE_SHFT                                  0x2
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR0_CLIENTPD_BMSK                              0x1
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR0_CLIENTPD_SHFT                              0x0

#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR1_ADDR                                (CRYPTO0_CRYPTO_BAM_VMIDMT_BAM_REG_BASE      + 0x00000004)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR1_RMSK                                 0x1000f00
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR1_IN          \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR1_ADDR, HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR1_RMSK)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR1_INM(m)      \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR1_ADDR, m)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR1_OUT(v)      \
        out_dword(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR1_ADDR,v)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR1_OUTM(m,v) \
        out_dword_masked_ns(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR1_ADDR,m,v,HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR1_IN)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR1_GASRAE_BMSK                          0x1000000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR1_GASRAE_SHFT                               0x18
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR1_NSNUMSMRGO_BMSK                          0xf00
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR1_NSNUMSMRGO_SHFT                            0x8

#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR2_ADDR                                (CRYPTO0_CRYPTO_BAM_VMIDMT_BAM_REG_BASE      + 0x00000008)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR2_RMSK                                      0x1f
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR2_IN          \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR2_ADDR, HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR2_RMSK)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR2_INM(m)      \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR2_ADDR, m)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR2_OUT(v)      \
        out_dword(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR2_ADDR,v)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR2_OUTM(m,v) \
        out_dword_masked_ns(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR2_ADDR,m,v,HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR2_IN)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR2_BPVMID_BMSK                               0x1f
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SCR2_BPVMID_SHFT                                0x0

#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SACR_ADDR                                (CRYPTO0_CRYPTO_BAM_VMIDMT_BAM_REG_BASE      + 0x00000010)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SACR_RMSK                                0x70000013
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SACR_IN          \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SACR_ADDR, HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SACR_RMSK)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SACR_INM(m)      \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SACR_ADDR, m)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SACR_OUT(v)      \
        out_dword(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SACR_ADDR,v)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SACR_OUTM(m,v) \
        out_dword_masked_ns(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SACR_ADDR,m,v,HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SACR_IN)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SACR_BPRCNSH_BMSK                        0x40000000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SACR_BPRCNSH_SHFT                              0x1e
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SACR_BPRCISH_BMSK                        0x20000000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SACR_BPRCISH_SHFT                              0x1d
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SACR_BPRCOSH_BMSK                        0x10000000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SACR_BPRCOSH_SHFT                              0x1c
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SACR_BPREQPRIORITYCFG_BMSK                     0x10
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SACR_BPREQPRIORITYCFG_SHFT                      0x4
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SACR_BPREQPRIORITY_BMSK                         0x3
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SACR_BPREQPRIORITY_SHFT                         0x0

#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR0_ADDR                               (CRYPTO0_CRYPTO_BAM_VMIDMT_BAM_REG_BASE      + 0x00000020)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR0_RMSK                               0x88001eff
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR0_IN          \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR0_ADDR, HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR0_RMSK)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR0_INM(m)      \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR0_ADDR, m)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR0_SES_BMSK                           0x80000000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR0_SES_SHFT                                 0x1f
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR0_SMS_BMSK                            0x8000000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR0_SMS_SHFT                                 0x1b
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR0_NUMSIDB_BMSK                           0x1e00
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR0_NUMSIDB_SHFT                              0x9
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR0_NUMSMRG_BMSK                             0xff
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR0_NUMSMRG_SHFT                              0x0

#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR1_ADDR                               (CRYPTO0_CRYPTO_BAM_VMIDMT_BAM_REG_BASE      + 0x00000024)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR1_RMSK                                   0x9f00
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR1_IN          \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR1_ADDR, HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR1_RMSK)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR1_INM(m)      \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR1_ADDR, m)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR1_SMCD_BMSK                              0x8000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR1_SMCD_SHFT                                 0xf
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR1_SSDTP_BMSK                             0x1000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR1_SSDTP_SHFT                                0xc
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR1_NUMSSDNDX_BMSK                          0xf00
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR1_NUMSSDNDX_SHFT                            0x8

#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR2_ADDR                               (CRYPTO0_CRYPTO_BAM_VMIDMT_BAM_REG_BASE      + 0x00000028)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR2_RMSK                                     0xff
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR2_IN          \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR2_ADDR, HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR2_RMSK)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR2_INM(m)      \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR2_ADDR, m)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR2_OAS_BMSK                                 0xf0
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR2_OAS_SHFT                                  0x4
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR2_IAS_BMSK                                  0xf
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR2_IAS_SHFT                                  0x0

#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR4_ADDR                               (CRYPTO0_CRYPTO_BAM_VMIDMT_BAM_REG_BASE      + 0x00000030)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR4_RMSK                               0xffffffff
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR4_IN          \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR4_ADDR, HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR4_RMSK)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR4_INM(m)      \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR4_ADDR, m)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR4_MAJOR_BMSK                         0xf0000000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR4_MAJOR_SHFT                               0x1c
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR4_MINOR_BMSK                          0xfff0000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR4_MINOR_SHFT                               0x10
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR4_STEP_BMSK                              0xffff
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR4_STEP_SHFT                                 0x0

#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR5_ADDR                               (CRYPTO0_CRYPTO_BAM_VMIDMT_BAM_REG_BASE      + 0x00000034)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR5_RMSK                                 0xff03ff
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR5_IN          \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR5_ADDR, HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR5_RMSK)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR5_INM(m)      \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR5_ADDR, m)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR5_NUMMSDRB_BMSK                        0xff0000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR5_NUMMSDRB_SHFT                            0x10
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR5_MSAE_BMSK                               0x200
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR5_MSAE_SHFT                                 0x9
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR5_QRIBE_BMSK                              0x100
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR5_QRIBE_SHFT                                0x8
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR5_NVMID_BMSK                               0xff
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR5_NVMID_SHFT                                0x0

#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR7_ADDR                               (CRYPTO0_CRYPTO_BAM_VMIDMT_BAM_REG_BASE      + 0x0000003c)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR7_RMSK                                     0xff
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR7_IN          \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR7_ADDR, HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR7_RMSK)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR7_INM(m)      \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR7_ADDR, m)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR7_MAJOR_BMSK                               0xf0
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR7_MAJOR_SHFT                                0x4
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR7_MINOR_BMSK                                0xf
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SIDR7_MINOR_SHFT                                0x0

#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFAR0_ADDR                              (CRYPTO0_CRYPTO_BAM_VMIDMT_BAM_REG_BASE      + 0x00000040)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFAR0_RMSK                              0xffffffff
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFAR0_IN          \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFAR0_ADDR, HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFAR0_RMSK)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFAR0_INM(m)      \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFAR0_ADDR, m)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFAR0_SGFEA0_BMSK                       0xffffffff
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFAR0_SGFEA0_SHFT                              0x0

#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSR_ADDR                               (CRYPTO0_CRYPTO_BAM_VMIDMT_BAM_REG_BASE      + 0x00000048)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSR_RMSK                               0xc0000026
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSR_IN          \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSR_ADDR, HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSR_RMSK)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSR_INM(m)      \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSR_ADDR, m)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSR_OUT(v)      \
        out_dword(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSR_ADDR,v)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSR_OUTM(m,v) \
        out_dword_masked_ns(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSR_ADDR,m,v,HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSR_IN)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSR_MULTI_CLIENT_BMSK                  0x80000000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSR_MULTI_CLIENT_SHFT                        0x1f
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSR_MULTI_CFG_BMSK                     0x40000000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSR_MULTI_CFG_SHFT                           0x1e
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSR_CAF_BMSK                                 0x20
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSR_CAF_SHFT                                  0x5
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSR_SMCF_BMSK                                 0x4
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSR_SMCF_SHFT                                 0x2
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSR_USF_BMSK                                  0x2
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSR_USF_SHFT                                  0x1

#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSRRESTORE_ADDR                        (CRYPTO0_CRYPTO_BAM_VMIDMT_BAM_REG_BASE      + 0x0000004c)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSRRESTORE_RMSK                        0xc0000026
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSRRESTORE_IN          \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSRRESTORE_ADDR, HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSRRESTORE_RMSK)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSRRESTORE_INM(m)      \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSRRESTORE_ADDR, m)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSRRESTORE_OUT(v)      \
        out_dword(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSRRESTORE_ADDR,v)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSRRESTORE_OUTM(m,v) \
        out_dword_masked_ns(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSRRESTORE_ADDR,m,v,HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSRRESTORE_IN)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSRRESTORE_MULTI_CLIENT_BMSK           0x80000000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSRRESTORE_MULTI_CLIENT_SHFT                 0x1f
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSRRESTORE_MULTI_CFG_BMSK              0x40000000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSRRESTORE_MULTI_CFG_SHFT                    0x1e
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSRRESTORE_CAF_BMSK                          0x20
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSRRESTORE_CAF_SHFT                           0x5
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSRRESTORE_SMCF_BMSK                          0x4
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSRRESTORE_SMCF_SHFT                          0x2
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSRRESTORE_USF_BMSK                           0x2
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSRRESTORE_USF_SHFT                           0x1

#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSYNDR0_ADDR                           (CRYPTO0_CRYPTO_BAM_VMIDMT_BAM_REG_BASE      + 0x00000050)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSYNDR0_RMSK                                0x132
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSYNDR0_IN          \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSYNDR0_ADDR, HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSYNDR0_RMSK)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSYNDR0_INM(m)      \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSYNDR0_ADDR, m)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSYNDR0_MSSSELFAUTH_BMSK                    0x100
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSYNDR0_MSSSELFAUTH_SHFT                      0x8
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSYNDR0_NSATTR_BMSK                          0x20
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSYNDR0_NSATTR_SHFT                           0x5
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSYNDR0_NSSTATE_BMSK                         0x10
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSYNDR0_NSSTATE_SHFT                          0x4
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSYNDR0_WNR_BMSK                              0x2
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSYNDR0_WNR_SHFT                              0x1

#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSYNDR1_ADDR                           (CRYPTO0_CRYPTO_BAM_VMIDMT_BAM_REG_BASE      + 0x00000054)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSYNDR1_RMSK                            0xf0f000f
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSYNDR1_IN          \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSYNDR1_ADDR, HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSYNDR1_RMSK)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSYNDR1_INM(m)      \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSYNDR1_ADDR, m)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSYNDR1_MSDINDEX_BMSK                   0xf000000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSYNDR1_MSDINDEX_SHFT                        0x18
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSYNDR1_SSDINDEX_BMSK                     0xf0000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSYNDR1_SSDINDEX_SHFT                        0x10
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSYNDR1_STREAMINDEX_BMSK                      0xf
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSYNDR1_STREAMINDEX_SHFT                      0x0

#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSYNDR2_ADDR                           (CRYPTO0_CRYPTO_BAM_VMIDMT_BAM_REG_BASE      + 0x00000058)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSYNDR2_RMSK                           0x3f1fffff
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSYNDR2_IN          \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSYNDR2_ADDR, HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSYNDR2_RMSK)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSYNDR2_INM(m)      \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSYNDR2_ADDR, m)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSYNDR2_ATID_BMSK                      0x3f000000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSYNDR2_ATID_SHFT                            0x18
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSYNDR2_AVMID_BMSK                       0x1f0000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSYNDR2_AVMID_SHFT                           0x10
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSYNDR2_ABID_BMSK                          0xe000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSYNDR2_ABID_SHFT                             0xd
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSYNDR2_APID_BMSK                          0x1f00
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSYNDR2_APID_SHFT                             0x8
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSYNDR2_AMID_BMSK                            0xff
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SGFSYNDR2_AMID_SHFT                             0x0

#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_VMIDMTSCR0_ADDR                          (CRYPTO0_CRYPTO_BAM_VMIDMT_BAM_REG_BASE      + 0x00000090)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_VMIDMTSCR0_RMSK                                 0x1
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_VMIDMTSCR0_IN          \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_VMIDMTSCR0_ADDR, HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_VMIDMTSCR0_RMSK)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_VMIDMTSCR0_INM(m)      \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_VMIDMTSCR0_ADDR, m)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_VMIDMTSCR0_OUT(v)      \
        out_dword(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_VMIDMTSCR0_ADDR,v)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_VMIDMTSCR0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_VMIDMTSCR0_ADDR,m,v,HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_VMIDMTSCR0_IN)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_VMIDMTSCR0_CLKONOFFE_BMSK                       0x1
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_VMIDMTSCR0_CLKONOFFE_SHFT                       0x0

#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_CR0_ADDR                                 (CRYPTO0_CRYPTO_BAM_VMIDMT_BAM_REG_BASE      + 0x00000000)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_CR0_RMSK                                  0xff70ff5
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_CR0_IN          \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_CR0_ADDR, HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_CR0_RMSK)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_CR0_INM(m)      \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_CR0_ADDR, m)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_CR0_OUT(v)      \
        out_dword(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_CR0_ADDR,v)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_CR0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_CR0_ADDR,m,v,HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_CR0_IN)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_CR0_WACFG_BMSK                            0xc000000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_CR0_WACFG_SHFT                                 0x1a
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_CR0_RACFG_BMSK                            0x3000000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_CR0_RACFG_SHFT                                 0x18
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_CR0_SHCFG_BMSK                             0xc00000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_CR0_SHCFG_SHFT                                 0x16
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_CR0_SMCFCFG_BMSK                           0x200000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_CR0_SMCFCFG_SHFT                               0x15
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_CR0_MTCFG_BMSK                             0x100000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_CR0_MTCFG_SHFT                                 0x14
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_CR0_MEMATTR_BMSK                            0x70000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_CR0_MEMATTR_SHFT                               0x10
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_CR0_VMIDPNE_BMSK                              0x800
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_CR0_VMIDPNE_SHFT                                0xb
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_CR0_USFCFG_BMSK                               0x400
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_CR0_USFCFG_SHFT                                 0xa
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_CR0_GSE_BMSK                                  0x200
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_CR0_GSE_SHFT                                    0x9
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_CR0_STALLD_BMSK                               0x100
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_CR0_STALLD_SHFT                                 0x8
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_CR0_TRANSIENTCFG_BMSK                          0xc0
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_CR0_TRANSIENTCFG_SHFT                           0x6
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_CR0_GCFGFIE_BMSK                               0x20
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_CR0_GCFGFIE_SHFT                                0x5
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_CR0_GCFGERE_BMSK                               0x10
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_CR0_GCFGERE_SHFT                                0x4
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_CR0_GFIE_BMSK                                   0x4
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_CR0_GFIE_SHFT                                   0x2
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_CR0_CLIENTPD_BMSK                               0x1
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_CR0_CLIENTPD_SHFT                               0x0

#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_CR2_ADDR                                 (CRYPTO0_CRYPTO_BAM_VMIDMT_BAM_REG_BASE      + 0x00000008)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_CR2_RMSK                                       0x1f
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_CR2_IN          \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_CR2_ADDR, HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_CR2_RMSK)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_CR2_INM(m)      \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_CR2_ADDR, m)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_CR2_OUT(v)      \
        out_dword(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_CR2_ADDR,v)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_CR2_OUTM(m,v) \
        out_dword_masked_ns(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_CR2_ADDR,m,v,HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_CR2_IN)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_CR2_BPVMID_BMSK                                0x1f
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_CR2_BPVMID_SHFT                                 0x0

#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_ACR_ADDR                                 (CRYPTO0_CRYPTO_BAM_VMIDMT_BAM_REG_BASE      + 0x00000010)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_ACR_RMSK                                 0x70000013
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_ACR_IN          \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_ACR_ADDR, HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_ACR_RMSK)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_ACR_INM(m)      \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_ACR_ADDR, m)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_ACR_OUT(v)      \
        out_dword(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_ACR_ADDR,v)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_ACR_OUTM(m,v) \
        out_dword_masked_ns(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_ACR_ADDR,m,v,HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_ACR_IN)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_ACR_BPRCNSH_BMSK                         0x40000000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_ACR_BPRCNSH_SHFT                               0x1e
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_ACR_BPRCISH_BMSK                         0x20000000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_ACR_BPRCISH_SHFT                               0x1d
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_ACR_BPRCOSH_BMSK                         0x10000000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_ACR_BPRCOSH_SHFT                               0x1c
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_ACR_BPREQPRIORITYCFG_BMSK                      0x10
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_ACR_BPREQPRIORITYCFG_SHFT                       0x4
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_ACR_BPREQPRIORITY_BMSK                          0x3
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_ACR_BPREQPRIORITY_SHFT                          0x0

#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR0_ADDR                                (CRYPTO0_CRYPTO_BAM_VMIDMT_BAM_REG_BASE      + 0x00000020)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR0_RMSK                                 0x8001eff
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR0_IN          \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR0_ADDR, HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR0_RMSK)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR0_INM(m)      \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR0_ADDR, m)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR0_SMS_BMSK                             0x8000000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR0_SMS_SHFT                                  0x1b
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR0_NUMSIDB_BMSK                            0x1e00
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR0_NUMSIDB_SHFT                               0x9
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR0_NUMSMRG_BMSK                              0xff
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR0_NUMSMRG_SHFT                               0x0

#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR1_ADDR                                (CRYPTO0_CRYPTO_BAM_VMIDMT_BAM_REG_BASE      + 0x00000024)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR1_RMSK                                    0x9f00
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR1_IN          \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR1_ADDR, HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR1_RMSK)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR1_INM(m)      \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR1_ADDR, m)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR1_SMCD_BMSK                               0x8000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR1_SMCD_SHFT                                  0xf
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR1_SSDTP_BMSK                              0x1000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR1_SSDTP_SHFT                                 0xc
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR1_NUMSSDNDX_BMSK                           0xf00
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR1_NUMSSDNDX_SHFT                             0x8

#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR2_ADDR                                (CRYPTO0_CRYPTO_BAM_VMIDMT_BAM_REG_BASE      + 0x00000028)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR2_RMSK                                      0xff
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR2_IN          \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR2_ADDR, HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR2_RMSK)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR2_INM(m)      \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR2_ADDR, m)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR2_OAS_BMSK                                  0xf0
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR2_OAS_SHFT                                   0x4
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR2_IAS_BMSK                                   0xf
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR2_IAS_SHFT                                   0x0

#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR4_ADDR                                (CRYPTO0_CRYPTO_BAM_VMIDMT_BAM_REG_BASE      + 0x00000030)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR4_RMSK                                0xffffffff
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR4_IN          \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR4_ADDR, HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR4_RMSK)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR4_INM(m)      \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR4_ADDR, m)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR4_MAJOR_BMSK                          0xf0000000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR4_MAJOR_SHFT                                0x1c
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR4_MINOR_BMSK                           0xfff0000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR4_MINOR_SHFT                                0x10
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR4_STEP_BMSK                               0xffff
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR4_STEP_SHFT                                  0x0

#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR5_ADDR                                (CRYPTO0_CRYPTO_BAM_VMIDMT_BAM_REG_BASE      + 0x00000034)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR5_RMSK                                  0xff03ff
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR5_IN          \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR5_ADDR, HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR5_RMSK)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR5_INM(m)      \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR5_ADDR, m)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR5_NUMMSDRB_BMSK                         0xff0000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR5_NUMMSDRB_SHFT                             0x10
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR5_MSAE_BMSK                                0x200
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR5_MSAE_SHFT                                  0x9
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR5_QRIBE_BMSK                               0x100
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR5_QRIBE_SHFT                                 0x8
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR5_NVMID_BMSK                                0xff
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR5_NVMID_SHFT                                 0x0

#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR7_ADDR                                (CRYPTO0_CRYPTO_BAM_VMIDMT_BAM_REG_BASE      + 0x0000003c)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR7_RMSK                                      0xff
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR7_IN          \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR7_ADDR, HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR7_RMSK)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR7_INM(m)      \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR7_ADDR, m)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR7_MAJOR_BMSK                                0xf0
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR7_MAJOR_SHFT                                 0x4
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR7_MINOR_BMSK                                 0xf
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_IDR7_MINOR_SHFT                                 0x0

#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFAR0_ADDR                               (CRYPTO0_CRYPTO_BAM_VMIDMT_BAM_REG_BASE      + 0x00000040)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFAR0_RMSK                               0xffffffff
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFAR0_IN          \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFAR0_ADDR, HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFAR0_RMSK)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFAR0_INM(m)      \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFAR0_ADDR, m)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFAR0_GFEA0_BMSK                         0xffffffff
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFAR0_GFEA0_SHFT                                0x0

#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSR_ADDR                                (CRYPTO0_CRYPTO_BAM_VMIDMT_BAM_REG_BASE      + 0x00000048)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSR_RMSK                                0xc00000a6
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSR_IN          \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSR_ADDR, HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSR_RMSK)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSR_INM(m)      \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSR_ADDR, m)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSR_OUT(v)      \
        out_dword(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSR_ADDR,v)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSR_OUTM(m,v) \
        out_dword_masked_ns(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSR_ADDR,m,v,HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSR_IN)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSR_MULTI_CLIENT_BMSK                   0x80000000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSR_MULTI_CLIENT_SHFT                         0x1f
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSR_MULTI_CFG_BMSK                      0x40000000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSR_MULTI_CFG_SHFT                            0x1e
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSR_PF_BMSK                                   0x80
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSR_PF_SHFT                                    0x7
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSR_CAF_BMSK                                  0x20
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSR_CAF_SHFT                                   0x5
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSR_SMCF_BMSK                                  0x4
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSR_SMCF_SHFT                                  0x2
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSR_USF_BMSK                                   0x2
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSR_USF_SHFT                                   0x1

#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSRRESTORE_ADDR                         (CRYPTO0_CRYPTO_BAM_VMIDMT_BAM_REG_BASE      + 0x0000004c)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSRRESTORE_RMSK                         0xc00000a6
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSRRESTORE_IN          \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSRRESTORE_ADDR, HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSRRESTORE_RMSK)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSRRESTORE_INM(m)      \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSRRESTORE_ADDR, m)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSRRESTORE_OUT(v)      \
        out_dword(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSRRESTORE_ADDR,v)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSRRESTORE_OUTM(m,v) \
        out_dword_masked_ns(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSRRESTORE_ADDR,m,v,HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSRRESTORE_IN)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSRRESTORE_MULTI_CLIENT_BMSK            0x80000000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSRRESTORE_MULTI_CLIENT_SHFT                  0x1f
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSRRESTORE_MULTI_CFG_BMSK               0x40000000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSRRESTORE_MULTI_CFG_SHFT                     0x1e
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSRRESTORE_PF_BMSK                            0x80
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSRRESTORE_PF_SHFT                             0x7
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSRRESTORE_CAF_BMSK                           0x20
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSRRESTORE_CAF_SHFT                            0x5
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSRRESTORE_SMCF_BMSK                           0x4
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSRRESTORE_SMCF_SHFT                           0x2
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSRRESTORE_USF_BMSK                            0x2
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSRRESTORE_USF_SHFT                            0x1

#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSYNDR0_ADDR                            (CRYPTO0_CRYPTO_BAM_VMIDMT_BAM_REG_BASE      + 0x00000050)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSYNDR0_RMSK                                 0x132
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSYNDR0_IN          \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSYNDR0_ADDR, HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSYNDR0_RMSK)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSYNDR0_INM(m)      \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSYNDR0_ADDR, m)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSYNDR0_MSSSELFAUTH_BMSK                     0x100
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSYNDR0_MSSSELFAUTH_SHFT                       0x8
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSYNDR0_NSATTR_BMSK                           0x20
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSYNDR0_NSATTR_SHFT                            0x5
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSYNDR0_NSSTATE_BMSK                          0x10
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSYNDR0_NSSTATE_SHFT                           0x4
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSYNDR0_WNR_BMSK                               0x2
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSYNDR0_WNR_SHFT                               0x1

#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSYNDR1_ADDR                            (CRYPTO0_CRYPTO_BAM_VMIDMT_BAM_REG_BASE      + 0x00000054)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSYNDR1_RMSK                             0xf0f000f
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSYNDR1_IN          \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSYNDR1_ADDR, HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSYNDR1_RMSK)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSYNDR1_INM(m)      \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSYNDR1_ADDR, m)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSYNDR1_MSDINDEX_BMSK                    0xf000000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSYNDR1_MSDINDEX_SHFT                         0x18
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSYNDR1_SSDINDEX_BMSK                      0xf0000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSYNDR1_SSDINDEX_SHFT                         0x10
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSYNDR1_STREAMINDEX_BMSK                       0xf
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSYNDR1_STREAMINDEX_SHFT                       0x0

#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSYNDR2_ADDR                            (CRYPTO0_CRYPTO_BAM_VMIDMT_BAM_REG_BASE      + 0x00000058)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSYNDR2_RMSK                            0x3f1fffff
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSYNDR2_IN          \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSYNDR2_ADDR, HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSYNDR2_RMSK)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSYNDR2_INM(m)      \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSYNDR2_ADDR, m)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSYNDR2_ATID_BMSK                       0x3f000000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSYNDR2_ATID_SHFT                             0x18
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSYNDR2_AVMID_BMSK                        0x1f0000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSYNDR2_AVMID_SHFT                            0x10
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSYNDR2_ABID_BMSK                           0xe000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSYNDR2_ABID_SHFT                              0xd
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSYNDR2_APID_BMSK                           0x1f00
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSYNDR2_APID_SHFT                              0x8
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSYNDR2_AMID_BMSK                             0xff
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_GFSYNDR2_AMID_SHFT                              0x0

#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_VMIDMTCR0_ADDR                           (CRYPTO0_CRYPTO_BAM_VMIDMT_BAM_REG_BASE      + 0x00000090)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_VMIDMTCR0_RMSK                                  0x1
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_VMIDMTCR0_IN          \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_VMIDMTCR0_ADDR, HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_VMIDMTCR0_RMSK)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_VMIDMTCR0_INM(m)      \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_VMIDMTCR0_ADDR, m)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_VMIDMTCR0_OUT(v)      \
        out_dword(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_VMIDMTCR0_ADDR,v)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_VMIDMTCR0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_VMIDMTCR0_ADDR,m,v,HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_VMIDMTCR0_IN)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_VMIDMTCR0_CLKONOFFE_BMSK                        0x1
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_VMIDMTCR0_CLKONOFFE_SHFT                        0x0

#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_VMIDMTACR_ADDR                           (CRYPTO0_CRYPTO_BAM_VMIDMT_BAM_REG_BASE      + 0x0000009c)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_VMIDMTACR_RMSK                           0xffffffff
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_VMIDMTACR_IN          \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_VMIDMTACR_ADDR, HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_VMIDMTACR_RMSK)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_VMIDMTACR_INM(m)      \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_VMIDMTACR_ADDR, m)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_VMIDMTACR_OUT(v)      \
        out_dword(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_VMIDMTACR_ADDR,v)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_VMIDMTACR_OUTM(m,v) \
        out_dword_masked_ns(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_VMIDMTACR_ADDR,m,v,HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_VMIDMTACR_IN)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_VMIDMTACR_RWE_BMSK                       0xffffffff
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_VMIDMTACR_RWE_SHFT                              0x0

#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSCR0_ADDR                               (CRYPTO0_CRYPTO_BAM_VMIDMT_BAM_REG_BASE      + 0x00000400)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSCR0_RMSK                                0xff70ff5
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSCR0_IN          \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSCR0_ADDR, HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSCR0_RMSK)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSCR0_INM(m)      \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSCR0_ADDR, m)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSCR0_OUT(v)      \
        out_dword(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSCR0_ADDR,v)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSCR0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSCR0_ADDR,m,v,HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSCR0_IN)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSCR0_WACFG_BMSK                          0xc000000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSCR0_WACFG_SHFT                               0x1a
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSCR0_RACFG_BMSK                          0x3000000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSCR0_RACFG_SHFT                               0x18
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSCR0_SHCFG_BMSK                           0xc00000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSCR0_SHCFG_SHFT                               0x16
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSCR0_SMCFCFG_BMSK                         0x200000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSCR0_SMCFCFG_SHFT                             0x15
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSCR0_MTCFG_BMSK                           0x100000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSCR0_MTCFG_SHFT                               0x14
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSCR0_MEMATTR_BMSK                          0x70000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSCR0_MEMATTR_SHFT                             0x10
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSCR0_VMIDPNE_BMSK                            0x800
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSCR0_VMIDPNE_SHFT                              0xb
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSCR0_USFCFG_BMSK                             0x400
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSCR0_USFCFG_SHFT                               0xa
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSCR0_GSE_BMSK                                0x200
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSCR0_GSE_SHFT                                  0x9
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSCR0_STALLD_BMSK                             0x100
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSCR0_STALLD_SHFT                               0x8
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSCR0_TRANSIENTCFG_BMSK                        0xc0
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSCR0_TRANSIENTCFG_SHFT                         0x6
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSCR0_GCFGFIE_BMSK                             0x20
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSCR0_GCFGFIE_SHFT                              0x5
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSCR0_GCFGERE_BMSK                             0x10
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSCR0_GCFGERE_SHFT                              0x4
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSCR0_GFIE_BMSK                                 0x4
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSCR0_GFIE_SHFT                                 0x2
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSCR0_CLIENTPD_BMSK                             0x1
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSCR0_CLIENTPD_SHFT                             0x0

#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSCR2_ADDR                               (CRYPTO0_CRYPTO_BAM_VMIDMT_BAM_REG_BASE      + 0x00000408)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSCR2_RMSK                                     0x1f
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSCR2_IN          \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSCR2_ADDR, HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSCR2_RMSK)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSCR2_INM(m)      \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSCR2_ADDR, m)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSCR2_OUT(v)      \
        out_dword(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSCR2_ADDR,v)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSCR2_OUTM(m,v) \
        out_dword_masked_ns(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSCR2_ADDR,m,v,HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSCR2_IN)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSCR2_BPVMID_BMSK                              0x1f
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSCR2_BPVMID_SHFT                               0x0

#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSACR_ADDR                               (CRYPTO0_CRYPTO_BAM_VMIDMT_BAM_REG_BASE      + 0x00000410)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSACR_RMSK                               0x70000013
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSACR_IN          \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSACR_ADDR, HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSACR_RMSK)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSACR_INM(m)      \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSACR_ADDR, m)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSACR_OUT(v)      \
        out_dword(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSACR_ADDR,v)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSACR_OUTM(m,v) \
        out_dword_masked_ns(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSACR_ADDR,m,v,HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSACR_IN)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSACR_BPRCNSH_BMSK                       0x40000000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSACR_BPRCNSH_SHFT                             0x1e
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSACR_BPRCISH_BMSK                       0x20000000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSACR_BPRCISH_SHFT                             0x1d
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSACR_BPRCOSH_BMSK                       0x10000000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSACR_BPRCOSH_SHFT                             0x1c
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSACR_BPREQPRIORITYCFG_BMSK                    0x10
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSACR_BPREQPRIORITYCFG_SHFT                     0x4
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSACR_BPREQPRIORITY_BMSK                        0x3
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSACR_BPREQPRIORITY_SHFT                        0x0

#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFAR0_ADDR                             (CRYPTO0_CRYPTO_BAM_VMIDMT_BAM_REG_BASE      + 0x00000440)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFAR0_RMSK                             0xffffffff
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFAR0_IN          \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFAR0_ADDR, HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFAR0_RMSK)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFAR0_INM(m)      \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFAR0_ADDR, m)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFAR0_GFEA0_BMSK                       0xffffffff
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFAR0_GFEA0_SHFT                              0x0

#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSR_ADDR                              (CRYPTO0_CRYPTO_BAM_VMIDMT_BAM_REG_BASE      + 0x00000448)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSR_RMSK                              0xc00000a6
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSR_IN          \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSR_ADDR, HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSR_RMSK)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSR_INM(m)      \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSR_ADDR, m)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSR_OUT(v)      \
        out_dword(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSR_ADDR,v)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSR_OUTM(m,v) \
        out_dword_masked_ns(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSR_ADDR,m,v,HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSR_IN)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSR_MULTI_CLIENT_BMSK                 0x80000000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSR_MULTI_CLIENT_SHFT                       0x1f
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSR_MULTI_CFG_BMSK                    0x40000000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSR_MULTI_CFG_SHFT                          0x1e
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSR_PF_BMSK                                 0x80
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSR_PF_SHFT                                  0x7
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSR_CAF_BMSK                                0x20
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSR_CAF_SHFT                                 0x5
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSR_SMCF_BMSK                                0x4
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSR_SMCF_SHFT                                0x2
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSR_USF_BMSK                                 0x2
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSR_USF_SHFT                                 0x1

#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSRRESTORE_ADDR                       (CRYPTO0_CRYPTO_BAM_VMIDMT_BAM_REG_BASE      + 0x0000044c)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSRRESTORE_RMSK                       0xc00000a6
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSRRESTORE_IN          \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSRRESTORE_ADDR, HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSRRESTORE_RMSK)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSRRESTORE_INM(m)      \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSRRESTORE_ADDR, m)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSRRESTORE_OUT(v)      \
        out_dword(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSRRESTORE_ADDR,v)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSRRESTORE_OUTM(m,v) \
        out_dword_masked_ns(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSRRESTORE_ADDR,m,v,HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSRRESTORE_IN)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSRRESTORE_MULTI_CLIENT_BMSK          0x80000000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSRRESTORE_MULTI_CLIENT_SHFT                0x1f
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSRRESTORE_MULTI_CFG_BMSK             0x40000000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSRRESTORE_MULTI_CFG_SHFT                   0x1e
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSRRESTORE_PF_BMSK                          0x80
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSRRESTORE_PF_SHFT                           0x7
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSRRESTORE_CAF_BMSK                         0x20
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSRRESTORE_CAF_SHFT                          0x5
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSRRESTORE_SMCF_BMSK                         0x4
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSRRESTORE_SMCF_SHFT                         0x2
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSRRESTORE_USF_BMSK                          0x2
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSRRESTORE_USF_SHFT                          0x1

#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSYNDR0_ADDR                          (CRYPTO0_CRYPTO_BAM_VMIDMT_BAM_REG_BASE      + 0x00000450)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSYNDR0_RMSK                               0x132
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSYNDR0_IN          \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSYNDR0_ADDR, HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSYNDR0_RMSK)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSYNDR0_INM(m)      \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSYNDR0_ADDR, m)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSYNDR0_MSSSELFAUTH_BMSK                   0x100
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSYNDR0_MSSSELFAUTH_SHFT                     0x8
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSYNDR0_NSATTR_BMSK                         0x20
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSYNDR0_NSATTR_SHFT                          0x5
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSYNDR0_NSSTATE_BMSK                        0x10
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSYNDR0_NSSTATE_SHFT                         0x4
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSYNDR0_WNR_BMSK                             0x2
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSYNDR0_WNR_SHFT                             0x1

#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSYNDR1_ADDR                          (CRYPTO0_CRYPTO_BAM_VMIDMT_BAM_REG_BASE      + 0x00000454)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSYNDR1_RMSK                           0xf0f000f
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSYNDR1_IN          \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSYNDR1_ADDR, HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSYNDR1_RMSK)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSYNDR1_INM(m)      \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSYNDR1_ADDR, m)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSYNDR1_MSDINDEX_BMSK                  0xf000000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSYNDR1_MSDINDEX_SHFT                       0x18
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSYNDR1_SSDINDEX_BMSK                    0xf0000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSYNDR1_SSDINDEX_SHFT                       0x10
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSYNDR1_STREAMINDEX_BMSK                     0xf
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSYNDR1_STREAMINDEX_SHFT                     0x0

#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSYNDR2_ADDR                          (CRYPTO0_CRYPTO_BAM_VMIDMT_BAM_REG_BASE      + 0x00000458)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSYNDR2_RMSK                          0x3f1fffff
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSYNDR2_IN          \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSYNDR2_ADDR, HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSYNDR2_RMSK)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSYNDR2_INM(m)      \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSYNDR2_ADDR, m)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSYNDR2_ATID_BMSK                     0x3f000000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSYNDR2_ATID_SHFT                           0x18
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSYNDR2_AVMID_BMSK                      0x1f0000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSYNDR2_AVMID_SHFT                          0x10
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSYNDR2_ABID_BMSK                         0xe000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSYNDR2_ABID_SHFT                            0xd
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSYNDR2_APID_BMSK                         0x1f00
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSYNDR2_APID_SHFT                            0x8
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSYNDR2_AMID_BMSK                           0xff
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSGFSYNDR2_AMID_SHFT                            0x0

#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSVMIDMTCR0_ADDR                         (CRYPTO0_CRYPTO_BAM_VMIDMT_BAM_REG_BASE      + 0x00000490)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSVMIDMTCR0_RMSK                                0x1
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSVMIDMTCR0_IN          \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSVMIDMTCR0_ADDR, HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSVMIDMTCR0_RMSK)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSVMIDMTCR0_INM(m)      \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSVMIDMTCR0_ADDR, m)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSVMIDMTCR0_OUT(v)      \
        out_dword(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSVMIDMTCR0_ADDR,v)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSVMIDMTCR0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSVMIDMTCR0_ADDR,m,v,HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSVMIDMTCR0_IN)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSVMIDMTCR0_CLKONOFFE_BMSK                      0x1
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_NSVMIDMTCR0_CLKONOFFE_SHFT                      0x0

#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SSDR0_ADDR                               (CRYPTO0_CRYPTO_BAM_VMIDMT_BAM_REG_BASE      + 0x00000080)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SSDR0_RMSK                                   0xffff
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SSDR0_IN          \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SSDR0_ADDR, HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SSDR0_RMSK)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SSDR0_INM(m)      \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SSDR0_ADDR, m)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SSDR0_OUT(v)      \
        out_dword(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SSDR0_ADDR,v)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SSDR0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SSDR0_ADDR,m,v,HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SSDR0_IN)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SSDR0_RWE_BMSK                               0xffff
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SSDR0_RWE_SHFT                                  0x0

#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_MSDR0_ADDR                               (CRYPTO0_CRYPTO_BAM_VMIDMT_BAM_REG_BASE      + 0x00000480)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_MSDR0_RMSK                                    0x1ff
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_MSDR0_IN          \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_MSDR0_ADDR, HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_MSDR0_RMSK)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_MSDR0_INM(m)      \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_MSDR0_ADDR, m)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_MSDR0_OUT(v)      \
        out_dword(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_MSDR0_ADDR,v)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_MSDR0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_MSDR0_ADDR,m,v,HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_MSDR0_IN)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_MSDR0_RWE_BMSK                                0x1ff
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_MSDR0_RWE_SHFT                                  0x0

#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_MCR_ADDR                                 (CRYPTO0_CRYPTO_BAM_VMIDMT_BAM_REG_BASE      + 0x00000494)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_MCR_RMSK                                        0x7
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_MCR_IN          \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_MCR_ADDR, HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_MCR_RMSK)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_MCR_INM(m)      \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_MCR_ADDR, m)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_MCR_OUT(v)      \
        out_dword(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_MCR_ADDR,v)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_MCR_OUTM(m,v) \
        out_dword_masked_ns(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_MCR_ADDR,m,v,HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_MCR_IN)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_MCR_CLKONOFFE_BMSK                              0x4
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_MCR_CLKONOFFE_SHFT                              0x2
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_MCR_BPMSACFG_BMSK                               0x2
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_MCR_BPMSACFG_SHFT                               0x1
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_MCR_BPSMSACFG_BMSK                              0x1
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_MCR_BPSMSACFG_SHFT                              0x0

#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_S2VRn_ADDR(n)                            (CRYPTO0_CRYPTO_BAM_VMIDMT_BAM_REG_BASE      + 0x00000c00 + 0x4 * (n))
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_S2VRn_RMSK                               0x30ff7b1f
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_S2VRn_MAXn                                        8
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_S2VRn_INI(n)        \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_S2VRn_ADDR(n), HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_S2VRn_RMSK)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_S2VRn_INMI(n,mask)    \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_S2VRn_ADDR(n), mask)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_S2VRn_OUTI(n,val)    \
        out_dword(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_S2VRn_ADDR(n),val)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_S2VRn_OUTMI(n,mask,val) \
        out_dword_masked_ns(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_S2VRn_ADDR(n),mask,val,HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_S2VRn_INI(n))
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_S2VRn_TRANSIENTCFG_BMSK                  0x30000000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_S2VRn_TRANSIENTCFG_SHFT                        0x1c
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_S2VRn_WACFG_BMSK                           0xc00000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_S2VRn_WACFG_SHFT                               0x16
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_S2VRn_RACFG_BMSK                           0x300000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_S2VRn_RACFG_SHFT                               0x14
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_S2VRn_NSCFG_BMSK                            0xc0000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_S2VRn_NSCFG_SHFT                               0x12
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_S2VRn_TYPE_BMSK                             0x30000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_S2VRn_TYPE_SHFT                                0x10
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_S2VRn_MEMATTR_BMSK                           0x7000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_S2VRn_MEMATTR_SHFT                              0xc
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_S2VRn_MTCFG_BMSK                              0x800
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_S2VRn_MTCFG_SHFT                                0xb
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_S2VRn_SHCFG_BMSK                              0x300
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_S2VRn_SHCFG_SHFT                                0x8
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_S2VRn_VMID_BMSK                                0x1f
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_S2VRn_VMID_SHFT                                 0x0

#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_AS2VRn_ADDR(n)                           (CRYPTO0_CRYPTO_BAM_VMIDMT_BAM_REG_BASE      + 0x00000e00 + 0x4 * (n))
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_AS2VRn_RMSK                              0x70000013
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_AS2VRn_MAXn                                       8
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_AS2VRn_INI(n)        \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_AS2VRn_ADDR(n), HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_AS2VRn_RMSK)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_AS2VRn_INMI(n,mask)    \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_AS2VRn_ADDR(n), mask)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_AS2VRn_OUTI(n,val)    \
        out_dword(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_AS2VRn_ADDR(n),val)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_AS2VRn_OUTMI(n,mask,val) \
        out_dword_masked_ns(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_AS2VRn_ADDR(n),mask,val,HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_AS2VRn_INI(n))
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_AS2VRn_RCNSH_BMSK                        0x40000000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_AS2VRn_RCNSH_SHFT                              0x1e
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_AS2VRn_RCISH_BMSK                        0x20000000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_AS2VRn_RCISH_SHFT                              0x1d
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_AS2VRn_RCOSH_BMSK                        0x10000000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_AS2VRn_RCOSH_SHFT                              0x1c
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_AS2VRn_REQPRIORITYCFG_BMSK                     0x10
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_AS2VRn_REQPRIORITYCFG_SHFT                      0x4
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_AS2VRn_REQPRIORITY_BMSK                         0x3
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_AS2VRn_REQPRIORITY_SHFT                         0x0

#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SMRn_ADDR(n)                             (CRYPTO0_CRYPTO_BAM_VMIDMT_BAM_REG_BASE      + 0x00000800 + 0x4 * (n))
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SMRn_RMSK                                0x800f000f
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SMRn_MAXn                                         8
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SMRn_INI(n)        \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SMRn_ADDR(n), HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SMRn_RMSK)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SMRn_INMI(n,mask)    \
        in_dword_masked(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SMRn_ADDR(n), mask)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SMRn_OUTI(n,val)    \
        out_dword(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SMRn_ADDR(n),val)
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SMRn_OUTMI(n,mask,val) \
        out_dword_masked_ns(HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SMRn_ADDR(n),mask,val,HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SMRn_INI(n))
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SMRn_VALID_BMSK                          0x80000000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SMRn_VALID_SHFT                                0x1f
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SMRn_MASK_BMSK                              0xf0000
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SMRn_MASK_SHFT                                 0x10
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SMRn_ID_BMSK                                    0xf
#define HWIO_CRYPTO0_CRYPTO_BAM_VMIDMT_SMRn_ID_SHFT                                    0x0

/*----------------------------------------------------------------------------
 * MODULE: DEHR_VMIDMT
 *--------------------------------------------------------------------------*/

#define DEHR_VMIDMT_REG_BASE                                      (DEHR_BIMC_WRAPPER_BASE      + 0x00001000)

#define HWIO_DEHR_VMIDMT_SCR0_ADDR                                (DEHR_VMIDMT_REG_BASE      + 0x00000000)
#define HWIO_DEHR_VMIDMT_SCR0_RMSK                                0x3fd707f5
#define HWIO_DEHR_VMIDMT_SCR0_IN          \
        in_dword_masked(HWIO_DEHR_VMIDMT_SCR0_ADDR, HWIO_DEHR_VMIDMT_SCR0_RMSK)
#define HWIO_DEHR_VMIDMT_SCR0_INM(m)      \
        in_dword_masked(HWIO_DEHR_VMIDMT_SCR0_ADDR, m)
#define HWIO_DEHR_VMIDMT_SCR0_OUT(v)      \
        out_dword(HWIO_DEHR_VMIDMT_SCR0_ADDR,v)
#define HWIO_DEHR_VMIDMT_SCR0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_DEHR_VMIDMT_SCR0_ADDR,m,v,HWIO_DEHR_VMIDMT_SCR0_IN)
#define HWIO_DEHR_VMIDMT_SCR0_NSCFG_BMSK                          0x30000000
#define HWIO_DEHR_VMIDMT_SCR0_NSCFG_SHFT                                0x1c
#define HWIO_DEHR_VMIDMT_SCR0_WACFG_BMSK                           0xc000000
#define HWIO_DEHR_VMIDMT_SCR0_WACFG_SHFT                                0x1a
#define HWIO_DEHR_VMIDMT_SCR0_RACFG_BMSK                           0x3000000
#define HWIO_DEHR_VMIDMT_SCR0_RACFG_SHFT                                0x18
#define HWIO_DEHR_VMIDMT_SCR0_SHCFG_BMSK                            0xc00000
#define HWIO_DEHR_VMIDMT_SCR0_SHCFG_SHFT                                0x16
#define HWIO_DEHR_VMIDMT_SCR0_MTCFG_BMSK                            0x100000
#define HWIO_DEHR_VMIDMT_SCR0_MTCFG_SHFT                                0x14
#define HWIO_DEHR_VMIDMT_SCR0_MEMATTR_BMSK                           0x70000
#define HWIO_DEHR_VMIDMT_SCR0_MEMATTR_SHFT                              0x10
#define HWIO_DEHR_VMIDMT_SCR0_USFCFG_BMSK                              0x400
#define HWIO_DEHR_VMIDMT_SCR0_USFCFG_SHFT                                0xa
#define HWIO_DEHR_VMIDMT_SCR0_GSE_BMSK                                 0x200
#define HWIO_DEHR_VMIDMT_SCR0_GSE_SHFT                                   0x9
#define HWIO_DEHR_VMIDMT_SCR0_STALLD_BMSK                              0x100
#define HWIO_DEHR_VMIDMT_SCR0_STALLD_SHFT                                0x8
#define HWIO_DEHR_VMIDMT_SCR0_TRANSIENTCFG_BMSK                         0xc0
#define HWIO_DEHR_VMIDMT_SCR0_TRANSIENTCFG_SHFT                          0x6
#define HWIO_DEHR_VMIDMT_SCR0_GCFGFIE_BMSK                              0x20
#define HWIO_DEHR_VMIDMT_SCR0_GCFGFIE_SHFT                               0x5
#define HWIO_DEHR_VMIDMT_SCR0_GCFGERE_BMSK                              0x10
#define HWIO_DEHR_VMIDMT_SCR0_GCFGERE_SHFT                               0x4
#define HWIO_DEHR_VMIDMT_SCR0_GFIE_BMSK                                  0x4
#define HWIO_DEHR_VMIDMT_SCR0_GFIE_SHFT                                  0x2
#define HWIO_DEHR_VMIDMT_SCR0_CLIENTPD_BMSK                              0x1
#define HWIO_DEHR_VMIDMT_SCR0_CLIENTPD_SHFT                              0x0

#define HWIO_DEHR_VMIDMT_SCR1_ADDR                                (DEHR_VMIDMT_REG_BASE      + 0x00000004)
#define HWIO_DEHR_VMIDMT_SCR1_RMSK                                 0x1000100
#define HWIO_DEHR_VMIDMT_SCR1_IN          \
        in_dword_masked(HWIO_DEHR_VMIDMT_SCR1_ADDR, HWIO_DEHR_VMIDMT_SCR1_RMSK)
#define HWIO_DEHR_VMIDMT_SCR1_INM(m)      \
        in_dword_masked(HWIO_DEHR_VMIDMT_SCR1_ADDR, m)
#define HWIO_DEHR_VMIDMT_SCR1_OUT(v)      \
        out_dword(HWIO_DEHR_VMIDMT_SCR1_ADDR,v)
#define HWIO_DEHR_VMIDMT_SCR1_OUTM(m,v) \
        out_dword_masked_ns(HWIO_DEHR_VMIDMT_SCR1_ADDR,m,v,HWIO_DEHR_VMIDMT_SCR1_IN)
#define HWIO_DEHR_VMIDMT_SCR1_GASRAE_BMSK                          0x1000000
#define HWIO_DEHR_VMIDMT_SCR1_GASRAE_SHFT                               0x18
#define HWIO_DEHR_VMIDMT_SCR1_NSNUMSMRGO_BMSK                          0x100
#define HWIO_DEHR_VMIDMT_SCR1_NSNUMSMRGO_SHFT                            0x8

#define HWIO_DEHR_VMIDMT_SCR2_ADDR                                (DEHR_VMIDMT_REG_BASE      + 0x00000008)
#define HWIO_DEHR_VMIDMT_SCR2_RMSK                                      0x1f
#define HWIO_DEHR_VMIDMT_SCR2_IN          \
        in_dword_masked(HWIO_DEHR_VMIDMT_SCR2_ADDR, HWIO_DEHR_VMIDMT_SCR2_RMSK)
#define HWIO_DEHR_VMIDMT_SCR2_INM(m)      \
        in_dword_masked(HWIO_DEHR_VMIDMT_SCR2_ADDR, m)
#define HWIO_DEHR_VMIDMT_SCR2_OUT(v)      \
        out_dword(HWIO_DEHR_VMIDMT_SCR2_ADDR,v)
#define HWIO_DEHR_VMIDMT_SCR2_OUTM(m,v) \
        out_dword_masked_ns(HWIO_DEHR_VMIDMT_SCR2_ADDR,m,v,HWIO_DEHR_VMIDMT_SCR2_IN)
#define HWIO_DEHR_VMIDMT_SCR2_BPVMID_BMSK                               0x1f
#define HWIO_DEHR_VMIDMT_SCR2_BPVMID_SHFT                                0x0

#define HWIO_DEHR_VMIDMT_SACR_ADDR                                (DEHR_VMIDMT_REG_BASE      + 0x00000010)
#define HWIO_DEHR_VMIDMT_SACR_RMSK                                0x70000013
#define HWIO_DEHR_VMIDMT_SACR_IN          \
        in_dword_masked(HWIO_DEHR_VMIDMT_SACR_ADDR, HWIO_DEHR_VMIDMT_SACR_RMSK)
#define HWIO_DEHR_VMIDMT_SACR_INM(m)      \
        in_dword_masked(HWIO_DEHR_VMIDMT_SACR_ADDR, m)
#define HWIO_DEHR_VMIDMT_SACR_OUT(v)      \
        out_dword(HWIO_DEHR_VMIDMT_SACR_ADDR,v)
#define HWIO_DEHR_VMIDMT_SACR_OUTM(m,v) \
        out_dword_masked_ns(HWIO_DEHR_VMIDMT_SACR_ADDR,m,v,HWIO_DEHR_VMIDMT_SACR_IN)
#define HWIO_DEHR_VMIDMT_SACR_BPRCNSH_BMSK                        0x40000000
#define HWIO_DEHR_VMIDMT_SACR_BPRCNSH_SHFT                              0x1e
#define HWIO_DEHR_VMIDMT_SACR_BPRCISH_BMSK                        0x20000000
#define HWIO_DEHR_VMIDMT_SACR_BPRCISH_SHFT                              0x1d
#define HWIO_DEHR_VMIDMT_SACR_BPRCOSH_BMSK                        0x10000000
#define HWIO_DEHR_VMIDMT_SACR_BPRCOSH_SHFT                              0x1c
#define HWIO_DEHR_VMIDMT_SACR_BPREQPRIORITYCFG_BMSK                     0x10
#define HWIO_DEHR_VMIDMT_SACR_BPREQPRIORITYCFG_SHFT                      0x4
#define HWIO_DEHR_VMIDMT_SACR_BPREQPRIORITY_BMSK                         0x3
#define HWIO_DEHR_VMIDMT_SACR_BPREQPRIORITY_SHFT                         0x0

#define HWIO_DEHR_VMIDMT_SIDR0_ADDR                               (DEHR_VMIDMT_REG_BASE      + 0x00000020)
#define HWIO_DEHR_VMIDMT_SIDR0_RMSK                               0x88001eff
#define HWIO_DEHR_VMIDMT_SIDR0_IN          \
        in_dword_masked(HWIO_DEHR_VMIDMT_SIDR0_ADDR, HWIO_DEHR_VMIDMT_SIDR0_RMSK)
#define HWIO_DEHR_VMIDMT_SIDR0_INM(m)      \
        in_dword_masked(HWIO_DEHR_VMIDMT_SIDR0_ADDR, m)
#define HWIO_DEHR_VMIDMT_SIDR0_SES_BMSK                           0x80000000
#define HWIO_DEHR_VMIDMT_SIDR0_SES_SHFT                                 0x1f
#define HWIO_DEHR_VMIDMT_SIDR0_SMS_BMSK                            0x8000000
#define HWIO_DEHR_VMIDMT_SIDR0_SMS_SHFT                                 0x1b
#define HWIO_DEHR_VMIDMT_SIDR0_NUMSIDB_BMSK                           0x1e00
#define HWIO_DEHR_VMIDMT_SIDR0_NUMSIDB_SHFT                              0x9
#define HWIO_DEHR_VMIDMT_SIDR0_NUMSMRG_BMSK                             0xff
#define HWIO_DEHR_VMIDMT_SIDR0_NUMSMRG_SHFT                              0x0

#define HWIO_DEHR_VMIDMT_SIDR1_ADDR                               (DEHR_VMIDMT_REG_BASE      + 0x00000024)
#define HWIO_DEHR_VMIDMT_SIDR1_RMSK                                   0x9f00
#define HWIO_DEHR_VMIDMT_SIDR1_IN          \
        in_dword_masked(HWIO_DEHR_VMIDMT_SIDR1_ADDR, HWIO_DEHR_VMIDMT_SIDR1_RMSK)
#define HWIO_DEHR_VMIDMT_SIDR1_INM(m)      \
        in_dword_masked(HWIO_DEHR_VMIDMT_SIDR1_ADDR, m)
#define HWIO_DEHR_VMIDMT_SIDR1_SMCD_BMSK                              0x8000
#define HWIO_DEHR_VMIDMT_SIDR1_SMCD_SHFT                                 0xf
#define HWIO_DEHR_VMIDMT_SIDR1_SSDTP_BMSK                             0x1000
#define HWIO_DEHR_VMIDMT_SIDR1_SSDTP_SHFT                                0xc
#define HWIO_DEHR_VMIDMT_SIDR1_NUMSSDNDX_BMSK                          0xf00
#define HWIO_DEHR_VMIDMT_SIDR1_NUMSSDNDX_SHFT                            0x8

#define HWIO_DEHR_VMIDMT_SIDR2_ADDR                               (DEHR_VMIDMT_REG_BASE      + 0x00000028)
#define HWIO_DEHR_VMIDMT_SIDR2_RMSK                                     0xff
#define HWIO_DEHR_VMIDMT_SIDR2_IN          \
        in_dword_masked(HWIO_DEHR_VMIDMT_SIDR2_ADDR, HWIO_DEHR_VMIDMT_SIDR2_RMSK)
#define HWIO_DEHR_VMIDMT_SIDR2_INM(m)      \
        in_dword_masked(HWIO_DEHR_VMIDMT_SIDR2_ADDR, m)
#define HWIO_DEHR_VMIDMT_SIDR2_OAS_BMSK                                 0xf0
#define HWIO_DEHR_VMIDMT_SIDR2_OAS_SHFT                                  0x4
#define HWIO_DEHR_VMIDMT_SIDR2_IAS_BMSK                                  0xf
#define HWIO_DEHR_VMIDMT_SIDR2_IAS_SHFT                                  0x0

#define HWIO_DEHR_VMIDMT_SIDR4_ADDR                               (DEHR_VMIDMT_REG_BASE      + 0x00000030)
#define HWIO_DEHR_VMIDMT_SIDR4_RMSK                               0xffffffff
#define HWIO_DEHR_VMIDMT_SIDR4_IN          \
        in_dword_masked(HWIO_DEHR_VMIDMT_SIDR4_ADDR, HWIO_DEHR_VMIDMT_SIDR4_RMSK)
#define HWIO_DEHR_VMIDMT_SIDR4_INM(m)      \
        in_dword_masked(HWIO_DEHR_VMIDMT_SIDR4_ADDR, m)
#define HWIO_DEHR_VMIDMT_SIDR4_MAJOR_BMSK                         0xf0000000
#define HWIO_DEHR_VMIDMT_SIDR4_MAJOR_SHFT                               0x1c
#define HWIO_DEHR_VMIDMT_SIDR4_MINOR_BMSK                          0xfff0000
#define HWIO_DEHR_VMIDMT_SIDR4_MINOR_SHFT                               0x10
#define HWIO_DEHR_VMIDMT_SIDR4_STEP_BMSK                              0xffff
#define HWIO_DEHR_VMIDMT_SIDR4_STEP_SHFT                                 0x0

#define HWIO_DEHR_VMIDMT_SIDR5_ADDR                               (DEHR_VMIDMT_REG_BASE      + 0x00000034)
#define HWIO_DEHR_VMIDMT_SIDR5_RMSK                                 0xff03ff
#define HWIO_DEHR_VMIDMT_SIDR5_IN          \
        in_dword_masked(HWIO_DEHR_VMIDMT_SIDR5_ADDR, HWIO_DEHR_VMIDMT_SIDR5_RMSK)
#define HWIO_DEHR_VMIDMT_SIDR5_INM(m)      \
        in_dword_masked(HWIO_DEHR_VMIDMT_SIDR5_ADDR, m)
#define HWIO_DEHR_VMIDMT_SIDR5_NUMMSDRB_BMSK                        0xff0000
#define HWIO_DEHR_VMIDMT_SIDR5_NUMMSDRB_SHFT                            0x10
#define HWIO_DEHR_VMIDMT_SIDR5_MSAE_BMSK                               0x200
#define HWIO_DEHR_VMIDMT_SIDR5_MSAE_SHFT                                 0x9
#define HWIO_DEHR_VMIDMT_SIDR5_QRIBE_BMSK                              0x100
#define HWIO_DEHR_VMIDMT_SIDR5_QRIBE_SHFT                                0x8
#define HWIO_DEHR_VMIDMT_SIDR5_NVMID_BMSK                               0xff
#define HWIO_DEHR_VMIDMT_SIDR5_NVMID_SHFT                                0x0

#define HWIO_DEHR_VMIDMT_SIDR7_ADDR                               (DEHR_VMIDMT_REG_BASE      + 0x0000003c)
#define HWIO_DEHR_VMIDMT_SIDR7_RMSK                                     0xff
#define HWIO_DEHR_VMIDMT_SIDR7_IN          \
        in_dword_masked(HWIO_DEHR_VMIDMT_SIDR7_ADDR, HWIO_DEHR_VMIDMT_SIDR7_RMSK)
#define HWIO_DEHR_VMIDMT_SIDR7_INM(m)      \
        in_dword_masked(HWIO_DEHR_VMIDMT_SIDR7_ADDR, m)
#define HWIO_DEHR_VMIDMT_SIDR7_MAJOR_BMSK                               0xf0
#define HWIO_DEHR_VMIDMT_SIDR7_MAJOR_SHFT                                0x4
#define HWIO_DEHR_VMIDMT_SIDR7_MINOR_BMSK                                0xf
#define HWIO_DEHR_VMIDMT_SIDR7_MINOR_SHFT                                0x0

#define HWIO_DEHR_VMIDMT_SGFAR0_ADDR                              (DEHR_VMIDMT_REG_BASE      + 0x00000040)
#define HWIO_DEHR_VMIDMT_SGFAR0_RMSK                              0xffffffff
#define HWIO_DEHR_VMIDMT_SGFAR0_IN          \
        in_dword_masked(HWIO_DEHR_VMIDMT_SGFAR0_ADDR, HWIO_DEHR_VMIDMT_SGFAR0_RMSK)
#define HWIO_DEHR_VMIDMT_SGFAR0_INM(m)      \
        in_dword_masked(HWIO_DEHR_VMIDMT_SGFAR0_ADDR, m)
#define HWIO_DEHR_VMIDMT_SGFAR0_SGFEA0_BMSK                       0xffffffff
#define HWIO_DEHR_VMIDMT_SGFAR0_SGFEA0_SHFT                              0x0

#define HWIO_DEHR_VMIDMT_SGFSR_ADDR                               (DEHR_VMIDMT_REG_BASE      + 0x00000048)
#define HWIO_DEHR_VMIDMT_SGFSR_RMSK                               0xc0000022
#define HWIO_DEHR_VMIDMT_SGFSR_IN          \
        in_dword_masked(HWIO_DEHR_VMIDMT_SGFSR_ADDR, HWIO_DEHR_VMIDMT_SGFSR_RMSK)
#define HWIO_DEHR_VMIDMT_SGFSR_INM(m)      \
        in_dword_masked(HWIO_DEHR_VMIDMT_SGFSR_ADDR, m)
#define HWIO_DEHR_VMIDMT_SGFSR_OUT(v)      \
        out_dword(HWIO_DEHR_VMIDMT_SGFSR_ADDR,v)
#define HWIO_DEHR_VMIDMT_SGFSR_OUTM(m,v) \
        out_dword_masked_ns(HWIO_DEHR_VMIDMT_SGFSR_ADDR,m,v,HWIO_DEHR_VMIDMT_SGFSR_IN)
#define HWIO_DEHR_VMIDMT_SGFSR_MULTI_CLIENT_BMSK                  0x80000000
#define HWIO_DEHR_VMIDMT_SGFSR_MULTI_CLIENT_SHFT                        0x1f
#define HWIO_DEHR_VMIDMT_SGFSR_MULTI_CFG_BMSK                     0x40000000
#define HWIO_DEHR_VMIDMT_SGFSR_MULTI_CFG_SHFT                           0x1e
#define HWIO_DEHR_VMIDMT_SGFSR_CAF_BMSK                                 0x20
#define HWIO_DEHR_VMIDMT_SGFSR_CAF_SHFT                                  0x5
#define HWIO_DEHR_VMIDMT_SGFSR_USF_BMSK                                  0x2
#define HWIO_DEHR_VMIDMT_SGFSR_USF_SHFT                                  0x1

#define HWIO_DEHR_VMIDMT_SGFSRRESTORE_ADDR                        (DEHR_VMIDMT_REG_BASE      + 0x0000004c)
#define HWIO_DEHR_VMIDMT_SGFSRRESTORE_RMSK                        0xc0000022
#define HWIO_DEHR_VMIDMT_SGFSRRESTORE_IN          \
        in_dword_masked(HWIO_DEHR_VMIDMT_SGFSRRESTORE_ADDR, HWIO_DEHR_VMIDMT_SGFSRRESTORE_RMSK)
#define HWIO_DEHR_VMIDMT_SGFSRRESTORE_INM(m)      \
        in_dword_masked(HWIO_DEHR_VMIDMT_SGFSRRESTORE_ADDR, m)
#define HWIO_DEHR_VMIDMT_SGFSRRESTORE_OUT(v)      \
        out_dword(HWIO_DEHR_VMIDMT_SGFSRRESTORE_ADDR,v)
#define HWIO_DEHR_VMIDMT_SGFSRRESTORE_OUTM(m,v) \
        out_dword_masked_ns(HWIO_DEHR_VMIDMT_SGFSRRESTORE_ADDR,m,v,HWIO_DEHR_VMIDMT_SGFSRRESTORE_IN)
#define HWIO_DEHR_VMIDMT_SGFSRRESTORE_MULTI_CLIENT_BMSK           0x80000000
#define HWIO_DEHR_VMIDMT_SGFSRRESTORE_MULTI_CLIENT_SHFT                 0x1f
#define HWIO_DEHR_VMIDMT_SGFSRRESTORE_MULTI_CFG_BMSK              0x40000000
#define HWIO_DEHR_VMIDMT_SGFSRRESTORE_MULTI_CFG_SHFT                    0x1e
#define HWIO_DEHR_VMIDMT_SGFSRRESTORE_CAF_BMSK                          0x20
#define HWIO_DEHR_VMIDMT_SGFSRRESTORE_CAF_SHFT                           0x5
#define HWIO_DEHR_VMIDMT_SGFSRRESTORE_USF_BMSK                           0x2
#define HWIO_DEHR_VMIDMT_SGFSRRESTORE_USF_SHFT                           0x1

#define HWIO_DEHR_VMIDMT_SGFSYNDR0_ADDR                           (DEHR_VMIDMT_REG_BASE      + 0x00000050)
#define HWIO_DEHR_VMIDMT_SGFSYNDR0_RMSK                                0x132
#define HWIO_DEHR_VMIDMT_SGFSYNDR0_IN          \
        in_dword_masked(HWIO_DEHR_VMIDMT_SGFSYNDR0_ADDR, HWIO_DEHR_VMIDMT_SGFSYNDR0_RMSK)
#define HWIO_DEHR_VMIDMT_SGFSYNDR0_INM(m)      \
        in_dword_masked(HWIO_DEHR_VMIDMT_SGFSYNDR0_ADDR, m)
#define HWIO_DEHR_VMIDMT_SGFSYNDR0_MSSSELFAUTH_BMSK                    0x100
#define HWIO_DEHR_VMIDMT_SGFSYNDR0_MSSSELFAUTH_SHFT                      0x8
#define HWIO_DEHR_VMIDMT_SGFSYNDR0_NSATTR_BMSK                          0x20
#define HWIO_DEHR_VMIDMT_SGFSYNDR0_NSATTR_SHFT                           0x5
#define HWIO_DEHR_VMIDMT_SGFSYNDR0_NSSTATE_BMSK                         0x10
#define HWIO_DEHR_VMIDMT_SGFSYNDR0_NSSTATE_SHFT                          0x4
#define HWIO_DEHR_VMIDMT_SGFSYNDR0_WNR_BMSK                              0x2
#define HWIO_DEHR_VMIDMT_SGFSYNDR0_WNR_SHFT                              0x1

#define HWIO_DEHR_VMIDMT_SGFSYNDR1_ADDR                           (DEHR_VMIDMT_REG_BASE      + 0x00000054)
#define HWIO_DEHR_VMIDMT_SGFSYNDR1_RMSK                            0x1010001
#define HWIO_DEHR_VMIDMT_SGFSYNDR1_IN          \
        in_dword_masked(HWIO_DEHR_VMIDMT_SGFSYNDR1_ADDR, HWIO_DEHR_VMIDMT_SGFSYNDR1_RMSK)
#define HWIO_DEHR_VMIDMT_SGFSYNDR1_INM(m)      \
        in_dword_masked(HWIO_DEHR_VMIDMT_SGFSYNDR1_ADDR, m)
#define HWIO_DEHR_VMIDMT_SGFSYNDR1_MSDINDEX_BMSK                   0x1000000
#define HWIO_DEHR_VMIDMT_SGFSYNDR1_MSDINDEX_SHFT                        0x18
#define HWIO_DEHR_VMIDMT_SGFSYNDR1_SSDINDEX_BMSK                     0x10000
#define HWIO_DEHR_VMIDMT_SGFSYNDR1_SSDINDEX_SHFT                        0x10
#define HWIO_DEHR_VMIDMT_SGFSYNDR1_STREAMINDEX_BMSK                      0x1
#define HWIO_DEHR_VMIDMT_SGFSYNDR1_STREAMINDEX_SHFT                      0x0

#define HWIO_DEHR_VMIDMT_SGFSYNDR2_ADDR                           (DEHR_VMIDMT_REG_BASE      + 0x00000058)
#define HWIO_DEHR_VMIDMT_SGFSYNDR2_RMSK                           0x3f1fffff
#define HWIO_DEHR_VMIDMT_SGFSYNDR2_IN          \
        in_dword_masked(HWIO_DEHR_VMIDMT_SGFSYNDR2_ADDR, HWIO_DEHR_VMIDMT_SGFSYNDR2_RMSK)
#define HWIO_DEHR_VMIDMT_SGFSYNDR2_INM(m)      \
        in_dword_masked(HWIO_DEHR_VMIDMT_SGFSYNDR2_ADDR, m)
#define HWIO_DEHR_VMIDMT_SGFSYNDR2_ATID_BMSK                      0x3f000000
#define HWIO_DEHR_VMIDMT_SGFSYNDR2_ATID_SHFT                            0x18
#define HWIO_DEHR_VMIDMT_SGFSYNDR2_AVMID_BMSK                       0x1f0000
#define HWIO_DEHR_VMIDMT_SGFSYNDR2_AVMID_SHFT                           0x10
#define HWIO_DEHR_VMIDMT_SGFSYNDR2_ABID_BMSK                          0xe000
#define HWIO_DEHR_VMIDMT_SGFSYNDR2_ABID_SHFT                             0xd
#define HWIO_DEHR_VMIDMT_SGFSYNDR2_APID_BMSK                          0x1f00
#define HWIO_DEHR_VMIDMT_SGFSYNDR2_APID_SHFT                             0x8
#define HWIO_DEHR_VMIDMT_SGFSYNDR2_AMID_BMSK                            0xff
#define HWIO_DEHR_VMIDMT_SGFSYNDR2_AMID_SHFT                             0x0

#define HWIO_DEHR_VMIDMT_VMIDMTSCR0_ADDR                          (DEHR_VMIDMT_REG_BASE      + 0x00000090)
#define HWIO_DEHR_VMIDMT_VMIDMTSCR0_RMSK                                 0x1
#define HWIO_DEHR_VMIDMT_VMIDMTSCR0_IN          \
        in_dword_masked(HWIO_DEHR_VMIDMT_VMIDMTSCR0_ADDR, HWIO_DEHR_VMIDMT_VMIDMTSCR0_RMSK)
#define HWIO_DEHR_VMIDMT_VMIDMTSCR0_INM(m)      \
        in_dword_masked(HWIO_DEHR_VMIDMT_VMIDMTSCR0_ADDR, m)
#define HWIO_DEHR_VMIDMT_VMIDMTSCR0_OUT(v)      \
        out_dword(HWIO_DEHR_VMIDMT_VMIDMTSCR0_ADDR,v)
#define HWIO_DEHR_VMIDMT_VMIDMTSCR0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_DEHR_VMIDMT_VMIDMTSCR0_ADDR,m,v,HWIO_DEHR_VMIDMT_VMIDMTSCR0_IN)
#define HWIO_DEHR_VMIDMT_VMIDMTSCR0_CLKONOFFE_BMSK                       0x1
#define HWIO_DEHR_VMIDMT_VMIDMTSCR0_CLKONOFFE_SHFT                       0x0

#define HWIO_DEHR_VMIDMT_CR0_ADDR                                 (DEHR_VMIDMT_REG_BASE      + 0x00000000)
#define HWIO_DEHR_VMIDMT_CR0_RMSK                                  0xfd70ff5
#define HWIO_DEHR_VMIDMT_CR0_IN          \
        in_dword_masked(HWIO_DEHR_VMIDMT_CR0_ADDR, HWIO_DEHR_VMIDMT_CR0_RMSK)
#define HWIO_DEHR_VMIDMT_CR0_INM(m)      \
        in_dword_masked(HWIO_DEHR_VMIDMT_CR0_ADDR, m)
#define HWIO_DEHR_VMIDMT_CR0_OUT(v)      \
        out_dword(HWIO_DEHR_VMIDMT_CR0_ADDR,v)
#define HWIO_DEHR_VMIDMT_CR0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_DEHR_VMIDMT_CR0_ADDR,m,v,HWIO_DEHR_VMIDMT_CR0_IN)
#define HWIO_DEHR_VMIDMT_CR0_WACFG_BMSK                            0xc000000
#define HWIO_DEHR_VMIDMT_CR0_WACFG_SHFT                                 0x1a
#define HWIO_DEHR_VMIDMT_CR0_RACFG_BMSK                            0x3000000
#define HWIO_DEHR_VMIDMT_CR0_RACFG_SHFT                                 0x18
#define HWIO_DEHR_VMIDMT_CR0_SHCFG_BMSK                             0xc00000
#define HWIO_DEHR_VMIDMT_CR0_SHCFG_SHFT                                 0x16
#define HWIO_DEHR_VMIDMT_CR0_MTCFG_BMSK                             0x100000
#define HWIO_DEHR_VMIDMT_CR0_MTCFG_SHFT                                 0x14
#define HWIO_DEHR_VMIDMT_CR0_MEMATTR_BMSK                            0x70000
#define HWIO_DEHR_VMIDMT_CR0_MEMATTR_SHFT                               0x10
#define HWIO_DEHR_VMIDMT_CR0_VMIDPNE_BMSK                              0x800
#define HWIO_DEHR_VMIDMT_CR0_VMIDPNE_SHFT                                0xb
#define HWIO_DEHR_VMIDMT_CR0_USFCFG_BMSK                               0x400
#define HWIO_DEHR_VMIDMT_CR0_USFCFG_SHFT                                 0xa
#define HWIO_DEHR_VMIDMT_CR0_GSE_BMSK                                  0x200
#define HWIO_DEHR_VMIDMT_CR0_GSE_SHFT                                    0x9
#define HWIO_DEHR_VMIDMT_CR0_STALLD_BMSK                               0x100
#define HWIO_DEHR_VMIDMT_CR0_STALLD_SHFT                                 0x8
#define HWIO_DEHR_VMIDMT_CR0_TRANSIENTCFG_BMSK                          0xc0
#define HWIO_DEHR_VMIDMT_CR0_TRANSIENTCFG_SHFT                           0x6
#define HWIO_DEHR_VMIDMT_CR0_GCFGFIE_BMSK                               0x20
#define HWIO_DEHR_VMIDMT_CR0_GCFGFIE_SHFT                                0x5
#define HWIO_DEHR_VMIDMT_CR0_GCFGERE_BMSK                               0x10
#define HWIO_DEHR_VMIDMT_CR0_GCFGERE_SHFT                                0x4
#define HWIO_DEHR_VMIDMT_CR0_GFIE_BMSK                                   0x4
#define HWIO_DEHR_VMIDMT_CR0_GFIE_SHFT                                   0x2
#define HWIO_DEHR_VMIDMT_CR0_CLIENTPD_BMSK                               0x1
#define HWIO_DEHR_VMIDMT_CR0_CLIENTPD_SHFT                               0x0

#define HWIO_DEHR_VMIDMT_CR2_ADDR                                 (DEHR_VMIDMT_REG_BASE      + 0x00000008)
#define HWIO_DEHR_VMIDMT_CR2_RMSK                                       0x1f
#define HWIO_DEHR_VMIDMT_CR2_IN          \
        in_dword_masked(HWIO_DEHR_VMIDMT_CR2_ADDR, HWIO_DEHR_VMIDMT_CR2_RMSK)
#define HWIO_DEHR_VMIDMT_CR2_INM(m)      \
        in_dword_masked(HWIO_DEHR_VMIDMT_CR2_ADDR, m)
#define HWIO_DEHR_VMIDMT_CR2_OUT(v)      \
        out_dword(HWIO_DEHR_VMIDMT_CR2_ADDR,v)
#define HWIO_DEHR_VMIDMT_CR2_OUTM(m,v) \
        out_dword_masked_ns(HWIO_DEHR_VMIDMT_CR2_ADDR,m,v,HWIO_DEHR_VMIDMT_CR2_IN)
#define HWIO_DEHR_VMIDMT_CR2_BPVMID_BMSK                                0x1f
#define HWIO_DEHR_VMIDMT_CR2_BPVMID_SHFT                                 0x0

#define HWIO_DEHR_VMIDMT_ACR_ADDR                                 (DEHR_VMIDMT_REG_BASE      + 0x00000010)
#define HWIO_DEHR_VMIDMT_ACR_RMSK                                 0x70000013
#define HWIO_DEHR_VMIDMT_ACR_IN          \
        in_dword_masked(HWIO_DEHR_VMIDMT_ACR_ADDR, HWIO_DEHR_VMIDMT_ACR_RMSK)
#define HWIO_DEHR_VMIDMT_ACR_INM(m)      \
        in_dword_masked(HWIO_DEHR_VMIDMT_ACR_ADDR, m)
#define HWIO_DEHR_VMIDMT_ACR_OUT(v)      \
        out_dword(HWIO_DEHR_VMIDMT_ACR_ADDR,v)
#define HWIO_DEHR_VMIDMT_ACR_OUTM(m,v) \
        out_dword_masked_ns(HWIO_DEHR_VMIDMT_ACR_ADDR,m,v,HWIO_DEHR_VMIDMT_ACR_IN)
#define HWIO_DEHR_VMIDMT_ACR_BPRCNSH_BMSK                         0x40000000
#define HWIO_DEHR_VMIDMT_ACR_BPRCNSH_SHFT                               0x1e
#define HWIO_DEHR_VMIDMT_ACR_BPRCISH_BMSK                         0x20000000
#define HWIO_DEHR_VMIDMT_ACR_BPRCISH_SHFT                               0x1d
#define HWIO_DEHR_VMIDMT_ACR_BPRCOSH_BMSK                         0x10000000
#define HWIO_DEHR_VMIDMT_ACR_BPRCOSH_SHFT                               0x1c
#define HWIO_DEHR_VMIDMT_ACR_BPREQPRIORITYCFG_BMSK                      0x10
#define HWIO_DEHR_VMIDMT_ACR_BPREQPRIORITYCFG_SHFT                       0x4
#define HWIO_DEHR_VMIDMT_ACR_BPREQPRIORITY_BMSK                          0x3
#define HWIO_DEHR_VMIDMT_ACR_BPREQPRIORITY_SHFT                          0x0

#define HWIO_DEHR_VMIDMT_IDR0_ADDR                                (DEHR_VMIDMT_REG_BASE      + 0x00000020)
#define HWIO_DEHR_VMIDMT_IDR0_RMSK                                 0x8001eff
#define HWIO_DEHR_VMIDMT_IDR0_IN          \
        in_dword_masked(HWIO_DEHR_VMIDMT_IDR0_ADDR, HWIO_DEHR_VMIDMT_IDR0_RMSK)
#define HWIO_DEHR_VMIDMT_IDR0_INM(m)      \
        in_dword_masked(HWIO_DEHR_VMIDMT_IDR0_ADDR, m)
#define HWIO_DEHR_VMIDMT_IDR0_SMS_BMSK                             0x8000000
#define HWIO_DEHR_VMIDMT_IDR0_SMS_SHFT                                  0x1b
#define HWIO_DEHR_VMIDMT_IDR0_NUMSIDB_BMSK                            0x1e00
#define HWIO_DEHR_VMIDMT_IDR0_NUMSIDB_SHFT                               0x9
#define HWIO_DEHR_VMIDMT_IDR0_NUMSMRG_BMSK                              0xff
#define HWIO_DEHR_VMIDMT_IDR0_NUMSMRG_SHFT                               0x0

#define HWIO_DEHR_VMIDMT_IDR1_ADDR                                (DEHR_VMIDMT_REG_BASE      + 0x00000024)
#define HWIO_DEHR_VMIDMT_IDR1_RMSK                                    0x9f00
#define HWIO_DEHR_VMIDMT_IDR1_IN          \
        in_dword_masked(HWIO_DEHR_VMIDMT_IDR1_ADDR, HWIO_DEHR_VMIDMT_IDR1_RMSK)
#define HWIO_DEHR_VMIDMT_IDR1_INM(m)      \
        in_dword_masked(HWIO_DEHR_VMIDMT_IDR1_ADDR, m)
#define HWIO_DEHR_VMIDMT_IDR1_SMCD_BMSK                               0x8000
#define HWIO_DEHR_VMIDMT_IDR1_SMCD_SHFT                                  0xf
#define HWIO_DEHR_VMIDMT_IDR1_SSDTP_BMSK                              0x1000
#define HWIO_DEHR_VMIDMT_IDR1_SSDTP_SHFT                                 0xc
#define HWIO_DEHR_VMIDMT_IDR1_NUMSSDNDX_BMSK                           0xf00
#define HWIO_DEHR_VMIDMT_IDR1_NUMSSDNDX_SHFT                             0x8

#define HWIO_DEHR_VMIDMT_IDR2_ADDR                                (DEHR_VMIDMT_REG_BASE      + 0x00000028)
#define HWIO_DEHR_VMIDMT_IDR2_RMSK                                      0xff
#define HWIO_DEHR_VMIDMT_IDR2_IN          \
        in_dword_masked(HWIO_DEHR_VMIDMT_IDR2_ADDR, HWIO_DEHR_VMIDMT_IDR2_RMSK)
#define HWIO_DEHR_VMIDMT_IDR2_INM(m)      \
        in_dword_masked(HWIO_DEHR_VMIDMT_IDR2_ADDR, m)
#define HWIO_DEHR_VMIDMT_IDR2_OAS_BMSK                                  0xf0
#define HWIO_DEHR_VMIDMT_IDR2_OAS_SHFT                                   0x4
#define HWIO_DEHR_VMIDMT_IDR2_IAS_BMSK                                   0xf
#define HWIO_DEHR_VMIDMT_IDR2_IAS_SHFT                                   0x0

#define HWIO_DEHR_VMIDMT_IDR4_ADDR                                (DEHR_VMIDMT_REG_BASE      + 0x00000030)
#define HWIO_DEHR_VMIDMT_IDR4_RMSK                                0xffffffff
#define HWIO_DEHR_VMIDMT_IDR4_IN          \
        in_dword_masked(HWIO_DEHR_VMIDMT_IDR4_ADDR, HWIO_DEHR_VMIDMT_IDR4_RMSK)
#define HWIO_DEHR_VMIDMT_IDR4_INM(m)      \
        in_dword_masked(HWIO_DEHR_VMIDMT_IDR4_ADDR, m)
#define HWIO_DEHR_VMIDMT_IDR4_MAJOR_BMSK                          0xf0000000
#define HWIO_DEHR_VMIDMT_IDR4_MAJOR_SHFT                                0x1c
#define HWIO_DEHR_VMIDMT_IDR4_MINOR_BMSK                           0xfff0000
#define HWIO_DEHR_VMIDMT_IDR4_MINOR_SHFT                                0x10
#define HWIO_DEHR_VMIDMT_IDR4_STEP_BMSK                               0xffff
#define HWIO_DEHR_VMIDMT_IDR4_STEP_SHFT                                  0x0

#define HWIO_DEHR_VMIDMT_IDR5_ADDR                                (DEHR_VMIDMT_REG_BASE      + 0x00000034)
#define HWIO_DEHR_VMIDMT_IDR5_RMSK                                  0xff03ff
#define HWIO_DEHR_VMIDMT_IDR5_IN          \
        in_dword_masked(HWIO_DEHR_VMIDMT_IDR5_ADDR, HWIO_DEHR_VMIDMT_IDR5_RMSK)
#define HWIO_DEHR_VMIDMT_IDR5_INM(m)      \
        in_dword_masked(HWIO_DEHR_VMIDMT_IDR5_ADDR, m)
#define HWIO_DEHR_VMIDMT_IDR5_NUMMSDRB_BMSK                         0xff0000
#define HWIO_DEHR_VMIDMT_IDR5_NUMMSDRB_SHFT                             0x10
#define HWIO_DEHR_VMIDMT_IDR5_MSAE_BMSK                                0x200
#define HWIO_DEHR_VMIDMT_IDR5_MSAE_SHFT                                  0x9
#define HWIO_DEHR_VMIDMT_IDR5_QRIBE_BMSK                               0x100
#define HWIO_DEHR_VMIDMT_IDR5_QRIBE_SHFT                                 0x8
#define HWIO_DEHR_VMIDMT_IDR5_NVMID_BMSK                                0xff
#define HWIO_DEHR_VMIDMT_IDR5_NVMID_SHFT                                 0x0

#define HWIO_DEHR_VMIDMT_IDR7_ADDR                                (DEHR_VMIDMT_REG_BASE      + 0x0000003c)
#define HWIO_DEHR_VMIDMT_IDR7_RMSK                                      0xff
#define HWIO_DEHR_VMIDMT_IDR7_IN          \
        in_dword_masked(HWIO_DEHR_VMIDMT_IDR7_ADDR, HWIO_DEHR_VMIDMT_IDR7_RMSK)
#define HWIO_DEHR_VMIDMT_IDR7_INM(m)      \
        in_dword_masked(HWIO_DEHR_VMIDMT_IDR7_ADDR, m)
#define HWIO_DEHR_VMIDMT_IDR7_MAJOR_BMSK                                0xf0
#define HWIO_DEHR_VMIDMT_IDR7_MAJOR_SHFT                                 0x4
#define HWIO_DEHR_VMIDMT_IDR7_MINOR_BMSK                                 0xf
#define HWIO_DEHR_VMIDMT_IDR7_MINOR_SHFT                                 0x0

#define HWIO_DEHR_VMIDMT_GFAR0_ADDR                               (DEHR_VMIDMT_REG_BASE      + 0x00000040)
#define HWIO_DEHR_VMIDMT_GFAR0_RMSK                               0xffffffff
#define HWIO_DEHR_VMIDMT_GFAR0_IN          \
        in_dword_masked(HWIO_DEHR_VMIDMT_GFAR0_ADDR, HWIO_DEHR_VMIDMT_GFAR0_RMSK)
#define HWIO_DEHR_VMIDMT_GFAR0_INM(m)      \
        in_dword_masked(HWIO_DEHR_VMIDMT_GFAR0_ADDR, m)
#define HWIO_DEHR_VMIDMT_GFAR0_GFEA0_BMSK                         0xffffffff
#define HWIO_DEHR_VMIDMT_GFAR0_GFEA0_SHFT                                0x0

#define HWIO_DEHR_VMIDMT_GFSR_ADDR                                (DEHR_VMIDMT_REG_BASE      + 0x00000048)
#define HWIO_DEHR_VMIDMT_GFSR_RMSK                                0xc00000a2
#define HWIO_DEHR_VMIDMT_GFSR_IN          \
        in_dword_masked(HWIO_DEHR_VMIDMT_GFSR_ADDR, HWIO_DEHR_VMIDMT_GFSR_RMSK)
#define HWIO_DEHR_VMIDMT_GFSR_INM(m)      \
        in_dword_masked(HWIO_DEHR_VMIDMT_GFSR_ADDR, m)
#define HWIO_DEHR_VMIDMT_GFSR_OUT(v)      \
        out_dword(HWIO_DEHR_VMIDMT_GFSR_ADDR,v)
#define HWIO_DEHR_VMIDMT_GFSR_OUTM(m,v) \
        out_dword_masked_ns(HWIO_DEHR_VMIDMT_GFSR_ADDR,m,v,HWIO_DEHR_VMIDMT_GFSR_IN)
#define HWIO_DEHR_VMIDMT_GFSR_MULTI_CLIENT_BMSK                   0x80000000
#define HWIO_DEHR_VMIDMT_GFSR_MULTI_CLIENT_SHFT                         0x1f
#define HWIO_DEHR_VMIDMT_GFSR_MULTI_CFG_BMSK                      0x40000000
#define HWIO_DEHR_VMIDMT_GFSR_MULTI_CFG_SHFT                            0x1e
#define HWIO_DEHR_VMIDMT_GFSR_PF_BMSK                                   0x80
#define HWIO_DEHR_VMIDMT_GFSR_PF_SHFT                                    0x7
#define HWIO_DEHR_VMIDMT_GFSR_CAF_BMSK                                  0x20
#define HWIO_DEHR_VMIDMT_GFSR_CAF_SHFT                                   0x5
#define HWIO_DEHR_VMIDMT_GFSR_USF_BMSK                                   0x2
#define HWIO_DEHR_VMIDMT_GFSR_USF_SHFT                                   0x1

#define HWIO_DEHR_VMIDMT_GFSRRESTORE_ADDR                         (DEHR_VMIDMT_REG_BASE      + 0x0000004c)
#define HWIO_DEHR_VMIDMT_GFSRRESTORE_RMSK                         0xc00000a2
#define HWIO_DEHR_VMIDMT_GFSRRESTORE_IN          \
        in_dword_masked(HWIO_DEHR_VMIDMT_GFSRRESTORE_ADDR, HWIO_DEHR_VMIDMT_GFSRRESTORE_RMSK)
#define HWIO_DEHR_VMIDMT_GFSRRESTORE_INM(m)      \
        in_dword_masked(HWIO_DEHR_VMIDMT_GFSRRESTORE_ADDR, m)
#define HWIO_DEHR_VMIDMT_GFSRRESTORE_OUT(v)      \
        out_dword(HWIO_DEHR_VMIDMT_GFSRRESTORE_ADDR,v)
#define HWIO_DEHR_VMIDMT_GFSRRESTORE_OUTM(m,v) \
        out_dword_masked_ns(HWIO_DEHR_VMIDMT_GFSRRESTORE_ADDR,m,v,HWIO_DEHR_VMIDMT_GFSRRESTORE_IN)
#define HWIO_DEHR_VMIDMT_GFSRRESTORE_MULTI_CLIENT_BMSK            0x80000000
#define HWIO_DEHR_VMIDMT_GFSRRESTORE_MULTI_CLIENT_SHFT                  0x1f
#define HWIO_DEHR_VMIDMT_GFSRRESTORE_MULTI_CFG_BMSK               0x40000000
#define HWIO_DEHR_VMIDMT_GFSRRESTORE_MULTI_CFG_SHFT                     0x1e
#define HWIO_DEHR_VMIDMT_GFSRRESTORE_PF_BMSK                            0x80
#define HWIO_DEHR_VMIDMT_GFSRRESTORE_PF_SHFT                             0x7
#define HWIO_DEHR_VMIDMT_GFSRRESTORE_CAF_BMSK                           0x20
#define HWIO_DEHR_VMIDMT_GFSRRESTORE_CAF_SHFT                            0x5
#define HWIO_DEHR_VMIDMT_GFSRRESTORE_USF_BMSK                            0x2
#define HWIO_DEHR_VMIDMT_GFSRRESTORE_USF_SHFT                            0x1

#define HWIO_DEHR_VMIDMT_GFSYNDR0_ADDR                            (DEHR_VMIDMT_REG_BASE      + 0x00000050)
#define HWIO_DEHR_VMIDMT_GFSYNDR0_RMSK                                 0x132
#define HWIO_DEHR_VMIDMT_GFSYNDR0_IN          \
        in_dword_masked(HWIO_DEHR_VMIDMT_GFSYNDR0_ADDR, HWIO_DEHR_VMIDMT_GFSYNDR0_RMSK)
#define HWIO_DEHR_VMIDMT_GFSYNDR0_INM(m)      \
        in_dword_masked(HWIO_DEHR_VMIDMT_GFSYNDR0_ADDR, m)
#define HWIO_DEHR_VMIDMT_GFSYNDR0_MSSSELFAUTH_BMSK                     0x100
#define HWIO_DEHR_VMIDMT_GFSYNDR0_MSSSELFAUTH_SHFT                       0x8
#define HWIO_DEHR_VMIDMT_GFSYNDR0_NSATTR_BMSK                           0x20
#define HWIO_DEHR_VMIDMT_GFSYNDR0_NSATTR_SHFT                            0x5
#define HWIO_DEHR_VMIDMT_GFSYNDR0_NSSTATE_BMSK                          0x10
#define HWIO_DEHR_VMIDMT_GFSYNDR0_NSSTATE_SHFT                           0x4
#define HWIO_DEHR_VMIDMT_GFSYNDR0_WNR_BMSK                               0x2
#define HWIO_DEHR_VMIDMT_GFSYNDR0_WNR_SHFT                               0x1

#define HWIO_DEHR_VMIDMT_GFSYNDR1_ADDR                            (DEHR_VMIDMT_REG_BASE      + 0x00000054)
#define HWIO_DEHR_VMIDMT_GFSYNDR1_RMSK                             0x1010001
#define HWIO_DEHR_VMIDMT_GFSYNDR1_IN          \
        in_dword_masked(HWIO_DEHR_VMIDMT_GFSYNDR1_ADDR, HWIO_DEHR_VMIDMT_GFSYNDR1_RMSK)
#define HWIO_DEHR_VMIDMT_GFSYNDR1_INM(m)      \
        in_dword_masked(HWIO_DEHR_VMIDMT_GFSYNDR1_ADDR, m)
#define HWIO_DEHR_VMIDMT_GFSYNDR1_MSDINDEX_BMSK                    0x1000000
#define HWIO_DEHR_VMIDMT_GFSYNDR1_MSDINDEX_SHFT                         0x18
#define HWIO_DEHR_VMIDMT_GFSYNDR1_SSDINDEX_BMSK                      0x10000
#define HWIO_DEHR_VMIDMT_GFSYNDR1_SSDINDEX_SHFT                         0x10
#define HWIO_DEHR_VMIDMT_GFSYNDR1_STREAMINDEX_BMSK                       0x1
#define HWIO_DEHR_VMIDMT_GFSYNDR1_STREAMINDEX_SHFT                       0x0

#define HWIO_DEHR_VMIDMT_GFSYNDR2_ADDR                            (DEHR_VMIDMT_REG_BASE      + 0x00000058)
#define HWIO_DEHR_VMIDMT_GFSYNDR2_RMSK                            0x3f1fffff
#define HWIO_DEHR_VMIDMT_GFSYNDR2_IN          \
        in_dword_masked(HWIO_DEHR_VMIDMT_GFSYNDR2_ADDR, HWIO_DEHR_VMIDMT_GFSYNDR2_RMSK)
#define HWIO_DEHR_VMIDMT_GFSYNDR2_INM(m)      \
        in_dword_masked(HWIO_DEHR_VMIDMT_GFSYNDR2_ADDR, m)
#define HWIO_DEHR_VMIDMT_GFSYNDR2_ATID_BMSK                       0x3f000000
#define HWIO_DEHR_VMIDMT_GFSYNDR2_ATID_SHFT                             0x18
#define HWIO_DEHR_VMIDMT_GFSYNDR2_AVMID_BMSK                        0x1f0000
#define HWIO_DEHR_VMIDMT_GFSYNDR2_AVMID_SHFT                            0x10
#define HWIO_DEHR_VMIDMT_GFSYNDR2_ABID_BMSK                           0xe000
#define HWIO_DEHR_VMIDMT_GFSYNDR2_ABID_SHFT                              0xd
#define HWIO_DEHR_VMIDMT_GFSYNDR2_APID_BMSK                           0x1f00
#define HWIO_DEHR_VMIDMT_GFSYNDR2_APID_SHFT                              0x8
#define HWIO_DEHR_VMIDMT_GFSYNDR2_AMID_BMSK                             0xff
#define HWIO_DEHR_VMIDMT_GFSYNDR2_AMID_SHFT                              0x0

#define HWIO_DEHR_VMIDMT_VMIDMTCR0_ADDR                           (DEHR_VMIDMT_REG_BASE      + 0x00000090)
#define HWIO_DEHR_VMIDMT_VMIDMTCR0_RMSK                                  0x1
#define HWIO_DEHR_VMIDMT_VMIDMTCR0_IN          \
        in_dword_masked(HWIO_DEHR_VMIDMT_VMIDMTCR0_ADDR, HWIO_DEHR_VMIDMT_VMIDMTCR0_RMSK)
#define HWIO_DEHR_VMIDMT_VMIDMTCR0_INM(m)      \
        in_dword_masked(HWIO_DEHR_VMIDMT_VMIDMTCR0_ADDR, m)
#define HWIO_DEHR_VMIDMT_VMIDMTCR0_OUT(v)      \
        out_dword(HWIO_DEHR_VMIDMT_VMIDMTCR0_ADDR,v)
#define HWIO_DEHR_VMIDMT_VMIDMTCR0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_DEHR_VMIDMT_VMIDMTCR0_ADDR,m,v,HWIO_DEHR_VMIDMT_VMIDMTCR0_IN)
#define HWIO_DEHR_VMIDMT_VMIDMTCR0_CLKONOFFE_BMSK                        0x1
#define HWIO_DEHR_VMIDMT_VMIDMTCR0_CLKONOFFE_SHFT                        0x0

#define HWIO_DEHR_VMIDMT_VMIDMTACR_ADDR                           (DEHR_VMIDMT_REG_BASE      + 0x0000009c)
#define HWIO_DEHR_VMIDMT_VMIDMTACR_RMSK                           0xffffffff
#define HWIO_DEHR_VMIDMT_VMIDMTACR_IN          \
        in_dword_masked(HWIO_DEHR_VMIDMT_VMIDMTACR_ADDR, HWIO_DEHR_VMIDMT_VMIDMTACR_RMSK)
#define HWIO_DEHR_VMIDMT_VMIDMTACR_INM(m)      \
        in_dword_masked(HWIO_DEHR_VMIDMT_VMIDMTACR_ADDR, m)
#define HWIO_DEHR_VMIDMT_VMIDMTACR_OUT(v)      \
        out_dword(HWIO_DEHR_VMIDMT_VMIDMTACR_ADDR,v)
#define HWIO_DEHR_VMIDMT_VMIDMTACR_OUTM(m,v) \
        out_dword_masked_ns(HWIO_DEHR_VMIDMT_VMIDMTACR_ADDR,m,v,HWIO_DEHR_VMIDMT_VMIDMTACR_IN)
#define HWIO_DEHR_VMIDMT_VMIDMTACR_RWE_BMSK                       0xffffffff
#define HWIO_DEHR_VMIDMT_VMIDMTACR_RWE_SHFT                              0x0

#define HWIO_DEHR_VMIDMT_NSCR0_ADDR                               (DEHR_VMIDMT_REG_BASE      + 0x00000400)
#define HWIO_DEHR_VMIDMT_NSCR0_RMSK                                0xfd70ff5
#define HWIO_DEHR_VMIDMT_NSCR0_IN          \
        in_dword_masked(HWIO_DEHR_VMIDMT_NSCR0_ADDR, HWIO_DEHR_VMIDMT_NSCR0_RMSK)
#define HWIO_DEHR_VMIDMT_NSCR0_INM(m)      \
        in_dword_masked(HWIO_DEHR_VMIDMT_NSCR0_ADDR, m)
#define HWIO_DEHR_VMIDMT_NSCR0_OUT(v)      \
        out_dword(HWIO_DEHR_VMIDMT_NSCR0_ADDR,v)
#define HWIO_DEHR_VMIDMT_NSCR0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_DEHR_VMIDMT_NSCR0_ADDR,m,v,HWIO_DEHR_VMIDMT_NSCR0_IN)
#define HWIO_DEHR_VMIDMT_NSCR0_WACFG_BMSK                          0xc000000
#define HWIO_DEHR_VMIDMT_NSCR0_WACFG_SHFT                               0x1a
#define HWIO_DEHR_VMIDMT_NSCR0_RACFG_BMSK                          0x3000000
#define HWIO_DEHR_VMIDMT_NSCR0_RACFG_SHFT                               0x18
#define HWIO_DEHR_VMIDMT_NSCR0_SHCFG_BMSK                           0xc00000
#define HWIO_DEHR_VMIDMT_NSCR0_SHCFG_SHFT                               0x16
#define HWIO_DEHR_VMIDMT_NSCR0_MTCFG_BMSK                           0x100000
#define HWIO_DEHR_VMIDMT_NSCR0_MTCFG_SHFT                               0x14
#define HWIO_DEHR_VMIDMT_NSCR0_MEMATTR_BMSK                          0x70000
#define HWIO_DEHR_VMIDMT_NSCR0_MEMATTR_SHFT                             0x10
#define HWIO_DEHR_VMIDMT_NSCR0_VMIDPNE_BMSK                            0x800
#define HWIO_DEHR_VMIDMT_NSCR0_VMIDPNE_SHFT                              0xb
#define HWIO_DEHR_VMIDMT_NSCR0_USFCFG_BMSK                             0x400
#define HWIO_DEHR_VMIDMT_NSCR0_USFCFG_SHFT                               0xa
#define HWIO_DEHR_VMIDMT_NSCR0_GSE_BMSK                                0x200
#define HWIO_DEHR_VMIDMT_NSCR0_GSE_SHFT                                  0x9
#define HWIO_DEHR_VMIDMT_NSCR0_STALLD_BMSK                             0x100
#define HWIO_DEHR_VMIDMT_NSCR0_STALLD_SHFT                               0x8
#define HWIO_DEHR_VMIDMT_NSCR0_TRANSIENTCFG_BMSK                        0xc0
#define HWIO_DEHR_VMIDMT_NSCR0_TRANSIENTCFG_SHFT                         0x6
#define HWIO_DEHR_VMIDMT_NSCR0_GCFGFIE_BMSK                             0x20
#define HWIO_DEHR_VMIDMT_NSCR0_GCFGFIE_SHFT                              0x5
#define HWIO_DEHR_VMIDMT_NSCR0_GCFGERE_BMSK                             0x10
#define HWIO_DEHR_VMIDMT_NSCR0_GCFGERE_SHFT                              0x4
#define HWIO_DEHR_VMIDMT_NSCR0_GFIE_BMSK                                 0x4
#define HWIO_DEHR_VMIDMT_NSCR0_GFIE_SHFT                                 0x2
#define HWIO_DEHR_VMIDMT_NSCR0_CLIENTPD_BMSK                             0x1
#define HWIO_DEHR_VMIDMT_NSCR0_CLIENTPD_SHFT                             0x0

#define HWIO_DEHR_VMIDMT_NSCR2_ADDR                               (DEHR_VMIDMT_REG_BASE      + 0x00000408)
#define HWIO_DEHR_VMIDMT_NSCR2_RMSK                                     0x1f
#define HWIO_DEHR_VMIDMT_NSCR2_IN          \
        in_dword_masked(HWIO_DEHR_VMIDMT_NSCR2_ADDR, HWIO_DEHR_VMIDMT_NSCR2_RMSK)
#define HWIO_DEHR_VMIDMT_NSCR2_INM(m)      \
        in_dword_masked(HWIO_DEHR_VMIDMT_NSCR2_ADDR, m)
#define HWIO_DEHR_VMIDMT_NSCR2_OUT(v)      \
        out_dword(HWIO_DEHR_VMIDMT_NSCR2_ADDR,v)
#define HWIO_DEHR_VMIDMT_NSCR2_OUTM(m,v) \
        out_dword_masked_ns(HWIO_DEHR_VMIDMT_NSCR2_ADDR,m,v,HWIO_DEHR_VMIDMT_NSCR2_IN)
#define HWIO_DEHR_VMIDMT_NSCR2_BPVMID_BMSK                              0x1f
#define HWIO_DEHR_VMIDMT_NSCR2_BPVMID_SHFT                               0x0

#define HWIO_DEHR_VMIDMT_NSACR_ADDR                               (DEHR_VMIDMT_REG_BASE      + 0x00000410)
#define HWIO_DEHR_VMIDMT_NSACR_RMSK                               0x70000013
#define HWIO_DEHR_VMIDMT_NSACR_IN          \
        in_dword_masked(HWIO_DEHR_VMIDMT_NSACR_ADDR, HWIO_DEHR_VMIDMT_NSACR_RMSK)
#define HWIO_DEHR_VMIDMT_NSACR_INM(m)      \
        in_dword_masked(HWIO_DEHR_VMIDMT_NSACR_ADDR, m)
#define HWIO_DEHR_VMIDMT_NSACR_OUT(v)      \
        out_dword(HWIO_DEHR_VMIDMT_NSACR_ADDR,v)
#define HWIO_DEHR_VMIDMT_NSACR_OUTM(m,v) \
        out_dword_masked_ns(HWIO_DEHR_VMIDMT_NSACR_ADDR,m,v,HWIO_DEHR_VMIDMT_NSACR_IN)
#define HWIO_DEHR_VMIDMT_NSACR_BPRCNSH_BMSK                       0x40000000
#define HWIO_DEHR_VMIDMT_NSACR_BPRCNSH_SHFT                             0x1e
#define HWIO_DEHR_VMIDMT_NSACR_BPRCISH_BMSK                       0x20000000
#define HWIO_DEHR_VMIDMT_NSACR_BPRCISH_SHFT                             0x1d
#define HWIO_DEHR_VMIDMT_NSACR_BPRCOSH_BMSK                       0x10000000
#define HWIO_DEHR_VMIDMT_NSACR_BPRCOSH_SHFT                             0x1c
#define HWIO_DEHR_VMIDMT_NSACR_BPREQPRIORITYCFG_BMSK                    0x10
#define HWIO_DEHR_VMIDMT_NSACR_BPREQPRIORITYCFG_SHFT                     0x4
#define HWIO_DEHR_VMIDMT_NSACR_BPREQPRIORITY_BMSK                        0x3
#define HWIO_DEHR_VMIDMT_NSACR_BPREQPRIORITY_SHFT                        0x0

#define HWIO_DEHR_VMIDMT_NSGFAR0_ADDR                             (DEHR_VMIDMT_REG_BASE      + 0x00000440)
#define HWIO_DEHR_VMIDMT_NSGFAR0_RMSK                             0xffffffff
#define HWIO_DEHR_VMIDMT_NSGFAR0_IN          \
        in_dword_masked(HWIO_DEHR_VMIDMT_NSGFAR0_ADDR, HWIO_DEHR_VMIDMT_NSGFAR0_RMSK)
#define HWIO_DEHR_VMIDMT_NSGFAR0_INM(m)      \
        in_dword_masked(HWIO_DEHR_VMIDMT_NSGFAR0_ADDR, m)
#define HWIO_DEHR_VMIDMT_NSGFAR0_GFEA0_BMSK                       0xffffffff
#define HWIO_DEHR_VMIDMT_NSGFAR0_GFEA0_SHFT                              0x0

#define HWIO_DEHR_VMIDMT_NSGFSR_ADDR                              (DEHR_VMIDMT_REG_BASE      + 0x00000448)
#define HWIO_DEHR_VMIDMT_NSGFSR_RMSK                              0xc00000a2
#define HWIO_DEHR_VMIDMT_NSGFSR_IN          \
        in_dword_masked(HWIO_DEHR_VMIDMT_NSGFSR_ADDR, HWIO_DEHR_VMIDMT_NSGFSR_RMSK)
#define HWIO_DEHR_VMIDMT_NSGFSR_INM(m)      \
        in_dword_masked(HWIO_DEHR_VMIDMT_NSGFSR_ADDR, m)
#define HWIO_DEHR_VMIDMT_NSGFSR_OUT(v)      \
        out_dword(HWIO_DEHR_VMIDMT_NSGFSR_ADDR,v)
#define HWIO_DEHR_VMIDMT_NSGFSR_OUTM(m,v) \
        out_dword_masked_ns(HWIO_DEHR_VMIDMT_NSGFSR_ADDR,m,v,HWIO_DEHR_VMIDMT_NSGFSR_IN)
#define HWIO_DEHR_VMIDMT_NSGFSR_MULTI_CLIENT_BMSK                 0x80000000
#define HWIO_DEHR_VMIDMT_NSGFSR_MULTI_CLIENT_SHFT                       0x1f
#define HWIO_DEHR_VMIDMT_NSGFSR_MULTI_CFG_BMSK                    0x40000000
#define HWIO_DEHR_VMIDMT_NSGFSR_MULTI_CFG_SHFT                          0x1e
#define HWIO_DEHR_VMIDMT_NSGFSR_PF_BMSK                                 0x80
#define HWIO_DEHR_VMIDMT_NSGFSR_PF_SHFT                                  0x7
#define HWIO_DEHR_VMIDMT_NSGFSR_CAF_BMSK                                0x20
#define HWIO_DEHR_VMIDMT_NSGFSR_CAF_SHFT                                 0x5
#define HWIO_DEHR_VMIDMT_NSGFSR_USF_BMSK                                 0x2
#define HWIO_DEHR_VMIDMT_NSGFSR_USF_SHFT                                 0x1

#define HWIO_DEHR_VMIDMT_NSGFSRRESTORE_ADDR                       (DEHR_VMIDMT_REG_BASE      + 0x0000044c)
#define HWIO_DEHR_VMIDMT_NSGFSRRESTORE_RMSK                       0xc00000a2
#define HWIO_DEHR_VMIDMT_NSGFSRRESTORE_IN          \
        in_dword_masked(HWIO_DEHR_VMIDMT_NSGFSRRESTORE_ADDR, HWIO_DEHR_VMIDMT_NSGFSRRESTORE_RMSK)
#define HWIO_DEHR_VMIDMT_NSGFSRRESTORE_INM(m)      \
        in_dword_masked(HWIO_DEHR_VMIDMT_NSGFSRRESTORE_ADDR, m)
#define HWIO_DEHR_VMIDMT_NSGFSRRESTORE_OUT(v)      \
        out_dword(HWIO_DEHR_VMIDMT_NSGFSRRESTORE_ADDR,v)
#define HWIO_DEHR_VMIDMT_NSGFSRRESTORE_OUTM(m,v) \
        out_dword_masked_ns(HWIO_DEHR_VMIDMT_NSGFSRRESTORE_ADDR,m,v,HWIO_DEHR_VMIDMT_NSGFSRRESTORE_IN)
#define HWIO_DEHR_VMIDMT_NSGFSRRESTORE_MULTI_CLIENT_BMSK          0x80000000
#define HWIO_DEHR_VMIDMT_NSGFSRRESTORE_MULTI_CLIENT_SHFT                0x1f
#define HWIO_DEHR_VMIDMT_NSGFSRRESTORE_MULTI_CFG_BMSK             0x40000000
#define HWIO_DEHR_VMIDMT_NSGFSRRESTORE_MULTI_CFG_SHFT                   0x1e
#define HWIO_DEHR_VMIDMT_NSGFSRRESTORE_PF_BMSK                          0x80
#define HWIO_DEHR_VMIDMT_NSGFSRRESTORE_PF_SHFT                           0x7
#define HWIO_DEHR_VMIDMT_NSGFSRRESTORE_CAF_BMSK                         0x20
#define HWIO_DEHR_VMIDMT_NSGFSRRESTORE_CAF_SHFT                          0x5
#define HWIO_DEHR_VMIDMT_NSGFSRRESTORE_USF_BMSK                          0x2
#define HWIO_DEHR_VMIDMT_NSGFSRRESTORE_USF_SHFT                          0x1

#define HWIO_DEHR_VMIDMT_NSGFSYNDR0_ADDR                          (DEHR_VMIDMT_REG_BASE      + 0x00000450)
#define HWIO_DEHR_VMIDMT_NSGFSYNDR0_RMSK                               0x132
#define HWIO_DEHR_VMIDMT_NSGFSYNDR0_IN          \
        in_dword_masked(HWIO_DEHR_VMIDMT_NSGFSYNDR0_ADDR, HWIO_DEHR_VMIDMT_NSGFSYNDR0_RMSK)
#define HWIO_DEHR_VMIDMT_NSGFSYNDR0_INM(m)      \
        in_dword_masked(HWIO_DEHR_VMIDMT_NSGFSYNDR0_ADDR, m)
#define HWIO_DEHR_VMIDMT_NSGFSYNDR0_MSSSELFAUTH_BMSK                   0x100
#define HWIO_DEHR_VMIDMT_NSGFSYNDR0_MSSSELFAUTH_SHFT                     0x8
#define HWIO_DEHR_VMIDMT_NSGFSYNDR0_NSATTR_BMSK                         0x20
#define HWIO_DEHR_VMIDMT_NSGFSYNDR0_NSATTR_SHFT                          0x5
#define HWIO_DEHR_VMIDMT_NSGFSYNDR0_NSSTATE_BMSK                        0x10
#define HWIO_DEHR_VMIDMT_NSGFSYNDR0_NSSTATE_SHFT                         0x4
#define HWIO_DEHR_VMIDMT_NSGFSYNDR0_WNR_BMSK                             0x2
#define HWIO_DEHR_VMIDMT_NSGFSYNDR0_WNR_SHFT                             0x1

#define HWIO_DEHR_VMIDMT_NSGFSYNDR1_ADDR                          (DEHR_VMIDMT_REG_BASE      + 0x00000454)
#define HWIO_DEHR_VMIDMT_NSGFSYNDR1_RMSK                           0x1010001
#define HWIO_DEHR_VMIDMT_NSGFSYNDR1_IN          \
        in_dword_masked(HWIO_DEHR_VMIDMT_NSGFSYNDR1_ADDR, HWIO_DEHR_VMIDMT_NSGFSYNDR1_RMSK)
#define HWIO_DEHR_VMIDMT_NSGFSYNDR1_INM(m)      \
        in_dword_masked(HWIO_DEHR_VMIDMT_NSGFSYNDR1_ADDR, m)
#define HWIO_DEHR_VMIDMT_NSGFSYNDR1_MSDINDEX_BMSK                  0x1000000
#define HWIO_DEHR_VMIDMT_NSGFSYNDR1_MSDINDEX_SHFT                       0x18
#define HWIO_DEHR_VMIDMT_NSGFSYNDR1_SSDINDEX_BMSK                    0x10000
#define HWIO_DEHR_VMIDMT_NSGFSYNDR1_SSDINDEX_SHFT                       0x10
#define HWIO_DEHR_VMIDMT_NSGFSYNDR1_STREAMINDEX_BMSK                     0x1
#define HWIO_DEHR_VMIDMT_NSGFSYNDR1_STREAMINDEX_SHFT                     0x0

#define HWIO_DEHR_VMIDMT_NSGFSYNDR2_ADDR                          (DEHR_VMIDMT_REG_BASE      + 0x00000458)
#define HWIO_DEHR_VMIDMT_NSGFSYNDR2_RMSK                          0x3f1fffff
#define HWIO_DEHR_VMIDMT_NSGFSYNDR2_IN          \
        in_dword_masked(HWIO_DEHR_VMIDMT_NSGFSYNDR2_ADDR, HWIO_DEHR_VMIDMT_NSGFSYNDR2_RMSK)
#define HWIO_DEHR_VMIDMT_NSGFSYNDR2_INM(m)      \
        in_dword_masked(HWIO_DEHR_VMIDMT_NSGFSYNDR2_ADDR, m)
#define HWIO_DEHR_VMIDMT_NSGFSYNDR2_ATID_BMSK                     0x3f000000
#define HWIO_DEHR_VMIDMT_NSGFSYNDR2_ATID_SHFT                           0x18
#define HWIO_DEHR_VMIDMT_NSGFSYNDR2_AVMID_BMSK                      0x1f0000
#define HWIO_DEHR_VMIDMT_NSGFSYNDR2_AVMID_SHFT                          0x10
#define HWIO_DEHR_VMIDMT_NSGFSYNDR2_ABID_BMSK                         0xe000
#define HWIO_DEHR_VMIDMT_NSGFSYNDR2_ABID_SHFT                            0xd
#define HWIO_DEHR_VMIDMT_NSGFSYNDR2_APID_BMSK                         0x1f00
#define HWIO_DEHR_VMIDMT_NSGFSYNDR2_APID_SHFT                            0x8
#define HWIO_DEHR_VMIDMT_NSGFSYNDR2_AMID_BMSK                           0xff
#define HWIO_DEHR_VMIDMT_NSGFSYNDR2_AMID_SHFT                            0x0

#define HWIO_DEHR_VMIDMT_NSVMIDMTCR0_ADDR                         (DEHR_VMIDMT_REG_BASE      + 0x00000490)
#define HWIO_DEHR_VMIDMT_NSVMIDMTCR0_RMSK                                0x1
#define HWIO_DEHR_VMIDMT_NSVMIDMTCR0_IN          \
        in_dword_masked(HWIO_DEHR_VMIDMT_NSVMIDMTCR0_ADDR, HWIO_DEHR_VMIDMT_NSVMIDMTCR0_RMSK)
#define HWIO_DEHR_VMIDMT_NSVMIDMTCR0_INM(m)      \
        in_dword_masked(HWIO_DEHR_VMIDMT_NSVMIDMTCR0_ADDR, m)
#define HWIO_DEHR_VMIDMT_NSVMIDMTCR0_OUT(v)      \
        out_dword(HWIO_DEHR_VMIDMT_NSVMIDMTCR0_ADDR,v)
#define HWIO_DEHR_VMIDMT_NSVMIDMTCR0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_DEHR_VMIDMT_NSVMIDMTCR0_ADDR,m,v,HWIO_DEHR_VMIDMT_NSVMIDMTCR0_IN)
#define HWIO_DEHR_VMIDMT_NSVMIDMTCR0_CLKONOFFE_BMSK                      0x1
#define HWIO_DEHR_VMIDMT_NSVMIDMTCR0_CLKONOFFE_SHFT                      0x0

#define HWIO_DEHR_VMIDMT_SSDR0_ADDR                               (DEHR_VMIDMT_REG_BASE      + 0x00000080)
#define HWIO_DEHR_VMIDMT_SSDR0_RMSK                                      0x1
#define HWIO_DEHR_VMIDMT_SSDR0_IN          \
        in_dword_masked(HWIO_DEHR_VMIDMT_SSDR0_ADDR, HWIO_DEHR_VMIDMT_SSDR0_RMSK)
#define HWIO_DEHR_VMIDMT_SSDR0_INM(m)      \
        in_dword_masked(HWIO_DEHR_VMIDMT_SSDR0_ADDR, m)
#define HWIO_DEHR_VMIDMT_SSDR0_OUT(v)      \
        out_dword(HWIO_DEHR_VMIDMT_SSDR0_ADDR,v)
#define HWIO_DEHR_VMIDMT_SSDR0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_DEHR_VMIDMT_SSDR0_ADDR,m,v,HWIO_DEHR_VMIDMT_SSDR0_IN)
#define HWIO_DEHR_VMIDMT_SSDR0_RWE_BMSK                                  0x1
#define HWIO_DEHR_VMIDMT_SSDR0_RWE_SHFT                                  0x0

#define HWIO_DEHR_VMIDMT_MSDR0_ADDR                               (DEHR_VMIDMT_REG_BASE      + 0x00000480)
#define HWIO_DEHR_VMIDMT_MSDR0_RMSK                                      0x1
#define HWIO_DEHR_VMIDMT_MSDR0_IN          \
        in_dword_masked(HWIO_DEHR_VMIDMT_MSDR0_ADDR, HWIO_DEHR_VMIDMT_MSDR0_RMSK)
#define HWIO_DEHR_VMIDMT_MSDR0_INM(m)      \
        in_dword_masked(HWIO_DEHR_VMIDMT_MSDR0_ADDR, m)
#define HWIO_DEHR_VMIDMT_MSDR0_OUT(v)      \
        out_dword(HWIO_DEHR_VMIDMT_MSDR0_ADDR,v)
#define HWIO_DEHR_VMIDMT_MSDR0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_DEHR_VMIDMT_MSDR0_ADDR,m,v,HWIO_DEHR_VMIDMT_MSDR0_IN)
#define HWIO_DEHR_VMIDMT_MSDR0_RWE_BMSK                                  0x1
#define HWIO_DEHR_VMIDMT_MSDR0_RWE_SHFT                                  0x0

#define HWIO_DEHR_VMIDMT_MCR_ADDR                                 (DEHR_VMIDMT_REG_BASE      + 0x00000494)
#define HWIO_DEHR_VMIDMT_MCR_RMSK                                        0x7
#define HWIO_DEHR_VMIDMT_MCR_IN          \
        in_dword_masked(HWIO_DEHR_VMIDMT_MCR_ADDR, HWIO_DEHR_VMIDMT_MCR_RMSK)
#define HWIO_DEHR_VMIDMT_MCR_INM(m)      \
        in_dword_masked(HWIO_DEHR_VMIDMT_MCR_ADDR, m)
#define HWIO_DEHR_VMIDMT_MCR_OUT(v)      \
        out_dword(HWIO_DEHR_VMIDMT_MCR_ADDR,v)
#define HWIO_DEHR_VMIDMT_MCR_OUTM(m,v) \
        out_dword_masked_ns(HWIO_DEHR_VMIDMT_MCR_ADDR,m,v,HWIO_DEHR_VMIDMT_MCR_IN)
#define HWIO_DEHR_VMIDMT_MCR_CLKONOFFE_BMSK                              0x4
#define HWIO_DEHR_VMIDMT_MCR_CLKONOFFE_SHFT                              0x2
#define HWIO_DEHR_VMIDMT_MCR_BPMSACFG_BMSK                               0x2
#define HWIO_DEHR_VMIDMT_MCR_BPMSACFG_SHFT                               0x1
#define HWIO_DEHR_VMIDMT_MCR_BPSMSACFG_BMSK                              0x1
#define HWIO_DEHR_VMIDMT_MCR_BPSMSACFG_SHFT                              0x0

#define HWIO_DEHR_VMIDMT_S2VRn_ADDR(n)                            (DEHR_VMIDMT_REG_BASE      + 0x00000c00 + 0x4 * (n))
#define HWIO_DEHR_VMIDMT_S2VRn_RMSK                               0x30ff7b1f
#define HWIO_DEHR_VMIDMT_S2VRn_MAXn                                        0
#define HWIO_DEHR_VMIDMT_S2VRn_INI(n)        \
        in_dword_masked(HWIO_DEHR_VMIDMT_S2VRn_ADDR(n), HWIO_DEHR_VMIDMT_S2VRn_RMSK)
#define HWIO_DEHR_VMIDMT_S2VRn_INMI(n,mask)    \
        in_dword_masked(HWIO_DEHR_VMIDMT_S2VRn_ADDR(n), mask)
#define HWIO_DEHR_VMIDMT_S2VRn_OUTI(n,val)    \
        out_dword(HWIO_DEHR_VMIDMT_S2VRn_ADDR(n),val)
#define HWIO_DEHR_VMIDMT_S2VRn_OUTMI(n,mask,val) \
        out_dword_masked_ns(HWIO_DEHR_VMIDMT_S2VRn_ADDR(n),mask,val,HWIO_DEHR_VMIDMT_S2VRn_INI(n))
#define HWIO_DEHR_VMIDMT_S2VRn_TRANSIENTCFG_BMSK                  0x30000000
#define HWIO_DEHR_VMIDMT_S2VRn_TRANSIENTCFG_SHFT                        0x1c
#define HWIO_DEHR_VMIDMT_S2VRn_WACFG_BMSK                           0xc00000
#define HWIO_DEHR_VMIDMT_S2VRn_WACFG_SHFT                               0x16
#define HWIO_DEHR_VMIDMT_S2VRn_RACFG_BMSK                           0x300000
#define HWIO_DEHR_VMIDMT_S2VRn_RACFG_SHFT                               0x14
#define HWIO_DEHR_VMIDMT_S2VRn_NSCFG_BMSK                            0xc0000
#define HWIO_DEHR_VMIDMT_S2VRn_NSCFG_SHFT                               0x12
#define HWIO_DEHR_VMIDMT_S2VRn_TYPE_BMSK                             0x30000
#define HWIO_DEHR_VMIDMT_S2VRn_TYPE_SHFT                                0x10
#define HWIO_DEHR_VMIDMT_S2VRn_MEMATTR_BMSK                           0x7000
#define HWIO_DEHR_VMIDMT_S2VRn_MEMATTR_SHFT                              0xc
#define HWIO_DEHR_VMIDMT_S2VRn_MTCFG_BMSK                              0x800
#define HWIO_DEHR_VMIDMT_S2VRn_MTCFG_SHFT                                0xb
#define HWIO_DEHR_VMIDMT_S2VRn_SHCFG_BMSK                              0x300
#define HWIO_DEHR_VMIDMT_S2VRn_SHCFG_SHFT                                0x8
#define HWIO_DEHR_VMIDMT_S2VRn_VMID_BMSK                                0x1f
#define HWIO_DEHR_VMIDMT_S2VRn_VMID_SHFT                                 0x0

#define HWIO_DEHR_VMIDMT_AS2VRn_ADDR(n)                           (DEHR_VMIDMT_REG_BASE      + 0x00000e00 + 0x4 * (n))
#define HWIO_DEHR_VMIDMT_AS2VRn_RMSK                              0x70000013
#define HWIO_DEHR_VMIDMT_AS2VRn_MAXn                                       0
#define HWIO_DEHR_VMIDMT_AS2VRn_INI(n)        \
        in_dword_masked(HWIO_DEHR_VMIDMT_AS2VRn_ADDR(n), HWIO_DEHR_VMIDMT_AS2VRn_RMSK)
#define HWIO_DEHR_VMIDMT_AS2VRn_INMI(n,mask)    \
        in_dword_masked(HWIO_DEHR_VMIDMT_AS2VRn_ADDR(n), mask)
#define HWIO_DEHR_VMIDMT_AS2VRn_OUTI(n,val)    \
        out_dword(HWIO_DEHR_VMIDMT_AS2VRn_ADDR(n),val)
#define HWIO_DEHR_VMIDMT_AS2VRn_OUTMI(n,mask,val) \
        out_dword_masked_ns(HWIO_DEHR_VMIDMT_AS2VRn_ADDR(n),mask,val,HWIO_DEHR_VMIDMT_AS2VRn_INI(n))
#define HWIO_DEHR_VMIDMT_AS2VRn_RCNSH_BMSK                        0x40000000
#define HWIO_DEHR_VMIDMT_AS2VRn_RCNSH_SHFT                              0x1e
#define HWIO_DEHR_VMIDMT_AS2VRn_RCISH_BMSK                        0x20000000
#define HWIO_DEHR_VMIDMT_AS2VRn_RCISH_SHFT                              0x1d
#define HWIO_DEHR_VMIDMT_AS2VRn_RCOSH_BMSK                        0x10000000
#define HWIO_DEHR_VMIDMT_AS2VRn_RCOSH_SHFT                              0x1c
#define HWIO_DEHR_VMIDMT_AS2VRn_REQPRIORITYCFG_BMSK                     0x10
#define HWIO_DEHR_VMIDMT_AS2VRn_REQPRIORITYCFG_SHFT                      0x4
#define HWIO_DEHR_VMIDMT_AS2VRn_REQPRIORITY_BMSK                         0x3
#define HWIO_DEHR_VMIDMT_AS2VRn_REQPRIORITY_SHFT                         0x0

/*----------------------------------------------------------------------------
 * MODULE: EMAC_0_EMAC_VMIDMT
 *--------------------------------------------------------------------------*/

#define EMAC_0_EMAC_VMIDMT_REG_BASE                                      (EMAC_0_EMAC_SGMII_TOP_WRAPPER_LYKAN_BASE      + 0x00014000)

#define HWIO_EMAC_0_EMAC_VMIDMT_SCR0_ADDR                                (EMAC_0_EMAC_VMIDMT_REG_BASE      + 0x00000000)
#define HWIO_EMAC_0_EMAC_VMIDMT_SCR0_RMSK                                0x3fd707f5
#define HWIO_EMAC_0_EMAC_VMIDMT_SCR0_IN          \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_SCR0_ADDR, HWIO_EMAC_0_EMAC_VMIDMT_SCR0_RMSK)
#define HWIO_EMAC_0_EMAC_VMIDMT_SCR0_INM(m)      \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_SCR0_ADDR, m)
#define HWIO_EMAC_0_EMAC_VMIDMT_SCR0_OUT(v)      \
        out_dword(HWIO_EMAC_0_EMAC_VMIDMT_SCR0_ADDR,v)
#define HWIO_EMAC_0_EMAC_VMIDMT_SCR0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_EMAC_0_EMAC_VMIDMT_SCR0_ADDR,m,v,HWIO_EMAC_0_EMAC_VMIDMT_SCR0_IN)
#define HWIO_EMAC_0_EMAC_VMIDMT_SCR0_NSCFG_BMSK                          0x30000000
#define HWIO_EMAC_0_EMAC_VMIDMT_SCR0_NSCFG_SHFT                                0x1c
#define HWIO_EMAC_0_EMAC_VMIDMT_SCR0_WACFG_BMSK                           0xc000000
#define HWIO_EMAC_0_EMAC_VMIDMT_SCR0_WACFG_SHFT                                0x1a
#define HWIO_EMAC_0_EMAC_VMIDMT_SCR0_RACFG_BMSK                           0x3000000
#define HWIO_EMAC_0_EMAC_VMIDMT_SCR0_RACFG_SHFT                                0x18
#define HWIO_EMAC_0_EMAC_VMIDMT_SCR0_SHCFG_BMSK                            0xc00000
#define HWIO_EMAC_0_EMAC_VMIDMT_SCR0_SHCFG_SHFT                                0x16
#define HWIO_EMAC_0_EMAC_VMIDMT_SCR0_MTCFG_BMSK                            0x100000
#define HWIO_EMAC_0_EMAC_VMIDMT_SCR0_MTCFG_SHFT                                0x14
#define HWIO_EMAC_0_EMAC_VMIDMT_SCR0_MEMATTR_BMSK                           0x70000
#define HWIO_EMAC_0_EMAC_VMIDMT_SCR0_MEMATTR_SHFT                              0x10
#define HWIO_EMAC_0_EMAC_VMIDMT_SCR0_USFCFG_BMSK                              0x400
#define HWIO_EMAC_0_EMAC_VMIDMT_SCR0_USFCFG_SHFT                                0xa
#define HWIO_EMAC_0_EMAC_VMIDMT_SCR0_GSE_BMSK                                 0x200
#define HWIO_EMAC_0_EMAC_VMIDMT_SCR0_GSE_SHFT                                   0x9
#define HWIO_EMAC_0_EMAC_VMIDMT_SCR0_STALLD_BMSK                              0x100
#define HWIO_EMAC_0_EMAC_VMIDMT_SCR0_STALLD_SHFT                                0x8
#define HWIO_EMAC_0_EMAC_VMIDMT_SCR0_TRANSIENTCFG_BMSK                         0xc0
#define HWIO_EMAC_0_EMAC_VMIDMT_SCR0_TRANSIENTCFG_SHFT                          0x6
#define HWIO_EMAC_0_EMAC_VMIDMT_SCR0_GCFGFIE_BMSK                              0x20
#define HWIO_EMAC_0_EMAC_VMIDMT_SCR0_GCFGFIE_SHFT                               0x5
#define HWIO_EMAC_0_EMAC_VMIDMT_SCR0_GCFGERE_BMSK                              0x10
#define HWIO_EMAC_0_EMAC_VMIDMT_SCR0_GCFGERE_SHFT                               0x4
#define HWIO_EMAC_0_EMAC_VMIDMT_SCR0_GFIE_BMSK                                  0x4
#define HWIO_EMAC_0_EMAC_VMIDMT_SCR0_GFIE_SHFT                                  0x2
#define HWIO_EMAC_0_EMAC_VMIDMT_SCR0_CLIENTPD_BMSK                              0x1
#define HWIO_EMAC_0_EMAC_VMIDMT_SCR0_CLIENTPD_SHFT                              0x0

#define HWIO_EMAC_0_EMAC_VMIDMT_SCR1_ADDR                                (EMAC_0_EMAC_VMIDMT_REG_BASE      + 0x00000004)
#define HWIO_EMAC_0_EMAC_VMIDMT_SCR1_RMSK                                 0x1000100
#define HWIO_EMAC_0_EMAC_VMIDMT_SCR1_IN          \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_SCR1_ADDR, HWIO_EMAC_0_EMAC_VMIDMT_SCR1_RMSK)
#define HWIO_EMAC_0_EMAC_VMIDMT_SCR1_INM(m)      \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_SCR1_ADDR, m)
#define HWIO_EMAC_0_EMAC_VMIDMT_SCR1_OUT(v)      \
        out_dword(HWIO_EMAC_0_EMAC_VMIDMT_SCR1_ADDR,v)
#define HWIO_EMAC_0_EMAC_VMIDMT_SCR1_OUTM(m,v) \
        out_dword_masked_ns(HWIO_EMAC_0_EMAC_VMIDMT_SCR1_ADDR,m,v,HWIO_EMAC_0_EMAC_VMIDMT_SCR1_IN)
#define HWIO_EMAC_0_EMAC_VMIDMT_SCR1_GASRAE_BMSK                          0x1000000
#define HWIO_EMAC_0_EMAC_VMIDMT_SCR1_GASRAE_SHFT                               0x18
#define HWIO_EMAC_0_EMAC_VMIDMT_SCR1_NSNUMSMRGO_BMSK                          0x100
#define HWIO_EMAC_0_EMAC_VMIDMT_SCR1_NSNUMSMRGO_SHFT                            0x8

#define HWIO_EMAC_0_EMAC_VMIDMT_SCR2_ADDR                                (EMAC_0_EMAC_VMIDMT_REG_BASE      + 0x00000008)
#define HWIO_EMAC_0_EMAC_VMIDMT_SCR2_RMSK                                      0x1f
#define HWIO_EMAC_0_EMAC_VMIDMT_SCR2_IN          \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_SCR2_ADDR, HWIO_EMAC_0_EMAC_VMIDMT_SCR2_RMSK)
#define HWIO_EMAC_0_EMAC_VMIDMT_SCR2_INM(m)      \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_SCR2_ADDR, m)
#define HWIO_EMAC_0_EMAC_VMIDMT_SCR2_OUT(v)      \
        out_dword(HWIO_EMAC_0_EMAC_VMIDMT_SCR2_ADDR,v)
#define HWIO_EMAC_0_EMAC_VMIDMT_SCR2_OUTM(m,v) \
        out_dword_masked_ns(HWIO_EMAC_0_EMAC_VMIDMT_SCR2_ADDR,m,v,HWIO_EMAC_0_EMAC_VMIDMT_SCR2_IN)
#define HWIO_EMAC_0_EMAC_VMIDMT_SCR2_BPVMID_BMSK                               0x1f
#define HWIO_EMAC_0_EMAC_VMIDMT_SCR2_BPVMID_SHFT                                0x0

#define HWIO_EMAC_0_EMAC_VMIDMT_SACR_ADDR                                (EMAC_0_EMAC_VMIDMT_REG_BASE      + 0x00000010)
#define HWIO_EMAC_0_EMAC_VMIDMT_SACR_RMSK                                0x70000013
#define HWIO_EMAC_0_EMAC_VMIDMT_SACR_IN          \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_SACR_ADDR, HWIO_EMAC_0_EMAC_VMIDMT_SACR_RMSK)
#define HWIO_EMAC_0_EMAC_VMIDMT_SACR_INM(m)      \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_SACR_ADDR, m)
#define HWIO_EMAC_0_EMAC_VMIDMT_SACR_OUT(v)      \
        out_dword(HWIO_EMAC_0_EMAC_VMIDMT_SACR_ADDR,v)
#define HWIO_EMAC_0_EMAC_VMIDMT_SACR_OUTM(m,v) \
        out_dword_masked_ns(HWIO_EMAC_0_EMAC_VMIDMT_SACR_ADDR,m,v,HWIO_EMAC_0_EMAC_VMIDMT_SACR_IN)
#define HWIO_EMAC_0_EMAC_VMIDMT_SACR_BPRCNSH_BMSK                        0x40000000
#define HWIO_EMAC_0_EMAC_VMIDMT_SACR_BPRCNSH_SHFT                              0x1e
#define HWIO_EMAC_0_EMAC_VMIDMT_SACR_BPRCISH_BMSK                        0x20000000
#define HWIO_EMAC_0_EMAC_VMIDMT_SACR_BPRCISH_SHFT                              0x1d
#define HWIO_EMAC_0_EMAC_VMIDMT_SACR_BPRCOSH_BMSK                        0x10000000
#define HWIO_EMAC_0_EMAC_VMIDMT_SACR_BPRCOSH_SHFT                              0x1c
#define HWIO_EMAC_0_EMAC_VMIDMT_SACR_BPREQPRIORITYCFG_BMSK                     0x10
#define HWIO_EMAC_0_EMAC_VMIDMT_SACR_BPREQPRIORITYCFG_SHFT                      0x4
#define HWIO_EMAC_0_EMAC_VMIDMT_SACR_BPREQPRIORITY_BMSK                         0x3
#define HWIO_EMAC_0_EMAC_VMIDMT_SACR_BPREQPRIORITY_SHFT                         0x0

#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR0_ADDR                               (EMAC_0_EMAC_VMIDMT_REG_BASE      + 0x00000020)
#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR0_RMSK                               0x88001eff
#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR0_IN          \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_SIDR0_ADDR, HWIO_EMAC_0_EMAC_VMIDMT_SIDR0_RMSK)
#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR0_INM(m)      \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_SIDR0_ADDR, m)
#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR0_SES_BMSK                           0x80000000
#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR0_SES_SHFT                                 0x1f
#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR0_SMS_BMSK                            0x8000000
#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR0_SMS_SHFT                                 0x1b
#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR0_NUMSIDB_BMSK                           0x1e00
#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR0_NUMSIDB_SHFT                              0x9
#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR0_NUMSMRG_BMSK                             0xff
#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR0_NUMSMRG_SHFT                              0x0

#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR1_ADDR                               (EMAC_0_EMAC_VMIDMT_REG_BASE      + 0x00000024)
#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR1_RMSK                                   0x9f00
#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR1_IN          \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_SIDR1_ADDR, HWIO_EMAC_0_EMAC_VMIDMT_SIDR1_RMSK)
#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR1_INM(m)      \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_SIDR1_ADDR, m)
#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR1_SMCD_BMSK                              0x8000
#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR1_SMCD_SHFT                                 0xf
#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR1_SSDTP_BMSK                             0x1000
#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR1_SSDTP_SHFT                                0xc
#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR1_NUMSSDNDX_BMSK                          0xf00
#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR1_NUMSSDNDX_SHFT                            0x8

#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR2_ADDR                               (EMAC_0_EMAC_VMIDMT_REG_BASE      + 0x00000028)
#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR2_RMSK                                     0xff
#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR2_IN          \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_SIDR2_ADDR, HWIO_EMAC_0_EMAC_VMIDMT_SIDR2_RMSK)
#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR2_INM(m)      \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_SIDR2_ADDR, m)
#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR2_OAS_BMSK                                 0xf0
#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR2_OAS_SHFT                                  0x4
#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR2_IAS_BMSK                                  0xf
#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR2_IAS_SHFT                                  0x0

#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR4_ADDR                               (EMAC_0_EMAC_VMIDMT_REG_BASE      + 0x00000030)
#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR4_RMSK                               0xffffffff
#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR4_IN          \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_SIDR4_ADDR, HWIO_EMAC_0_EMAC_VMIDMT_SIDR4_RMSK)
#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR4_INM(m)      \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_SIDR4_ADDR, m)
#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR4_MAJOR_BMSK                         0xf0000000
#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR4_MAJOR_SHFT                               0x1c
#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR4_MINOR_BMSK                          0xfff0000
#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR4_MINOR_SHFT                               0x10
#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR4_STEP_BMSK                              0xffff
#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR4_STEP_SHFT                                 0x0

#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR5_ADDR                               (EMAC_0_EMAC_VMIDMT_REG_BASE      + 0x00000034)
#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR5_RMSK                                 0xff03ff
#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR5_IN          \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_SIDR5_ADDR, HWIO_EMAC_0_EMAC_VMIDMT_SIDR5_RMSK)
#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR5_INM(m)      \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_SIDR5_ADDR, m)
#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR5_NUMMSDRB_BMSK                        0xff0000
#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR5_NUMMSDRB_SHFT                            0x10
#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR5_MSAE_BMSK                               0x200
#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR5_MSAE_SHFT                                 0x9
#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR5_QRIBE_BMSK                              0x100
#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR5_QRIBE_SHFT                                0x8
#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR5_NVMID_BMSK                               0xff
#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR5_NVMID_SHFT                                0x0

#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR7_ADDR                               (EMAC_0_EMAC_VMIDMT_REG_BASE      + 0x0000003c)
#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR7_RMSK                                     0xff
#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR7_IN          \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_SIDR7_ADDR, HWIO_EMAC_0_EMAC_VMIDMT_SIDR7_RMSK)
#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR7_INM(m)      \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_SIDR7_ADDR, m)
#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR7_MAJOR_BMSK                               0xf0
#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR7_MAJOR_SHFT                                0x4
#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR7_MINOR_BMSK                                0xf
#define HWIO_EMAC_0_EMAC_VMIDMT_SIDR7_MINOR_SHFT                                0x0

#define HWIO_EMAC_0_EMAC_VMIDMT_SGFAR0_ADDR                              (EMAC_0_EMAC_VMIDMT_REG_BASE      + 0x00000040)
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFAR0_RMSK                              0xffffffff
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFAR0_IN          \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_SGFAR0_ADDR, HWIO_EMAC_0_EMAC_VMIDMT_SGFAR0_RMSK)
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFAR0_INM(m)      \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_SGFAR0_ADDR, m)
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFAR0_SGFEA0_BMSK                       0xffffffff
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFAR0_SGFEA0_SHFT                              0x0

#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSR_ADDR                               (EMAC_0_EMAC_VMIDMT_REG_BASE      + 0x00000048)
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSR_RMSK                               0xc0000022
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSR_IN          \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_SGFSR_ADDR, HWIO_EMAC_0_EMAC_VMIDMT_SGFSR_RMSK)
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSR_INM(m)      \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_SGFSR_ADDR, m)
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSR_OUT(v)      \
        out_dword(HWIO_EMAC_0_EMAC_VMIDMT_SGFSR_ADDR,v)
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSR_OUTM(m,v) \
        out_dword_masked_ns(HWIO_EMAC_0_EMAC_VMIDMT_SGFSR_ADDR,m,v,HWIO_EMAC_0_EMAC_VMIDMT_SGFSR_IN)
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSR_MULTI_CLIENT_BMSK                  0x80000000
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSR_MULTI_CLIENT_SHFT                        0x1f
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSR_MULTI_CFG_BMSK                     0x40000000
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSR_MULTI_CFG_SHFT                           0x1e
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSR_CAF_BMSK                                 0x20
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSR_CAF_SHFT                                  0x5
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSR_USF_BMSK                                  0x2
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSR_USF_SHFT                                  0x1

#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSRRESTORE_ADDR                        (EMAC_0_EMAC_VMIDMT_REG_BASE      + 0x0000004c)
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSRRESTORE_RMSK                        0xc0000022
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSRRESTORE_IN          \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_SGFSRRESTORE_ADDR, HWIO_EMAC_0_EMAC_VMIDMT_SGFSRRESTORE_RMSK)
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSRRESTORE_INM(m)      \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_SGFSRRESTORE_ADDR, m)
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSRRESTORE_OUT(v)      \
        out_dword(HWIO_EMAC_0_EMAC_VMIDMT_SGFSRRESTORE_ADDR,v)
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSRRESTORE_OUTM(m,v) \
        out_dword_masked_ns(HWIO_EMAC_0_EMAC_VMIDMT_SGFSRRESTORE_ADDR,m,v,HWIO_EMAC_0_EMAC_VMIDMT_SGFSRRESTORE_IN)
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSRRESTORE_MULTI_CLIENT_BMSK           0x80000000
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSRRESTORE_MULTI_CLIENT_SHFT                 0x1f
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSRRESTORE_MULTI_CFG_BMSK              0x40000000
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSRRESTORE_MULTI_CFG_SHFT                    0x1e
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSRRESTORE_CAF_BMSK                          0x20
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSRRESTORE_CAF_SHFT                           0x5
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSRRESTORE_USF_BMSK                           0x2
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSRRESTORE_USF_SHFT                           0x1

#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSYNDR0_ADDR                           (EMAC_0_EMAC_VMIDMT_REG_BASE      + 0x00000050)
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSYNDR0_RMSK                                0x132
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSYNDR0_IN          \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_SGFSYNDR0_ADDR, HWIO_EMAC_0_EMAC_VMIDMT_SGFSYNDR0_RMSK)
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSYNDR0_INM(m)      \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_SGFSYNDR0_ADDR, m)
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSYNDR0_MSSSELFAUTH_BMSK                    0x100
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSYNDR0_MSSSELFAUTH_SHFT                      0x8
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSYNDR0_NSATTR_BMSK                          0x20
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSYNDR0_NSATTR_SHFT                           0x5
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSYNDR0_NSSTATE_BMSK                         0x10
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSYNDR0_NSSTATE_SHFT                          0x4
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSYNDR0_WNR_BMSK                              0x2
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSYNDR0_WNR_SHFT                              0x1

#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSYNDR1_ADDR                           (EMAC_0_EMAC_VMIDMT_REG_BASE      + 0x00000054)
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSYNDR1_RMSK                            0x1010001
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSYNDR1_IN          \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_SGFSYNDR1_ADDR, HWIO_EMAC_0_EMAC_VMIDMT_SGFSYNDR1_RMSK)
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSYNDR1_INM(m)      \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_SGFSYNDR1_ADDR, m)
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSYNDR1_MSDINDEX_BMSK                   0x1000000
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSYNDR1_MSDINDEX_SHFT                        0x18
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSYNDR1_SSDINDEX_BMSK                     0x10000
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSYNDR1_SSDINDEX_SHFT                        0x10
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSYNDR1_STREAMINDEX_BMSK                      0x1
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSYNDR1_STREAMINDEX_SHFT                      0x0

#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSYNDR2_ADDR                           (EMAC_0_EMAC_VMIDMT_REG_BASE      + 0x00000058)
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSYNDR2_RMSK                           0x3f1fffff
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSYNDR2_IN          \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_SGFSYNDR2_ADDR, HWIO_EMAC_0_EMAC_VMIDMT_SGFSYNDR2_RMSK)
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSYNDR2_INM(m)      \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_SGFSYNDR2_ADDR, m)
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSYNDR2_ATID_BMSK                      0x3f000000
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSYNDR2_ATID_SHFT                            0x18
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSYNDR2_AVMID_BMSK                       0x1f0000
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSYNDR2_AVMID_SHFT                           0x10
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSYNDR2_ABID_BMSK                          0xe000
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSYNDR2_ABID_SHFT                             0xd
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSYNDR2_APID_BMSK                          0x1f00
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSYNDR2_APID_SHFT                             0x8
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSYNDR2_AMID_BMSK                            0xff
#define HWIO_EMAC_0_EMAC_VMIDMT_SGFSYNDR2_AMID_SHFT                             0x0

#define HWIO_EMAC_0_EMAC_VMIDMT_VMIDMTSCR0_ADDR                          (EMAC_0_EMAC_VMIDMT_REG_BASE      + 0x00000090)
#define HWIO_EMAC_0_EMAC_VMIDMT_VMIDMTSCR0_RMSK                                 0x1
#define HWIO_EMAC_0_EMAC_VMIDMT_VMIDMTSCR0_IN          \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_VMIDMTSCR0_ADDR, HWIO_EMAC_0_EMAC_VMIDMT_VMIDMTSCR0_RMSK)
#define HWIO_EMAC_0_EMAC_VMIDMT_VMIDMTSCR0_INM(m)      \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_VMIDMTSCR0_ADDR, m)
#define HWIO_EMAC_0_EMAC_VMIDMT_VMIDMTSCR0_OUT(v)      \
        out_dword(HWIO_EMAC_0_EMAC_VMIDMT_VMIDMTSCR0_ADDR,v)
#define HWIO_EMAC_0_EMAC_VMIDMT_VMIDMTSCR0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_EMAC_0_EMAC_VMIDMT_VMIDMTSCR0_ADDR,m,v,HWIO_EMAC_0_EMAC_VMIDMT_VMIDMTSCR0_IN)
#define HWIO_EMAC_0_EMAC_VMIDMT_VMIDMTSCR0_CLKONOFFE_BMSK                       0x1
#define HWIO_EMAC_0_EMAC_VMIDMT_VMIDMTSCR0_CLKONOFFE_SHFT                       0x0

#define HWIO_EMAC_0_EMAC_VMIDMT_CR0_ADDR                                 (EMAC_0_EMAC_VMIDMT_REG_BASE      + 0x00000000)
#define HWIO_EMAC_0_EMAC_VMIDMT_CR0_RMSK                                  0xfd70ff5
#define HWIO_EMAC_0_EMAC_VMIDMT_CR0_IN          \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_CR0_ADDR, HWIO_EMAC_0_EMAC_VMIDMT_CR0_RMSK)
#define HWIO_EMAC_0_EMAC_VMIDMT_CR0_INM(m)      \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_CR0_ADDR, m)
#define HWIO_EMAC_0_EMAC_VMIDMT_CR0_OUT(v)      \
        out_dword(HWIO_EMAC_0_EMAC_VMIDMT_CR0_ADDR,v)
#define HWIO_EMAC_0_EMAC_VMIDMT_CR0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_EMAC_0_EMAC_VMIDMT_CR0_ADDR,m,v,HWIO_EMAC_0_EMAC_VMIDMT_CR0_IN)
#define HWIO_EMAC_0_EMAC_VMIDMT_CR0_WACFG_BMSK                            0xc000000
#define HWIO_EMAC_0_EMAC_VMIDMT_CR0_WACFG_SHFT                                 0x1a
#define HWIO_EMAC_0_EMAC_VMIDMT_CR0_RACFG_BMSK                            0x3000000
#define HWIO_EMAC_0_EMAC_VMIDMT_CR0_RACFG_SHFT                                 0x18
#define HWIO_EMAC_0_EMAC_VMIDMT_CR0_SHCFG_BMSK                             0xc00000
#define HWIO_EMAC_0_EMAC_VMIDMT_CR0_SHCFG_SHFT                                 0x16
#define HWIO_EMAC_0_EMAC_VMIDMT_CR0_MTCFG_BMSK                             0x100000
#define HWIO_EMAC_0_EMAC_VMIDMT_CR0_MTCFG_SHFT                                 0x14
#define HWIO_EMAC_0_EMAC_VMIDMT_CR0_MEMATTR_BMSK                            0x70000
#define HWIO_EMAC_0_EMAC_VMIDMT_CR0_MEMATTR_SHFT                               0x10
#define HWIO_EMAC_0_EMAC_VMIDMT_CR0_VMIDPNE_BMSK                              0x800
#define HWIO_EMAC_0_EMAC_VMIDMT_CR0_VMIDPNE_SHFT                                0xb
#define HWIO_EMAC_0_EMAC_VMIDMT_CR0_USFCFG_BMSK                               0x400
#define HWIO_EMAC_0_EMAC_VMIDMT_CR0_USFCFG_SHFT                                 0xa
#define HWIO_EMAC_0_EMAC_VMIDMT_CR0_GSE_BMSK                                  0x200
#define HWIO_EMAC_0_EMAC_VMIDMT_CR0_GSE_SHFT                                    0x9
#define HWIO_EMAC_0_EMAC_VMIDMT_CR0_STALLD_BMSK                               0x100
#define HWIO_EMAC_0_EMAC_VMIDMT_CR0_STALLD_SHFT                                 0x8
#define HWIO_EMAC_0_EMAC_VMIDMT_CR0_TRANSIENTCFG_BMSK                          0xc0
#define HWIO_EMAC_0_EMAC_VMIDMT_CR0_TRANSIENTCFG_SHFT                           0x6
#define HWIO_EMAC_0_EMAC_VMIDMT_CR0_GCFGFIE_BMSK                               0x20
#define HWIO_EMAC_0_EMAC_VMIDMT_CR0_GCFGFIE_SHFT                                0x5
#define HWIO_EMAC_0_EMAC_VMIDMT_CR0_GCFGERE_BMSK                               0x10
#define HWIO_EMAC_0_EMAC_VMIDMT_CR0_GCFGERE_SHFT                                0x4
#define HWIO_EMAC_0_EMAC_VMIDMT_CR0_GFIE_BMSK                                   0x4
#define HWIO_EMAC_0_EMAC_VMIDMT_CR0_GFIE_SHFT                                   0x2
#define HWIO_EMAC_0_EMAC_VMIDMT_CR0_CLIENTPD_BMSK                               0x1
#define HWIO_EMAC_0_EMAC_VMIDMT_CR0_CLIENTPD_SHFT                               0x0

#define HWIO_EMAC_0_EMAC_VMIDMT_CR2_ADDR                                 (EMAC_0_EMAC_VMIDMT_REG_BASE      + 0x00000008)
#define HWIO_EMAC_0_EMAC_VMIDMT_CR2_RMSK                                       0x1f
#define HWIO_EMAC_0_EMAC_VMIDMT_CR2_IN          \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_CR2_ADDR, HWIO_EMAC_0_EMAC_VMIDMT_CR2_RMSK)
#define HWIO_EMAC_0_EMAC_VMIDMT_CR2_INM(m)      \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_CR2_ADDR, m)
#define HWIO_EMAC_0_EMAC_VMIDMT_CR2_OUT(v)      \
        out_dword(HWIO_EMAC_0_EMAC_VMIDMT_CR2_ADDR,v)
#define HWIO_EMAC_0_EMAC_VMIDMT_CR2_OUTM(m,v) \
        out_dword_masked_ns(HWIO_EMAC_0_EMAC_VMIDMT_CR2_ADDR,m,v,HWIO_EMAC_0_EMAC_VMIDMT_CR2_IN)
#define HWIO_EMAC_0_EMAC_VMIDMT_CR2_BPVMID_BMSK                                0x1f
#define HWIO_EMAC_0_EMAC_VMIDMT_CR2_BPVMID_SHFT                                 0x0

#define HWIO_EMAC_0_EMAC_VMIDMT_ACR_ADDR                                 (EMAC_0_EMAC_VMIDMT_REG_BASE      + 0x00000010)
#define HWIO_EMAC_0_EMAC_VMIDMT_ACR_RMSK                                 0x70000013
#define HWIO_EMAC_0_EMAC_VMIDMT_ACR_IN          \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_ACR_ADDR, HWIO_EMAC_0_EMAC_VMIDMT_ACR_RMSK)
#define HWIO_EMAC_0_EMAC_VMIDMT_ACR_INM(m)      \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_ACR_ADDR, m)
#define HWIO_EMAC_0_EMAC_VMIDMT_ACR_OUT(v)      \
        out_dword(HWIO_EMAC_0_EMAC_VMIDMT_ACR_ADDR,v)
#define HWIO_EMAC_0_EMAC_VMIDMT_ACR_OUTM(m,v) \
        out_dword_masked_ns(HWIO_EMAC_0_EMAC_VMIDMT_ACR_ADDR,m,v,HWIO_EMAC_0_EMAC_VMIDMT_ACR_IN)
#define HWIO_EMAC_0_EMAC_VMIDMT_ACR_BPRCNSH_BMSK                         0x40000000
#define HWIO_EMAC_0_EMAC_VMIDMT_ACR_BPRCNSH_SHFT                               0x1e
#define HWIO_EMAC_0_EMAC_VMIDMT_ACR_BPRCISH_BMSK                         0x20000000
#define HWIO_EMAC_0_EMAC_VMIDMT_ACR_BPRCISH_SHFT                               0x1d
#define HWIO_EMAC_0_EMAC_VMIDMT_ACR_BPRCOSH_BMSK                         0x10000000
#define HWIO_EMAC_0_EMAC_VMIDMT_ACR_BPRCOSH_SHFT                               0x1c
#define HWIO_EMAC_0_EMAC_VMIDMT_ACR_BPREQPRIORITYCFG_BMSK                      0x10
#define HWIO_EMAC_0_EMAC_VMIDMT_ACR_BPREQPRIORITYCFG_SHFT                       0x4
#define HWIO_EMAC_0_EMAC_VMIDMT_ACR_BPREQPRIORITY_BMSK                          0x3
#define HWIO_EMAC_0_EMAC_VMIDMT_ACR_BPREQPRIORITY_SHFT                          0x0

#define HWIO_EMAC_0_EMAC_VMIDMT_IDR0_ADDR                                (EMAC_0_EMAC_VMIDMT_REG_BASE      + 0x00000020)
#define HWIO_EMAC_0_EMAC_VMIDMT_IDR0_RMSK                                 0x8001eff
#define HWIO_EMAC_0_EMAC_VMIDMT_IDR0_IN          \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_IDR0_ADDR, HWIO_EMAC_0_EMAC_VMIDMT_IDR0_RMSK)
#define HWIO_EMAC_0_EMAC_VMIDMT_IDR0_INM(m)      \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_IDR0_ADDR, m)
#define HWIO_EMAC_0_EMAC_VMIDMT_IDR0_SMS_BMSK                             0x8000000
#define HWIO_EMAC_0_EMAC_VMIDMT_IDR0_SMS_SHFT                                  0x1b
#define HWIO_EMAC_0_EMAC_VMIDMT_IDR0_NUMSIDB_BMSK                            0x1e00
#define HWIO_EMAC_0_EMAC_VMIDMT_IDR0_NUMSIDB_SHFT                               0x9
#define HWIO_EMAC_0_EMAC_VMIDMT_IDR0_NUMSMRG_BMSK                              0xff
#define HWIO_EMAC_0_EMAC_VMIDMT_IDR0_NUMSMRG_SHFT                               0x0

#define HWIO_EMAC_0_EMAC_VMIDMT_IDR1_ADDR                                (EMAC_0_EMAC_VMIDMT_REG_BASE      + 0x00000024)
#define HWIO_EMAC_0_EMAC_VMIDMT_IDR1_RMSK                                    0x9f00
#define HWIO_EMAC_0_EMAC_VMIDMT_IDR1_IN          \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_IDR1_ADDR, HWIO_EMAC_0_EMAC_VMIDMT_IDR1_RMSK)
#define HWIO_EMAC_0_EMAC_VMIDMT_IDR1_INM(m)      \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_IDR1_ADDR, m)
#define HWIO_EMAC_0_EMAC_VMIDMT_IDR1_SMCD_BMSK                               0x8000
#define HWIO_EMAC_0_EMAC_VMIDMT_IDR1_SMCD_SHFT                                  0xf
#define HWIO_EMAC_0_EMAC_VMIDMT_IDR1_SSDTP_BMSK                              0x1000
#define HWIO_EMAC_0_EMAC_VMIDMT_IDR1_SSDTP_SHFT                                 0xc
#define HWIO_EMAC_0_EMAC_VMIDMT_IDR1_NUMSSDNDX_BMSK                           0xf00
#define HWIO_EMAC_0_EMAC_VMIDMT_IDR1_NUMSSDNDX_SHFT                             0x8

#define HWIO_EMAC_0_EMAC_VMIDMT_IDR2_ADDR                                (EMAC_0_EMAC_VMIDMT_REG_BASE      + 0x00000028)
#define HWIO_EMAC_0_EMAC_VMIDMT_IDR2_RMSK                                      0xff
#define HWIO_EMAC_0_EMAC_VMIDMT_IDR2_IN          \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_IDR2_ADDR, HWIO_EMAC_0_EMAC_VMIDMT_IDR2_RMSK)
#define HWIO_EMAC_0_EMAC_VMIDMT_IDR2_INM(m)      \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_IDR2_ADDR, m)
#define HWIO_EMAC_0_EMAC_VMIDMT_IDR2_OAS_BMSK                                  0xf0
#define HWIO_EMAC_0_EMAC_VMIDMT_IDR2_OAS_SHFT                                   0x4
#define HWIO_EMAC_0_EMAC_VMIDMT_IDR2_IAS_BMSK                                   0xf
#define HWIO_EMAC_0_EMAC_VMIDMT_IDR2_IAS_SHFT                                   0x0

#define HWIO_EMAC_0_EMAC_VMIDMT_IDR4_ADDR                                (EMAC_0_EMAC_VMIDMT_REG_BASE      + 0x00000030)
#define HWIO_EMAC_0_EMAC_VMIDMT_IDR4_RMSK                                0xffffffff
#define HWIO_EMAC_0_EMAC_VMIDMT_IDR4_IN          \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_IDR4_ADDR, HWIO_EMAC_0_EMAC_VMIDMT_IDR4_RMSK)
#define HWIO_EMAC_0_EMAC_VMIDMT_IDR4_INM(m)      \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_IDR4_ADDR, m)
#define HWIO_EMAC_0_EMAC_VMIDMT_IDR4_MAJOR_BMSK                          0xf0000000
#define HWIO_EMAC_0_EMAC_VMIDMT_IDR4_MAJOR_SHFT                                0x1c
#define HWIO_EMAC_0_EMAC_VMIDMT_IDR4_MINOR_BMSK                           0xfff0000
#define HWIO_EMAC_0_EMAC_VMIDMT_IDR4_MINOR_SHFT                                0x10
#define HWIO_EMAC_0_EMAC_VMIDMT_IDR4_STEP_BMSK                               0xffff
#define HWIO_EMAC_0_EMAC_VMIDMT_IDR4_STEP_SHFT                                  0x0

#define HWIO_EMAC_0_EMAC_VMIDMT_IDR5_ADDR                                (EMAC_0_EMAC_VMIDMT_REG_BASE      + 0x00000034)
#define HWIO_EMAC_0_EMAC_VMIDMT_IDR5_RMSK                                  0xff03ff
#define HWIO_EMAC_0_EMAC_VMIDMT_IDR5_IN          \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_IDR5_ADDR, HWIO_EMAC_0_EMAC_VMIDMT_IDR5_RMSK)
#define HWIO_EMAC_0_EMAC_VMIDMT_IDR5_INM(m)      \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_IDR5_ADDR, m)
#define HWIO_EMAC_0_EMAC_VMIDMT_IDR5_NUMMSDRB_BMSK                         0xff0000
#define HWIO_EMAC_0_EMAC_VMIDMT_IDR5_NUMMSDRB_SHFT                             0x10
#define HWIO_EMAC_0_EMAC_VMIDMT_IDR5_MSAE_BMSK                                0x200
#define HWIO_EMAC_0_EMAC_VMIDMT_IDR5_MSAE_SHFT                                  0x9
#define HWIO_EMAC_0_EMAC_VMIDMT_IDR5_QRIBE_BMSK                               0x100
#define HWIO_EMAC_0_EMAC_VMIDMT_IDR5_QRIBE_SHFT                                 0x8
#define HWIO_EMAC_0_EMAC_VMIDMT_IDR5_NVMID_BMSK                                0xff
#define HWIO_EMAC_0_EMAC_VMIDMT_IDR5_NVMID_SHFT                                 0x0

#define HWIO_EMAC_0_EMAC_VMIDMT_IDR7_ADDR                                (EMAC_0_EMAC_VMIDMT_REG_BASE      + 0x0000003c)
#define HWIO_EMAC_0_EMAC_VMIDMT_IDR7_RMSK                                      0xff
#define HWIO_EMAC_0_EMAC_VMIDMT_IDR7_IN          \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_IDR7_ADDR, HWIO_EMAC_0_EMAC_VMIDMT_IDR7_RMSK)
#define HWIO_EMAC_0_EMAC_VMIDMT_IDR7_INM(m)      \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_IDR7_ADDR, m)
#define HWIO_EMAC_0_EMAC_VMIDMT_IDR7_MAJOR_BMSK                                0xf0
#define HWIO_EMAC_0_EMAC_VMIDMT_IDR7_MAJOR_SHFT                                 0x4
#define HWIO_EMAC_0_EMAC_VMIDMT_IDR7_MINOR_BMSK                                 0xf
#define HWIO_EMAC_0_EMAC_VMIDMT_IDR7_MINOR_SHFT                                 0x0

#define HWIO_EMAC_0_EMAC_VMIDMT_GFAR0_ADDR                               (EMAC_0_EMAC_VMIDMT_REG_BASE      + 0x00000040)
#define HWIO_EMAC_0_EMAC_VMIDMT_GFAR0_RMSK                               0xffffffff
#define HWIO_EMAC_0_EMAC_VMIDMT_GFAR0_IN          \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_GFAR0_ADDR, HWIO_EMAC_0_EMAC_VMIDMT_GFAR0_RMSK)
#define HWIO_EMAC_0_EMAC_VMIDMT_GFAR0_INM(m)      \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_GFAR0_ADDR, m)
#define HWIO_EMAC_0_EMAC_VMIDMT_GFAR0_GFEA0_BMSK                         0xffffffff
#define HWIO_EMAC_0_EMAC_VMIDMT_GFAR0_GFEA0_SHFT                                0x0

#define HWIO_EMAC_0_EMAC_VMIDMT_GFSR_ADDR                                (EMAC_0_EMAC_VMIDMT_REG_BASE      + 0x00000048)
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSR_RMSK                                0xc00000a2
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSR_IN          \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_GFSR_ADDR, HWIO_EMAC_0_EMAC_VMIDMT_GFSR_RMSK)
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSR_INM(m)      \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_GFSR_ADDR, m)
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSR_OUT(v)      \
        out_dword(HWIO_EMAC_0_EMAC_VMIDMT_GFSR_ADDR,v)
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSR_OUTM(m,v) \
        out_dword_masked_ns(HWIO_EMAC_0_EMAC_VMIDMT_GFSR_ADDR,m,v,HWIO_EMAC_0_EMAC_VMIDMT_GFSR_IN)
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSR_MULTI_CLIENT_BMSK                   0x80000000
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSR_MULTI_CLIENT_SHFT                         0x1f
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSR_MULTI_CFG_BMSK                      0x40000000
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSR_MULTI_CFG_SHFT                            0x1e
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSR_PF_BMSK                                   0x80
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSR_PF_SHFT                                    0x7
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSR_CAF_BMSK                                  0x20
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSR_CAF_SHFT                                   0x5
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSR_USF_BMSK                                   0x2
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSR_USF_SHFT                                   0x1

#define HWIO_EMAC_0_EMAC_VMIDMT_GFSRRESTORE_ADDR                         (EMAC_0_EMAC_VMIDMT_REG_BASE      + 0x0000004c)
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSRRESTORE_RMSK                         0xc00000a2
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSRRESTORE_IN          \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_GFSRRESTORE_ADDR, HWIO_EMAC_0_EMAC_VMIDMT_GFSRRESTORE_RMSK)
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSRRESTORE_INM(m)      \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_GFSRRESTORE_ADDR, m)
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSRRESTORE_OUT(v)      \
        out_dword(HWIO_EMAC_0_EMAC_VMIDMT_GFSRRESTORE_ADDR,v)
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSRRESTORE_OUTM(m,v) \
        out_dword_masked_ns(HWIO_EMAC_0_EMAC_VMIDMT_GFSRRESTORE_ADDR,m,v,HWIO_EMAC_0_EMAC_VMIDMT_GFSRRESTORE_IN)
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSRRESTORE_MULTI_CLIENT_BMSK            0x80000000
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSRRESTORE_MULTI_CLIENT_SHFT                  0x1f
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSRRESTORE_MULTI_CFG_BMSK               0x40000000
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSRRESTORE_MULTI_CFG_SHFT                     0x1e
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSRRESTORE_PF_BMSK                            0x80
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSRRESTORE_PF_SHFT                             0x7
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSRRESTORE_CAF_BMSK                           0x20
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSRRESTORE_CAF_SHFT                            0x5
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSRRESTORE_USF_BMSK                            0x2
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSRRESTORE_USF_SHFT                            0x1

#define HWIO_EMAC_0_EMAC_VMIDMT_GFSYNDR0_ADDR                            (EMAC_0_EMAC_VMIDMT_REG_BASE      + 0x00000050)
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSYNDR0_RMSK                                 0x132
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSYNDR0_IN          \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_GFSYNDR0_ADDR, HWIO_EMAC_0_EMAC_VMIDMT_GFSYNDR0_RMSK)
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSYNDR0_INM(m)      \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_GFSYNDR0_ADDR, m)
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSYNDR0_MSSSELFAUTH_BMSK                     0x100
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSYNDR0_MSSSELFAUTH_SHFT                       0x8
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSYNDR0_NSATTR_BMSK                           0x20
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSYNDR0_NSATTR_SHFT                            0x5
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSYNDR0_NSSTATE_BMSK                          0x10
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSYNDR0_NSSTATE_SHFT                           0x4
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSYNDR0_WNR_BMSK                               0x2
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSYNDR0_WNR_SHFT                               0x1

#define HWIO_EMAC_0_EMAC_VMIDMT_GFSYNDR1_ADDR                            (EMAC_0_EMAC_VMIDMT_REG_BASE      + 0x00000054)
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSYNDR1_RMSK                             0x1010001
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSYNDR1_IN          \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_GFSYNDR1_ADDR, HWIO_EMAC_0_EMAC_VMIDMT_GFSYNDR1_RMSK)
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSYNDR1_INM(m)      \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_GFSYNDR1_ADDR, m)
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSYNDR1_MSDINDEX_BMSK                    0x1000000
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSYNDR1_MSDINDEX_SHFT                         0x18
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSYNDR1_SSDINDEX_BMSK                      0x10000
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSYNDR1_SSDINDEX_SHFT                         0x10
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSYNDR1_STREAMINDEX_BMSK                       0x1
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSYNDR1_STREAMINDEX_SHFT                       0x0

#define HWIO_EMAC_0_EMAC_VMIDMT_GFSYNDR2_ADDR                            (EMAC_0_EMAC_VMIDMT_REG_BASE      + 0x00000058)
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSYNDR2_RMSK                            0x3f1fffff
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSYNDR2_IN          \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_GFSYNDR2_ADDR, HWIO_EMAC_0_EMAC_VMIDMT_GFSYNDR2_RMSK)
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSYNDR2_INM(m)      \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_GFSYNDR2_ADDR, m)
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSYNDR2_ATID_BMSK                       0x3f000000
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSYNDR2_ATID_SHFT                             0x18
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSYNDR2_AVMID_BMSK                        0x1f0000
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSYNDR2_AVMID_SHFT                            0x10
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSYNDR2_ABID_BMSK                           0xe000
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSYNDR2_ABID_SHFT                              0xd
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSYNDR2_APID_BMSK                           0x1f00
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSYNDR2_APID_SHFT                              0x8
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSYNDR2_AMID_BMSK                             0xff
#define HWIO_EMAC_0_EMAC_VMIDMT_GFSYNDR2_AMID_SHFT                              0x0

#define HWIO_EMAC_0_EMAC_VMIDMT_VMIDMTCR0_ADDR                           (EMAC_0_EMAC_VMIDMT_REG_BASE      + 0x00000090)
#define HWIO_EMAC_0_EMAC_VMIDMT_VMIDMTCR0_RMSK                                  0x1
#define HWIO_EMAC_0_EMAC_VMIDMT_VMIDMTCR0_IN          \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_VMIDMTCR0_ADDR, HWIO_EMAC_0_EMAC_VMIDMT_VMIDMTCR0_RMSK)
#define HWIO_EMAC_0_EMAC_VMIDMT_VMIDMTCR0_INM(m)      \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_VMIDMTCR0_ADDR, m)
#define HWIO_EMAC_0_EMAC_VMIDMT_VMIDMTCR0_OUT(v)      \
        out_dword(HWIO_EMAC_0_EMAC_VMIDMT_VMIDMTCR0_ADDR,v)
#define HWIO_EMAC_0_EMAC_VMIDMT_VMIDMTCR0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_EMAC_0_EMAC_VMIDMT_VMIDMTCR0_ADDR,m,v,HWIO_EMAC_0_EMAC_VMIDMT_VMIDMTCR0_IN)
#define HWIO_EMAC_0_EMAC_VMIDMT_VMIDMTCR0_CLKONOFFE_BMSK                        0x1
#define HWIO_EMAC_0_EMAC_VMIDMT_VMIDMTCR0_CLKONOFFE_SHFT                        0x0

#define HWIO_EMAC_0_EMAC_VMIDMT_VMIDMTACR_ADDR                           (EMAC_0_EMAC_VMIDMT_REG_BASE      + 0x0000009c)
#define HWIO_EMAC_0_EMAC_VMIDMT_VMIDMTACR_RMSK                           0xffffffff
#define HWIO_EMAC_0_EMAC_VMIDMT_VMIDMTACR_IN          \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_VMIDMTACR_ADDR, HWIO_EMAC_0_EMAC_VMIDMT_VMIDMTACR_RMSK)
#define HWIO_EMAC_0_EMAC_VMIDMT_VMIDMTACR_INM(m)      \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_VMIDMTACR_ADDR, m)
#define HWIO_EMAC_0_EMAC_VMIDMT_VMIDMTACR_OUT(v)      \
        out_dword(HWIO_EMAC_0_EMAC_VMIDMT_VMIDMTACR_ADDR,v)
#define HWIO_EMAC_0_EMAC_VMIDMT_VMIDMTACR_OUTM(m,v) \
        out_dword_masked_ns(HWIO_EMAC_0_EMAC_VMIDMT_VMIDMTACR_ADDR,m,v,HWIO_EMAC_0_EMAC_VMIDMT_VMIDMTACR_IN)
#define HWIO_EMAC_0_EMAC_VMIDMT_VMIDMTACR_RWE_BMSK                       0xffffffff
#define HWIO_EMAC_0_EMAC_VMIDMT_VMIDMTACR_RWE_SHFT                              0x0

#define HWIO_EMAC_0_EMAC_VMIDMT_NSCR0_ADDR                               (EMAC_0_EMAC_VMIDMT_REG_BASE      + 0x00000400)
#define HWIO_EMAC_0_EMAC_VMIDMT_NSCR0_RMSK                                0xfd70ff5
#define HWIO_EMAC_0_EMAC_VMIDMT_NSCR0_IN          \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_NSCR0_ADDR, HWIO_EMAC_0_EMAC_VMIDMT_NSCR0_RMSK)
#define HWIO_EMAC_0_EMAC_VMIDMT_NSCR0_INM(m)      \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_NSCR0_ADDR, m)
#define HWIO_EMAC_0_EMAC_VMIDMT_NSCR0_OUT(v)      \
        out_dword(HWIO_EMAC_0_EMAC_VMIDMT_NSCR0_ADDR,v)
#define HWIO_EMAC_0_EMAC_VMIDMT_NSCR0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_EMAC_0_EMAC_VMIDMT_NSCR0_ADDR,m,v,HWIO_EMAC_0_EMAC_VMIDMT_NSCR0_IN)
#define HWIO_EMAC_0_EMAC_VMIDMT_NSCR0_WACFG_BMSK                          0xc000000
#define HWIO_EMAC_0_EMAC_VMIDMT_NSCR0_WACFG_SHFT                               0x1a
#define HWIO_EMAC_0_EMAC_VMIDMT_NSCR0_RACFG_BMSK                          0x3000000
#define HWIO_EMAC_0_EMAC_VMIDMT_NSCR0_RACFG_SHFT                               0x18
#define HWIO_EMAC_0_EMAC_VMIDMT_NSCR0_SHCFG_BMSK                           0xc00000
#define HWIO_EMAC_0_EMAC_VMIDMT_NSCR0_SHCFG_SHFT                               0x16
#define HWIO_EMAC_0_EMAC_VMIDMT_NSCR0_MTCFG_BMSK                           0x100000
#define HWIO_EMAC_0_EMAC_VMIDMT_NSCR0_MTCFG_SHFT                               0x14
#define HWIO_EMAC_0_EMAC_VMIDMT_NSCR0_MEMATTR_BMSK                          0x70000
#define HWIO_EMAC_0_EMAC_VMIDMT_NSCR0_MEMATTR_SHFT                             0x10
#define HWIO_EMAC_0_EMAC_VMIDMT_NSCR0_VMIDPNE_BMSK                            0x800
#define HWIO_EMAC_0_EMAC_VMIDMT_NSCR0_VMIDPNE_SHFT                              0xb
#define HWIO_EMAC_0_EMAC_VMIDMT_NSCR0_USFCFG_BMSK                             0x400
#define HWIO_EMAC_0_EMAC_VMIDMT_NSCR0_USFCFG_SHFT                               0xa
#define HWIO_EMAC_0_EMAC_VMIDMT_NSCR0_GSE_BMSK                                0x200
#define HWIO_EMAC_0_EMAC_VMIDMT_NSCR0_GSE_SHFT                                  0x9
#define HWIO_EMAC_0_EMAC_VMIDMT_NSCR0_STALLD_BMSK                             0x100
#define HWIO_EMAC_0_EMAC_VMIDMT_NSCR0_STALLD_SHFT                               0x8
#define HWIO_EMAC_0_EMAC_VMIDMT_NSCR0_TRANSIENTCFG_BMSK                        0xc0
#define HWIO_EMAC_0_EMAC_VMIDMT_NSCR0_TRANSIENTCFG_SHFT                         0x6
#define HWIO_EMAC_0_EMAC_VMIDMT_NSCR0_GCFGFIE_BMSK                             0x20
#define HWIO_EMAC_0_EMAC_VMIDMT_NSCR0_GCFGFIE_SHFT                              0x5
#define HWIO_EMAC_0_EMAC_VMIDMT_NSCR0_GCFGERE_BMSK                             0x10
#define HWIO_EMAC_0_EMAC_VMIDMT_NSCR0_GCFGERE_SHFT                              0x4
#define HWIO_EMAC_0_EMAC_VMIDMT_NSCR0_GFIE_BMSK                                 0x4
#define HWIO_EMAC_0_EMAC_VMIDMT_NSCR0_GFIE_SHFT                                 0x2
#define HWIO_EMAC_0_EMAC_VMIDMT_NSCR0_CLIENTPD_BMSK                             0x1
#define HWIO_EMAC_0_EMAC_VMIDMT_NSCR0_CLIENTPD_SHFT                             0x0

#define HWIO_EMAC_0_EMAC_VMIDMT_NSCR2_ADDR                               (EMAC_0_EMAC_VMIDMT_REG_BASE      + 0x00000408)
#define HWIO_EMAC_0_EMAC_VMIDMT_NSCR2_RMSK                                     0x1f
#define HWIO_EMAC_0_EMAC_VMIDMT_NSCR2_IN          \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_NSCR2_ADDR, HWIO_EMAC_0_EMAC_VMIDMT_NSCR2_RMSK)
#define HWIO_EMAC_0_EMAC_VMIDMT_NSCR2_INM(m)      \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_NSCR2_ADDR, m)
#define HWIO_EMAC_0_EMAC_VMIDMT_NSCR2_OUT(v)      \
        out_dword(HWIO_EMAC_0_EMAC_VMIDMT_NSCR2_ADDR,v)
#define HWIO_EMAC_0_EMAC_VMIDMT_NSCR2_OUTM(m,v) \
        out_dword_masked_ns(HWIO_EMAC_0_EMAC_VMIDMT_NSCR2_ADDR,m,v,HWIO_EMAC_0_EMAC_VMIDMT_NSCR2_IN)
#define HWIO_EMAC_0_EMAC_VMIDMT_NSCR2_BPVMID_BMSK                              0x1f
#define HWIO_EMAC_0_EMAC_VMIDMT_NSCR2_BPVMID_SHFT                               0x0

#define HWIO_EMAC_0_EMAC_VMIDMT_NSACR_ADDR                               (EMAC_0_EMAC_VMIDMT_REG_BASE      + 0x00000410)
#define HWIO_EMAC_0_EMAC_VMIDMT_NSACR_RMSK                               0x70000013
#define HWIO_EMAC_0_EMAC_VMIDMT_NSACR_IN          \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_NSACR_ADDR, HWIO_EMAC_0_EMAC_VMIDMT_NSACR_RMSK)
#define HWIO_EMAC_0_EMAC_VMIDMT_NSACR_INM(m)      \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_NSACR_ADDR, m)
#define HWIO_EMAC_0_EMAC_VMIDMT_NSACR_OUT(v)      \
        out_dword(HWIO_EMAC_0_EMAC_VMIDMT_NSACR_ADDR,v)
#define HWIO_EMAC_0_EMAC_VMIDMT_NSACR_OUTM(m,v) \
        out_dword_masked_ns(HWIO_EMAC_0_EMAC_VMIDMT_NSACR_ADDR,m,v,HWIO_EMAC_0_EMAC_VMIDMT_NSACR_IN)
#define HWIO_EMAC_0_EMAC_VMIDMT_NSACR_BPRCNSH_BMSK                       0x40000000
#define HWIO_EMAC_0_EMAC_VMIDMT_NSACR_BPRCNSH_SHFT                             0x1e
#define HWIO_EMAC_0_EMAC_VMIDMT_NSACR_BPRCISH_BMSK                       0x20000000
#define HWIO_EMAC_0_EMAC_VMIDMT_NSACR_BPRCISH_SHFT                             0x1d
#define HWIO_EMAC_0_EMAC_VMIDMT_NSACR_BPRCOSH_BMSK                       0x10000000
#define HWIO_EMAC_0_EMAC_VMIDMT_NSACR_BPRCOSH_SHFT                             0x1c
#define HWIO_EMAC_0_EMAC_VMIDMT_NSACR_BPREQPRIORITYCFG_BMSK                    0x10
#define HWIO_EMAC_0_EMAC_VMIDMT_NSACR_BPREQPRIORITYCFG_SHFT                     0x4
#define HWIO_EMAC_0_EMAC_VMIDMT_NSACR_BPREQPRIORITY_BMSK                        0x3
#define HWIO_EMAC_0_EMAC_VMIDMT_NSACR_BPREQPRIORITY_SHFT                        0x0

#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFAR0_ADDR                             (EMAC_0_EMAC_VMIDMT_REG_BASE      + 0x00000440)
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFAR0_RMSK                             0xffffffff
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFAR0_IN          \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_NSGFAR0_ADDR, HWIO_EMAC_0_EMAC_VMIDMT_NSGFAR0_RMSK)
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFAR0_INM(m)      \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_NSGFAR0_ADDR, m)
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFAR0_GFEA0_BMSK                       0xffffffff
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFAR0_GFEA0_SHFT                              0x0

#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSR_ADDR                              (EMAC_0_EMAC_VMIDMT_REG_BASE      + 0x00000448)
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSR_RMSK                              0xc00000a2
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSR_IN          \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_NSGFSR_ADDR, HWIO_EMAC_0_EMAC_VMIDMT_NSGFSR_RMSK)
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSR_INM(m)      \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_NSGFSR_ADDR, m)
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSR_OUT(v)      \
        out_dword(HWIO_EMAC_0_EMAC_VMIDMT_NSGFSR_ADDR,v)
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSR_OUTM(m,v) \
        out_dword_masked_ns(HWIO_EMAC_0_EMAC_VMIDMT_NSGFSR_ADDR,m,v,HWIO_EMAC_0_EMAC_VMIDMT_NSGFSR_IN)
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSR_MULTI_CLIENT_BMSK                 0x80000000
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSR_MULTI_CLIENT_SHFT                       0x1f
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSR_MULTI_CFG_BMSK                    0x40000000
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSR_MULTI_CFG_SHFT                          0x1e
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSR_PF_BMSK                                 0x80
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSR_PF_SHFT                                  0x7
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSR_CAF_BMSK                                0x20
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSR_CAF_SHFT                                 0x5
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSR_USF_BMSK                                 0x2
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSR_USF_SHFT                                 0x1

#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSRRESTORE_ADDR                       (EMAC_0_EMAC_VMIDMT_REG_BASE      + 0x0000044c)
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSRRESTORE_RMSK                       0xc00000a2
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSRRESTORE_IN          \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_NSGFSRRESTORE_ADDR, HWIO_EMAC_0_EMAC_VMIDMT_NSGFSRRESTORE_RMSK)
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSRRESTORE_INM(m)      \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_NSGFSRRESTORE_ADDR, m)
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSRRESTORE_OUT(v)      \
        out_dword(HWIO_EMAC_0_EMAC_VMIDMT_NSGFSRRESTORE_ADDR,v)
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSRRESTORE_OUTM(m,v) \
        out_dword_masked_ns(HWIO_EMAC_0_EMAC_VMIDMT_NSGFSRRESTORE_ADDR,m,v,HWIO_EMAC_0_EMAC_VMIDMT_NSGFSRRESTORE_IN)
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSRRESTORE_MULTI_CLIENT_BMSK          0x80000000
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSRRESTORE_MULTI_CLIENT_SHFT                0x1f
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSRRESTORE_MULTI_CFG_BMSK             0x40000000
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSRRESTORE_MULTI_CFG_SHFT                   0x1e
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSRRESTORE_PF_BMSK                          0x80
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSRRESTORE_PF_SHFT                           0x7
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSRRESTORE_CAF_BMSK                         0x20
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSRRESTORE_CAF_SHFT                          0x5
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSRRESTORE_USF_BMSK                          0x2
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSRRESTORE_USF_SHFT                          0x1

#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSYNDR0_ADDR                          (EMAC_0_EMAC_VMIDMT_REG_BASE      + 0x00000450)
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSYNDR0_RMSK                               0x132
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSYNDR0_IN          \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_NSGFSYNDR0_ADDR, HWIO_EMAC_0_EMAC_VMIDMT_NSGFSYNDR0_RMSK)
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSYNDR0_INM(m)      \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_NSGFSYNDR0_ADDR, m)
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSYNDR0_MSSSELFAUTH_BMSK                   0x100
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSYNDR0_MSSSELFAUTH_SHFT                     0x8
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSYNDR0_NSATTR_BMSK                         0x20
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSYNDR0_NSATTR_SHFT                          0x5
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSYNDR0_NSSTATE_BMSK                        0x10
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSYNDR0_NSSTATE_SHFT                         0x4
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSYNDR0_WNR_BMSK                             0x2
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSYNDR0_WNR_SHFT                             0x1

#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSYNDR1_ADDR                          (EMAC_0_EMAC_VMIDMT_REG_BASE      + 0x00000454)
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSYNDR1_RMSK                           0x1010001
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSYNDR1_IN          \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_NSGFSYNDR1_ADDR, HWIO_EMAC_0_EMAC_VMIDMT_NSGFSYNDR1_RMSK)
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSYNDR1_INM(m)      \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_NSGFSYNDR1_ADDR, m)
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSYNDR1_MSDINDEX_BMSK                  0x1000000
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSYNDR1_MSDINDEX_SHFT                       0x18
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSYNDR1_SSDINDEX_BMSK                    0x10000
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSYNDR1_SSDINDEX_SHFT                       0x10
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSYNDR1_STREAMINDEX_BMSK                     0x1
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSYNDR1_STREAMINDEX_SHFT                     0x0

#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSYNDR2_ADDR                          (EMAC_0_EMAC_VMIDMT_REG_BASE      + 0x00000458)
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSYNDR2_RMSK                          0x3f1fffff
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSYNDR2_IN          \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_NSGFSYNDR2_ADDR, HWIO_EMAC_0_EMAC_VMIDMT_NSGFSYNDR2_RMSK)
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSYNDR2_INM(m)      \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_NSGFSYNDR2_ADDR, m)
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSYNDR2_ATID_BMSK                     0x3f000000
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSYNDR2_ATID_SHFT                           0x18
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSYNDR2_AVMID_BMSK                      0x1f0000
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSYNDR2_AVMID_SHFT                          0x10
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSYNDR2_ABID_BMSK                         0xe000
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSYNDR2_ABID_SHFT                            0xd
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSYNDR2_APID_BMSK                         0x1f00
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSYNDR2_APID_SHFT                            0x8
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSYNDR2_AMID_BMSK                           0xff
#define HWIO_EMAC_0_EMAC_VMIDMT_NSGFSYNDR2_AMID_SHFT                            0x0

#define HWIO_EMAC_0_EMAC_VMIDMT_NSVMIDMTCR0_ADDR                         (EMAC_0_EMAC_VMIDMT_REG_BASE      + 0x00000490)
#define HWIO_EMAC_0_EMAC_VMIDMT_NSVMIDMTCR0_RMSK                                0x1
#define HWIO_EMAC_0_EMAC_VMIDMT_NSVMIDMTCR0_IN          \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_NSVMIDMTCR0_ADDR, HWIO_EMAC_0_EMAC_VMIDMT_NSVMIDMTCR0_RMSK)
#define HWIO_EMAC_0_EMAC_VMIDMT_NSVMIDMTCR0_INM(m)      \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_NSVMIDMTCR0_ADDR, m)
#define HWIO_EMAC_0_EMAC_VMIDMT_NSVMIDMTCR0_OUT(v)      \
        out_dword(HWIO_EMAC_0_EMAC_VMIDMT_NSVMIDMTCR0_ADDR,v)
#define HWIO_EMAC_0_EMAC_VMIDMT_NSVMIDMTCR0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_EMAC_0_EMAC_VMIDMT_NSVMIDMTCR0_ADDR,m,v,HWIO_EMAC_0_EMAC_VMIDMT_NSVMIDMTCR0_IN)
#define HWIO_EMAC_0_EMAC_VMIDMT_NSVMIDMTCR0_CLKONOFFE_BMSK                      0x1
#define HWIO_EMAC_0_EMAC_VMIDMT_NSVMIDMTCR0_CLKONOFFE_SHFT                      0x0

#define HWIO_EMAC_0_EMAC_VMIDMT_SSDR0_ADDR                               (EMAC_0_EMAC_VMIDMT_REG_BASE      + 0x00000080)
#define HWIO_EMAC_0_EMAC_VMIDMT_SSDR0_RMSK                                      0x1
#define HWIO_EMAC_0_EMAC_VMIDMT_SSDR0_IN          \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_SSDR0_ADDR, HWIO_EMAC_0_EMAC_VMIDMT_SSDR0_RMSK)
#define HWIO_EMAC_0_EMAC_VMIDMT_SSDR0_INM(m)      \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_SSDR0_ADDR, m)
#define HWIO_EMAC_0_EMAC_VMIDMT_SSDR0_OUT(v)      \
        out_dword(HWIO_EMAC_0_EMAC_VMIDMT_SSDR0_ADDR,v)
#define HWIO_EMAC_0_EMAC_VMIDMT_SSDR0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_EMAC_0_EMAC_VMIDMT_SSDR0_ADDR,m,v,HWIO_EMAC_0_EMAC_VMIDMT_SSDR0_IN)
#define HWIO_EMAC_0_EMAC_VMIDMT_SSDR0_RWE_BMSK                                  0x1
#define HWIO_EMAC_0_EMAC_VMIDMT_SSDR0_RWE_SHFT                                  0x0

#define HWIO_EMAC_0_EMAC_VMIDMT_MSDR0_ADDR                               (EMAC_0_EMAC_VMIDMT_REG_BASE      + 0x00000480)
#define HWIO_EMAC_0_EMAC_VMIDMT_MSDR0_RMSK                                      0x1
#define HWIO_EMAC_0_EMAC_VMIDMT_MSDR0_IN          \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_MSDR0_ADDR, HWIO_EMAC_0_EMAC_VMIDMT_MSDR0_RMSK)
#define HWIO_EMAC_0_EMAC_VMIDMT_MSDR0_INM(m)      \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_MSDR0_ADDR, m)
#define HWIO_EMAC_0_EMAC_VMIDMT_MSDR0_OUT(v)      \
        out_dword(HWIO_EMAC_0_EMAC_VMIDMT_MSDR0_ADDR,v)
#define HWIO_EMAC_0_EMAC_VMIDMT_MSDR0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_EMAC_0_EMAC_VMIDMT_MSDR0_ADDR,m,v,HWIO_EMAC_0_EMAC_VMIDMT_MSDR0_IN)
#define HWIO_EMAC_0_EMAC_VMIDMT_MSDR0_RWE_BMSK                                  0x1
#define HWIO_EMAC_0_EMAC_VMIDMT_MSDR0_RWE_SHFT                                  0x0

#define HWIO_EMAC_0_EMAC_VMIDMT_MCR_ADDR                                 (EMAC_0_EMAC_VMIDMT_REG_BASE      + 0x00000494)
#define HWIO_EMAC_0_EMAC_VMIDMT_MCR_RMSK                                        0x7
#define HWIO_EMAC_0_EMAC_VMIDMT_MCR_IN          \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_MCR_ADDR, HWIO_EMAC_0_EMAC_VMIDMT_MCR_RMSK)
#define HWIO_EMAC_0_EMAC_VMIDMT_MCR_INM(m)      \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_MCR_ADDR, m)
#define HWIO_EMAC_0_EMAC_VMIDMT_MCR_OUT(v)      \
        out_dword(HWIO_EMAC_0_EMAC_VMIDMT_MCR_ADDR,v)
#define HWIO_EMAC_0_EMAC_VMIDMT_MCR_OUTM(m,v) \
        out_dword_masked_ns(HWIO_EMAC_0_EMAC_VMIDMT_MCR_ADDR,m,v,HWIO_EMAC_0_EMAC_VMIDMT_MCR_IN)
#define HWIO_EMAC_0_EMAC_VMIDMT_MCR_CLKONOFFE_BMSK                              0x4
#define HWIO_EMAC_0_EMAC_VMIDMT_MCR_CLKONOFFE_SHFT                              0x2
#define HWIO_EMAC_0_EMAC_VMIDMT_MCR_BPMSACFG_BMSK                               0x2
#define HWIO_EMAC_0_EMAC_VMIDMT_MCR_BPMSACFG_SHFT                               0x1
#define HWIO_EMAC_0_EMAC_VMIDMT_MCR_BPSMSACFG_BMSK                              0x1
#define HWIO_EMAC_0_EMAC_VMIDMT_MCR_BPSMSACFG_SHFT                              0x0

#define HWIO_EMAC_0_EMAC_VMIDMT_S2VRn_ADDR(n)                            (EMAC_0_EMAC_VMIDMT_REG_BASE      + 0x00000c00 + 0x4 * (n))
#define HWIO_EMAC_0_EMAC_VMIDMT_S2VRn_RMSK                               0x30ff7b1f
#define HWIO_EMAC_0_EMAC_VMIDMT_S2VRn_MAXn                                        0
#define HWIO_EMAC_0_EMAC_VMIDMT_S2VRn_INI(n)        \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_S2VRn_ADDR(n), HWIO_EMAC_0_EMAC_VMIDMT_S2VRn_RMSK)
#define HWIO_EMAC_0_EMAC_VMIDMT_S2VRn_INMI(n,mask)    \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_S2VRn_ADDR(n), mask)
#define HWIO_EMAC_0_EMAC_VMIDMT_S2VRn_OUTI(n,val)    \
        out_dword(HWIO_EMAC_0_EMAC_VMIDMT_S2VRn_ADDR(n),val)
#define HWIO_EMAC_0_EMAC_VMIDMT_S2VRn_OUTMI(n,mask,val) \
        out_dword_masked_ns(HWIO_EMAC_0_EMAC_VMIDMT_S2VRn_ADDR(n),mask,val,HWIO_EMAC_0_EMAC_VMIDMT_S2VRn_INI(n))
#define HWIO_EMAC_0_EMAC_VMIDMT_S2VRn_TRANSIENTCFG_BMSK                  0x30000000
#define HWIO_EMAC_0_EMAC_VMIDMT_S2VRn_TRANSIENTCFG_SHFT                        0x1c
#define HWIO_EMAC_0_EMAC_VMIDMT_S2VRn_WACFG_BMSK                           0xc00000
#define HWIO_EMAC_0_EMAC_VMIDMT_S2VRn_WACFG_SHFT                               0x16
#define HWIO_EMAC_0_EMAC_VMIDMT_S2VRn_RACFG_BMSK                           0x300000
#define HWIO_EMAC_0_EMAC_VMIDMT_S2VRn_RACFG_SHFT                               0x14
#define HWIO_EMAC_0_EMAC_VMIDMT_S2VRn_NSCFG_BMSK                            0xc0000
#define HWIO_EMAC_0_EMAC_VMIDMT_S2VRn_NSCFG_SHFT                               0x12
#define HWIO_EMAC_0_EMAC_VMIDMT_S2VRn_TYPE_BMSK                             0x30000
#define HWIO_EMAC_0_EMAC_VMIDMT_S2VRn_TYPE_SHFT                                0x10
#define HWIO_EMAC_0_EMAC_VMIDMT_S2VRn_MEMATTR_BMSK                           0x7000
#define HWIO_EMAC_0_EMAC_VMIDMT_S2VRn_MEMATTR_SHFT                              0xc
#define HWIO_EMAC_0_EMAC_VMIDMT_S2VRn_MTCFG_BMSK                              0x800
#define HWIO_EMAC_0_EMAC_VMIDMT_S2VRn_MTCFG_SHFT                                0xb
#define HWIO_EMAC_0_EMAC_VMIDMT_S2VRn_SHCFG_BMSK                              0x300
#define HWIO_EMAC_0_EMAC_VMIDMT_S2VRn_SHCFG_SHFT                                0x8
#define HWIO_EMAC_0_EMAC_VMIDMT_S2VRn_VMID_BMSK                                0x1f
#define HWIO_EMAC_0_EMAC_VMIDMT_S2VRn_VMID_SHFT                                 0x0

#define HWIO_EMAC_0_EMAC_VMIDMT_AS2VRn_ADDR(n)                           (EMAC_0_EMAC_VMIDMT_REG_BASE      + 0x00000e00 + 0x4 * (n))
#define HWIO_EMAC_0_EMAC_VMIDMT_AS2VRn_RMSK                              0x70000013
#define HWIO_EMAC_0_EMAC_VMIDMT_AS2VRn_MAXn                                       0
#define HWIO_EMAC_0_EMAC_VMIDMT_AS2VRn_INI(n)        \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_AS2VRn_ADDR(n), HWIO_EMAC_0_EMAC_VMIDMT_AS2VRn_RMSK)
#define HWIO_EMAC_0_EMAC_VMIDMT_AS2VRn_INMI(n,mask)    \
        in_dword_masked(HWIO_EMAC_0_EMAC_VMIDMT_AS2VRn_ADDR(n), mask)
#define HWIO_EMAC_0_EMAC_VMIDMT_AS2VRn_OUTI(n,val)    \
        out_dword(HWIO_EMAC_0_EMAC_VMIDMT_AS2VRn_ADDR(n),val)
#define HWIO_EMAC_0_EMAC_VMIDMT_AS2VRn_OUTMI(n,mask,val) \
        out_dword_masked_ns(HWIO_EMAC_0_EMAC_VMIDMT_AS2VRn_ADDR(n),mask,val,HWIO_EMAC_0_EMAC_VMIDMT_AS2VRn_INI(n))
#define HWIO_EMAC_0_EMAC_VMIDMT_AS2VRn_RCNSH_BMSK                        0x40000000
#define HWIO_EMAC_0_EMAC_VMIDMT_AS2VRn_RCNSH_SHFT                              0x1e
#define HWIO_EMAC_0_EMAC_VMIDMT_AS2VRn_RCISH_BMSK                        0x20000000
#define HWIO_EMAC_0_EMAC_VMIDMT_AS2VRn_RCISH_SHFT                              0x1d
#define HWIO_EMAC_0_EMAC_VMIDMT_AS2VRn_RCOSH_BMSK                        0x10000000
#define HWIO_EMAC_0_EMAC_VMIDMT_AS2VRn_RCOSH_SHFT                              0x1c
#define HWIO_EMAC_0_EMAC_VMIDMT_AS2VRn_REQPRIORITYCFG_BMSK                     0x10
#define HWIO_EMAC_0_EMAC_VMIDMT_AS2VRn_REQPRIORITYCFG_SHFT                      0x4
#define HWIO_EMAC_0_EMAC_VMIDMT_AS2VRn_REQPRIORITY_BMSK                         0x3
#define HWIO_EMAC_0_EMAC_VMIDMT_AS2VRn_REQPRIORITY_SHFT                         0x0

/*----------------------------------------------------------------------------
 * MODULE: QPIC_QPIC_VMIDMT
 *--------------------------------------------------------------------------*/

#define QPIC_QPIC_VMIDMT_REG_BASE                                      (QPIC_QPIC_BASE      + 0x00000000)

#define HWIO_QPIC_QPIC_VMIDMT_SCR0_ADDR                                (QPIC_QPIC_VMIDMT_REG_BASE      + 0x00000000)
#define HWIO_QPIC_QPIC_VMIDMT_SCR0_RMSK                                0x3ff707f5
#define HWIO_QPIC_QPIC_VMIDMT_SCR0_IN          \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_SCR0_ADDR, HWIO_QPIC_QPIC_VMIDMT_SCR0_RMSK)
#define HWIO_QPIC_QPIC_VMIDMT_SCR0_INM(m)      \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_SCR0_ADDR, m)
#define HWIO_QPIC_QPIC_VMIDMT_SCR0_OUT(v)      \
        out_dword(HWIO_QPIC_QPIC_VMIDMT_SCR0_ADDR,v)
#define HWIO_QPIC_QPIC_VMIDMT_SCR0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_QPIC_QPIC_VMIDMT_SCR0_ADDR,m,v,HWIO_QPIC_QPIC_VMIDMT_SCR0_IN)
#define HWIO_QPIC_QPIC_VMIDMT_SCR0_NSCFG_BMSK                          0x30000000
#define HWIO_QPIC_QPIC_VMIDMT_SCR0_NSCFG_SHFT                                0x1c
#define HWIO_QPIC_QPIC_VMIDMT_SCR0_WACFG_BMSK                           0xc000000
#define HWIO_QPIC_QPIC_VMIDMT_SCR0_WACFG_SHFT                                0x1a
#define HWIO_QPIC_QPIC_VMIDMT_SCR0_RACFG_BMSK                           0x3000000
#define HWIO_QPIC_QPIC_VMIDMT_SCR0_RACFG_SHFT                                0x18
#define HWIO_QPIC_QPIC_VMIDMT_SCR0_SHCFG_BMSK                            0xc00000
#define HWIO_QPIC_QPIC_VMIDMT_SCR0_SHCFG_SHFT                                0x16
#define HWIO_QPIC_QPIC_VMIDMT_SCR0_SMCFCFG_BMSK                          0x200000
#define HWIO_QPIC_QPIC_VMIDMT_SCR0_SMCFCFG_SHFT                              0x15
#define HWIO_QPIC_QPIC_VMIDMT_SCR0_MTCFG_BMSK                            0x100000
#define HWIO_QPIC_QPIC_VMIDMT_SCR0_MTCFG_SHFT                                0x14
#define HWIO_QPIC_QPIC_VMIDMT_SCR0_MEMATTR_BMSK                           0x70000
#define HWIO_QPIC_QPIC_VMIDMT_SCR0_MEMATTR_SHFT                              0x10
#define HWIO_QPIC_QPIC_VMIDMT_SCR0_USFCFG_BMSK                              0x400
#define HWIO_QPIC_QPIC_VMIDMT_SCR0_USFCFG_SHFT                                0xa
#define HWIO_QPIC_QPIC_VMIDMT_SCR0_GSE_BMSK                                 0x200
#define HWIO_QPIC_QPIC_VMIDMT_SCR0_GSE_SHFT                                   0x9
#define HWIO_QPIC_QPIC_VMIDMT_SCR0_STALLD_BMSK                              0x100
#define HWIO_QPIC_QPIC_VMIDMT_SCR0_STALLD_SHFT                                0x8
#define HWIO_QPIC_QPIC_VMIDMT_SCR0_TRANSIENTCFG_BMSK                         0xc0
#define HWIO_QPIC_QPIC_VMIDMT_SCR0_TRANSIENTCFG_SHFT                          0x6
#define HWIO_QPIC_QPIC_VMIDMT_SCR0_GCFGFIE_BMSK                              0x20
#define HWIO_QPIC_QPIC_VMIDMT_SCR0_GCFGFIE_SHFT                               0x5
#define HWIO_QPIC_QPIC_VMIDMT_SCR0_GCFGERE_BMSK                              0x10
#define HWIO_QPIC_QPIC_VMIDMT_SCR0_GCFGERE_SHFT                               0x4
#define HWIO_QPIC_QPIC_VMIDMT_SCR0_GFIE_BMSK                                  0x4
#define HWIO_QPIC_QPIC_VMIDMT_SCR0_GFIE_SHFT                                  0x2
#define HWIO_QPIC_QPIC_VMIDMT_SCR0_CLIENTPD_BMSK                              0x1
#define HWIO_QPIC_QPIC_VMIDMT_SCR0_CLIENTPD_SHFT                              0x0

#define HWIO_QPIC_QPIC_VMIDMT_SCR1_ADDR                                (QPIC_QPIC_VMIDMT_REG_BASE      + 0x00000004)
#define HWIO_QPIC_QPIC_VMIDMT_SCR1_RMSK                                 0x1000f00
#define HWIO_QPIC_QPIC_VMIDMT_SCR1_IN          \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_SCR1_ADDR, HWIO_QPIC_QPIC_VMIDMT_SCR1_RMSK)
#define HWIO_QPIC_QPIC_VMIDMT_SCR1_INM(m)      \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_SCR1_ADDR, m)
#define HWIO_QPIC_QPIC_VMIDMT_SCR1_OUT(v)      \
        out_dword(HWIO_QPIC_QPIC_VMIDMT_SCR1_ADDR,v)
#define HWIO_QPIC_QPIC_VMIDMT_SCR1_OUTM(m,v) \
        out_dword_masked_ns(HWIO_QPIC_QPIC_VMIDMT_SCR1_ADDR,m,v,HWIO_QPIC_QPIC_VMIDMT_SCR1_IN)
#define HWIO_QPIC_QPIC_VMIDMT_SCR1_GASRAE_BMSK                          0x1000000
#define HWIO_QPIC_QPIC_VMIDMT_SCR1_GASRAE_SHFT                               0x18
#define HWIO_QPIC_QPIC_VMIDMT_SCR1_NSNUMSMRGO_BMSK                          0xf00
#define HWIO_QPIC_QPIC_VMIDMT_SCR1_NSNUMSMRGO_SHFT                            0x8

#define HWIO_QPIC_QPIC_VMIDMT_SCR2_ADDR                                (QPIC_QPIC_VMIDMT_REG_BASE      + 0x00000008)
#define HWIO_QPIC_QPIC_VMIDMT_SCR2_RMSK                                      0x1f
#define HWIO_QPIC_QPIC_VMIDMT_SCR2_IN          \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_SCR2_ADDR, HWIO_QPIC_QPIC_VMIDMT_SCR2_RMSK)
#define HWIO_QPIC_QPIC_VMIDMT_SCR2_INM(m)      \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_SCR2_ADDR, m)
#define HWIO_QPIC_QPIC_VMIDMT_SCR2_OUT(v)      \
        out_dword(HWIO_QPIC_QPIC_VMIDMT_SCR2_ADDR,v)
#define HWIO_QPIC_QPIC_VMIDMT_SCR2_OUTM(m,v) \
        out_dword_masked_ns(HWIO_QPIC_QPIC_VMIDMT_SCR2_ADDR,m,v,HWIO_QPIC_QPIC_VMIDMT_SCR2_IN)
#define HWIO_QPIC_QPIC_VMIDMT_SCR2_BPVMID_BMSK                               0x1f
#define HWIO_QPIC_QPIC_VMIDMT_SCR2_BPVMID_SHFT                                0x0

#define HWIO_QPIC_QPIC_VMIDMT_SACR_ADDR                                (QPIC_QPIC_VMIDMT_REG_BASE      + 0x00000010)
#define HWIO_QPIC_QPIC_VMIDMT_SACR_RMSK                                0x70000013
#define HWIO_QPIC_QPIC_VMIDMT_SACR_IN          \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_SACR_ADDR, HWIO_QPIC_QPIC_VMIDMT_SACR_RMSK)
#define HWIO_QPIC_QPIC_VMIDMT_SACR_INM(m)      \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_SACR_ADDR, m)
#define HWIO_QPIC_QPIC_VMIDMT_SACR_OUT(v)      \
        out_dword(HWIO_QPIC_QPIC_VMIDMT_SACR_ADDR,v)
#define HWIO_QPIC_QPIC_VMIDMT_SACR_OUTM(m,v) \
        out_dword_masked_ns(HWIO_QPIC_QPIC_VMIDMT_SACR_ADDR,m,v,HWIO_QPIC_QPIC_VMIDMT_SACR_IN)
#define HWIO_QPIC_QPIC_VMIDMT_SACR_BPRCNSH_BMSK                        0x40000000
#define HWIO_QPIC_QPIC_VMIDMT_SACR_BPRCNSH_SHFT                              0x1e
#define HWIO_QPIC_QPIC_VMIDMT_SACR_BPRCISH_BMSK                        0x20000000
#define HWIO_QPIC_QPIC_VMIDMT_SACR_BPRCISH_SHFT                              0x1d
#define HWIO_QPIC_QPIC_VMIDMT_SACR_BPRCOSH_BMSK                        0x10000000
#define HWIO_QPIC_QPIC_VMIDMT_SACR_BPRCOSH_SHFT                              0x1c
#define HWIO_QPIC_QPIC_VMIDMT_SACR_BPREQPRIORITYCFG_BMSK                     0x10
#define HWIO_QPIC_QPIC_VMIDMT_SACR_BPREQPRIORITYCFG_SHFT                      0x4
#define HWIO_QPIC_QPIC_VMIDMT_SACR_BPREQPRIORITY_BMSK                         0x3
#define HWIO_QPIC_QPIC_VMIDMT_SACR_BPREQPRIORITY_SHFT                         0x0

#define HWIO_QPIC_QPIC_VMIDMT_SIDR0_ADDR                               (QPIC_QPIC_VMIDMT_REG_BASE      + 0x00000020)
#define HWIO_QPIC_QPIC_VMIDMT_SIDR0_RMSK                               0x88001eff
#define HWIO_QPIC_QPIC_VMIDMT_SIDR0_IN          \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_SIDR0_ADDR, HWIO_QPIC_QPIC_VMIDMT_SIDR0_RMSK)
#define HWIO_QPIC_QPIC_VMIDMT_SIDR0_INM(m)      \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_SIDR0_ADDR, m)
#define HWIO_QPIC_QPIC_VMIDMT_SIDR0_SES_BMSK                           0x80000000
#define HWIO_QPIC_QPIC_VMIDMT_SIDR0_SES_SHFT                                 0x1f
#define HWIO_QPIC_QPIC_VMIDMT_SIDR0_SMS_BMSK                            0x8000000
#define HWIO_QPIC_QPIC_VMIDMT_SIDR0_SMS_SHFT                                 0x1b
#define HWIO_QPIC_QPIC_VMIDMT_SIDR0_NUMSIDB_BMSK                           0x1e00
#define HWIO_QPIC_QPIC_VMIDMT_SIDR0_NUMSIDB_SHFT                              0x9
#define HWIO_QPIC_QPIC_VMIDMT_SIDR0_NUMSMRG_BMSK                             0xff
#define HWIO_QPIC_QPIC_VMIDMT_SIDR0_NUMSMRG_SHFT                              0x0

#define HWIO_QPIC_QPIC_VMIDMT_SIDR1_ADDR                               (QPIC_QPIC_VMIDMT_REG_BASE      + 0x00000024)
#define HWIO_QPIC_QPIC_VMIDMT_SIDR1_RMSK                                   0x9f00
#define HWIO_QPIC_QPIC_VMIDMT_SIDR1_IN          \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_SIDR1_ADDR, HWIO_QPIC_QPIC_VMIDMT_SIDR1_RMSK)
#define HWIO_QPIC_QPIC_VMIDMT_SIDR1_INM(m)      \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_SIDR1_ADDR, m)
#define HWIO_QPIC_QPIC_VMIDMT_SIDR1_SMCD_BMSK                              0x8000
#define HWIO_QPIC_QPIC_VMIDMT_SIDR1_SMCD_SHFT                                 0xf
#define HWIO_QPIC_QPIC_VMIDMT_SIDR1_SSDTP_BMSK                             0x1000
#define HWIO_QPIC_QPIC_VMIDMT_SIDR1_SSDTP_SHFT                                0xc
#define HWIO_QPIC_QPIC_VMIDMT_SIDR1_NUMSSDNDX_BMSK                          0xf00
#define HWIO_QPIC_QPIC_VMIDMT_SIDR1_NUMSSDNDX_SHFT                            0x8

#define HWIO_QPIC_QPIC_VMIDMT_SIDR2_ADDR                               (QPIC_QPIC_VMIDMT_REG_BASE      + 0x00000028)
#define HWIO_QPIC_QPIC_VMIDMT_SIDR2_RMSK                                     0xff
#define HWIO_QPIC_QPIC_VMIDMT_SIDR2_IN          \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_SIDR2_ADDR, HWIO_QPIC_QPIC_VMIDMT_SIDR2_RMSK)
#define HWIO_QPIC_QPIC_VMIDMT_SIDR2_INM(m)      \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_SIDR2_ADDR, m)
#define HWIO_QPIC_QPIC_VMIDMT_SIDR2_OAS_BMSK                                 0xf0
#define HWIO_QPIC_QPIC_VMIDMT_SIDR2_OAS_SHFT                                  0x4
#define HWIO_QPIC_QPIC_VMIDMT_SIDR2_IAS_BMSK                                  0xf
#define HWIO_QPIC_QPIC_VMIDMT_SIDR2_IAS_SHFT                                  0x0

#define HWIO_QPIC_QPIC_VMIDMT_SIDR4_ADDR                               (QPIC_QPIC_VMIDMT_REG_BASE      + 0x00000030)
#define HWIO_QPIC_QPIC_VMIDMT_SIDR4_RMSK                               0xffffffff
#define HWIO_QPIC_QPIC_VMIDMT_SIDR4_IN          \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_SIDR4_ADDR, HWIO_QPIC_QPIC_VMIDMT_SIDR4_RMSK)
#define HWIO_QPIC_QPIC_VMIDMT_SIDR4_INM(m)      \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_SIDR4_ADDR, m)
#define HWIO_QPIC_QPIC_VMIDMT_SIDR4_MAJOR_BMSK                         0xf0000000
#define HWIO_QPIC_QPIC_VMIDMT_SIDR4_MAJOR_SHFT                               0x1c
#define HWIO_QPIC_QPIC_VMIDMT_SIDR4_MINOR_BMSK                          0xfff0000
#define HWIO_QPIC_QPIC_VMIDMT_SIDR4_MINOR_SHFT                               0x10
#define HWIO_QPIC_QPIC_VMIDMT_SIDR4_STEP_BMSK                              0xffff
#define HWIO_QPIC_QPIC_VMIDMT_SIDR4_STEP_SHFT                                 0x0

#define HWIO_QPIC_QPIC_VMIDMT_SIDR5_ADDR                               (QPIC_QPIC_VMIDMT_REG_BASE      + 0x00000034)
#define HWIO_QPIC_QPIC_VMIDMT_SIDR5_RMSK                                 0xff03ff
#define HWIO_QPIC_QPIC_VMIDMT_SIDR5_IN          \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_SIDR5_ADDR, HWIO_QPIC_QPIC_VMIDMT_SIDR5_RMSK)
#define HWIO_QPIC_QPIC_VMIDMT_SIDR5_INM(m)      \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_SIDR5_ADDR, m)
#define HWIO_QPIC_QPIC_VMIDMT_SIDR5_NUMMSDRB_BMSK                        0xff0000
#define HWIO_QPIC_QPIC_VMIDMT_SIDR5_NUMMSDRB_SHFT                            0x10
#define HWIO_QPIC_QPIC_VMIDMT_SIDR5_MSAE_BMSK                               0x200
#define HWIO_QPIC_QPIC_VMIDMT_SIDR5_MSAE_SHFT                                 0x9
#define HWIO_QPIC_QPIC_VMIDMT_SIDR5_QRIBE_BMSK                              0x100
#define HWIO_QPIC_QPIC_VMIDMT_SIDR5_QRIBE_SHFT                                0x8
#define HWIO_QPIC_QPIC_VMIDMT_SIDR5_NVMID_BMSK                               0xff
#define HWIO_QPIC_QPIC_VMIDMT_SIDR5_NVMID_SHFT                                0x0

#define HWIO_QPIC_QPIC_VMIDMT_SIDR7_ADDR                               (QPIC_QPIC_VMIDMT_REG_BASE      + 0x0000003c)
#define HWIO_QPIC_QPIC_VMIDMT_SIDR7_RMSK                                     0xff
#define HWIO_QPIC_QPIC_VMIDMT_SIDR7_IN          \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_SIDR7_ADDR, HWIO_QPIC_QPIC_VMIDMT_SIDR7_RMSK)
#define HWIO_QPIC_QPIC_VMIDMT_SIDR7_INM(m)      \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_SIDR7_ADDR, m)
#define HWIO_QPIC_QPIC_VMIDMT_SIDR7_MAJOR_BMSK                               0xf0
#define HWIO_QPIC_QPIC_VMIDMT_SIDR7_MAJOR_SHFT                                0x4
#define HWIO_QPIC_QPIC_VMIDMT_SIDR7_MINOR_BMSK                                0xf
#define HWIO_QPIC_QPIC_VMIDMT_SIDR7_MINOR_SHFT                                0x0

#define HWIO_QPIC_QPIC_VMIDMT_SGFAR0_ADDR                              (QPIC_QPIC_VMIDMT_REG_BASE      + 0x00000040)
#define HWIO_QPIC_QPIC_VMIDMT_SGFAR0_RMSK                              0xffffffff
#define HWIO_QPIC_QPIC_VMIDMT_SGFAR0_IN          \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_SGFAR0_ADDR, HWIO_QPIC_QPIC_VMIDMT_SGFAR0_RMSK)
#define HWIO_QPIC_QPIC_VMIDMT_SGFAR0_INM(m)      \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_SGFAR0_ADDR, m)
#define HWIO_QPIC_QPIC_VMIDMT_SGFAR0_SGFEA0_BMSK                       0xffffffff
#define HWIO_QPIC_QPIC_VMIDMT_SGFAR0_SGFEA0_SHFT                              0x0

#define HWIO_QPIC_QPIC_VMIDMT_SGFSR_ADDR                               (QPIC_QPIC_VMIDMT_REG_BASE      + 0x00000048)
#define HWIO_QPIC_QPIC_VMIDMT_SGFSR_RMSK                               0xc0000026
#define HWIO_QPIC_QPIC_VMIDMT_SGFSR_IN          \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_SGFSR_ADDR, HWIO_QPIC_QPIC_VMIDMT_SGFSR_RMSK)
#define HWIO_QPIC_QPIC_VMIDMT_SGFSR_INM(m)      \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_SGFSR_ADDR, m)
#define HWIO_QPIC_QPIC_VMIDMT_SGFSR_OUT(v)      \
        out_dword(HWIO_QPIC_QPIC_VMIDMT_SGFSR_ADDR,v)
#define HWIO_QPIC_QPIC_VMIDMT_SGFSR_OUTM(m,v) \
        out_dword_masked_ns(HWIO_QPIC_QPIC_VMIDMT_SGFSR_ADDR,m,v,HWIO_QPIC_QPIC_VMIDMT_SGFSR_IN)
#define HWIO_QPIC_QPIC_VMIDMT_SGFSR_MULTI_CLIENT_BMSK                  0x80000000
#define HWIO_QPIC_QPIC_VMIDMT_SGFSR_MULTI_CLIENT_SHFT                        0x1f
#define HWIO_QPIC_QPIC_VMIDMT_SGFSR_MULTI_CFG_BMSK                     0x40000000
#define HWIO_QPIC_QPIC_VMIDMT_SGFSR_MULTI_CFG_SHFT                           0x1e
#define HWIO_QPIC_QPIC_VMIDMT_SGFSR_CAF_BMSK                                 0x20
#define HWIO_QPIC_QPIC_VMIDMT_SGFSR_CAF_SHFT                                  0x5
#define HWIO_QPIC_QPIC_VMIDMT_SGFSR_SMCF_BMSK                                 0x4
#define HWIO_QPIC_QPIC_VMIDMT_SGFSR_SMCF_SHFT                                 0x2
#define HWIO_QPIC_QPIC_VMIDMT_SGFSR_USF_BMSK                                  0x2
#define HWIO_QPIC_QPIC_VMIDMT_SGFSR_USF_SHFT                                  0x1

#define HWIO_QPIC_QPIC_VMIDMT_SGFSRRESTORE_ADDR                        (QPIC_QPIC_VMIDMT_REG_BASE      + 0x0000004c)
#define HWIO_QPIC_QPIC_VMIDMT_SGFSRRESTORE_RMSK                        0xc0000026
#define HWIO_QPIC_QPIC_VMIDMT_SGFSRRESTORE_IN          \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_SGFSRRESTORE_ADDR, HWIO_QPIC_QPIC_VMIDMT_SGFSRRESTORE_RMSK)
#define HWIO_QPIC_QPIC_VMIDMT_SGFSRRESTORE_INM(m)      \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_SGFSRRESTORE_ADDR, m)
#define HWIO_QPIC_QPIC_VMIDMT_SGFSRRESTORE_OUT(v)      \
        out_dword(HWIO_QPIC_QPIC_VMIDMT_SGFSRRESTORE_ADDR,v)
#define HWIO_QPIC_QPIC_VMIDMT_SGFSRRESTORE_OUTM(m,v) \
        out_dword_masked_ns(HWIO_QPIC_QPIC_VMIDMT_SGFSRRESTORE_ADDR,m,v,HWIO_QPIC_QPIC_VMIDMT_SGFSRRESTORE_IN)
#define HWIO_QPIC_QPIC_VMIDMT_SGFSRRESTORE_MULTI_CLIENT_BMSK           0x80000000
#define HWIO_QPIC_QPIC_VMIDMT_SGFSRRESTORE_MULTI_CLIENT_SHFT                 0x1f
#define HWIO_QPIC_QPIC_VMIDMT_SGFSRRESTORE_MULTI_CFG_BMSK              0x40000000
#define HWIO_QPIC_QPIC_VMIDMT_SGFSRRESTORE_MULTI_CFG_SHFT                    0x1e
#define HWIO_QPIC_QPIC_VMIDMT_SGFSRRESTORE_CAF_BMSK                          0x20
#define HWIO_QPIC_QPIC_VMIDMT_SGFSRRESTORE_CAF_SHFT                           0x5
#define HWIO_QPIC_QPIC_VMIDMT_SGFSRRESTORE_SMCF_BMSK                          0x4
#define HWIO_QPIC_QPIC_VMIDMT_SGFSRRESTORE_SMCF_SHFT                          0x2
#define HWIO_QPIC_QPIC_VMIDMT_SGFSRRESTORE_USF_BMSK                           0x2
#define HWIO_QPIC_QPIC_VMIDMT_SGFSRRESTORE_USF_SHFT                           0x1

#define HWIO_QPIC_QPIC_VMIDMT_SGFSYNDR0_ADDR                           (QPIC_QPIC_VMIDMT_REG_BASE      + 0x00000050)
#define HWIO_QPIC_QPIC_VMIDMT_SGFSYNDR0_RMSK                                0x132
#define HWIO_QPIC_QPIC_VMIDMT_SGFSYNDR0_IN          \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_SGFSYNDR0_ADDR, HWIO_QPIC_QPIC_VMIDMT_SGFSYNDR0_RMSK)
#define HWIO_QPIC_QPIC_VMIDMT_SGFSYNDR0_INM(m)      \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_SGFSYNDR0_ADDR, m)
#define HWIO_QPIC_QPIC_VMIDMT_SGFSYNDR0_MSSSELFAUTH_BMSK                    0x100
#define HWIO_QPIC_QPIC_VMIDMT_SGFSYNDR0_MSSSELFAUTH_SHFT                      0x8
#define HWIO_QPIC_QPIC_VMIDMT_SGFSYNDR0_NSATTR_BMSK                          0x20
#define HWIO_QPIC_QPIC_VMIDMT_SGFSYNDR0_NSATTR_SHFT                           0x5
#define HWIO_QPIC_QPIC_VMIDMT_SGFSYNDR0_NSSTATE_BMSK                         0x10
#define HWIO_QPIC_QPIC_VMIDMT_SGFSYNDR0_NSSTATE_SHFT                          0x4
#define HWIO_QPIC_QPIC_VMIDMT_SGFSYNDR0_WNR_BMSK                              0x2
#define HWIO_QPIC_QPIC_VMIDMT_SGFSYNDR0_WNR_SHFT                              0x1

#define HWIO_QPIC_QPIC_VMIDMT_SGFSYNDR1_ADDR                           (QPIC_QPIC_VMIDMT_REG_BASE      + 0x00000054)
#define HWIO_QPIC_QPIC_VMIDMT_SGFSYNDR1_RMSK                            0x7070007
#define HWIO_QPIC_QPIC_VMIDMT_SGFSYNDR1_IN          \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_SGFSYNDR1_ADDR, HWIO_QPIC_QPIC_VMIDMT_SGFSYNDR1_RMSK)
#define HWIO_QPIC_QPIC_VMIDMT_SGFSYNDR1_INM(m)      \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_SGFSYNDR1_ADDR, m)
#define HWIO_QPIC_QPIC_VMIDMT_SGFSYNDR1_MSDINDEX_BMSK                   0x7000000
#define HWIO_QPIC_QPIC_VMIDMT_SGFSYNDR1_MSDINDEX_SHFT                        0x18
#define HWIO_QPIC_QPIC_VMIDMT_SGFSYNDR1_SSDINDEX_BMSK                     0x70000
#define HWIO_QPIC_QPIC_VMIDMT_SGFSYNDR1_SSDINDEX_SHFT                        0x10
#define HWIO_QPIC_QPIC_VMIDMT_SGFSYNDR1_STREAMINDEX_BMSK                      0x7
#define HWIO_QPIC_QPIC_VMIDMT_SGFSYNDR1_STREAMINDEX_SHFT                      0x0

#define HWIO_QPIC_QPIC_VMIDMT_SGFSYNDR2_ADDR                           (QPIC_QPIC_VMIDMT_REG_BASE      + 0x00000058)
#define HWIO_QPIC_QPIC_VMIDMT_SGFSYNDR2_RMSK                           0x3f1fffff
#define HWIO_QPIC_QPIC_VMIDMT_SGFSYNDR2_IN          \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_SGFSYNDR2_ADDR, HWIO_QPIC_QPIC_VMIDMT_SGFSYNDR2_RMSK)
#define HWIO_QPIC_QPIC_VMIDMT_SGFSYNDR2_INM(m)      \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_SGFSYNDR2_ADDR, m)
#define HWIO_QPIC_QPIC_VMIDMT_SGFSYNDR2_ATID_BMSK                      0x3f000000
#define HWIO_QPIC_QPIC_VMIDMT_SGFSYNDR2_ATID_SHFT                            0x18
#define HWIO_QPIC_QPIC_VMIDMT_SGFSYNDR2_AVMID_BMSK                       0x1f0000
#define HWIO_QPIC_QPIC_VMIDMT_SGFSYNDR2_AVMID_SHFT                           0x10
#define HWIO_QPIC_QPIC_VMIDMT_SGFSYNDR2_ABID_BMSK                          0xe000
#define HWIO_QPIC_QPIC_VMIDMT_SGFSYNDR2_ABID_SHFT                             0xd
#define HWIO_QPIC_QPIC_VMIDMT_SGFSYNDR2_APID_BMSK                          0x1f00
#define HWIO_QPIC_QPIC_VMIDMT_SGFSYNDR2_APID_SHFT                             0x8
#define HWIO_QPIC_QPIC_VMIDMT_SGFSYNDR2_AMID_BMSK                            0xff
#define HWIO_QPIC_QPIC_VMIDMT_SGFSYNDR2_AMID_SHFT                             0x0

#define HWIO_QPIC_QPIC_VMIDMT_VMIDMTSCR0_ADDR                          (QPIC_QPIC_VMIDMT_REG_BASE      + 0x00000090)
#define HWIO_QPIC_QPIC_VMIDMT_VMIDMTSCR0_RMSK                                 0x1
#define HWIO_QPIC_QPIC_VMIDMT_VMIDMTSCR0_IN          \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_VMIDMTSCR0_ADDR, HWIO_QPIC_QPIC_VMIDMT_VMIDMTSCR0_RMSK)
#define HWIO_QPIC_QPIC_VMIDMT_VMIDMTSCR0_INM(m)      \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_VMIDMTSCR0_ADDR, m)
#define HWIO_QPIC_QPIC_VMIDMT_VMIDMTSCR0_OUT(v)      \
        out_dword(HWIO_QPIC_QPIC_VMIDMT_VMIDMTSCR0_ADDR,v)
#define HWIO_QPIC_QPIC_VMIDMT_VMIDMTSCR0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_QPIC_QPIC_VMIDMT_VMIDMTSCR0_ADDR,m,v,HWIO_QPIC_QPIC_VMIDMT_VMIDMTSCR0_IN)
#define HWIO_QPIC_QPIC_VMIDMT_VMIDMTSCR0_CLKONOFFE_BMSK                       0x1
#define HWIO_QPIC_QPIC_VMIDMT_VMIDMTSCR0_CLKONOFFE_SHFT                       0x0

#define HWIO_QPIC_QPIC_VMIDMT_CR0_ADDR                                 (QPIC_QPIC_VMIDMT_REG_BASE      + 0x00000000)
#define HWIO_QPIC_QPIC_VMIDMT_CR0_RMSK                                  0xff70ff5
#define HWIO_QPIC_QPIC_VMIDMT_CR0_IN          \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_CR0_ADDR, HWIO_QPIC_QPIC_VMIDMT_CR0_RMSK)
#define HWIO_QPIC_QPIC_VMIDMT_CR0_INM(m)      \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_CR0_ADDR, m)
#define HWIO_QPIC_QPIC_VMIDMT_CR0_OUT(v)      \
        out_dword(HWIO_QPIC_QPIC_VMIDMT_CR0_ADDR,v)
#define HWIO_QPIC_QPIC_VMIDMT_CR0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_QPIC_QPIC_VMIDMT_CR0_ADDR,m,v,HWIO_QPIC_QPIC_VMIDMT_CR0_IN)
#define HWIO_QPIC_QPIC_VMIDMT_CR0_WACFG_BMSK                            0xc000000
#define HWIO_QPIC_QPIC_VMIDMT_CR0_WACFG_SHFT                                 0x1a
#define HWIO_QPIC_QPIC_VMIDMT_CR0_RACFG_BMSK                            0x3000000
#define HWIO_QPIC_QPIC_VMIDMT_CR0_RACFG_SHFT                                 0x18
#define HWIO_QPIC_QPIC_VMIDMT_CR0_SHCFG_BMSK                             0xc00000
#define HWIO_QPIC_QPIC_VMIDMT_CR0_SHCFG_SHFT                                 0x16
#define HWIO_QPIC_QPIC_VMIDMT_CR0_SMCFCFG_BMSK                           0x200000
#define HWIO_QPIC_QPIC_VMIDMT_CR0_SMCFCFG_SHFT                               0x15
#define HWIO_QPIC_QPIC_VMIDMT_CR0_MTCFG_BMSK                             0x100000
#define HWIO_QPIC_QPIC_VMIDMT_CR0_MTCFG_SHFT                                 0x14
#define HWIO_QPIC_QPIC_VMIDMT_CR0_MEMATTR_BMSK                            0x70000
#define HWIO_QPIC_QPIC_VMIDMT_CR0_MEMATTR_SHFT                               0x10
#define HWIO_QPIC_QPIC_VMIDMT_CR0_VMIDPNE_BMSK                              0x800
#define HWIO_QPIC_QPIC_VMIDMT_CR0_VMIDPNE_SHFT                                0xb
#define HWIO_QPIC_QPIC_VMIDMT_CR0_USFCFG_BMSK                               0x400
#define HWIO_QPIC_QPIC_VMIDMT_CR0_USFCFG_SHFT                                 0xa
#define HWIO_QPIC_QPIC_VMIDMT_CR0_GSE_BMSK                                  0x200
#define HWIO_QPIC_QPIC_VMIDMT_CR0_GSE_SHFT                                    0x9
#define HWIO_QPIC_QPIC_VMIDMT_CR0_STALLD_BMSK                               0x100
#define HWIO_QPIC_QPIC_VMIDMT_CR0_STALLD_SHFT                                 0x8
#define HWIO_QPIC_QPIC_VMIDMT_CR0_TRANSIENTCFG_BMSK                          0xc0
#define HWIO_QPIC_QPIC_VMIDMT_CR0_TRANSIENTCFG_SHFT                           0x6
#define HWIO_QPIC_QPIC_VMIDMT_CR0_GCFGFIE_BMSK                               0x20
#define HWIO_QPIC_QPIC_VMIDMT_CR0_GCFGFIE_SHFT                                0x5
#define HWIO_QPIC_QPIC_VMIDMT_CR0_GCFGERE_BMSK                               0x10
#define HWIO_QPIC_QPIC_VMIDMT_CR0_GCFGERE_SHFT                                0x4
#define HWIO_QPIC_QPIC_VMIDMT_CR0_GFIE_BMSK                                   0x4
#define HWIO_QPIC_QPIC_VMIDMT_CR0_GFIE_SHFT                                   0x2
#define HWIO_QPIC_QPIC_VMIDMT_CR0_CLIENTPD_BMSK                               0x1
#define HWIO_QPIC_QPIC_VMIDMT_CR0_CLIENTPD_SHFT                               0x0

#define HWIO_QPIC_QPIC_VMIDMT_CR2_ADDR                                 (QPIC_QPIC_VMIDMT_REG_BASE      + 0x00000008)
#define HWIO_QPIC_QPIC_VMIDMT_CR2_RMSK                                       0x1f
#define HWIO_QPIC_QPIC_VMIDMT_CR2_IN          \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_CR2_ADDR, HWIO_QPIC_QPIC_VMIDMT_CR2_RMSK)
#define HWIO_QPIC_QPIC_VMIDMT_CR2_INM(m)      \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_CR2_ADDR, m)
#define HWIO_QPIC_QPIC_VMIDMT_CR2_OUT(v)      \
        out_dword(HWIO_QPIC_QPIC_VMIDMT_CR2_ADDR,v)
#define HWIO_QPIC_QPIC_VMIDMT_CR2_OUTM(m,v) \
        out_dword_masked_ns(HWIO_QPIC_QPIC_VMIDMT_CR2_ADDR,m,v,HWIO_QPIC_QPIC_VMIDMT_CR2_IN)
#define HWIO_QPIC_QPIC_VMIDMT_CR2_BPVMID_BMSK                                0x1f
#define HWIO_QPIC_QPIC_VMIDMT_CR2_BPVMID_SHFT                                 0x0

#define HWIO_QPIC_QPIC_VMIDMT_ACR_ADDR                                 (QPIC_QPIC_VMIDMT_REG_BASE      + 0x00000010)
#define HWIO_QPIC_QPIC_VMIDMT_ACR_RMSK                                 0x70000013
#define HWIO_QPIC_QPIC_VMIDMT_ACR_IN          \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_ACR_ADDR, HWIO_QPIC_QPIC_VMIDMT_ACR_RMSK)
#define HWIO_QPIC_QPIC_VMIDMT_ACR_INM(m)      \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_ACR_ADDR, m)
#define HWIO_QPIC_QPIC_VMIDMT_ACR_OUT(v)      \
        out_dword(HWIO_QPIC_QPIC_VMIDMT_ACR_ADDR,v)
#define HWIO_QPIC_QPIC_VMIDMT_ACR_OUTM(m,v) \
        out_dword_masked_ns(HWIO_QPIC_QPIC_VMIDMT_ACR_ADDR,m,v,HWIO_QPIC_QPIC_VMIDMT_ACR_IN)
#define HWIO_QPIC_QPIC_VMIDMT_ACR_BPRCNSH_BMSK                         0x40000000
#define HWIO_QPIC_QPIC_VMIDMT_ACR_BPRCNSH_SHFT                               0x1e
#define HWIO_QPIC_QPIC_VMIDMT_ACR_BPRCISH_BMSK                         0x20000000
#define HWIO_QPIC_QPIC_VMIDMT_ACR_BPRCISH_SHFT                               0x1d
#define HWIO_QPIC_QPIC_VMIDMT_ACR_BPRCOSH_BMSK                         0x10000000
#define HWIO_QPIC_QPIC_VMIDMT_ACR_BPRCOSH_SHFT                               0x1c
#define HWIO_QPIC_QPIC_VMIDMT_ACR_BPREQPRIORITYCFG_BMSK                      0x10
#define HWIO_QPIC_QPIC_VMIDMT_ACR_BPREQPRIORITYCFG_SHFT                       0x4
#define HWIO_QPIC_QPIC_VMIDMT_ACR_BPREQPRIORITY_BMSK                          0x3
#define HWIO_QPIC_QPIC_VMIDMT_ACR_BPREQPRIORITY_SHFT                          0x0

#define HWIO_QPIC_QPIC_VMIDMT_IDR0_ADDR                                (QPIC_QPIC_VMIDMT_REG_BASE      + 0x00000020)
#define HWIO_QPIC_QPIC_VMIDMT_IDR0_RMSK                                 0x8001eff
#define HWIO_QPIC_QPIC_VMIDMT_IDR0_IN          \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_IDR0_ADDR, HWIO_QPIC_QPIC_VMIDMT_IDR0_RMSK)
#define HWIO_QPIC_QPIC_VMIDMT_IDR0_INM(m)      \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_IDR0_ADDR, m)
#define HWIO_QPIC_QPIC_VMIDMT_IDR0_SMS_BMSK                             0x8000000
#define HWIO_QPIC_QPIC_VMIDMT_IDR0_SMS_SHFT                                  0x1b
#define HWIO_QPIC_QPIC_VMIDMT_IDR0_NUMSIDB_BMSK                            0x1e00
#define HWIO_QPIC_QPIC_VMIDMT_IDR0_NUMSIDB_SHFT                               0x9
#define HWIO_QPIC_QPIC_VMIDMT_IDR0_NUMSMRG_BMSK                              0xff
#define HWIO_QPIC_QPIC_VMIDMT_IDR0_NUMSMRG_SHFT                               0x0

#define HWIO_QPIC_QPIC_VMIDMT_IDR1_ADDR                                (QPIC_QPIC_VMIDMT_REG_BASE      + 0x00000024)
#define HWIO_QPIC_QPIC_VMIDMT_IDR1_RMSK                                    0x9f00
#define HWIO_QPIC_QPIC_VMIDMT_IDR1_IN          \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_IDR1_ADDR, HWIO_QPIC_QPIC_VMIDMT_IDR1_RMSK)
#define HWIO_QPIC_QPIC_VMIDMT_IDR1_INM(m)      \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_IDR1_ADDR, m)
#define HWIO_QPIC_QPIC_VMIDMT_IDR1_SMCD_BMSK                               0x8000
#define HWIO_QPIC_QPIC_VMIDMT_IDR1_SMCD_SHFT                                  0xf
#define HWIO_QPIC_QPIC_VMIDMT_IDR1_SSDTP_BMSK                              0x1000
#define HWIO_QPIC_QPIC_VMIDMT_IDR1_SSDTP_SHFT                                 0xc
#define HWIO_QPIC_QPIC_VMIDMT_IDR1_NUMSSDNDX_BMSK                           0xf00
#define HWIO_QPIC_QPIC_VMIDMT_IDR1_NUMSSDNDX_SHFT                             0x8

#define HWIO_QPIC_QPIC_VMIDMT_IDR2_ADDR                                (QPIC_QPIC_VMIDMT_REG_BASE      + 0x00000028)
#define HWIO_QPIC_QPIC_VMIDMT_IDR2_RMSK                                      0xff
#define HWIO_QPIC_QPIC_VMIDMT_IDR2_IN          \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_IDR2_ADDR, HWIO_QPIC_QPIC_VMIDMT_IDR2_RMSK)
#define HWIO_QPIC_QPIC_VMIDMT_IDR2_INM(m)      \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_IDR2_ADDR, m)
#define HWIO_QPIC_QPIC_VMIDMT_IDR2_OAS_BMSK                                  0xf0
#define HWIO_QPIC_QPIC_VMIDMT_IDR2_OAS_SHFT                                   0x4
#define HWIO_QPIC_QPIC_VMIDMT_IDR2_IAS_BMSK                                   0xf
#define HWIO_QPIC_QPIC_VMIDMT_IDR2_IAS_SHFT                                   0x0

#define HWIO_QPIC_QPIC_VMIDMT_IDR4_ADDR                                (QPIC_QPIC_VMIDMT_REG_BASE      + 0x00000030)
#define HWIO_QPIC_QPIC_VMIDMT_IDR4_RMSK                                0xffffffff
#define HWIO_QPIC_QPIC_VMIDMT_IDR4_IN          \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_IDR4_ADDR, HWIO_QPIC_QPIC_VMIDMT_IDR4_RMSK)
#define HWIO_QPIC_QPIC_VMIDMT_IDR4_INM(m)      \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_IDR4_ADDR, m)
#define HWIO_QPIC_QPIC_VMIDMT_IDR4_MAJOR_BMSK                          0xf0000000
#define HWIO_QPIC_QPIC_VMIDMT_IDR4_MAJOR_SHFT                                0x1c
#define HWIO_QPIC_QPIC_VMIDMT_IDR4_MINOR_BMSK                           0xfff0000
#define HWIO_QPIC_QPIC_VMIDMT_IDR4_MINOR_SHFT                                0x10
#define HWIO_QPIC_QPIC_VMIDMT_IDR4_STEP_BMSK                               0xffff
#define HWIO_QPIC_QPIC_VMIDMT_IDR4_STEP_SHFT                                  0x0

#define HWIO_QPIC_QPIC_VMIDMT_IDR5_ADDR                                (QPIC_QPIC_VMIDMT_REG_BASE      + 0x00000034)
#define HWIO_QPIC_QPIC_VMIDMT_IDR5_RMSK                                  0xff03ff
#define HWIO_QPIC_QPIC_VMIDMT_IDR5_IN          \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_IDR5_ADDR, HWIO_QPIC_QPIC_VMIDMT_IDR5_RMSK)
#define HWIO_QPIC_QPIC_VMIDMT_IDR5_INM(m)      \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_IDR5_ADDR, m)
#define HWIO_QPIC_QPIC_VMIDMT_IDR5_NUMMSDRB_BMSK                         0xff0000
#define HWIO_QPIC_QPIC_VMIDMT_IDR5_NUMMSDRB_SHFT                             0x10
#define HWIO_QPIC_QPIC_VMIDMT_IDR5_MSAE_BMSK                                0x200
#define HWIO_QPIC_QPIC_VMIDMT_IDR5_MSAE_SHFT                                  0x9
#define HWIO_QPIC_QPIC_VMIDMT_IDR5_QRIBE_BMSK                               0x100
#define HWIO_QPIC_QPIC_VMIDMT_IDR5_QRIBE_SHFT                                 0x8
#define HWIO_QPIC_QPIC_VMIDMT_IDR5_NVMID_BMSK                                0xff
#define HWIO_QPIC_QPIC_VMIDMT_IDR5_NVMID_SHFT                                 0x0

#define HWIO_QPIC_QPIC_VMIDMT_IDR7_ADDR                                (QPIC_QPIC_VMIDMT_REG_BASE      + 0x0000003c)
#define HWIO_QPIC_QPIC_VMIDMT_IDR7_RMSK                                      0xff
#define HWIO_QPIC_QPIC_VMIDMT_IDR7_IN          \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_IDR7_ADDR, HWIO_QPIC_QPIC_VMIDMT_IDR7_RMSK)
#define HWIO_QPIC_QPIC_VMIDMT_IDR7_INM(m)      \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_IDR7_ADDR, m)
#define HWIO_QPIC_QPIC_VMIDMT_IDR7_MAJOR_BMSK                                0xf0
#define HWIO_QPIC_QPIC_VMIDMT_IDR7_MAJOR_SHFT                                 0x4
#define HWIO_QPIC_QPIC_VMIDMT_IDR7_MINOR_BMSK                                 0xf
#define HWIO_QPIC_QPIC_VMIDMT_IDR7_MINOR_SHFT                                 0x0

#define HWIO_QPIC_QPIC_VMIDMT_GFAR0_ADDR                               (QPIC_QPIC_VMIDMT_REG_BASE      + 0x00000040)
#define HWIO_QPIC_QPIC_VMIDMT_GFAR0_RMSK                               0xffffffff
#define HWIO_QPIC_QPIC_VMIDMT_GFAR0_IN          \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_GFAR0_ADDR, HWIO_QPIC_QPIC_VMIDMT_GFAR0_RMSK)
#define HWIO_QPIC_QPIC_VMIDMT_GFAR0_INM(m)      \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_GFAR0_ADDR, m)
#define HWIO_QPIC_QPIC_VMIDMT_GFAR0_GFEA0_BMSK                         0xffffffff
#define HWIO_QPIC_QPIC_VMIDMT_GFAR0_GFEA0_SHFT                                0x0

#define HWIO_QPIC_QPIC_VMIDMT_GFSR_ADDR                                (QPIC_QPIC_VMIDMT_REG_BASE      + 0x00000048)
#define HWIO_QPIC_QPIC_VMIDMT_GFSR_RMSK                                0xc00000a6
#define HWIO_QPIC_QPIC_VMIDMT_GFSR_IN          \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_GFSR_ADDR, HWIO_QPIC_QPIC_VMIDMT_GFSR_RMSK)
#define HWIO_QPIC_QPIC_VMIDMT_GFSR_INM(m)      \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_GFSR_ADDR, m)
#define HWIO_QPIC_QPIC_VMIDMT_GFSR_OUT(v)      \
        out_dword(HWIO_QPIC_QPIC_VMIDMT_GFSR_ADDR,v)
#define HWIO_QPIC_QPIC_VMIDMT_GFSR_OUTM(m,v) \
        out_dword_masked_ns(HWIO_QPIC_QPIC_VMIDMT_GFSR_ADDR,m,v,HWIO_QPIC_QPIC_VMIDMT_GFSR_IN)
#define HWIO_QPIC_QPIC_VMIDMT_GFSR_MULTI_CLIENT_BMSK                   0x80000000
#define HWIO_QPIC_QPIC_VMIDMT_GFSR_MULTI_CLIENT_SHFT                         0x1f
#define HWIO_QPIC_QPIC_VMIDMT_GFSR_MULTI_CFG_BMSK                      0x40000000
#define HWIO_QPIC_QPIC_VMIDMT_GFSR_MULTI_CFG_SHFT                            0x1e
#define HWIO_QPIC_QPIC_VMIDMT_GFSR_PF_BMSK                                   0x80
#define HWIO_QPIC_QPIC_VMIDMT_GFSR_PF_SHFT                                    0x7
#define HWIO_QPIC_QPIC_VMIDMT_GFSR_CAF_BMSK                                  0x20
#define HWIO_QPIC_QPIC_VMIDMT_GFSR_CAF_SHFT                                   0x5
#define HWIO_QPIC_QPIC_VMIDMT_GFSR_SMCF_BMSK                                  0x4
#define HWIO_QPIC_QPIC_VMIDMT_GFSR_SMCF_SHFT                                  0x2
#define HWIO_QPIC_QPIC_VMIDMT_GFSR_USF_BMSK                                   0x2
#define HWIO_QPIC_QPIC_VMIDMT_GFSR_USF_SHFT                                   0x1

#define HWIO_QPIC_QPIC_VMIDMT_GFSRRESTORE_ADDR                         (QPIC_QPIC_VMIDMT_REG_BASE      + 0x0000004c)
#define HWIO_QPIC_QPIC_VMIDMT_GFSRRESTORE_RMSK                         0xc00000a6
#define HWIO_QPIC_QPIC_VMIDMT_GFSRRESTORE_IN          \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_GFSRRESTORE_ADDR, HWIO_QPIC_QPIC_VMIDMT_GFSRRESTORE_RMSK)
#define HWIO_QPIC_QPIC_VMIDMT_GFSRRESTORE_INM(m)      \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_GFSRRESTORE_ADDR, m)
#define HWIO_QPIC_QPIC_VMIDMT_GFSRRESTORE_OUT(v)      \
        out_dword(HWIO_QPIC_QPIC_VMIDMT_GFSRRESTORE_ADDR,v)
#define HWIO_QPIC_QPIC_VMIDMT_GFSRRESTORE_OUTM(m,v) \
        out_dword_masked_ns(HWIO_QPIC_QPIC_VMIDMT_GFSRRESTORE_ADDR,m,v,HWIO_QPIC_QPIC_VMIDMT_GFSRRESTORE_IN)
#define HWIO_QPIC_QPIC_VMIDMT_GFSRRESTORE_MULTI_CLIENT_BMSK            0x80000000
#define HWIO_QPIC_QPIC_VMIDMT_GFSRRESTORE_MULTI_CLIENT_SHFT                  0x1f
#define HWIO_QPIC_QPIC_VMIDMT_GFSRRESTORE_MULTI_CFG_BMSK               0x40000000
#define HWIO_QPIC_QPIC_VMIDMT_GFSRRESTORE_MULTI_CFG_SHFT                     0x1e
#define HWIO_QPIC_QPIC_VMIDMT_GFSRRESTORE_PF_BMSK                            0x80
#define HWIO_QPIC_QPIC_VMIDMT_GFSRRESTORE_PF_SHFT                             0x7
#define HWIO_QPIC_QPIC_VMIDMT_GFSRRESTORE_CAF_BMSK                           0x20
#define HWIO_QPIC_QPIC_VMIDMT_GFSRRESTORE_CAF_SHFT                            0x5
#define HWIO_QPIC_QPIC_VMIDMT_GFSRRESTORE_SMCF_BMSK                           0x4
#define HWIO_QPIC_QPIC_VMIDMT_GFSRRESTORE_SMCF_SHFT                           0x2
#define HWIO_QPIC_QPIC_VMIDMT_GFSRRESTORE_USF_BMSK                            0x2
#define HWIO_QPIC_QPIC_VMIDMT_GFSRRESTORE_USF_SHFT                            0x1

#define HWIO_QPIC_QPIC_VMIDMT_GFSYNDR0_ADDR                            (QPIC_QPIC_VMIDMT_REG_BASE      + 0x00000050)
#define HWIO_QPIC_QPIC_VMIDMT_GFSYNDR0_RMSK                                 0x132
#define HWIO_QPIC_QPIC_VMIDMT_GFSYNDR0_IN          \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_GFSYNDR0_ADDR, HWIO_QPIC_QPIC_VMIDMT_GFSYNDR0_RMSK)
#define HWIO_QPIC_QPIC_VMIDMT_GFSYNDR0_INM(m)      \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_GFSYNDR0_ADDR, m)
#define HWIO_QPIC_QPIC_VMIDMT_GFSYNDR0_MSSSELFAUTH_BMSK                     0x100
#define HWIO_QPIC_QPIC_VMIDMT_GFSYNDR0_MSSSELFAUTH_SHFT                       0x8
#define HWIO_QPIC_QPIC_VMIDMT_GFSYNDR0_NSATTR_BMSK                           0x20
#define HWIO_QPIC_QPIC_VMIDMT_GFSYNDR0_NSATTR_SHFT                            0x5
#define HWIO_QPIC_QPIC_VMIDMT_GFSYNDR0_NSSTATE_BMSK                          0x10
#define HWIO_QPIC_QPIC_VMIDMT_GFSYNDR0_NSSTATE_SHFT                           0x4
#define HWIO_QPIC_QPIC_VMIDMT_GFSYNDR0_WNR_BMSK                               0x2
#define HWIO_QPIC_QPIC_VMIDMT_GFSYNDR0_WNR_SHFT                               0x1

#define HWIO_QPIC_QPIC_VMIDMT_GFSYNDR1_ADDR                            (QPIC_QPIC_VMIDMT_REG_BASE      + 0x00000054)
#define HWIO_QPIC_QPIC_VMIDMT_GFSYNDR1_RMSK                             0x7070007
#define HWIO_QPIC_QPIC_VMIDMT_GFSYNDR1_IN          \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_GFSYNDR1_ADDR, HWIO_QPIC_QPIC_VMIDMT_GFSYNDR1_RMSK)
#define HWIO_QPIC_QPIC_VMIDMT_GFSYNDR1_INM(m)      \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_GFSYNDR1_ADDR, m)
#define HWIO_QPIC_QPIC_VMIDMT_GFSYNDR1_MSDINDEX_BMSK                    0x7000000
#define HWIO_QPIC_QPIC_VMIDMT_GFSYNDR1_MSDINDEX_SHFT                         0x18
#define HWIO_QPIC_QPIC_VMIDMT_GFSYNDR1_SSDINDEX_BMSK                      0x70000
#define HWIO_QPIC_QPIC_VMIDMT_GFSYNDR1_SSDINDEX_SHFT                         0x10
#define HWIO_QPIC_QPIC_VMIDMT_GFSYNDR1_STREAMINDEX_BMSK                       0x7
#define HWIO_QPIC_QPIC_VMIDMT_GFSYNDR1_STREAMINDEX_SHFT                       0x0

#define HWIO_QPIC_QPIC_VMIDMT_GFSYNDR2_ADDR                            (QPIC_QPIC_VMIDMT_REG_BASE      + 0x00000058)
#define HWIO_QPIC_QPIC_VMIDMT_GFSYNDR2_RMSK                            0x3f1fffff
#define HWIO_QPIC_QPIC_VMIDMT_GFSYNDR2_IN          \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_GFSYNDR2_ADDR, HWIO_QPIC_QPIC_VMIDMT_GFSYNDR2_RMSK)
#define HWIO_QPIC_QPIC_VMIDMT_GFSYNDR2_INM(m)      \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_GFSYNDR2_ADDR, m)
#define HWIO_QPIC_QPIC_VMIDMT_GFSYNDR2_ATID_BMSK                       0x3f000000
#define HWIO_QPIC_QPIC_VMIDMT_GFSYNDR2_ATID_SHFT                             0x18
#define HWIO_QPIC_QPIC_VMIDMT_GFSYNDR2_AVMID_BMSK                        0x1f0000
#define HWIO_QPIC_QPIC_VMIDMT_GFSYNDR2_AVMID_SHFT                            0x10
#define HWIO_QPIC_QPIC_VMIDMT_GFSYNDR2_ABID_BMSK                           0xe000
#define HWIO_QPIC_QPIC_VMIDMT_GFSYNDR2_ABID_SHFT                              0xd
#define HWIO_QPIC_QPIC_VMIDMT_GFSYNDR2_APID_BMSK                           0x1f00
#define HWIO_QPIC_QPIC_VMIDMT_GFSYNDR2_APID_SHFT                              0x8
#define HWIO_QPIC_QPIC_VMIDMT_GFSYNDR2_AMID_BMSK                             0xff
#define HWIO_QPIC_QPIC_VMIDMT_GFSYNDR2_AMID_SHFT                              0x0

#define HWIO_QPIC_QPIC_VMIDMT_VMIDMTCR0_ADDR                           (QPIC_QPIC_VMIDMT_REG_BASE      + 0x00000090)
#define HWIO_QPIC_QPIC_VMIDMT_VMIDMTCR0_RMSK                                  0x1
#define HWIO_QPIC_QPIC_VMIDMT_VMIDMTCR0_IN          \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_VMIDMTCR0_ADDR, HWIO_QPIC_QPIC_VMIDMT_VMIDMTCR0_RMSK)
#define HWIO_QPIC_QPIC_VMIDMT_VMIDMTCR0_INM(m)      \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_VMIDMTCR0_ADDR, m)
#define HWIO_QPIC_QPIC_VMIDMT_VMIDMTCR0_OUT(v)      \
        out_dword(HWIO_QPIC_QPIC_VMIDMT_VMIDMTCR0_ADDR,v)
#define HWIO_QPIC_QPIC_VMIDMT_VMIDMTCR0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_QPIC_QPIC_VMIDMT_VMIDMTCR0_ADDR,m,v,HWIO_QPIC_QPIC_VMIDMT_VMIDMTCR0_IN)
#define HWIO_QPIC_QPIC_VMIDMT_VMIDMTCR0_CLKONOFFE_BMSK                        0x1
#define HWIO_QPIC_QPIC_VMIDMT_VMIDMTCR0_CLKONOFFE_SHFT                        0x0

#define HWIO_QPIC_QPIC_VMIDMT_VMIDMTACR_ADDR                           (QPIC_QPIC_VMIDMT_REG_BASE      + 0x0000009c)
#define HWIO_QPIC_QPIC_VMIDMT_VMIDMTACR_RMSK                           0xffffffff
#define HWIO_QPIC_QPIC_VMIDMT_VMIDMTACR_IN          \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_VMIDMTACR_ADDR, HWIO_QPIC_QPIC_VMIDMT_VMIDMTACR_RMSK)
#define HWIO_QPIC_QPIC_VMIDMT_VMIDMTACR_INM(m)      \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_VMIDMTACR_ADDR, m)
#define HWIO_QPIC_QPIC_VMIDMT_VMIDMTACR_OUT(v)      \
        out_dword(HWIO_QPIC_QPIC_VMIDMT_VMIDMTACR_ADDR,v)
#define HWIO_QPIC_QPIC_VMIDMT_VMIDMTACR_OUTM(m,v) \
        out_dword_masked_ns(HWIO_QPIC_QPIC_VMIDMT_VMIDMTACR_ADDR,m,v,HWIO_QPIC_QPIC_VMIDMT_VMIDMTACR_IN)
#define HWIO_QPIC_QPIC_VMIDMT_VMIDMTACR_RWE_BMSK                       0xffffffff
#define HWIO_QPIC_QPIC_VMIDMT_VMIDMTACR_RWE_SHFT                              0x0

#define HWIO_QPIC_QPIC_VMIDMT_NSCR0_ADDR                               (QPIC_QPIC_VMIDMT_REG_BASE      + 0x00000400)
#define HWIO_QPIC_QPIC_VMIDMT_NSCR0_RMSK                                0xff70ff5
#define HWIO_QPIC_QPIC_VMIDMT_NSCR0_IN          \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_NSCR0_ADDR, HWIO_QPIC_QPIC_VMIDMT_NSCR0_RMSK)
#define HWIO_QPIC_QPIC_VMIDMT_NSCR0_INM(m)      \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_NSCR0_ADDR, m)
#define HWIO_QPIC_QPIC_VMIDMT_NSCR0_OUT(v)      \
        out_dword(HWIO_QPIC_QPIC_VMIDMT_NSCR0_ADDR,v)
#define HWIO_QPIC_QPIC_VMIDMT_NSCR0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_QPIC_QPIC_VMIDMT_NSCR0_ADDR,m,v,HWIO_QPIC_QPIC_VMIDMT_NSCR0_IN)
#define HWIO_QPIC_QPIC_VMIDMT_NSCR0_WACFG_BMSK                          0xc000000
#define HWIO_QPIC_QPIC_VMIDMT_NSCR0_WACFG_SHFT                               0x1a
#define HWIO_QPIC_QPIC_VMIDMT_NSCR0_RACFG_BMSK                          0x3000000
#define HWIO_QPIC_QPIC_VMIDMT_NSCR0_RACFG_SHFT                               0x18
#define HWIO_QPIC_QPIC_VMIDMT_NSCR0_SHCFG_BMSK                           0xc00000
#define HWIO_QPIC_QPIC_VMIDMT_NSCR0_SHCFG_SHFT                               0x16
#define HWIO_QPIC_QPIC_VMIDMT_NSCR0_SMCFCFG_BMSK                         0x200000
#define HWIO_QPIC_QPIC_VMIDMT_NSCR0_SMCFCFG_SHFT                             0x15
#define HWIO_QPIC_QPIC_VMIDMT_NSCR0_MTCFG_BMSK                           0x100000
#define HWIO_QPIC_QPIC_VMIDMT_NSCR0_MTCFG_SHFT                               0x14
#define HWIO_QPIC_QPIC_VMIDMT_NSCR0_MEMATTR_BMSK                          0x70000
#define HWIO_QPIC_QPIC_VMIDMT_NSCR0_MEMATTR_SHFT                             0x10
#define HWIO_QPIC_QPIC_VMIDMT_NSCR0_VMIDPNE_BMSK                            0x800
#define HWIO_QPIC_QPIC_VMIDMT_NSCR0_VMIDPNE_SHFT                              0xb
#define HWIO_QPIC_QPIC_VMIDMT_NSCR0_USFCFG_BMSK                             0x400
#define HWIO_QPIC_QPIC_VMIDMT_NSCR0_USFCFG_SHFT                               0xa
#define HWIO_QPIC_QPIC_VMIDMT_NSCR0_GSE_BMSK                                0x200
#define HWIO_QPIC_QPIC_VMIDMT_NSCR0_GSE_SHFT                                  0x9
#define HWIO_QPIC_QPIC_VMIDMT_NSCR0_STALLD_BMSK                             0x100
#define HWIO_QPIC_QPIC_VMIDMT_NSCR0_STALLD_SHFT                               0x8
#define HWIO_QPIC_QPIC_VMIDMT_NSCR0_TRANSIENTCFG_BMSK                        0xc0
#define HWIO_QPIC_QPIC_VMIDMT_NSCR0_TRANSIENTCFG_SHFT                         0x6
#define HWIO_QPIC_QPIC_VMIDMT_NSCR0_GCFGFIE_BMSK                             0x20
#define HWIO_QPIC_QPIC_VMIDMT_NSCR0_GCFGFIE_SHFT                              0x5
#define HWIO_QPIC_QPIC_VMIDMT_NSCR0_GCFGERE_BMSK                             0x10
#define HWIO_QPIC_QPIC_VMIDMT_NSCR0_GCFGERE_SHFT                              0x4
#define HWIO_QPIC_QPIC_VMIDMT_NSCR0_GFIE_BMSK                                 0x4
#define HWIO_QPIC_QPIC_VMIDMT_NSCR0_GFIE_SHFT                                 0x2
#define HWIO_QPIC_QPIC_VMIDMT_NSCR0_CLIENTPD_BMSK                             0x1
#define HWIO_QPIC_QPIC_VMIDMT_NSCR0_CLIENTPD_SHFT                             0x0

#define HWIO_QPIC_QPIC_VMIDMT_NSCR2_ADDR                               (QPIC_QPIC_VMIDMT_REG_BASE      + 0x00000408)
#define HWIO_QPIC_QPIC_VMIDMT_NSCR2_RMSK                                     0x1f
#define HWIO_QPIC_QPIC_VMIDMT_NSCR2_IN          \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_NSCR2_ADDR, HWIO_QPIC_QPIC_VMIDMT_NSCR2_RMSK)
#define HWIO_QPIC_QPIC_VMIDMT_NSCR2_INM(m)      \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_NSCR2_ADDR, m)
#define HWIO_QPIC_QPIC_VMIDMT_NSCR2_OUT(v)      \
        out_dword(HWIO_QPIC_QPIC_VMIDMT_NSCR2_ADDR,v)
#define HWIO_QPIC_QPIC_VMIDMT_NSCR2_OUTM(m,v) \
        out_dword_masked_ns(HWIO_QPIC_QPIC_VMIDMT_NSCR2_ADDR,m,v,HWIO_QPIC_QPIC_VMIDMT_NSCR2_IN)
#define HWIO_QPIC_QPIC_VMIDMT_NSCR2_BPVMID_BMSK                              0x1f
#define HWIO_QPIC_QPIC_VMIDMT_NSCR2_BPVMID_SHFT                               0x0

#define HWIO_QPIC_QPIC_VMIDMT_NSACR_ADDR                               (QPIC_QPIC_VMIDMT_REG_BASE      + 0x00000410)
#define HWIO_QPIC_QPIC_VMIDMT_NSACR_RMSK                               0x70000013
#define HWIO_QPIC_QPIC_VMIDMT_NSACR_IN          \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_NSACR_ADDR, HWIO_QPIC_QPIC_VMIDMT_NSACR_RMSK)
#define HWIO_QPIC_QPIC_VMIDMT_NSACR_INM(m)      \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_NSACR_ADDR, m)
#define HWIO_QPIC_QPIC_VMIDMT_NSACR_OUT(v)      \
        out_dword(HWIO_QPIC_QPIC_VMIDMT_NSACR_ADDR,v)
#define HWIO_QPIC_QPIC_VMIDMT_NSACR_OUTM(m,v) \
        out_dword_masked_ns(HWIO_QPIC_QPIC_VMIDMT_NSACR_ADDR,m,v,HWIO_QPIC_QPIC_VMIDMT_NSACR_IN)
#define HWIO_QPIC_QPIC_VMIDMT_NSACR_BPRCNSH_BMSK                       0x40000000
#define HWIO_QPIC_QPIC_VMIDMT_NSACR_BPRCNSH_SHFT                             0x1e
#define HWIO_QPIC_QPIC_VMIDMT_NSACR_BPRCISH_BMSK                       0x20000000
#define HWIO_QPIC_QPIC_VMIDMT_NSACR_BPRCISH_SHFT                             0x1d
#define HWIO_QPIC_QPIC_VMIDMT_NSACR_BPRCOSH_BMSK                       0x10000000
#define HWIO_QPIC_QPIC_VMIDMT_NSACR_BPRCOSH_SHFT                             0x1c
#define HWIO_QPIC_QPIC_VMIDMT_NSACR_BPREQPRIORITYCFG_BMSK                    0x10
#define HWIO_QPIC_QPIC_VMIDMT_NSACR_BPREQPRIORITYCFG_SHFT                     0x4
#define HWIO_QPIC_QPIC_VMIDMT_NSACR_BPREQPRIORITY_BMSK                        0x3
#define HWIO_QPIC_QPIC_VMIDMT_NSACR_BPREQPRIORITY_SHFT                        0x0

#define HWIO_QPIC_QPIC_VMIDMT_NSGFAR0_ADDR                             (QPIC_QPIC_VMIDMT_REG_BASE      + 0x00000440)
#define HWIO_QPIC_QPIC_VMIDMT_NSGFAR0_RMSK                             0xffffffff
#define HWIO_QPIC_QPIC_VMIDMT_NSGFAR0_IN          \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_NSGFAR0_ADDR, HWIO_QPIC_QPIC_VMIDMT_NSGFAR0_RMSK)
#define HWIO_QPIC_QPIC_VMIDMT_NSGFAR0_INM(m)      \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_NSGFAR0_ADDR, m)
#define HWIO_QPIC_QPIC_VMIDMT_NSGFAR0_GFEA0_BMSK                       0xffffffff
#define HWIO_QPIC_QPIC_VMIDMT_NSGFAR0_GFEA0_SHFT                              0x0

#define HWIO_QPIC_QPIC_VMIDMT_NSGFSR_ADDR                              (QPIC_QPIC_VMIDMT_REG_BASE      + 0x00000448)
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSR_RMSK                              0xc00000a6
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSR_IN          \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_NSGFSR_ADDR, HWIO_QPIC_QPIC_VMIDMT_NSGFSR_RMSK)
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSR_INM(m)      \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_NSGFSR_ADDR, m)
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSR_OUT(v)      \
        out_dword(HWIO_QPIC_QPIC_VMIDMT_NSGFSR_ADDR,v)
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSR_OUTM(m,v) \
        out_dword_masked_ns(HWIO_QPIC_QPIC_VMIDMT_NSGFSR_ADDR,m,v,HWIO_QPIC_QPIC_VMIDMT_NSGFSR_IN)
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSR_MULTI_CLIENT_BMSK                 0x80000000
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSR_MULTI_CLIENT_SHFT                       0x1f
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSR_MULTI_CFG_BMSK                    0x40000000
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSR_MULTI_CFG_SHFT                          0x1e
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSR_PF_BMSK                                 0x80
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSR_PF_SHFT                                  0x7
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSR_CAF_BMSK                                0x20
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSR_CAF_SHFT                                 0x5
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSR_SMCF_BMSK                                0x4
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSR_SMCF_SHFT                                0x2
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSR_USF_BMSK                                 0x2
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSR_USF_SHFT                                 0x1

#define HWIO_QPIC_QPIC_VMIDMT_NSGFSRRESTORE_ADDR                       (QPIC_QPIC_VMIDMT_REG_BASE      + 0x0000044c)
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSRRESTORE_RMSK                       0xc00000a6
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSRRESTORE_IN          \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_NSGFSRRESTORE_ADDR, HWIO_QPIC_QPIC_VMIDMT_NSGFSRRESTORE_RMSK)
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSRRESTORE_INM(m)      \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_NSGFSRRESTORE_ADDR, m)
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSRRESTORE_OUT(v)      \
        out_dword(HWIO_QPIC_QPIC_VMIDMT_NSGFSRRESTORE_ADDR,v)
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSRRESTORE_OUTM(m,v) \
        out_dword_masked_ns(HWIO_QPIC_QPIC_VMIDMT_NSGFSRRESTORE_ADDR,m,v,HWIO_QPIC_QPIC_VMIDMT_NSGFSRRESTORE_IN)
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSRRESTORE_MULTI_CLIENT_BMSK          0x80000000
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSRRESTORE_MULTI_CLIENT_SHFT                0x1f
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSRRESTORE_MULTI_CFG_BMSK             0x40000000
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSRRESTORE_MULTI_CFG_SHFT                   0x1e
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSRRESTORE_PF_BMSK                          0x80
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSRRESTORE_PF_SHFT                           0x7
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSRRESTORE_CAF_BMSK                         0x20
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSRRESTORE_CAF_SHFT                          0x5
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSRRESTORE_SMCF_BMSK                         0x4
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSRRESTORE_SMCF_SHFT                         0x2
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSRRESTORE_USF_BMSK                          0x2
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSRRESTORE_USF_SHFT                          0x1

#define HWIO_QPIC_QPIC_VMIDMT_NSGFSYNDR0_ADDR                          (QPIC_QPIC_VMIDMT_REG_BASE      + 0x00000450)
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSYNDR0_RMSK                               0x132
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSYNDR0_IN          \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_NSGFSYNDR0_ADDR, HWIO_QPIC_QPIC_VMIDMT_NSGFSYNDR0_RMSK)
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSYNDR0_INM(m)      \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_NSGFSYNDR0_ADDR, m)
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSYNDR0_MSSSELFAUTH_BMSK                   0x100
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSYNDR0_MSSSELFAUTH_SHFT                     0x8
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSYNDR0_NSATTR_BMSK                         0x20
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSYNDR0_NSATTR_SHFT                          0x5
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSYNDR0_NSSTATE_BMSK                        0x10
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSYNDR0_NSSTATE_SHFT                         0x4
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSYNDR0_WNR_BMSK                             0x2
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSYNDR0_WNR_SHFT                             0x1

#define HWIO_QPIC_QPIC_VMIDMT_NSGFSYNDR1_ADDR                          (QPIC_QPIC_VMIDMT_REG_BASE      + 0x00000454)
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSYNDR1_RMSK                           0x7070007
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSYNDR1_IN          \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_NSGFSYNDR1_ADDR, HWIO_QPIC_QPIC_VMIDMT_NSGFSYNDR1_RMSK)
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSYNDR1_INM(m)      \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_NSGFSYNDR1_ADDR, m)
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSYNDR1_MSDINDEX_BMSK                  0x7000000
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSYNDR1_MSDINDEX_SHFT                       0x18
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSYNDR1_SSDINDEX_BMSK                    0x70000
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSYNDR1_SSDINDEX_SHFT                       0x10
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSYNDR1_STREAMINDEX_BMSK                     0x7
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSYNDR1_STREAMINDEX_SHFT                     0x0

#define HWIO_QPIC_QPIC_VMIDMT_NSGFSYNDR2_ADDR                          (QPIC_QPIC_VMIDMT_REG_BASE      + 0x00000458)
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSYNDR2_RMSK                          0x3f1fffff
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSYNDR2_IN          \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_NSGFSYNDR2_ADDR, HWIO_QPIC_QPIC_VMIDMT_NSGFSYNDR2_RMSK)
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSYNDR2_INM(m)      \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_NSGFSYNDR2_ADDR, m)
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSYNDR2_ATID_BMSK                     0x3f000000
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSYNDR2_ATID_SHFT                           0x18
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSYNDR2_AVMID_BMSK                      0x1f0000
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSYNDR2_AVMID_SHFT                          0x10
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSYNDR2_ABID_BMSK                         0xe000
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSYNDR2_ABID_SHFT                            0xd
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSYNDR2_APID_BMSK                         0x1f00
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSYNDR2_APID_SHFT                            0x8
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSYNDR2_AMID_BMSK                           0xff
#define HWIO_QPIC_QPIC_VMIDMT_NSGFSYNDR2_AMID_SHFT                            0x0

#define HWIO_QPIC_QPIC_VMIDMT_NSVMIDMTCR0_ADDR                         (QPIC_QPIC_VMIDMT_REG_BASE      + 0x00000490)
#define HWIO_QPIC_QPIC_VMIDMT_NSVMIDMTCR0_RMSK                                0x1
#define HWIO_QPIC_QPIC_VMIDMT_NSVMIDMTCR0_IN          \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_NSVMIDMTCR0_ADDR, HWIO_QPIC_QPIC_VMIDMT_NSVMIDMTCR0_RMSK)
#define HWIO_QPIC_QPIC_VMIDMT_NSVMIDMTCR0_INM(m)      \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_NSVMIDMTCR0_ADDR, m)
#define HWIO_QPIC_QPIC_VMIDMT_NSVMIDMTCR0_OUT(v)      \
        out_dword(HWIO_QPIC_QPIC_VMIDMT_NSVMIDMTCR0_ADDR,v)
#define HWIO_QPIC_QPIC_VMIDMT_NSVMIDMTCR0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_QPIC_QPIC_VMIDMT_NSVMIDMTCR0_ADDR,m,v,HWIO_QPIC_QPIC_VMIDMT_NSVMIDMTCR0_IN)
#define HWIO_QPIC_QPIC_VMIDMT_NSVMIDMTCR0_CLKONOFFE_BMSK                      0x1
#define HWIO_QPIC_QPIC_VMIDMT_NSVMIDMTCR0_CLKONOFFE_SHFT                      0x0

#define HWIO_QPIC_QPIC_VMIDMT_SSDR0_ADDR                               (QPIC_QPIC_VMIDMT_REG_BASE      + 0x00000080)
#define HWIO_QPIC_QPIC_VMIDMT_SSDR0_RMSK                                     0xff
#define HWIO_QPIC_QPIC_VMIDMT_SSDR0_IN          \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_SSDR0_ADDR, HWIO_QPIC_QPIC_VMIDMT_SSDR0_RMSK)
#define HWIO_QPIC_QPIC_VMIDMT_SSDR0_INM(m)      \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_SSDR0_ADDR, m)
#define HWIO_QPIC_QPIC_VMIDMT_SSDR0_OUT(v)      \
        out_dword(HWIO_QPIC_QPIC_VMIDMT_SSDR0_ADDR,v)
#define HWIO_QPIC_QPIC_VMIDMT_SSDR0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_QPIC_QPIC_VMIDMT_SSDR0_ADDR,m,v,HWIO_QPIC_QPIC_VMIDMT_SSDR0_IN)
#define HWIO_QPIC_QPIC_VMIDMT_SSDR0_RWE_BMSK                                 0xff
#define HWIO_QPIC_QPIC_VMIDMT_SSDR0_RWE_SHFT                                  0x0

#define HWIO_QPIC_QPIC_VMIDMT_MSDR0_ADDR                               (QPIC_QPIC_VMIDMT_REG_BASE      + 0x00000480)
#define HWIO_QPIC_QPIC_VMIDMT_MSDR0_RMSK                                     0xff
#define HWIO_QPIC_QPIC_VMIDMT_MSDR0_IN          \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_MSDR0_ADDR, HWIO_QPIC_QPIC_VMIDMT_MSDR0_RMSK)
#define HWIO_QPIC_QPIC_VMIDMT_MSDR0_INM(m)      \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_MSDR0_ADDR, m)
#define HWIO_QPIC_QPIC_VMIDMT_MSDR0_OUT(v)      \
        out_dword(HWIO_QPIC_QPIC_VMIDMT_MSDR0_ADDR,v)
#define HWIO_QPIC_QPIC_VMIDMT_MSDR0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_QPIC_QPIC_VMIDMT_MSDR0_ADDR,m,v,HWIO_QPIC_QPIC_VMIDMT_MSDR0_IN)
#define HWIO_QPIC_QPIC_VMIDMT_MSDR0_RWE_BMSK                                 0xff
#define HWIO_QPIC_QPIC_VMIDMT_MSDR0_RWE_SHFT                                  0x0

#define HWIO_QPIC_QPIC_VMIDMT_MCR_ADDR                                 (QPIC_QPIC_VMIDMT_REG_BASE      + 0x00000494)
#define HWIO_QPIC_QPIC_VMIDMT_MCR_RMSK                                        0x7
#define HWIO_QPIC_QPIC_VMIDMT_MCR_IN          \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_MCR_ADDR, HWIO_QPIC_QPIC_VMIDMT_MCR_RMSK)
#define HWIO_QPIC_QPIC_VMIDMT_MCR_INM(m)      \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_MCR_ADDR, m)
#define HWIO_QPIC_QPIC_VMIDMT_MCR_OUT(v)      \
        out_dword(HWIO_QPIC_QPIC_VMIDMT_MCR_ADDR,v)
#define HWIO_QPIC_QPIC_VMIDMT_MCR_OUTM(m,v) \
        out_dword_masked_ns(HWIO_QPIC_QPIC_VMIDMT_MCR_ADDR,m,v,HWIO_QPIC_QPIC_VMIDMT_MCR_IN)
#define HWIO_QPIC_QPIC_VMIDMT_MCR_CLKONOFFE_BMSK                              0x4
#define HWIO_QPIC_QPIC_VMIDMT_MCR_CLKONOFFE_SHFT                              0x2
#define HWIO_QPIC_QPIC_VMIDMT_MCR_BPMSACFG_BMSK                               0x2
#define HWIO_QPIC_QPIC_VMIDMT_MCR_BPMSACFG_SHFT                               0x1
#define HWIO_QPIC_QPIC_VMIDMT_MCR_BPSMSACFG_BMSK                              0x1
#define HWIO_QPIC_QPIC_VMIDMT_MCR_BPSMSACFG_SHFT                              0x0

#define HWIO_QPIC_QPIC_VMIDMT_S2VRn_ADDR(n)                            (QPIC_QPIC_VMIDMT_REG_BASE      + 0x00000c00 + 0x4 * (n))
#define HWIO_QPIC_QPIC_VMIDMT_S2VRn_RMSK                               0x30ff7b1f
#define HWIO_QPIC_QPIC_VMIDMT_S2VRn_MAXn                                        7
#define HWIO_QPIC_QPIC_VMIDMT_S2VRn_INI(n)        \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_S2VRn_ADDR(n), HWIO_QPIC_QPIC_VMIDMT_S2VRn_RMSK)
#define HWIO_QPIC_QPIC_VMIDMT_S2VRn_INMI(n,mask)    \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_S2VRn_ADDR(n), mask)
#define HWIO_QPIC_QPIC_VMIDMT_S2VRn_OUTI(n,val)    \
        out_dword(HWIO_QPIC_QPIC_VMIDMT_S2VRn_ADDR(n),val)
#define HWIO_QPIC_QPIC_VMIDMT_S2VRn_OUTMI(n,mask,val) \
        out_dword_masked_ns(HWIO_QPIC_QPIC_VMIDMT_S2VRn_ADDR(n),mask,val,HWIO_QPIC_QPIC_VMIDMT_S2VRn_INI(n))
#define HWIO_QPIC_QPIC_VMIDMT_S2VRn_TRANSIENTCFG_BMSK                  0x30000000
#define HWIO_QPIC_QPIC_VMIDMT_S2VRn_TRANSIENTCFG_SHFT                        0x1c
#define HWIO_QPIC_QPIC_VMIDMT_S2VRn_WACFG_BMSK                           0xc00000
#define HWIO_QPIC_QPIC_VMIDMT_S2VRn_WACFG_SHFT                               0x16
#define HWIO_QPIC_QPIC_VMIDMT_S2VRn_RACFG_BMSK                           0x300000
#define HWIO_QPIC_QPIC_VMIDMT_S2VRn_RACFG_SHFT                               0x14
#define HWIO_QPIC_QPIC_VMIDMT_S2VRn_NSCFG_BMSK                            0xc0000
#define HWIO_QPIC_QPIC_VMIDMT_S2VRn_NSCFG_SHFT                               0x12
#define HWIO_QPIC_QPIC_VMIDMT_S2VRn_TYPE_BMSK                             0x30000
#define HWIO_QPIC_QPIC_VMIDMT_S2VRn_TYPE_SHFT                                0x10
#define HWIO_QPIC_QPIC_VMIDMT_S2VRn_MEMATTR_BMSK                           0x7000
#define HWIO_QPIC_QPIC_VMIDMT_S2VRn_MEMATTR_SHFT                              0xc
#define HWIO_QPIC_QPIC_VMIDMT_S2VRn_MTCFG_BMSK                              0x800
#define HWIO_QPIC_QPIC_VMIDMT_S2VRn_MTCFG_SHFT                                0xb
#define HWIO_QPIC_QPIC_VMIDMT_S2VRn_SHCFG_BMSK                              0x300
#define HWIO_QPIC_QPIC_VMIDMT_S2VRn_SHCFG_SHFT                                0x8
#define HWIO_QPIC_QPIC_VMIDMT_S2VRn_VMID_BMSK                                0x1f
#define HWIO_QPIC_QPIC_VMIDMT_S2VRn_VMID_SHFT                                 0x0

#define HWIO_QPIC_QPIC_VMIDMT_AS2VRn_ADDR(n)                           (QPIC_QPIC_VMIDMT_REG_BASE      + 0x00000e00 + 0x4 * (n))
#define HWIO_QPIC_QPIC_VMIDMT_AS2VRn_RMSK                              0x70000013
#define HWIO_QPIC_QPIC_VMIDMT_AS2VRn_MAXn                                       7
#define HWIO_QPIC_QPIC_VMIDMT_AS2VRn_INI(n)        \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_AS2VRn_ADDR(n), HWIO_QPIC_QPIC_VMIDMT_AS2VRn_RMSK)
#define HWIO_QPIC_QPIC_VMIDMT_AS2VRn_INMI(n,mask)    \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_AS2VRn_ADDR(n), mask)
#define HWIO_QPIC_QPIC_VMIDMT_AS2VRn_OUTI(n,val)    \
        out_dword(HWIO_QPIC_QPIC_VMIDMT_AS2VRn_ADDR(n),val)
#define HWIO_QPIC_QPIC_VMIDMT_AS2VRn_OUTMI(n,mask,val) \
        out_dword_masked_ns(HWIO_QPIC_QPIC_VMIDMT_AS2VRn_ADDR(n),mask,val,HWIO_QPIC_QPIC_VMIDMT_AS2VRn_INI(n))
#define HWIO_QPIC_QPIC_VMIDMT_AS2VRn_RCNSH_BMSK                        0x40000000
#define HWIO_QPIC_QPIC_VMIDMT_AS2VRn_RCNSH_SHFT                              0x1e
#define HWIO_QPIC_QPIC_VMIDMT_AS2VRn_RCISH_BMSK                        0x20000000
#define HWIO_QPIC_QPIC_VMIDMT_AS2VRn_RCISH_SHFT                              0x1d
#define HWIO_QPIC_QPIC_VMIDMT_AS2VRn_RCOSH_BMSK                        0x10000000
#define HWIO_QPIC_QPIC_VMIDMT_AS2VRn_RCOSH_SHFT                              0x1c
#define HWIO_QPIC_QPIC_VMIDMT_AS2VRn_REQPRIORITYCFG_BMSK                     0x10
#define HWIO_QPIC_QPIC_VMIDMT_AS2VRn_REQPRIORITYCFG_SHFT                      0x4
#define HWIO_QPIC_QPIC_VMIDMT_AS2VRn_REQPRIORITY_BMSK                         0x3
#define HWIO_QPIC_QPIC_VMIDMT_AS2VRn_REQPRIORITY_SHFT                         0x0

#define HWIO_QPIC_QPIC_VMIDMT_SMRn_ADDR(n)                             (QPIC_QPIC_VMIDMT_REG_BASE      + 0x00000800 + 0x4 * (n))
#define HWIO_QPIC_QPIC_VMIDMT_SMRn_RMSK                                0x80070007
#define HWIO_QPIC_QPIC_VMIDMT_SMRn_MAXn                                         7
#define HWIO_QPIC_QPIC_VMIDMT_SMRn_INI(n)        \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_SMRn_ADDR(n), HWIO_QPIC_QPIC_VMIDMT_SMRn_RMSK)
#define HWIO_QPIC_QPIC_VMIDMT_SMRn_INMI(n,mask)    \
        in_dword_masked(HWIO_QPIC_QPIC_VMIDMT_SMRn_ADDR(n), mask)
#define HWIO_QPIC_QPIC_VMIDMT_SMRn_OUTI(n,val)    \
        out_dword(HWIO_QPIC_QPIC_VMIDMT_SMRn_ADDR(n),val)
#define HWIO_QPIC_QPIC_VMIDMT_SMRn_OUTMI(n,mask,val) \
        out_dword_masked_ns(HWIO_QPIC_QPIC_VMIDMT_SMRn_ADDR(n),mask,val,HWIO_QPIC_QPIC_VMIDMT_SMRn_INI(n))
#define HWIO_QPIC_QPIC_VMIDMT_SMRn_VALID_BMSK                          0x80000000
#define HWIO_QPIC_QPIC_VMIDMT_SMRn_VALID_SHFT                                0x1f
#define HWIO_QPIC_QPIC_VMIDMT_SMRn_MASK_BMSK                              0x70000
#define HWIO_QPIC_QPIC_VMIDMT_SMRn_MASK_SHFT                                 0x10
#define HWIO_QPIC_QPIC_VMIDMT_SMRn_ID_BMSK                                    0x7
#define HWIO_QPIC_QPIC_VMIDMT_SMRn_ID_SHFT                                    0x0

/*----------------------------------------------------------------------------
 * MODULE: RPM_VMIDMT
 *--------------------------------------------------------------------------*/

#define RPM_VMIDMT_REG_BASE                                      (RPM_BASE      + 0x00088000)

#define HWIO_RPM_VMIDMT_SCR0_ADDR                                (RPM_VMIDMT_REG_BASE      + 0x00000000)
#define HWIO_RPM_VMIDMT_SCR0_RMSK                                0x3fd707f5
#define HWIO_RPM_VMIDMT_SCR0_IN          \
        in_dword_masked(HWIO_RPM_VMIDMT_SCR0_ADDR, HWIO_RPM_VMIDMT_SCR0_RMSK)
#define HWIO_RPM_VMIDMT_SCR0_INM(m)      \
        in_dword_masked(HWIO_RPM_VMIDMT_SCR0_ADDR, m)
#define HWIO_RPM_VMIDMT_SCR0_OUT(v)      \
        out_dword(HWIO_RPM_VMIDMT_SCR0_ADDR,v)
#define HWIO_RPM_VMIDMT_SCR0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_RPM_VMIDMT_SCR0_ADDR,m,v,HWIO_RPM_VMIDMT_SCR0_IN)
#define HWIO_RPM_VMIDMT_SCR0_NSCFG_BMSK                          0x30000000
#define HWIO_RPM_VMIDMT_SCR0_NSCFG_SHFT                                0x1c
#define HWIO_RPM_VMIDMT_SCR0_WACFG_BMSK                           0xc000000
#define HWIO_RPM_VMIDMT_SCR0_WACFG_SHFT                                0x1a
#define HWIO_RPM_VMIDMT_SCR0_RACFG_BMSK                           0x3000000
#define HWIO_RPM_VMIDMT_SCR0_RACFG_SHFT                                0x18
#define HWIO_RPM_VMIDMT_SCR0_SHCFG_BMSK                            0xc00000
#define HWIO_RPM_VMIDMT_SCR0_SHCFG_SHFT                                0x16
#define HWIO_RPM_VMIDMT_SCR0_MTCFG_BMSK                            0x100000
#define HWIO_RPM_VMIDMT_SCR0_MTCFG_SHFT                                0x14
#define HWIO_RPM_VMIDMT_SCR0_MEMATTR_BMSK                           0x70000
#define HWIO_RPM_VMIDMT_SCR0_MEMATTR_SHFT                              0x10
#define HWIO_RPM_VMIDMT_SCR0_USFCFG_BMSK                              0x400
#define HWIO_RPM_VMIDMT_SCR0_USFCFG_SHFT                                0xa
#define HWIO_RPM_VMIDMT_SCR0_GSE_BMSK                                 0x200
#define HWIO_RPM_VMIDMT_SCR0_GSE_SHFT                                   0x9
#define HWIO_RPM_VMIDMT_SCR0_STALLD_BMSK                              0x100
#define HWIO_RPM_VMIDMT_SCR0_STALLD_SHFT                                0x8
#define HWIO_RPM_VMIDMT_SCR0_TRANSIENTCFG_BMSK                         0xc0
#define HWIO_RPM_VMIDMT_SCR0_TRANSIENTCFG_SHFT                          0x6
#define HWIO_RPM_VMIDMT_SCR0_GCFGFIE_BMSK                              0x20
#define HWIO_RPM_VMIDMT_SCR0_GCFGFIE_SHFT                               0x5
#define HWIO_RPM_VMIDMT_SCR0_GCFGERE_BMSK                              0x10
#define HWIO_RPM_VMIDMT_SCR0_GCFGERE_SHFT                               0x4
#define HWIO_RPM_VMIDMT_SCR0_GFIE_BMSK                                  0x4
#define HWIO_RPM_VMIDMT_SCR0_GFIE_SHFT                                  0x2
#define HWIO_RPM_VMIDMT_SCR0_CLIENTPD_BMSK                              0x1
#define HWIO_RPM_VMIDMT_SCR0_CLIENTPD_SHFT                              0x0

#define HWIO_RPM_VMIDMT_SCR1_ADDR                                (RPM_VMIDMT_REG_BASE      + 0x00000004)
#define HWIO_RPM_VMIDMT_SCR1_RMSK                                 0x1000100
#define HWIO_RPM_VMIDMT_SCR1_IN          \
        in_dword_masked(HWIO_RPM_VMIDMT_SCR1_ADDR, HWIO_RPM_VMIDMT_SCR1_RMSK)
#define HWIO_RPM_VMIDMT_SCR1_INM(m)      \
        in_dword_masked(HWIO_RPM_VMIDMT_SCR1_ADDR, m)
#define HWIO_RPM_VMIDMT_SCR1_OUT(v)      \
        out_dword(HWIO_RPM_VMIDMT_SCR1_ADDR,v)
#define HWIO_RPM_VMIDMT_SCR1_OUTM(m,v) \
        out_dword_masked_ns(HWIO_RPM_VMIDMT_SCR1_ADDR,m,v,HWIO_RPM_VMIDMT_SCR1_IN)
#define HWIO_RPM_VMIDMT_SCR1_GASRAE_BMSK                          0x1000000
#define HWIO_RPM_VMIDMT_SCR1_GASRAE_SHFT                               0x18
#define HWIO_RPM_VMIDMT_SCR1_NSNUMSMRGO_BMSK                          0x100
#define HWIO_RPM_VMIDMT_SCR1_NSNUMSMRGO_SHFT                            0x8

#define HWIO_RPM_VMIDMT_SCR2_ADDR                                (RPM_VMIDMT_REG_BASE      + 0x00000008)
#define HWIO_RPM_VMIDMT_SCR2_RMSK                                      0x1f
#define HWIO_RPM_VMIDMT_SCR2_IN          \
        in_dword_masked(HWIO_RPM_VMIDMT_SCR2_ADDR, HWIO_RPM_VMIDMT_SCR2_RMSK)
#define HWIO_RPM_VMIDMT_SCR2_INM(m)      \
        in_dword_masked(HWIO_RPM_VMIDMT_SCR2_ADDR, m)
#define HWIO_RPM_VMIDMT_SCR2_OUT(v)      \
        out_dword(HWIO_RPM_VMIDMT_SCR2_ADDR,v)
#define HWIO_RPM_VMIDMT_SCR2_OUTM(m,v) \
        out_dword_masked_ns(HWIO_RPM_VMIDMT_SCR2_ADDR,m,v,HWIO_RPM_VMIDMT_SCR2_IN)
#define HWIO_RPM_VMIDMT_SCR2_BPVMID_BMSK                               0x1f
#define HWIO_RPM_VMIDMT_SCR2_BPVMID_SHFT                                0x0

#define HWIO_RPM_VMIDMT_SACR_ADDR                                (RPM_VMIDMT_REG_BASE      + 0x00000010)
#define HWIO_RPM_VMIDMT_SACR_RMSK                                0x70000013
#define HWIO_RPM_VMIDMT_SACR_IN          \
        in_dword_masked(HWIO_RPM_VMIDMT_SACR_ADDR, HWIO_RPM_VMIDMT_SACR_RMSK)
#define HWIO_RPM_VMIDMT_SACR_INM(m)      \
        in_dword_masked(HWIO_RPM_VMIDMT_SACR_ADDR, m)
#define HWIO_RPM_VMIDMT_SACR_OUT(v)      \
        out_dword(HWIO_RPM_VMIDMT_SACR_ADDR,v)
#define HWIO_RPM_VMIDMT_SACR_OUTM(m,v) \
        out_dword_masked_ns(HWIO_RPM_VMIDMT_SACR_ADDR,m,v,HWIO_RPM_VMIDMT_SACR_IN)
#define HWIO_RPM_VMIDMT_SACR_BPRCNSH_BMSK                        0x40000000
#define HWIO_RPM_VMIDMT_SACR_BPRCNSH_SHFT                              0x1e
#define HWIO_RPM_VMIDMT_SACR_BPRCISH_BMSK                        0x20000000
#define HWIO_RPM_VMIDMT_SACR_BPRCISH_SHFT                              0x1d
#define HWIO_RPM_VMIDMT_SACR_BPRCOSH_BMSK                        0x10000000
#define HWIO_RPM_VMIDMT_SACR_BPRCOSH_SHFT                              0x1c
#define HWIO_RPM_VMIDMT_SACR_BPREQPRIORITYCFG_BMSK                     0x10
#define HWIO_RPM_VMIDMT_SACR_BPREQPRIORITYCFG_SHFT                      0x4
#define HWIO_RPM_VMIDMT_SACR_BPREQPRIORITY_BMSK                         0x3
#define HWIO_RPM_VMIDMT_SACR_BPREQPRIORITY_SHFT                         0x0

#define HWIO_RPM_VMIDMT_SIDR0_ADDR                               (RPM_VMIDMT_REG_BASE      + 0x00000020)
#define HWIO_RPM_VMIDMT_SIDR0_RMSK                               0x88001eff
#define HWIO_RPM_VMIDMT_SIDR0_IN          \
        in_dword_masked(HWIO_RPM_VMIDMT_SIDR0_ADDR, HWIO_RPM_VMIDMT_SIDR0_RMSK)
#define HWIO_RPM_VMIDMT_SIDR0_INM(m)      \
        in_dword_masked(HWIO_RPM_VMIDMT_SIDR0_ADDR, m)
#define HWIO_RPM_VMIDMT_SIDR0_SES_BMSK                           0x80000000
#define HWIO_RPM_VMIDMT_SIDR0_SES_SHFT                                 0x1f
#define HWIO_RPM_VMIDMT_SIDR0_SMS_BMSK                            0x8000000
#define HWIO_RPM_VMIDMT_SIDR0_SMS_SHFT                                 0x1b
#define HWIO_RPM_VMIDMT_SIDR0_NUMSIDB_BMSK                           0x1e00
#define HWIO_RPM_VMIDMT_SIDR0_NUMSIDB_SHFT                              0x9
#define HWIO_RPM_VMIDMT_SIDR0_NUMSMRG_BMSK                             0xff
#define HWIO_RPM_VMIDMT_SIDR0_NUMSMRG_SHFT                              0x0

#define HWIO_RPM_VMIDMT_SIDR1_ADDR                               (RPM_VMIDMT_REG_BASE      + 0x00000024)
#define HWIO_RPM_VMIDMT_SIDR1_RMSK                                   0x9f00
#define HWIO_RPM_VMIDMT_SIDR1_IN          \
        in_dword_masked(HWIO_RPM_VMIDMT_SIDR1_ADDR, HWIO_RPM_VMIDMT_SIDR1_RMSK)
#define HWIO_RPM_VMIDMT_SIDR1_INM(m)      \
        in_dword_masked(HWIO_RPM_VMIDMT_SIDR1_ADDR, m)
#define HWIO_RPM_VMIDMT_SIDR1_SMCD_BMSK                              0x8000
#define HWIO_RPM_VMIDMT_SIDR1_SMCD_SHFT                                 0xf
#define HWIO_RPM_VMIDMT_SIDR1_SSDTP_BMSK                             0x1000
#define HWIO_RPM_VMIDMT_SIDR1_SSDTP_SHFT                                0xc
#define HWIO_RPM_VMIDMT_SIDR1_NUMSSDNDX_BMSK                          0xf00
#define HWIO_RPM_VMIDMT_SIDR1_NUMSSDNDX_SHFT                            0x8

#define HWIO_RPM_VMIDMT_SIDR2_ADDR                               (RPM_VMIDMT_REG_BASE      + 0x00000028)
#define HWIO_RPM_VMIDMT_SIDR2_RMSK                                     0xff
#define HWIO_RPM_VMIDMT_SIDR2_IN          \
        in_dword_masked(HWIO_RPM_VMIDMT_SIDR2_ADDR, HWIO_RPM_VMIDMT_SIDR2_RMSK)
#define HWIO_RPM_VMIDMT_SIDR2_INM(m)      \
        in_dword_masked(HWIO_RPM_VMIDMT_SIDR2_ADDR, m)
#define HWIO_RPM_VMIDMT_SIDR2_OAS_BMSK                                 0xf0
#define HWIO_RPM_VMIDMT_SIDR2_OAS_SHFT                                  0x4
#define HWIO_RPM_VMIDMT_SIDR2_IAS_BMSK                                  0xf
#define HWIO_RPM_VMIDMT_SIDR2_IAS_SHFT                                  0x0

#define HWIO_RPM_VMIDMT_SIDR4_ADDR                               (RPM_VMIDMT_REG_BASE      + 0x00000030)
#define HWIO_RPM_VMIDMT_SIDR4_RMSK                               0xffffffff
#define HWIO_RPM_VMIDMT_SIDR4_IN          \
        in_dword_masked(HWIO_RPM_VMIDMT_SIDR4_ADDR, HWIO_RPM_VMIDMT_SIDR4_RMSK)
#define HWIO_RPM_VMIDMT_SIDR4_INM(m)      \
        in_dword_masked(HWIO_RPM_VMIDMT_SIDR4_ADDR, m)
#define HWIO_RPM_VMIDMT_SIDR4_MAJOR_BMSK                         0xf0000000
#define HWIO_RPM_VMIDMT_SIDR4_MAJOR_SHFT                               0x1c
#define HWIO_RPM_VMIDMT_SIDR4_MINOR_BMSK                          0xfff0000
#define HWIO_RPM_VMIDMT_SIDR4_MINOR_SHFT                               0x10
#define HWIO_RPM_VMIDMT_SIDR4_STEP_BMSK                              0xffff
#define HWIO_RPM_VMIDMT_SIDR4_STEP_SHFT                                 0x0

#define HWIO_RPM_VMIDMT_SIDR5_ADDR                               (RPM_VMIDMT_REG_BASE      + 0x00000034)
#define HWIO_RPM_VMIDMT_SIDR5_RMSK                                 0xff03ff
#define HWIO_RPM_VMIDMT_SIDR5_IN          \
        in_dword_masked(HWIO_RPM_VMIDMT_SIDR5_ADDR, HWIO_RPM_VMIDMT_SIDR5_RMSK)
#define HWIO_RPM_VMIDMT_SIDR5_INM(m)      \
        in_dword_masked(HWIO_RPM_VMIDMT_SIDR5_ADDR, m)
#define HWIO_RPM_VMIDMT_SIDR5_NUMMSDRB_BMSK                        0xff0000
#define HWIO_RPM_VMIDMT_SIDR5_NUMMSDRB_SHFT                            0x10
#define HWIO_RPM_VMIDMT_SIDR5_MSAE_BMSK                               0x200
#define HWIO_RPM_VMIDMT_SIDR5_MSAE_SHFT                                 0x9
#define HWIO_RPM_VMIDMT_SIDR5_QRIBE_BMSK                              0x100
#define HWIO_RPM_VMIDMT_SIDR5_QRIBE_SHFT                                0x8
#define HWIO_RPM_VMIDMT_SIDR5_NVMID_BMSK                               0xff
#define HWIO_RPM_VMIDMT_SIDR5_NVMID_SHFT                                0x0

#define HWIO_RPM_VMIDMT_SIDR7_ADDR                               (RPM_VMIDMT_REG_BASE      + 0x0000003c)
#define HWIO_RPM_VMIDMT_SIDR7_RMSK                                     0xff
#define HWIO_RPM_VMIDMT_SIDR7_IN          \
        in_dword_masked(HWIO_RPM_VMIDMT_SIDR7_ADDR, HWIO_RPM_VMIDMT_SIDR7_RMSK)
#define HWIO_RPM_VMIDMT_SIDR7_INM(m)      \
        in_dword_masked(HWIO_RPM_VMIDMT_SIDR7_ADDR, m)
#define HWIO_RPM_VMIDMT_SIDR7_MAJOR_BMSK                               0xf0
#define HWIO_RPM_VMIDMT_SIDR7_MAJOR_SHFT                                0x4
#define HWIO_RPM_VMIDMT_SIDR7_MINOR_BMSK                                0xf
#define HWIO_RPM_VMIDMT_SIDR7_MINOR_SHFT                                0x0

#define HWIO_RPM_VMIDMT_SGFAR0_ADDR                              (RPM_VMIDMT_REG_BASE      + 0x00000040)
#define HWIO_RPM_VMIDMT_SGFAR0_RMSK                              0xffffffff
#define HWIO_RPM_VMIDMT_SGFAR0_IN          \
        in_dword_masked(HWIO_RPM_VMIDMT_SGFAR0_ADDR, HWIO_RPM_VMIDMT_SGFAR0_RMSK)
#define HWIO_RPM_VMIDMT_SGFAR0_INM(m)      \
        in_dword_masked(HWIO_RPM_VMIDMT_SGFAR0_ADDR, m)
#define HWIO_RPM_VMIDMT_SGFAR0_SGFEA0_BMSK                       0xffffffff
#define HWIO_RPM_VMIDMT_SGFAR0_SGFEA0_SHFT                              0x0

#define HWIO_RPM_VMIDMT_SGFSR_ADDR                               (RPM_VMIDMT_REG_BASE      + 0x00000048)
#define HWIO_RPM_VMIDMT_SGFSR_RMSK                               0xc0000022
#define HWIO_RPM_VMIDMT_SGFSR_IN          \
        in_dword_masked(HWIO_RPM_VMIDMT_SGFSR_ADDR, HWIO_RPM_VMIDMT_SGFSR_RMSK)
#define HWIO_RPM_VMIDMT_SGFSR_INM(m)      \
        in_dword_masked(HWIO_RPM_VMIDMT_SGFSR_ADDR, m)
#define HWIO_RPM_VMIDMT_SGFSR_OUT(v)      \
        out_dword(HWIO_RPM_VMIDMT_SGFSR_ADDR,v)
#define HWIO_RPM_VMIDMT_SGFSR_OUTM(m,v) \
        out_dword_masked_ns(HWIO_RPM_VMIDMT_SGFSR_ADDR,m,v,HWIO_RPM_VMIDMT_SGFSR_IN)
#define HWIO_RPM_VMIDMT_SGFSR_MULTI_CLIENT_BMSK                  0x80000000
#define HWIO_RPM_VMIDMT_SGFSR_MULTI_CLIENT_SHFT                        0x1f
#define HWIO_RPM_VMIDMT_SGFSR_MULTI_CFG_BMSK                     0x40000000
#define HWIO_RPM_VMIDMT_SGFSR_MULTI_CFG_SHFT                           0x1e
#define HWIO_RPM_VMIDMT_SGFSR_CAF_BMSK                                 0x20
#define HWIO_RPM_VMIDMT_SGFSR_CAF_SHFT                                  0x5
#define HWIO_RPM_VMIDMT_SGFSR_USF_BMSK                                  0x2
#define HWIO_RPM_VMIDMT_SGFSR_USF_SHFT                                  0x1

#define HWIO_RPM_VMIDMT_SGFSRRESTORE_ADDR                        (RPM_VMIDMT_REG_BASE      + 0x0000004c)
#define HWIO_RPM_VMIDMT_SGFSRRESTORE_RMSK                        0xc0000022
#define HWIO_RPM_VMIDMT_SGFSRRESTORE_IN          \
        in_dword_masked(HWIO_RPM_VMIDMT_SGFSRRESTORE_ADDR, HWIO_RPM_VMIDMT_SGFSRRESTORE_RMSK)
#define HWIO_RPM_VMIDMT_SGFSRRESTORE_INM(m)      \
        in_dword_masked(HWIO_RPM_VMIDMT_SGFSRRESTORE_ADDR, m)
#define HWIO_RPM_VMIDMT_SGFSRRESTORE_OUT(v)      \
        out_dword(HWIO_RPM_VMIDMT_SGFSRRESTORE_ADDR,v)
#define HWIO_RPM_VMIDMT_SGFSRRESTORE_OUTM(m,v) \
        out_dword_masked_ns(HWIO_RPM_VMIDMT_SGFSRRESTORE_ADDR,m,v,HWIO_RPM_VMIDMT_SGFSRRESTORE_IN)
#define HWIO_RPM_VMIDMT_SGFSRRESTORE_MULTI_CLIENT_BMSK           0x80000000
#define HWIO_RPM_VMIDMT_SGFSRRESTORE_MULTI_CLIENT_SHFT                 0x1f
#define HWIO_RPM_VMIDMT_SGFSRRESTORE_MULTI_CFG_BMSK              0x40000000
#define HWIO_RPM_VMIDMT_SGFSRRESTORE_MULTI_CFG_SHFT                    0x1e
#define HWIO_RPM_VMIDMT_SGFSRRESTORE_CAF_BMSK                          0x20
#define HWIO_RPM_VMIDMT_SGFSRRESTORE_CAF_SHFT                           0x5
#define HWIO_RPM_VMIDMT_SGFSRRESTORE_USF_BMSK                           0x2
#define HWIO_RPM_VMIDMT_SGFSRRESTORE_USF_SHFT                           0x1

#define HWIO_RPM_VMIDMT_SGFSYNDR0_ADDR                           (RPM_VMIDMT_REG_BASE      + 0x00000050)
#define HWIO_RPM_VMIDMT_SGFSYNDR0_RMSK                                0x132
#define HWIO_RPM_VMIDMT_SGFSYNDR0_IN          \
        in_dword_masked(HWIO_RPM_VMIDMT_SGFSYNDR0_ADDR, HWIO_RPM_VMIDMT_SGFSYNDR0_RMSK)
#define HWIO_RPM_VMIDMT_SGFSYNDR0_INM(m)      \
        in_dword_masked(HWIO_RPM_VMIDMT_SGFSYNDR0_ADDR, m)
#define HWIO_RPM_VMIDMT_SGFSYNDR0_MSSSELFAUTH_BMSK                    0x100
#define HWIO_RPM_VMIDMT_SGFSYNDR0_MSSSELFAUTH_SHFT                      0x8
#define HWIO_RPM_VMIDMT_SGFSYNDR0_NSATTR_BMSK                          0x20
#define HWIO_RPM_VMIDMT_SGFSYNDR0_NSATTR_SHFT                           0x5
#define HWIO_RPM_VMIDMT_SGFSYNDR0_NSSTATE_BMSK                         0x10
#define HWIO_RPM_VMIDMT_SGFSYNDR0_NSSTATE_SHFT                          0x4
#define HWIO_RPM_VMIDMT_SGFSYNDR0_WNR_BMSK                              0x2
#define HWIO_RPM_VMIDMT_SGFSYNDR0_WNR_SHFT                              0x1

#define HWIO_RPM_VMIDMT_SGFSYNDR1_ADDR                           (RPM_VMIDMT_REG_BASE      + 0x00000054)
#define HWIO_RPM_VMIDMT_SGFSYNDR1_RMSK                            0x1010001
#define HWIO_RPM_VMIDMT_SGFSYNDR1_IN          \
        in_dword_masked(HWIO_RPM_VMIDMT_SGFSYNDR1_ADDR, HWIO_RPM_VMIDMT_SGFSYNDR1_RMSK)
#define HWIO_RPM_VMIDMT_SGFSYNDR1_INM(m)      \
        in_dword_masked(HWIO_RPM_VMIDMT_SGFSYNDR1_ADDR, m)
#define HWIO_RPM_VMIDMT_SGFSYNDR1_MSDINDEX_BMSK                   0x1000000
#define HWIO_RPM_VMIDMT_SGFSYNDR1_MSDINDEX_SHFT                        0x18
#define HWIO_RPM_VMIDMT_SGFSYNDR1_SSDINDEX_BMSK                     0x10000
#define HWIO_RPM_VMIDMT_SGFSYNDR1_SSDINDEX_SHFT                        0x10
#define HWIO_RPM_VMIDMT_SGFSYNDR1_STREAMINDEX_BMSK                      0x1
#define HWIO_RPM_VMIDMT_SGFSYNDR1_STREAMINDEX_SHFT                      0x0

#define HWIO_RPM_VMIDMT_SGFSYNDR2_ADDR                           (RPM_VMIDMT_REG_BASE      + 0x00000058)
#define HWIO_RPM_VMIDMT_SGFSYNDR2_RMSK                           0x3f1fffff
#define HWIO_RPM_VMIDMT_SGFSYNDR2_IN          \
        in_dword_masked(HWIO_RPM_VMIDMT_SGFSYNDR2_ADDR, HWIO_RPM_VMIDMT_SGFSYNDR2_RMSK)
#define HWIO_RPM_VMIDMT_SGFSYNDR2_INM(m)      \
        in_dword_masked(HWIO_RPM_VMIDMT_SGFSYNDR2_ADDR, m)
#define HWIO_RPM_VMIDMT_SGFSYNDR2_ATID_BMSK                      0x3f000000
#define HWIO_RPM_VMIDMT_SGFSYNDR2_ATID_SHFT                            0x18
#define HWIO_RPM_VMIDMT_SGFSYNDR2_AVMID_BMSK                       0x1f0000
#define HWIO_RPM_VMIDMT_SGFSYNDR2_AVMID_SHFT                           0x10
#define HWIO_RPM_VMIDMT_SGFSYNDR2_ABID_BMSK                          0xe000
#define HWIO_RPM_VMIDMT_SGFSYNDR2_ABID_SHFT                             0xd
#define HWIO_RPM_VMIDMT_SGFSYNDR2_APID_BMSK                          0x1f00
#define HWIO_RPM_VMIDMT_SGFSYNDR2_APID_SHFT                             0x8
#define HWIO_RPM_VMIDMT_SGFSYNDR2_AMID_BMSK                            0xff
#define HWIO_RPM_VMIDMT_SGFSYNDR2_AMID_SHFT                             0x0

#define HWIO_RPM_VMIDMT_VMIDMTSCR0_ADDR                          (RPM_VMIDMT_REG_BASE      + 0x00000090)
#define HWIO_RPM_VMIDMT_VMIDMTSCR0_RMSK                                 0x1
#define HWIO_RPM_VMIDMT_VMIDMTSCR0_IN          \
        in_dword_masked(HWIO_RPM_VMIDMT_VMIDMTSCR0_ADDR, HWIO_RPM_VMIDMT_VMIDMTSCR0_RMSK)
#define HWIO_RPM_VMIDMT_VMIDMTSCR0_INM(m)      \
        in_dword_masked(HWIO_RPM_VMIDMT_VMIDMTSCR0_ADDR, m)
#define HWIO_RPM_VMIDMT_VMIDMTSCR0_OUT(v)      \
        out_dword(HWIO_RPM_VMIDMT_VMIDMTSCR0_ADDR,v)
#define HWIO_RPM_VMIDMT_VMIDMTSCR0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_RPM_VMIDMT_VMIDMTSCR0_ADDR,m,v,HWIO_RPM_VMIDMT_VMIDMTSCR0_IN)
#define HWIO_RPM_VMIDMT_VMIDMTSCR0_CLKONOFFE_BMSK                       0x1
#define HWIO_RPM_VMIDMT_VMIDMTSCR0_CLKONOFFE_SHFT                       0x0

#define HWIO_RPM_VMIDMT_CR0_ADDR                                 (RPM_VMIDMT_REG_BASE      + 0x00000000)
#define HWIO_RPM_VMIDMT_CR0_RMSK                                  0xfd70ff5
#define HWIO_RPM_VMIDMT_CR0_IN          \
        in_dword_masked(HWIO_RPM_VMIDMT_CR0_ADDR, HWIO_RPM_VMIDMT_CR0_RMSK)
#define HWIO_RPM_VMIDMT_CR0_INM(m)      \
        in_dword_masked(HWIO_RPM_VMIDMT_CR0_ADDR, m)
#define HWIO_RPM_VMIDMT_CR0_OUT(v)      \
        out_dword(HWIO_RPM_VMIDMT_CR0_ADDR,v)
#define HWIO_RPM_VMIDMT_CR0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_RPM_VMIDMT_CR0_ADDR,m,v,HWIO_RPM_VMIDMT_CR0_IN)
#define HWIO_RPM_VMIDMT_CR0_WACFG_BMSK                            0xc000000
#define HWIO_RPM_VMIDMT_CR0_WACFG_SHFT                                 0x1a
#define HWIO_RPM_VMIDMT_CR0_RACFG_BMSK                            0x3000000
#define HWIO_RPM_VMIDMT_CR0_RACFG_SHFT                                 0x18
#define HWIO_RPM_VMIDMT_CR0_SHCFG_BMSK                             0xc00000
#define HWIO_RPM_VMIDMT_CR0_SHCFG_SHFT                                 0x16
#define HWIO_RPM_VMIDMT_CR0_MTCFG_BMSK                             0x100000
#define HWIO_RPM_VMIDMT_CR0_MTCFG_SHFT                                 0x14
#define HWIO_RPM_VMIDMT_CR0_MEMATTR_BMSK                            0x70000
#define HWIO_RPM_VMIDMT_CR0_MEMATTR_SHFT                               0x10
#define HWIO_RPM_VMIDMT_CR0_VMIDPNE_BMSK                              0x800
#define HWIO_RPM_VMIDMT_CR0_VMIDPNE_SHFT                                0xb
#define HWIO_RPM_VMIDMT_CR0_USFCFG_BMSK                               0x400
#define HWIO_RPM_VMIDMT_CR0_USFCFG_SHFT                                 0xa
#define HWIO_RPM_VMIDMT_CR0_GSE_BMSK                                  0x200
#define HWIO_RPM_VMIDMT_CR0_GSE_SHFT                                    0x9
#define HWIO_RPM_VMIDMT_CR0_STALLD_BMSK                               0x100
#define HWIO_RPM_VMIDMT_CR0_STALLD_SHFT                                 0x8
#define HWIO_RPM_VMIDMT_CR0_TRANSIENTCFG_BMSK                          0xc0
#define HWIO_RPM_VMIDMT_CR0_TRANSIENTCFG_SHFT                           0x6
#define HWIO_RPM_VMIDMT_CR0_GCFGFIE_BMSK                               0x20
#define HWIO_RPM_VMIDMT_CR0_GCFGFIE_SHFT                                0x5
#define HWIO_RPM_VMIDMT_CR0_GCFGERE_BMSK                               0x10
#define HWIO_RPM_VMIDMT_CR0_GCFGERE_SHFT                                0x4
#define HWIO_RPM_VMIDMT_CR0_GFIE_BMSK                                   0x4
#define HWIO_RPM_VMIDMT_CR0_GFIE_SHFT                                   0x2
#define HWIO_RPM_VMIDMT_CR0_CLIENTPD_BMSK                               0x1
#define HWIO_RPM_VMIDMT_CR0_CLIENTPD_SHFT                               0x0

#define HWIO_RPM_VMIDMT_CR2_ADDR                                 (RPM_VMIDMT_REG_BASE      + 0x00000008)
#define HWIO_RPM_VMIDMT_CR2_RMSK                                       0x1f
#define HWIO_RPM_VMIDMT_CR2_IN          \
        in_dword_masked(HWIO_RPM_VMIDMT_CR2_ADDR, HWIO_RPM_VMIDMT_CR2_RMSK)
#define HWIO_RPM_VMIDMT_CR2_INM(m)      \
        in_dword_masked(HWIO_RPM_VMIDMT_CR2_ADDR, m)
#define HWIO_RPM_VMIDMT_CR2_OUT(v)      \
        out_dword(HWIO_RPM_VMIDMT_CR2_ADDR,v)
#define HWIO_RPM_VMIDMT_CR2_OUTM(m,v) \
        out_dword_masked_ns(HWIO_RPM_VMIDMT_CR2_ADDR,m,v,HWIO_RPM_VMIDMT_CR2_IN)
#define HWIO_RPM_VMIDMT_CR2_BPVMID_BMSK                                0x1f
#define HWIO_RPM_VMIDMT_CR2_BPVMID_SHFT                                 0x0

#define HWIO_RPM_VMIDMT_ACR_ADDR                                 (RPM_VMIDMT_REG_BASE      + 0x00000010)
#define HWIO_RPM_VMIDMT_ACR_RMSK                                 0x70000013
#define HWIO_RPM_VMIDMT_ACR_IN          \
        in_dword_masked(HWIO_RPM_VMIDMT_ACR_ADDR, HWIO_RPM_VMIDMT_ACR_RMSK)
#define HWIO_RPM_VMIDMT_ACR_INM(m)      \
        in_dword_masked(HWIO_RPM_VMIDMT_ACR_ADDR, m)
#define HWIO_RPM_VMIDMT_ACR_OUT(v)      \
        out_dword(HWIO_RPM_VMIDMT_ACR_ADDR,v)
#define HWIO_RPM_VMIDMT_ACR_OUTM(m,v) \
        out_dword_masked_ns(HWIO_RPM_VMIDMT_ACR_ADDR,m,v,HWIO_RPM_VMIDMT_ACR_IN)
#define HWIO_RPM_VMIDMT_ACR_BPRCNSH_BMSK                         0x40000000
#define HWIO_RPM_VMIDMT_ACR_BPRCNSH_SHFT                               0x1e
#define HWIO_RPM_VMIDMT_ACR_BPRCISH_BMSK                         0x20000000
#define HWIO_RPM_VMIDMT_ACR_BPRCISH_SHFT                               0x1d
#define HWIO_RPM_VMIDMT_ACR_BPRCOSH_BMSK                         0x10000000
#define HWIO_RPM_VMIDMT_ACR_BPRCOSH_SHFT                               0x1c
#define HWIO_RPM_VMIDMT_ACR_BPREQPRIORITYCFG_BMSK                      0x10
#define HWIO_RPM_VMIDMT_ACR_BPREQPRIORITYCFG_SHFT                       0x4
#define HWIO_RPM_VMIDMT_ACR_BPREQPRIORITY_BMSK                          0x3
#define HWIO_RPM_VMIDMT_ACR_BPREQPRIORITY_SHFT                          0x0

#define HWIO_RPM_VMIDMT_IDR0_ADDR                                (RPM_VMIDMT_REG_BASE      + 0x00000020)
#define HWIO_RPM_VMIDMT_IDR0_RMSK                                 0x8001eff
#define HWIO_RPM_VMIDMT_IDR0_IN          \
        in_dword_masked(HWIO_RPM_VMIDMT_IDR0_ADDR, HWIO_RPM_VMIDMT_IDR0_RMSK)
#define HWIO_RPM_VMIDMT_IDR0_INM(m)      \
        in_dword_masked(HWIO_RPM_VMIDMT_IDR0_ADDR, m)
#define HWIO_RPM_VMIDMT_IDR0_SMS_BMSK                             0x8000000
#define HWIO_RPM_VMIDMT_IDR0_SMS_SHFT                                  0x1b
#define HWIO_RPM_VMIDMT_IDR0_NUMSIDB_BMSK                            0x1e00
#define HWIO_RPM_VMIDMT_IDR0_NUMSIDB_SHFT                               0x9
#define HWIO_RPM_VMIDMT_IDR0_NUMSMRG_BMSK                              0xff
#define HWIO_RPM_VMIDMT_IDR0_NUMSMRG_SHFT                               0x0

#define HWIO_RPM_VMIDMT_IDR1_ADDR                                (RPM_VMIDMT_REG_BASE      + 0x00000024)
#define HWIO_RPM_VMIDMT_IDR1_RMSK                                    0x9f00
#define HWIO_RPM_VMIDMT_IDR1_IN          \
        in_dword_masked(HWIO_RPM_VMIDMT_IDR1_ADDR, HWIO_RPM_VMIDMT_IDR1_RMSK)
#define HWIO_RPM_VMIDMT_IDR1_INM(m)      \
        in_dword_masked(HWIO_RPM_VMIDMT_IDR1_ADDR, m)
#define HWIO_RPM_VMIDMT_IDR1_SMCD_BMSK                               0x8000
#define HWIO_RPM_VMIDMT_IDR1_SMCD_SHFT                                  0xf
#define HWIO_RPM_VMIDMT_IDR1_SSDTP_BMSK                              0x1000
#define HWIO_RPM_VMIDMT_IDR1_SSDTP_SHFT                                 0xc
#define HWIO_RPM_VMIDMT_IDR1_NUMSSDNDX_BMSK                           0xf00
#define HWIO_RPM_VMIDMT_IDR1_NUMSSDNDX_SHFT                             0x8

#define HWIO_RPM_VMIDMT_IDR2_ADDR                                (RPM_VMIDMT_REG_BASE      + 0x00000028)
#define HWIO_RPM_VMIDMT_IDR2_RMSK                                      0xff
#define HWIO_RPM_VMIDMT_IDR2_IN          \
        in_dword_masked(HWIO_RPM_VMIDMT_IDR2_ADDR, HWIO_RPM_VMIDMT_IDR2_RMSK)
#define HWIO_RPM_VMIDMT_IDR2_INM(m)      \
        in_dword_masked(HWIO_RPM_VMIDMT_IDR2_ADDR, m)
#define HWIO_RPM_VMIDMT_IDR2_OAS_BMSK                                  0xf0
#define HWIO_RPM_VMIDMT_IDR2_OAS_SHFT                                   0x4
#define HWIO_RPM_VMIDMT_IDR2_IAS_BMSK                                   0xf
#define HWIO_RPM_VMIDMT_IDR2_IAS_SHFT                                   0x0

#define HWIO_RPM_VMIDMT_IDR4_ADDR                                (RPM_VMIDMT_REG_BASE      + 0x00000030)
#define HWIO_RPM_VMIDMT_IDR4_RMSK                                0xffffffff
#define HWIO_RPM_VMIDMT_IDR4_IN          \
        in_dword_masked(HWIO_RPM_VMIDMT_IDR4_ADDR, HWIO_RPM_VMIDMT_IDR4_RMSK)
#define HWIO_RPM_VMIDMT_IDR4_INM(m)      \
        in_dword_masked(HWIO_RPM_VMIDMT_IDR4_ADDR, m)
#define HWIO_RPM_VMIDMT_IDR4_MAJOR_BMSK                          0xf0000000
#define HWIO_RPM_VMIDMT_IDR4_MAJOR_SHFT                                0x1c
#define HWIO_RPM_VMIDMT_IDR4_MINOR_BMSK                           0xfff0000
#define HWIO_RPM_VMIDMT_IDR4_MINOR_SHFT                                0x10
#define HWIO_RPM_VMIDMT_IDR4_STEP_BMSK                               0xffff
#define HWIO_RPM_VMIDMT_IDR4_STEP_SHFT                                  0x0

#define HWIO_RPM_VMIDMT_IDR5_ADDR                                (RPM_VMIDMT_REG_BASE      + 0x00000034)
#define HWIO_RPM_VMIDMT_IDR5_RMSK                                  0xff03ff
#define HWIO_RPM_VMIDMT_IDR5_IN          \
        in_dword_masked(HWIO_RPM_VMIDMT_IDR5_ADDR, HWIO_RPM_VMIDMT_IDR5_RMSK)
#define HWIO_RPM_VMIDMT_IDR5_INM(m)      \
        in_dword_masked(HWIO_RPM_VMIDMT_IDR5_ADDR, m)
#define HWIO_RPM_VMIDMT_IDR5_NUMMSDRB_BMSK                         0xff0000
#define HWIO_RPM_VMIDMT_IDR5_NUMMSDRB_SHFT                             0x10
#define HWIO_RPM_VMIDMT_IDR5_MSAE_BMSK                                0x200
#define HWIO_RPM_VMIDMT_IDR5_MSAE_SHFT                                  0x9
#define HWIO_RPM_VMIDMT_IDR5_QRIBE_BMSK                               0x100
#define HWIO_RPM_VMIDMT_IDR5_QRIBE_SHFT                                 0x8
#define HWIO_RPM_VMIDMT_IDR5_NVMID_BMSK                                0xff
#define HWIO_RPM_VMIDMT_IDR5_NVMID_SHFT                                 0x0

#define HWIO_RPM_VMIDMT_IDR7_ADDR                                (RPM_VMIDMT_REG_BASE      + 0x0000003c)
#define HWIO_RPM_VMIDMT_IDR7_RMSK                                      0xff
#define HWIO_RPM_VMIDMT_IDR7_IN          \
        in_dword_masked(HWIO_RPM_VMIDMT_IDR7_ADDR, HWIO_RPM_VMIDMT_IDR7_RMSK)
#define HWIO_RPM_VMIDMT_IDR7_INM(m)      \
        in_dword_masked(HWIO_RPM_VMIDMT_IDR7_ADDR, m)
#define HWIO_RPM_VMIDMT_IDR7_MAJOR_BMSK                                0xf0
#define HWIO_RPM_VMIDMT_IDR7_MAJOR_SHFT                                 0x4
#define HWIO_RPM_VMIDMT_IDR7_MINOR_BMSK                                 0xf
#define HWIO_RPM_VMIDMT_IDR7_MINOR_SHFT                                 0x0

#define HWIO_RPM_VMIDMT_GFAR0_ADDR                               (RPM_VMIDMT_REG_BASE      + 0x00000040)
#define HWIO_RPM_VMIDMT_GFAR0_RMSK                               0xffffffff
#define HWIO_RPM_VMIDMT_GFAR0_IN          \
        in_dword_masked(HWIO_RPM_VMIDMT_GFAR0_ADDR, HWIO_RPM_VMIDMT_GFAR0_RMSK)
#define HWIO_RPM_VMIDMT_GFAR0_INM(m)      \
        in_dword_masked(HWIO_RPM_VMIDMT_GFAR0_ADDR, m)
#define HWIO_RPM_VMIDMT_GFAR0_GFEA0_BMSK                         0xffffffff
#define HWIO_RPM_VMIDMT_GFAR0_GFEA0_SHFT                                0x0

#define HWIO_RPM_VMIDMT_GFSR_ADDR                                (RPM_VMIDMT_REG_BASE      + 0x00000048)
#define HWIO_RPM_VMIDMT_GFSR_RMSK                                0xc00000a2
#define HWIO_RPM_VMIDMT_GFSR_IN          \
        in_dword_masked(HWIO_RPM_VMIDMT_GFSR_ADDR, HWIO_RPM_VMIDMT_GFSR_RMSK)
#define HWIO_RPM_VMIDMT_GFSR_INM(m)      \
        in_dword_masked(HWIO_RPM_VMIDMT_GFSR_ADDR, m)
#define HWIO_RPM_VMIDMT_GFSR_OUT(v)      \
        out_dword(HWIO_RPM_VMIDMT_GFSR_ADDR,v)
#define HWIO_RPM_VMIDMT_GFSR_OUTM(m,v) \
        out_dword_masked_ns(HWIO_RPM_VMIDMT_GFSR_ADDR,m,v,HWIO_RPM_VMIDMT_GFSR_IN)
#define HWIO_RPM_VMIDMT_GFSR_MULTI_CLIENT_BMSK                   0x80000000
#define HWIO_RPM_VMIDMT_GFSR_MULTI_CLIENT_SHFT                         0x1f
#define HWIO_RPM_VMIDMT_GFSR_MULTI_CFG_BMSK                      0x40000000
#define HWIO_RPM_VMIDMT_GFSR_MULTI_CFG_SHFT                            0x1e
#define HWIO_RPM_VMIDMT_GFSR_PF_BMSK                                   0x80
#define HWIO_RPM_VMIDMT_GFSR_PF_SHFT                                    0x7
#define HWIO_RPM_VMIDMT_GFSR_CAF_BMSK                                  0x20
#define HWIO_RPM_VMIDMT_GFSR_CAF_SHFT                                   0x5
#define HWIO_RPM_VMIDMT_GFSR_USF_BMSK                                   0x2
#define HWIO_RPM_VMIDMT_GFSR_USF_SHFT                                   0x1

#define HWIO_RPM_VMIDMT_GFSRRESTORE_ADDR                         (RPM_VMIDMT_REG_BASE      + 0x0000004c)
#define HWIO_RPM_VMIDMT_GFSRRESTORE_RMSK                         0xc00000a2
#define HWIO_RPM_VMIDMT_GFSRRESTORE_IN          \
        in_dword_masked(HWIO_RPM_VMIDMT_GFSRRESTORE_ADDR, HWIO_RPM_VMIDMT_GFSRRESTORE_RMSK)
#define HWIO_RPM_VMIDMT_GFSRRESTORE_INM(m)      \
        in_dword_masked(HWIO_RPM_VMIDMT_GFSRRESTORE_ADDR, m)
#define HWIO_RPM_VMIDMT_GFSRRESTORE_OUT(v)      \
        out_dword(HWIO_RPM_VMIDMT_GFSRRESTORE_ADDR,v)
#define HWIO_RPM_VMIDMT_GFSRRESTORE_OUTM(m,v) \
        out_dword_masked_ns(HWIO_RPM_VMIDMT_GFSRRESTORE_ADDR,m,v,HWIO_RPM_VMIDMT_GFSRRESTORE_IN)
#define HWIO_RPM_VMIDMT_GFSRRESTORE_MULTI_CLIENT_BMSK            0x80000000
#define HWIO_RPM_VMIDMT_GFSRRESTORE_MULTI_CLIENT_SHFT                  0x1f
#define HWIO_RPM_VMIDMT_GFSRRESTORE_MULTI_CFG_BMSK               0x40000000
#define HWIO_RPM_VMIDMT_GFSRRESTORE_MULTI_CFG_SHFT                     0x1e
#define HWIO_RPM_VMIDMT_GFSRRESTORE_PF_BMSK                            0x80
#define HWIO_RPM_VMIDMT_GFSRRESTORE_PF_SHFT                             0x7
#define HWIO_RPM_VMIDMT_GFSRRESTORE_CAF_BMSK                           0x20
#define HWIO_RPM_VMIDMT_GFSRRESTORE_CAF_SHFT                            0x5
#define HWIO_RPM_VMIDMT_GFSRRESTORE_USF_BMSK                            0x2
#define HWIO_RPM_VMIDMT_GFSRRESTORE_USF_SHFT                            0x1

#define HWIO_RPM_VMIDMT_GFSYNDR0_ADDR                            (RPM_VMIDMT_REG_BASE      + 0x00000050)
#define HWIO_RPM_VMIDMT_GFSYNDR0_RMSK                                 0x132
#define HWIO_RPM_VMIDMT_GFSYNDR0_IN          \
        in_dword_masked(HWIO_RPM_VMIDMT_GFSYNDR0_ADDR, HWIO_RPM_VMIDMT_GFSYNDR0_RMSK)
#define HWIO_RPM_VMIDMT_GFSYNDR0_INM(m)      \
        in_dword_masked(HWIO_RPM_VMIDMT_GFSYNDR0_ADDR, m)
#define HWIO_RPM_VMIDMT_GFSYNDR0_MSSSELFAUTH_BMSK                     0x100
#define HWIO_RPM_VMIDMT_GFSYNDR0_MSSSELFAUTH_SHFT                       0x8
#define HWIO_RPM_VMIDMT_GFSYNDR0_NSATTR_BMSK                           0x20
#define HWIO_RPM_VMIDMT_GFSYNDR0_NSATTR_SHFT                            0x5
#define HWIO_RPM_VMIDMT_GFSYNDR0_NSSTATE_BMSK                          0x10
#define HWIO_RPM_VMIDMT_GFSYNDR0_NSSTATE_SHFT                           0x4
#define HWIO_RPM_VMIDMT_GFSYNDR0_WNR_BMSK                               0x2
#define HWIO_RPM_VMIDMT_GFSYNDR0_WNR_SHFT                               0x1

#define HWIO_RPM_VMIDMT_GFSYNDR1_ADDR                            (RPM_VMIDMT_REG_BASE      + 0x00000054)
#define HWIO_RPM_VMIDMT_GFSYNDR1_RMSK                             0x1010001
#define HWIO_RPM_VMIDMT_GFSYNDR1_IN          \
        in_dword_masked(HWIO_RPM_VMIDMT_GFSYNDR1_ADDR, HWIO_RPM_VMIDMT_GFSYNDR1_RMSK)
#define HWIO_RPM_VMIDMT_GFSYNDR1_INM(m)      \
        in_dword_masked(HWIO_RPM_VMIDMT_GFSYNDR1_ADDR, m)
#define HWIO_RPM_VMIDMT_GFSYNDR1_MSDINDEX_BMSK                    0x1000000
#define HWIO_RPM_VMIDMT_GFSYNDR1_MSDINDEX_SHFT                         0x18
#define HWIO_RPM_VMIDMT_GFSYNDR1_SSDINDEX_BMSK                      0x10000
#define HWIO_RPM_VMIDMT_GFSYNDR1_SSDINDEX_SHFT                         0x10
#define HWIO_RPM_VMIDMT_GFSYNDR1_STREAMINDEX_BMSK                       0x1
#define HWIO_RPM_VMIDMT_GFSYNDR1_STREAMINDEX_SHFT                       0x0

#define HWIO_RPM_VMIDMT_GFSYNDR2_ADDR                            (RPM_VMIDMT_REG_BASE      + 0x00000058)
#define HWIO_RPM_VMIDMT_GFSYNDR2_RMSK                            0x3f1fffff
#define HWIO_RPM_VMIDMT_GFSYNDR2_IN          \
        in_dword_masked(HWIO_RPM_VMIDMT_GFSYNDR2_ADDR, HWIO_RPM_VMIDMT_GFSYNDR2_RMSK)
#define HWIO_RPM_VMIDMT_GFSYNDR2_INM(m)      \
        in_dword_masked(HWIO_RPM_VMIDMT_GFSYNDR2_ADDR, m)
#define HWIO_RPM_VMIDMT_GFSYNDR2_ATID_BMSK                       0x3f000000
#define HWIO_RPM_VMIDMT_GFSYNDR2_ATID_SHFT                             0x18
#define HWIO_RPM_VMIDMT_GFSYNDR2_AVMID_BMSK                        0x1f0000
#define HWIO_RPM_VMIDMT_GFSYNDR2_AVMID_SHFT                            0x10
#define HWIO_RPM_VMIDMT_GFSYNDR2_ABID_BMSK                           0xe000
#define HWIO_RPM_VMIDMT_GFSYNDR2_ABID_SHFT                              0xd
#define HWIO_RPM_VMIDMT_GFSYNDR2_APID_BMSK                           0x1f00
#define HWIO_RPM_VMIDMT_GFSYNDR2_APID_SHFT                              0x8
#define HWIO_RPM_VMIDMT_GFSYNDR2_AMID_BMSK                             0xff
#define HWIO_RPM_VMIDMT_GFSYNDR2_AMID_SHFT                              0x0

#define HWIO_RPM_VMIDMT_VMIDMTCR0_ADDR                           (RPM_VMIDMT_REG_BASE      + 0x00000090)
#define HWIO_RPM_VMIDMT_VMIDMTCR0_RMSK                                  0x1
#define HWIO_RPM_VMIDMT_VMIDMTCR0_IN          \
        in_dword_masked(HWIO_RPM_VMIDMT_VMIDMTCR0_ADDR, HWIO_RPM_VMIDMT_VMIDMTCR0_RMSK)
#define HWIO_RPM_VMIDMT_VMIDMTCR0_INM(m)      \
        in_dword_masked(HWIO_RPM_VMIDMT_VMIDMTCR0_ADDR, m)
#define HWIO_RPM_VMIDMT_VMIDMTCR0_OUT(v)      \
        out_dword(HWIO_RPM_VMIDMT_VMIDMTCR0_ADDR,v)
#define HWIO_RPM_VMIDMT_VMIDMTCR0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_RPM_VMIDMT_VMIDMTCR0_ADDR,m,v,HWIO_RPM_VMIDMT_VMIDMTCR0_IN)
#define HWIO_RPM_VMIDMT_VMIDMTCR0_CLKONOFFE_BMSK                        0x1
#define HWIO_RPM_VMIDMT_VMIDMTCR0_CLKONOFFE_SHFT                        0x0

#define HWIO_RPM_VMIDMT_VMIDMTACR_ADDR                           (RPM_VMIDMT_REG_BASE      + 0x0000009c)
#define HWIO_RPM_VMIDMT_VMIDMTACR_RMSK                           0xffffffff
#define HWIO_RPM_VMIDMT_VMIDMTACR_IN          \
        in_dword_masked(HWIO_RPM_VMIDMT_VMIDMTACR_ADDR, HWIO_RPM_VMIDMT_VMIDMTACR_RMSK)
#define HWIO_RPM_VMIDMT_VMIDMTACR_INM(m)      \
        in_dword_masked(HWIO_RPM_VMIDMT_VMIDMTACR_ADDR, m)
#define HWIO_RPM_VMIDMT_VMIDMTACR_OUT(v)      \
        out_dword(HWIO_RPM_VMIDMT_VMIDMTACR_ADDR,v)
#define HWIO_RPM_VMIDMT_VMIDMTACR_OUTM(m,v) \
        out_dword_masked_ns(HWIO_RPM_VMIDMT_VMIDMTACR_ADDR,m,v,HWIO_RPM_VMIDMT_VMIDMTACR_IN)
#define HWIO_RPM_VMIDMT_VMIDMTACR_RWE_BMSK                       0xffffffff
#define HWIO_RPM_VMIDMT_VMIDMTACR_RWE_SHFT                              0x0

#define HWIO_RPM_VMIDMT_NSCR0_ADDR                               (RPM_VMIDMT_REG_BASE      + 0x00000400)
#define HWIO_RPM_VMIDMT_NSCR0_RMSK                                0xfd70ff5
#define HWIO_RPM_VMIDMT_NSCR0_IN          \
        in_dword_masked(HWIO_RPM_VMIDMT_NSCR0_ADDR, HWIO_RPM_VMIDMT_NSCR0_RMSK)
#define HWIO_RPM_VMIDMT_NSCR0_INM(m)      \
        in_dword_masked(HWIO_RPM_VMIDMT_NSCR0_ADDR, m)
#define HWIO_RPM_VMIDMT_NSCR0_OUT(v)      \
        out_dword(HWIO_RPM_VMIDMT_NSCR0_ADDR,v)
#define HWIO_RPM_VMIDMT_NSCR0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_RPM_VMIDMT_NSCR0_ADDR,m,v,HWIO_RPM_VMIDMT_NSCR0_IN)
#define HWIO_RPM_VMIDMT_NSCR0_WACFG_BMSK                          0xc000000
#define HWIO_RPM_VMIDMT_NSCR0_WACFG_SHFT                               0x1a
#define HWIO_RPM_VMIDMT_NSCR0_RACFG_BMSK                          0x3000000
#define HWIO_RPM_VMIDMT_NSCR0_RACFG_SHFT                               0x18
#define HWIO_RPM_VMIDMT_NSCR0_SHCFG_BMSK                           0xc00000
#define HWIO_RPM_VMIDMT_NSCR0_SHCFG_SHFT                               0x16
#define HWIO_RPM_VMIDMT_NSCR0_MTCFG_BMSK                           0x100000
#define HWIO_RPM_VMIDMT_NSCR0_MTCFG_SHFT                               0x14
#define HWIO_RPM_VMIDMT_NSCR0_MEMATTR_BMSK                          0x70000
#define HWIO_RPM_VMIDMT_NSCR0_MEMATTR_SHFT                             0x10
#define HWIO_RPM_VMIDMT_NSCR0_VMIDPNE_BMSK                            0x800
#define HWIO_RPM_VMIDMT_NSCR0_VMIDPNE_SHFT                              0xb
#define HWIO_RPM_VMIDMT_NSCR0_USFCFG_BMSK                             0x400
#define HWIO_RPM_VMIDMT_NSCR0_USFCFG_SHFT                               0xa
#define HWIO_RPM_VMIDMT_NSCR0_GSE_BMSK                                0x200
#define HWIO_RPM_VMIDMT_NSCR0_GSE_SHFT                                  0x9
#define HWIO_RPM_VMIDMT_NSCR0_STALLD_BMSK                             0x100
#define HWIO_RPM_VMIDMT_NSCR0_STALLD_SHFT                               0x8
#define HWIO_RPM_VMIDMT_NSCR0_TRANSIENTCFG_BMSK                        0xc0
#define HWIO_RPM_VMIDMT_NSCR0_TRANSIENTCFG_SHFT                         0x6
#define HWIO_RPM_VMIDMT_NSCR0_GCFGFIE_BMSK                             0x20
#define HWIO_RPM_VMIDMT_NSCR0_GCFGFIE_SHFT                              0x5
#define HWIO_RPM_VMIDMT_NSCR0_GCFGERE_BMSK                             0x10
#define HWIO_RPM_VMIDMT_NSCR0_GCFGERE_SHFT                              0x4
#define HWIO_RPM_VMIDMT_NSCR0_GFIE_BMSK                                 0x4
#define HWIO_RPM_VMIDMT_NSCR0_GFIE_SHFT                                 0x2
#define HWIO_RPM_VMIDMT_NSCR0_CLIENTPD_BMSK                             0x1
#define HWIO_RPM_VMIDMT_NSCR0_CLIENTPD_SHFT                             0x0

#define HWIO_RPM_VMIDMT_NSCR2_ADDR                               (RPM_VMIDMT_REG_BASE      + 0x00000408)
#define HWIO_RPM_VMIDMT_NSCR2_RMSK                                     0x1f
#define HWIO_RPM_VMIDMT_NSCR2_IN          \
        in_dword_masked(HWIO_RPM_VMIDMT_NSCR2_ADDR, HWIO_RPM_VMIDMT_NSCR2_RMSK)
#define HWIO_RPM_VMIDMT_NSCR2_INM(m)      \
        in_dword_masked(HWIO_RPM_VMIDMT_NSCR2_ADDR, m)
#define HWIO_RPM_VMIDMT_NSCR2_OUT(v)      \
        out_dword(HWIO_RPM_VMIDMT_NSCR2_ADDR,v)
#define HWIO_RPM_VMIDMT_NSCR2_OUTM(m,v) \
        out_dword_masked_ns(HWIO_RPM_VMIDMT_NSCR2_ADDR,m,v,HWIO_RPM_VMIDMT_NSCR2_IN)
#define HWIO_RPM_VMIDMT_NSCR2_BPVMID_BMSK                              0x1f
#define HWIO_RPM_VMIDMT_NSCR2_BPVMID_SHFT                               0x0

#define HWIO_RPM_VMIDMT_NSACR_ADDR                               (RPM_VMIDMT_REG_BASE      + 0x00000410)
#define HWIO_RPM_VMIDMT_NSACR_RMSK                               0x70000013
#define HWIO_RPM_VMIDMT_NSACR_IN          \
        in_dword_masked(HWIO_RPM_VMIDMT_NSACR_ADDR, HWIO_RPM_VMIDMT_NSACR_RMSK)
#define HWIO_RPM_VMIDMT_NSACR_INM(m)      \
        in_dword_masked(HWIO_RPM_VMIDMT_NSACR_ADDR, m)
#define HWIO_RPM_VMIDMT_NSACR_OUT(v)      \
        out_dword(HWIO_RPM_VMIDMT_NSACR_ADDR,v)
#define HWIO_RPM_VMIDMT_NSACR_OUTM(m,v) \
        out_dword_masked_ns(HWIO_RPM_VMIDMT_NSACR_ADDR,m,v,HWIO_RPM_VMIDMT_NSACR_IN)
#define HWIO_RPM_VMIDMT_NSACR_BPRCNSH_BMSK                       0x40000000
#define HWIO_RPM_VMIDMT_NSACR_BPRCNSH_SHFT                             0x1e
#define HWIO_RPM_VMIDMT_NSACR_BPRCISH_BMSK                       0x20000000
#define HWIO_RPM_VMIDMT_NSACR_BPRCISH_SHFT                             0x1d
#define HWIO_RPM_VMIDMT_NSACR_BPRCOSH_BMSK                       0x10000000
#define HWIO_RPM_VMIDMT_NSACR_BPRCOSH_SHFT                             0x1c
#define HWIO_RPM_VMIDMT_NSACR_BPREQPRIORITYCFG_BMSK                    0x10
#define HWIO_RPM_VMIDMT_NSACR_BPREQPRIORITYCFG_SHFT                     0x4
#define HWIO_RPM_VMIDMT_NSACR_BPREQPRIORITY_BMSK                        0x3
#define HWIO_RPM_VMIDMT_NSACR_BPREQPRIORITY_SHFT                        0x0

#define HWIO_RPM_VMIDMT_NSGFAR0_ADDR                             (RPM_VMIDMT_REG_BASE      + 0x00000440)
#define HWIO_RPM_VMIDMT_NSGFAR0_RMSK                             0xffffffff
#define HWIO_RPM_VMIDMT_NSGFAR0_IN          \
        in_dword_masked(HWIO_RPM_VMIDMT_NSGFAR0_ADDR, HWIO_RPM_VMIDMT_NSGFAR0_RMSK)
#define HWIO_RPM_VMIDMT_NSGFAR0_INM(m)      \
        in_dword_masked(HWIO_RPM_VMIDMT_NSGFAR0_ADDR, m)
#define HWIO_RPM_VMIDMT_NSGFAR0_GFEA0_BMSK                       0xffffffff
#define HWIO_RPM_VMIDMT_NSGFAR0_GFEA0_SHFT                              0x0

#define HWIO_RPM_VMIDMT_NSGFSR_ADDR                              (RPM_VMIDMT_REG_BASE      + 0x00000448)
#define HWIO_RPM_VMIDMT_NSGFSR_RMSK                              0xc00000a2
#define HWIO_RPM_VMIDMT_NSGFSR_IN          \
        in_dword_masked(HWIO_RPM_VMIDMT_NSGFSR_ADDR, HWIO_RPM_VMIDMT_NSGFSR_RMSK)
#define HWIO_RPM_VMIDMT_NSGFSR_INM(m)      \
        in_dword_masked(HWIO_RPM_VMIDMT_NSGFSR_ADDR, m)
#define HWIO_RPM_VMIDMT_NSGFSR_OUT(v)      \
        out_dword(HWIO_RPM_VMIDMT_NSGFSR_ADDR,v)
#define HWIO_RPM_VMIDMT_NSGFSR_OUTM(m,v) \
        out_dword_masked_ns(HWIO_RPM_VMIDMT_NSGFSR_ADDR,m,v,HWIO_RPM_VMIDMT_NSGFSR_IN)
#define HWIO_RPM_VMIDMT_NSGFSR_MULTI_CLIENT_BMSK                 0x80000000
#define HWIO_RPM_VMIDMT_NSGFSR_MULTI_CLIENT_SHFT                       0x1f
#define HWIO_RPM_VMIDMT_NSGFSR_MULTI_CFG_BMSK                    0x40000000
#define HWIO_RPM_VMIDMT_NSGFSR_MULTI_CFG_SHFT                          0x1e
#define HWIO_RPM_VMIDMT_NSGFSR_PF_BMSK                                 0x80
#define HWIO_RPM_VMIDMT_NSGFSR_PF_SHFT                                  0x7
#define HWIO_RPM_VMIDMT_NSGFSR_CAF_BMSK                                0x20
#define HWIO_RPM_VMIDMT_NSGFSR_CAF_SHFT                                 0x5
#define HWIO_RPM_VMIDMT_NSGFSR_USF_BMSK                                 0x2
#define HWIO_RPM_VMIDMT_NSGFSR_USF_SHFT                                 0x1

#define HWIO_RPM_VMIDMT_NSGFSRRESTORE_ADDR                       (RPM_VMIDMT_REG_BASE      + 0x0000044c)
#define HWIO_RPM_VMIDMT_NSGFSRRESTORE_RMSK                       0xc00000a2
#define HWIO_RPM_VMIDMT_NSGFSRRESTORE_IN          \
        in_dword_masked(HWIO_RPM_VMIDMT_NSGFSRRESTORE_ADDR, HWIO_RPM_VMIDMT_NSGFSRRESTORE_RMSK)
#define HWIO_RPM_VMIDMT_NSGFSRRESTORE_INM(m)      \
        in_dword_masked(HWIO_RPM_VMIDMT_NSGFSRRESTORE_ADDR, m)
#define HWIO_RPM_VMIDMT_NSGFSRRESTORE_OUT(v)      \
        out_dword(HWIO_RPM_VMIDMT_NSGFSRRESTORE_ADDR,v)
#define HWIO_RPM_VMIDMT_NSGFSRRESTORE_OUTM(m,v) \
        out_dword_masked_ns(HWIO_RPM_VMIDMT_NSGFSRRESTORE_ADDR,m,v,HWIO_RPM_VMIDMT_NSGFSRRESTORE_IN)
#define HWIO_RPM_VMIDMT_NSGFSRRESTORE_MULTI_CLIENT_BMSK          0x80000000
#define HWIO_RPM_VMIDMT_NSGFSRRESTORE_MULTI_CLIENT_SHFT                0x1f
#define HWIO_RPM_VMIDMT_NSGFSRRESTORE_MULTI_CFG_BMSK             0x40000000
#define HWIO_RPM_VMIDMT_NSGFSRRESTORE_MULTI_CFG_SHFT                   0x1e
#define HWIO_RPM_VMIDMT_NSGFSRRESTORE_PF_BMSK                          0x80
#define HWIO_RPM_VMIDMT_NSGFSRRESTORE_PF_SHFT                           0x7
#define HWIO_RPM_VMIDMT_NSGFSRRESTORE_CAF_BMSK                         0x20
#define HWIO_RPM_VMIDMT_NSGFSRRESTORE_CAF_SHFT                          0x5
#define HWIO_RPM_VMIDMT_NSGFSRRESTORE_USF_BMSK                          0x2
#define HWIO_RPM_VMIDMT_NSGFSRRESTORE_USF_SHFT                          0x1

#define HWIO_RPM_VMIDMT_NSGFSYNDR0_ADDR                          (RPM_VMIDMT_REG_BASE      + 0x00000450)
#define HWIO_RPM_VMIDMT_NSGFSYNDR0_RMSK                               0x132
#define HWIO_RPM_VMIDMT_NSGFSYNDR0_IN          \
        in_dword_masked(HWIO_RPM_VMIDMT_NSGFSYNDR0_ADDR, HWIO_RPM_VMIDMT_NSGFSYNDR0_RMSK)
#define HWIO_RPM_VMIDMT_NSGFSYNDR0_INM(m)      \
        in_dword_masked(HWIO_RPM_VMIDMT_NSGFSYNDR0_ADDR, m)
#define HWIO_RPM_VMIDMT_NSGFSYNDR0_MSSSELFAUTH_BMSK                   0x100
#define HWIO_RPM_VMIDMT_NSGFSYNDR0_MSSSELFAUTH_SHFT                     0x8
#define HWIO_RPM_VMIDMT_NSGFSYNDR0_NSATTR_BMSK                         0x20
#define HWIO_RPM_VMIDMT_NSGFSYNDR0_NSATTR_SHFT                          0x5
#define HWIO_RPM_VMIDMT_NSGFSYNDR0_NSSTATE_BMSK                        0x10
#define HWIO_RPM_VMIDMT_NSGFSYNDR0_NSSTATE_SHFT                         0x4
#define HWIO_RPM_VMIDMT_NSGFSYNDR0_WNR_BMSK                             0x2
#define HWIO_RPM_VMIDMT_NSGFSYNDR0_WNR_SHFT                             0x1

#define HWIO_RPM_VMIDMT_NSGFSYNDR1_ADDR                          (RPM_VMIDMT_REG_BASE      + 0x00000454)
#define HWIO_RPM_VMIDMT_NSGFSYNDR1_RMSK                           0x1010001
#define HWIO_RPM_VMIDMT_NSGFSYNDR1_IN          \
        in_dword_masked(HWIO_RPM_VMIDMT_NSGFSYNDR1_ADDR, HWIO_RPM_VMIDMT_NSGFSYNDR1_RMSK)
#define HWIO_RPM_VMIDMT_NSGFSYNDR1_INM(m)      \
        in_dword_masked(HWIO_RPM_VMIDMT_NSGFSYNDR1_ADDR, m)
#define HWIO_RPM_VMIDMT_NSGFSYNDR1_MSDINDEX_BMSK                  0x1000000
#define HWIO_RPM_VMIDMT_NSGFSYNDR1_MSDINDEX_SHFT                       0x18
#define HWIO_RPM_VMIDMT_NSGFSYNDR1_SSDINDEX_BMSK                    0x10000
#define HWIO_RPM_VMIDMT_NSGFSYNDR1_SSDINDEX_SHFT                       0x10
#define HWIO_RPM_VMIDMT_NSGFSYNDR1_STREAMINDEX_BMSK                     0x1
#define HWIO_RPM_VMIDMT_NSGFSYNDR1_STREAMINDEX_SHFT                     0x0

#define HWIO_RPM_VMIDMT_NSGFSYNDR2_ADDR                          (RPM_VMIDMT_REG_BASE      + 0x00000458)
#define HWIO_RPM_VMIDMT_NSGFSYNDR2_RMSK                          0x3f1fffff
#define HWIO_RPM_VMIDMT_NSGFSYNDR2_IN          \
        in_dword_masked(HWIO_RPM_VMIDMT_NSGFSYNDR2_ADDR, HWIO_RPM_VMIDMT_NSGFSYNDR2_RMSK)
#define HWIO_RPM_VMIDMT_NSGFSYNDR2_INM(m)      \
        in_dword_masked(HWIO_RPM_VMIDMT_NSGFSYNDR2_ADDR, m)
#define HWIO_RPM_VMIDMT_NSGFSYNDR2_ATID_BMSK                     0x3f000000
#define HWIO_RPM_VMIDMT_NSGFSYNDR2_ATID_SHFT                           0x18
#define HWIO_RPM_VMIDMT_NSGFSYNDR2_AVMID_BMSK                      0x1f0000
#define HWIO_RPM_VMIDMT_NSGFSYNDR2_AVMID_SHFT                          0x10
#define HWIO_RPM_VMIDMT_NSGFSYNDR2_ABID_BMSK                         0xe000
#define HWIO_RPM_VMIDMT_NSGFSYNDR2_ABID_SHFT                            0xd
#define HWIO_RPM_VMIDMT_NSGFSYNDR2_APID_BMSK                         0x1f00
#define HWIO_RPM_VMIDMT_NSGFSYNDR2_APID_SHFT                            0x8
#define HWIO_RPM_VMIDMT_NSGFSYNDR2_AMID_BMSK                           0xff
#define HWIO_RPM_VMIDMT_NSGFSYNDR2_AMID_SHFT                            0x0

#define HWIO_RPM_VMIDMT_NSVMIDMTCR0_ADDR                         (RPM_VMIDMT_REG_BASE      + 0x00000490)
#define HWIO_RPM_VMIDMT_NSVMIDMTCR0_RMSK                                0x1
#define HWIO_RPM_VMIDMT_NSVMIDMTCR0_IN          \
        in_dword_masked(HWIO_RPM_VMIDMT_NSVMIDMTCR0_ADDR, HWIO_RPM_VMIDMT_NSVMIDMTCR0_RMSK)
#define HWIO_RPM_VMIDMT_NSVMIDMTCR0_INM(m)      \
        in_dword_masked(HWIO_RPM_VMIDMT_NSVMIDMTCR0_ADDR, m)
#define HWIO_RPM_VMIDMT_NSVMIDMTCR0_OUT(v)      \
        out_dword(HWIO_RPM_VMIDMT_NSVMIDMTCR0_ADDR,v)
#define HWIO_RPM_VMIDMT_NSVMIDMTCR0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_RPM_VMIDMT_NSVMIDMTCR0_ADDR,m,v,HWIO_RPM_VMIDMT_NSVMIDMTCR0_IN)
#define HWIO_RPM_VMIDMT_NSVMIDMTCR0_CLKONOFFE_BMSK                      0x1
#define HWIO_RPM_VMIDMT_NSVMIDMTCR0_CLKONOFFE_SHFT                      0x0

#define HWIO_RPM_VMIDMT_SSDR0_ADDR                               (RPM_VMIDMT_REG_BASE      + 0x00000080)
#define HWIO_RPM_VMIDMT_SSDR0_RMSK                                      0x1
#define HWIO_RPM_VMIDMT_SSDR0_IN          \
        in_dword_masked(HWIO_RPM_VMIDMT_SSDR0_ADDR, HWIO_RPM_VMIDMT_SSDR0_RMSK)
#define HWIO_RPM_VMIDMT_SSDR0_INM(m)      \
        in_dword_masked(HWIO_RPM_VMIDMT_SSDR0_ADDR, m)
#define HWIO_RPM_VMIDMT_SSDR0_OUT(v)      \
        out_dword(HWIO_RPM_VMIDMT_SSDR0_ADDR,v)
#define HWIO_RPM_VMIDMT_SSDR0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_RPM_VMIDMT_SSDR0_ADDR,m,v,HWIO_RPM_VMIDMT_SSDR0_IN)
#define HWIO_RPM_VMIDMT_SSDR0_RWE_BMSK                                  0x1
#define HWIO_RPM_VMIDMT_SSDR0_RWE_SHFT                                  0x0

#define HWIO_RPM_VMIDMT_MSDR0_ADDR                               (RPM_VMIDMT_REG_BASE      + 0x00000480)
#define HWIO_RPM_VMIDMT_MSDR0_RMSK                                      0x1
#define HWIO_RPM_VMIDMT_MSDR0_IN          \
        in_dword_masked(HWIO_RPM_VMIDMT_MSDR0_ADDR, HWIO_RPM_VMIDMT_MSDR0_RMSK)
#define HWIO_RPM_VMIDMT_MSDR0_INM(m)      \
        in_dword_masked(HWIO_RPM_VMIDMT_MSDR0_ADDR, m)
#define HWIO_RPM_VMIDMT_MSDR0_OUT(v)      \
        out_dword(HWIO_RPM_VMIDMT_MSDR0_ADDR,v)
#define HWIO_RPM_VMIDMT_MSDR0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_RPM_VMIDMT_MSDR0_ADDR,m,v,HWIO_RPM_VMIDMT_MSDR0_IN)
#define HWIO_RPM_VMIDMT_MSDR0_RWE_BMSK                                  0x1
#define HWIO_RPM_VMIDMT_MSDR0_RWE_SHFT                                  0x0

#define HWIO_RPM_VMIDMT_MCR_ADDR                                 (RPM_VMIDMT_REG_BASE      + 0x00000494)
#define HWIO_RPM_VMIDMT_MCR_RMSK                                        0x7
#define HWIO_RPM_VMIDMT_MCR_IN          \
        in_dword_masked(HWIO_RPM_VMIDMT_MCR_ADDR, HWIO_RPM_VMIDMT_MCR_RMSK)
#define HWIO_RPM_VMIDMT_MCR_INM(m)      \
        in_dword_masked(HWIO_RPM_VMIDMT_MCR_ADDR, m)
#define HWIO_RPM_VMIDMT_MCR_OUT(v)      \
        out_dword(HWIO_RPM_VMIDMT_MCR_ADDR,v)
#define HWIO_RPM_VMIDMT_MCR_OUTM(m,v) \
        out_dword_masked_ns(HWIO_RPM_VMIDMT_MCR_ADDR,m,v,HWIO_RPM_VMIDMT_MCR_IN)
#define HWIO_RPM_VMIDMT_MCR_CLKONOFFE_BMSK                              0x4
#define HWIO_RPM_VMIDMT_MCR_CLKONOFFE_SHFT                              0x2
#define HWIO_RPM_VMIDMT_MCR_BPMSACFG_BMSK                               0x2
#define HWIO_RPM_VMIDMT_MCR_BPMSACFG_SHFT                               0x1
#define HWIO_RPM_VMIDMT_MCR_BPSMSACFG_BMSK                              0x1
#define HWIO_RPM_VMIDMT_MCR_BPSMSACFG_SHFT                              0x0

#define HWIO_RPM_VMIDMT_S2VRn_ADDR(n)                            (RPM_VMIDMT_REG_BASE      + 0x00000c00 + 0x4 * (n))
#define HWIO_RPM_VMIDMT_S2VRn_RMSK                               0x30ff7b1f
#define HWIO_RPM_VMIDMT_S2VRn_MAXn                                        0
#define HWIO_RPM_VMIDMT_S2VRn_INI(n)        \
        in_dword_masked(HWIO_RPM_VMIDMT_S2VRn_ADDR(n), HWIO_RPM_VMIDMT_S2VRn_RMSK)
#define HWIO_RPM_VMIDMT_S2VRn_INMI(n,mask)    \
        in_dword_masked(HWIO_RPM_VMIDMT_S2VRn_ADDR(n), mask)
#define HWIO_RPM_VMIDMT_S2VRn_OUTI(n,val)    \
        out_dword(HWIO_RPM_VMIDMT_S2VRn_ADDR(n),val)
#define HWIO_RPM_VMIDMT_S2VRn_OUTMI(n,mask,val) \
        out_dword_masked_ns(HWIO_RPM_VMIDMT_S2VRn_ADDR(n),mask,val,HWIO_RPM_VMIDMT_S2VRn_INI(n))
#define HWIO_RPM_VMIDMT_S2VRn_TRANSIENTCFG_BMSK                  0x30000000
#define HWIO_RPM_VMIDMT_S2VRn_TRANSIENTCFG_SHFT                        0x1c
#define HWIO_RPM_VMIDMT_S2VRn_WACFG_BMSK                           0xc00000
#define HWIO_RPM_VMIDMT_S2VRn_WACFG_SHFT                               0x16
#define HWIO_RPM_VMIDMT_S2VRn_RACFG_BMSK                           0x300000
#define HWIO_RPM_VMIDMT_S2VRn_RACFG_SHFT                               0x14
#define HWIO_RPM_VMIDMT_S2VRn_NSCFG_BMSK                            0xc0000
#define HWIO_RPM_VMIDMT_S2VRn_NSCFG_SHFT                               0x12
#define HWIO_RPM_VMIDMT_S2VRn_TYPE_BMSK                             0x30000
#define HWIO_RPM_VMIDMT_S2VRn_TYPE_SHFT                                0x10
#define HWIO_RPM_VMIDMT_S2VRn_MEMATTR_BMSK                           0x7000
#define HWIO_RPM_VMIDMT_S2VRn_MEMATTR_SHFT                              0xc
#define HWIO_RPM_VMIDMT_S2VRn_MTCFG_BMSK                              0x800
#define HWIO_RPM_VMIDMT_S2VRn_MTCFG_SHFT                                0xb
#define HWIO_RPM_VMIDMT_S2VRn_SHCFG_BMSK                              0x300
#define HWIO_RPM_VMIDMT_S2VRn_SHCFG_SHFT                                0x8
#define HWIO_RPM_VMIDMT_S2VRn_VMID_BMSK                                0x1f
#define HWIO_RPM_VMIDMT_S2VRn_VMID_SHFT                                 0x0

#define HWIO_RPM_VMIDMT_AS2VRn_ADDR(n)                           (RPM_VMIDMT_REG_BASE      + 0x00000e00 + 0x4 * (n))
#define HWIO_RPM_VMIDMT_AS2VRn_RMSK                              0x70000013
#define HWIO_RPM_VMIDMT_AS2VRn_MAXn                                       0
#define HWIO_RPM_VMIDMT_AS2VRn_INI(n)        \
        in_dword_masked(HWIO_RPM_VMIDMT_AS2VRn_ADDR(n), HWIO_RPM_VMIDMT_AS2VRn_RMSK)
#define HWIO_RPM_VMIDMT_AS2VRn_INMI(n,mask)    \
        in_dword_masked(HWIO_RPM_VMIDMT_AS2VRn_ADDR(n), mask)
#define HWIO_RPM_VMIDMT_AS2VRn_OUTI(n,val)    \
        out_dword(HWIO_RPM_VMIDMT_AS2VRn_ADDR(n),val)
#define HWIO_RPM_VMIDMT_AS2VRn_OUTMI(n,mask,val) \
        out_dword_masked_ns(HWIO_RPM_VMIDMT_AS2VRn_ADDR(n),mask,val,HWIO_RPM_VMIDMT_AS2VRn_INI(n))
#define HWIO_RPM_VMIDMT_AS2VRn_RCNSH_BMSK                        0x40000000
#define HWIO_RPM_VMIDMT_AS2VRn_RCNSH_SHFT                              0x1e
#define HWIO_RPM_VMIDMT_AS2VRn_RCISH_BMSK                        0x20000000
#define HWIO_RPM_VMIDMT_AS2VRn_RCISH_SHFT                              0x1d
#define HWIO_RPM_VMIDMT_AS2VRn_RCOSH_BMSK                        0x10000000
#define HWIO_RPM_VMIDMT_AS2VRn_RCOSH_SHFT                              0x1c
#define HWIO_RPM_VMIDMT_AS2VRn_REQPRIORITYCFG_BMSK                     0x10
#define HWIO_RPM_VMIDMT_AS2VRn_REQPRIORITYCFG_SHFT                      0x4
#define HWIO_RPM_VMIDMT_AS2VRn_REQPRIORITY_BMSK                         0x3
#define HWIO_RPM_VMIDMT_AS2VRn_REQPRIORITY_SHFT                         0x0


#endif /* __HALVMIDMTHWIOTARGET_H__ */
