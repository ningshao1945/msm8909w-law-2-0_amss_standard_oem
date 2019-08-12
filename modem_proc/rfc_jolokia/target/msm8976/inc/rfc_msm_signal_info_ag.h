
#ifndef RFC_MSM_SIGNAL_INFO_AG
#define RFC_MSM_SIGNAL_INFO_AG


#ifdef __cplusplus
extern "C" {
#endif

/*
WARNING: This file is auto-generated.

Generated using: rfc_autogen.exe
Generated from:  V5.11.305 of RFC_HWSWCD.xlsm
*/

/*=============================================================================

          R F C     A U T O G E N    F I L E

GENERAL DESCRIPTION
  This file is auto-generated and it captures the configuration of the RF Card.

Copyright (c) 2014 Qualcomm Technologies Incorporated.  All Rights Reserved.

$Header: //commercial/MPSS.JO.2.0.c1.4/Main/modem_proc/rfc_jolokia/target/msm8976/inc/rfc_msm_signal_info_ag.h#1 $ 


=============================================================================*/

/*=============================================================================
                           INCLUDE FILES
=============================================================================*/
#include "comdef.h"

#include "rfc_msm_typedef.h" 



/* Revision: V5.11.305 */
#define RFC_ENCODED_REVISION 0x050B0131 

#define RFC_SIG_LIST_END 0xFFFF

#define RFC_MSM_SIG_INFO_REV 0x000B0000

#define RFC_DEVICE_COMM_BUS_SSBI_1 1
#define RFC_DEVICE_COMM_BUS_SSBI_2 0
#define RFC_DEVICE_COMM_BUS_SSBI_3 3
#define RFC_DEVICE_COMM_BUS_SSBI_4 2
#define RFC_RX_MODEM_CHAIN_0 0
#define RFC_RX_MODEM_CHAIN_1 1
#define RFC_RX_MODEM_CHAIN_2 2
#define RFC_RX_MODEM_CHAIN_3 3
#define RFC_TX_MODEM_CHAIN_0 0
#define RFC_TX_MODEM_CHAIN_1 1


typedef enum
{
  RFC_MSM_RF_PATH_SEL_00,
  RFC_MSM_RF_PATH_SEL_01,
  RFC_MSM_RF_PATH_SEL_02,
  RFC_MSM_RF_PATH_SEL_03,
  RFC_MSM_RF_PATH_SEL_04,
  RFC_MSM_RF_PATH_SEL_05,
  RFC_MSM_RF_PATH_SEL_06,
  RFC_MSM_RF_PATH_SEL_07,
  RFC_MSM_RF_PATH_SEL_08,
  RFC_MSM_RF_PATH_SEL_09,
  RFC_MSM_RF_PATH_SEL_10,
  RFC_MSM_RF_PATH_SEL_11,
  RFC_MSM_RF_PATH_SEL_12,
  RFC_MSM_RF_PATH_SEL_13,
  RFC_MSM_RF_PATH_SEL_14,
  RFC_MSM_RF_PATH_SEL_15,
  RFC_MSM_RF_PATH_SEL_16,
  RFC_MSM_RF_PATH_SEL_17,
  RFC_MSM_RF_PATH_SEL_18,
  RFC_MSM_RF_PATH_SEL_20,
  RFC_MSM_RF_PATH_SEL_21,
  RFC_MSM_RF_PATH_SEL_22,
  RFC_MSM_RF_PATH_SEL_23,
  RFC_MSM_RF_PATH_SEL_24,
  RFC_MSM_RF_PATH_SEL_25,
  RFC_MSM_PA0_R0,
  RFC_MSM_PA0_R1,
  RFC_MSM_PA1_R0_DEFAULT,
  RFC_MSM_PA1_R1_DEFAULT,
  RFC_MSM_PA0_R0_ALT1,
  RFC_MSM_PA0_R1_ALT1,
  RFC_MSM_PA1_R2,
  RFC_MSM_PA0_R2,
  RFC_MSM_PA0_R3,
  RFC_MSM_PA1_R3,
  RFC_MSM_PA_ON_00,
  RFC_MSM_PA_ON_01,
  RFC_MSM_PA_ON_02,
  RFC_MSM_PA_ON_03,
  RFC_MSM_PA_ON_04,
  RFC_MSM_PA_ON_05,
  RFC_MSM_PA_ON_06,
  RFC_MSM_PA_ON_07,
  RFC_MSM_PA_ON_08,
  RFC_MSM_PA_ON_09,
  RFC_MSM_PA_ON_10,
  RFC_MSM_PA_ON_11,
  RFC_MSM_PA_ON_12,
  RFC_MSM_PA_ON_13,
  RFC_MSM_PA_ON_14,
  RFC_MSM_PA_ON_15,
  RFC_MSM_PA_ON_16,
  RFC_MSM_PA_ON_17,
  RFC_MSM_PA_ON_18,
  RFC_MSM_PA_ON_19,
  RFC_MSM_RX_ON0,
  RFC_MSM_RX_ON1,
  RFC_MSM_RX_ON0_alt,
  RFC_MSM_RF_ON0,
  RFC_MSM_RF_ON1,
  RFC_MSM_RFIC0_SSBI1,
  RFC_MSM_RFIC0_SSBI2,
  RFC_MSM_RFIC1_SSBI1,
  RFC_MSM_RFIC1_SSBI2,
  RFC_MSM_RFFE1_CLK,
  RFC_MSM_RFFE1_DATA,
  RFC_MSM_RFFE2_CLK,
  RFC_MSM_RFFE2_DATA,
  RFC_MSM_RFFE3_CLK,
  RFC_MSM_RFFE3_DATA,
  RFC_MSM_RFFE4_CLK,
  RFC_MSM_RFFE4_DATA,
  RFC_MSM_RFFE5_CLK,
  RFC_MSM_RFFE5_DATA,
  RFC_MSM_GPDATA0_1,
  RFC_MSM_GPDATA0_0,
  RFC_MSM_GPDATA1_1,
  RFC_MSM_GPDATA1_0,
  RFC_MSM_INTERNAL_GNSS_BLANK,
  RFC_MSM_INTERNAL_GNSS_BLANK_CONCURRENCY,
  RFC_MSM_GPS_TX_AGGRESSOR,
  RFC_MSM_PA_IND,
  RFC_MSM_TX_GTR_TH,
  RFC_MSM_TX_GTR_TH_CONCURRENCY,
  RFC_MSM_LTE_ACTIVITY_FACTOR,
  RFC_MSM_LTE_FRAME_SYNC,
  RFC_MSM_LTE_SUBFRAME_MARKER,
  RFC_MSM_COEX_TX_ACTIVITY_FACTOR,
  RFC_MSM_WCN_PRIORITY,
  RFC_MSM_TIMING_PA_CTL,
  RFC_MSM_TIMING_PA_RANGE,
  RFC_MSM_TIMING_ASM_CTL,
  RFC_MSM_TIMING_TUNER_CTL,
  RFC_MSM_TIMING_PAPM_CTL,
  RFC_MSM_TIMING_TX_TX_RF_ON0,
  RFC_MSM_TIMING_TX_RX_RF_ON0,
  RFC_MSM_TIMING_ASM_TRIGGER,
  RFC_MSM_TIMING_PAPM_TX_TX_TRIGGER,
  RFC_MSM_TIMING_PAPM_OFF_TX_RX_TX_TRIGGER,
  RFC_MSM_TIMING_PA_TRIGGER,
  RFC_MSM_TIMING_PAPM_OFF_TX_RX_TX_CTL,
  RFC_MSM_TIMING_PAPM_TX_TX_CTL,
  RFC_MSM_TIMING_PAPM_MULTISLOT_CTL,
  RFC_MSM_SIG_NUM,
  RFC_MSM_SIG_INVALID = 0xFFFFFFFF,
}rfc_msm_signal_type;


extern uint32 rfc_msm_sig_info_table_get(rfc_msm_signal_info_type **msm_info_table);

typedef enum
{
  LTE_TX_ON_UL_SF_SMPS_PGM,
  LTE_TX_ON_UL_SF_PA_CTL_ON,
  LTE_TX_ON_QPOET_NonTr_To_QPOET_TR,
  LTE_TX_ON_PRACH_OR_SRS_ONLY_PA_CTL_ON,
  LTE_TX_ON_PRACH_OR_SRS_ONLY_SMPS_PGM,
  LTE_TX_CONT_UL_SF_PA_CTL_ON,
  LTE_TX_CONT_UL_SF_SMPS_PGM,
  LTE_TX_CONT_POST_UE_SRS_PA_CTL_ON,
  LTE_TX_CONT_POST_UE_SRS_SMPS_PGM,
  LTE_TX_CONT_PRE_UE_SRS_PA_CTL_ON,
  LTE_TX_CONT_PRE_UE_SRS_SMPS_PGM,
  LTE_TX_OFF_NULL_SF_PA_CTL_OFF,
  LTE_TX_OFF_CELL_SRS_PA_CTL_OFF,
  LTE_TX_SMPS_EN_LOW,
  LTE_TX_SMPS_EN_HIGH,
  LTE_TX_ON_UL_SF_ASM_TX,
  LTE_TX_ON_PRACH_OR_SRS_ONLY_ASM_TX,
  LTE_TX_OFF_NULL_SF_ASM_RX,
  LTE_TX_OFF_CELL_SRS_ASM_RX,
  RFC_TIMING_PARAMS_NUM
}rfc_timing_param_type;


#ifdef __cplusplus
}
#endif



#endif


