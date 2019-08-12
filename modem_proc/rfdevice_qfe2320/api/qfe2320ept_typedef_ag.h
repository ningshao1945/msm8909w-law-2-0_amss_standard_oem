#ifndef QFE2320EPT_TYPEDEF_AG_H
#define QFE2320EPT_TYPEDEF_AG_H
/*
  WARNING: This file is auto-generated.

  Generated at:    Mon Nov 10 18:34:23 2014
  Generated using: rffe_autogenEPT.pl
  Generated from:  Rev 2.48 of the QFE2320 SBI spreadsheet
*/

/*!
  @file
  qfe2320ept_typedef_ag.h

  @brief
  QFE2320 Data Type Definition autogen header 

  @details
  This file is auto-generated and it contains the QFE2320 Data Type Definition RFFE data type 
  to support the interaction with the QUALCOMM QFE2320 chip

  @addtogroup QFE2320 Data Type Definition
  @{
*/

/*=============================================================================

Copyright (c) 2012,2013 by QUALCOMM Technologies, Inc.  All Rights Reserved.

Qualcomm Proprietary

  Export of this technology or software is regulated by the U.S. 
  Government. Diversion contrary to U.S. law prohibited.

  All ideas, data and information contained in or disclosed by
  this document are confidential and proprietary information of
  QUALCOMM Technologies Incorporated and all rights therein are expressly reserved.
  By accepting this material the recipient agrees that this material
  and the information contained therein are held in confidence and in
  trust and will not be used, copied, reproduced in whole or in part,
  nor its contents revealed in any manner to others without the express
  written permission of QUALCOMM Technologies Incorporated.

  $Header: //source/qcom/qct/modem/rfdevice/qfe2320/main/latest/common/etc/Utility.pm#3 60============================================================================*/
  
/*=============================================================================

                            INCLUDE FILES FOR MODULE

=============================================================================*/
#include "comdef.h"
#include "qfe2320ept_typedef.h"

typedef enum
{
  QFE2320_option1_DEVICE = 0,
  QFE2320_WTR4905_EPT_DEVICE = 1,
  QFE2320_option2_DEVICE = 2,
}qfe2320ept_modules_type;

typedef enum
{
  QFE2320EPT_TRX_LB1 = 1,
  QFE2320EPT_TRX_LB2 = 2,
  QFE2320EPT_TRX_LB3 = 3,
  QFE2320EPT_TRX_LB4 = 4,
  QFE2320EPT_TRX_HB1 = 5,
  QFE2320EPT_TRX_HB2 = 6,
  QFE2320EPT_TRX_HB3 = 7,
  QFE2320EPT_TRX_HB4 = 8,
  QFE2320EPT_TRX_HB5 = 9,
  QFE2320EPT_TRX_HB6 = 10,
  QFE2320EPT_TX_LB0 = 11,
  QFE2320EPT_TX_HB0 = 12,
  QFE2320EPT_LB1_IN = 13,
  QFE2320EPT_LB2_IN = 14,
  QFE2320EPT_HB1_IN = 15,
  QFE2320EPT_HB2_IN = 16,
  QFE2320EPT_INVALID_PORT = 0xFF,
}qfe2320ept_portnum_type;

typedef enum
{
  QFE2320EPT_WCDMA_PA_BAND1,
  QFE2320EPT_WCDMA_PA_BAND2,
  QFE2320EPT_WCDMA_PA_BAND3,
  QFE2320EPT_WCDMA_PA_BAND4,
  QFE2320EPT_WCDMA_PA_BAND5,
  QFE2320EPT_WCDMA_PA_BAND8,
  QFE2320EPT_WCDMA_PA_BAND9,
  QFE2320EPT_WCDMA_PA_BAND_NUM,
  QFE2320EPT_WCDMA_PA_BAND_INVALID,
}qfe2320ept_wcdma_pa_port_data_type;

typedef enum
{
  QFE2320EPT_GSM_PA_BAND850,
  QFE2320EPT_GSM_PA_BAND900,
  QFE2320EPT_GSM_PA_BAND1800,
  QFE2320EPT_GSM_PA_BAND1900,
  QFE2320EPT_GSM_PA_BAND_NUM,
  QFE2320EPT_GSM_PA_BAND_INVALID,
}qfe2320ept_gsm_pa_port_data_type;

typedef enum
{
  QFE2320EPT_CDMA_PA_BAND0,
  QFE2320EPT_CDMA_PA_BAND1,
  QFE2320EPT_CDMA_PA_BAND6,
  QFE2320EPT_CDMA_PA_BAND10,
  QFE2320EPT_CDMA_PA_BAND15,
  QFE2320EPT_CDMA_PA_BAND_NUM,
  QFE2320EPT_CDMA_PA_BAND_INVALID,
}qfe2320ept_cdma_pa_port_data_type;

typedef enum
{
  QFE2320EPT_LTEFDD_PA_BAND1_1_3_5,
  QFE2320EPT_LTEFDD_PA_BAND1_10_15,
  QFE2320EPT_LTEFDD_PA_BAND1_20,
  QFE2320EPT_LTEFDD_PA_BAND2_1_3_5,
  QFE2320EPT_LTEFDD_PA_BAND2_10_15,
  QFE2320EPT_LTEFDD_PA_BAND2_20,
  QFE2320EPT_LTEFDD_PA_BAND3_1_3_5,
  QFE2320EPT_LTEFDD_PA_BAND3_10_15,
  QFE2320EPT_LTEFDD_PA_BAND3_20,
  QFE2320EPT_LTEFDD_PA_BAND4_1_3_5,
  QFE2320EPT_LTEFDD_PA_BAND4_10_15,
  QFE2320EPT_LTEFDD_PA_BAND4_20,
  QFE2320EPT_LTEFDD_PA_BAND5_1_3_5,
  QFE2320EPT_LTEFDD_PA_BAND5_10_15_20,
  QFE2320EPT_LTEFDD_PA_BAND8_1_3_5,
  QFE2320EPT_LTEFDD_PA_BAND8_10_15_20,
  QFE2320EPT_LTEFDD_PA_BAND10_1_3_5,
  QFE2320EPT_LTEFDD_PA_BAND10_10_15,
  QFE2320EPT_LTEFDD_PA_BAND10_20,
  QFE2320EPT_LTEFDD_PA_BAND12_1_3_5,
  QFE2320EPT_LTEFDD_PA_BAND12_10_15_20,
  QFE2320EPT_LTEFDD_PA_BAND17_1_3_5,
  QFE2320EPT_LTEFDD_PA_BAND17_10_15_20,
  QFE2320EPT_LTEFDD_PA_BAND20_1_3_5,
  QFE2320EPT_LTEFDD_PA_BAND20_10_15,
  QFE2320EPT_LTEFDD_PA_BAND20_20,
  QFE2320EPT_LTEFDD_PA_BAND25_1_3_5,
  QFE2320EPT_LTEFDD_PA_BAND25_10_15,
  QFE2320EPT_LTEFDD_PA_BAND25_20,
  QFE2320EPT_LTEFDD_PA_BAND26_1_3_5,
  QFE2320EPT_LTEFDD_PA_BAND26_10_15_20,
  QFE2320EPT_LTEFDD_PA_BAND_NUM,
  QFE2320EPT_LTEFDD_PA_BAND_INVALID,
}qfe2320ept_ltefdd_pa_port_data_type;

typedef enum
{
  QFE2320EPT_TDSCDMA_PA_BAND34,
  QFE2320EPT_TDSCDMA_PA_BAND39,
  QFE2320EPT_TDSCDMA_PA_BAND_NUM,
  QFE2320EPT_TDSCDMA_PA_BAND_INVALID,
}qfe2320ept_tdscdma_pa_port_data_type;

typedef enum
{
  QFE2320EPT_LTETDD_PA_BAND34_1_3_5,
  QFE2320EPT_LTETDD_PA_BAND34_10_15_20,
  QFE2320EPT_LTETDD_PA_BAND39_1_3_5,
  QFE2320EPT_LTETDD_PA_BAND39_10_15,
  QFE2320EPT_LTETDD_PA_BAND39_20,
  QFE2320EPT_LTETDD_PA_BAND_NUM,
  QFE2320EPT_LTETDD_PA_BAND_INVALID,
}qfe2320ept_ltetdd_pa_port_data_type;

typedef enum
{
  QFE2320EPT_WCDMA_COMMON_BAND1,
  QFE2320EPT_WCDMA_COMMON_BAND2,
  QFE2320EPT_WCDMA_COMMON_BAND3,
  QFE2320EPT_WCDMA_COMMON_BAND4,
  QFE2320EPT_WCDMA_COMMON_BAND5,
  QFE2320EPT_WCDMA_COMMON_BAND8,
  QFE2320EPT_WCDMA_COMMON_BAND9,
  QFE2320EPT_WCDMA_COMMON_BAND_NUM,
  QFE2320EPT_WCDMA_COMMON_BAND_INVALID,
}qfe2320ept_wcdma_common_port_data_type;

typedef enum
{
  QFE2320EPT_GSM_COMMON_BAND850,
  QFE2320EPT_GSM_COMMON_BAND900,
  QFE2320EPT_GSM_COMMON_BAND1800,
  QFE2320EPT_GSM_COMMON_BAND1900,
  QFE2320EPT_GSM_COMMON_BAND_NUM,
  QFE2320EPT_GSM_COMMON_BAND_INVALID,
}qfe2320ept_gsm_common_port_data_type;

typedef enum
{
  QFE2320EPT_CDMA_COMMON_BAND0,
  QFE2320EPT_CDMA_COMMON_BAND1,
  QFE2320EPT_CDMA_COMMON_BAND6,
  QFE2320EPT_CDMA_COMMON_BAND10,
  QFE2320EPT_CDMA_COMMON_BAND15,
  QFE2320EPT_CDMA_COMMON_BAND_NUM,
  QFE2320EPT_CDMA_COMMON_BAND_INVALID,
}qfe2320ept_cdma_common_port_data_type;

typedef enum
{
  QFE2320EPT_LTEFDD_COMMON_BAND1,
  QFE2320EPT_LTEFDD_COMMON_BAND2,
  QFE2320EPT_LTEFDD_COMMON_BAND3,
  QFE2320EPT_LTEFDD_COMMON_BAND4,
  QFE2320EPT_LTEFDD_COMMON_BAND5,
  QFE2320EPT_LTEFDD_COMMON_BAND7,
  QFE2320EPT_LTEFDD_COMMON_BAND8,
  QFE2320EPT_LTEFDD_COMMON_BAND10,
  QFE2320EPT_LTEFDD_COMMON_BAND12,
  QFE2320EPT_LTEFDD_COMMON_BAND17,
  QFE2320EPT_LTEFDD_COMMON_BAND20,
  QFE2320EPT_LTEFDD_COMMON_BAND25,
  QFE2320EPT_LTEFDD_COMMON_BAND26,
  QFE2320EPT_LTEFDD_COMMON_BAND28,
  QFE2320EPT_LTEFDD_COMMON_BAND28_B,
  QFE2320EPT_LTEFDD_COMMON_BAND29,
  QFE2320EPT_LTEFDD_COMMON_BAND41,
  QFE2320EPT_LTEFDD_COMMON_BAND_NUM,
  QFE2320EPT_LTEFDD_COMMON_BAND_INVALID,
}qfe2320ept_ltefdd_common_port_data_type;

typedef enum
{
  QFE2320EPT_TDSCDMA_COMMON_BAND34,
  QFE2320EPT_TDSCDMA_COMMON_BAND39,
  QFE2320EPT_TDSCDMA_COMMON_BAND_NUM,
  QFE2320EPT_TDSCDMA_COMMON_BAND_INVALID,
}qfe2320ept_tdscdma_common_port_data_type;

typedef enum
{
  QFE2320EPT_LTETDD_COMMON_BAND34,
  QFE2320EPT_LTETDD_COMMON_BAND39,
  QFE2320EPT_LTETDD_COMMON_BAND39_B,
  QFE2320EPT_LTETDD_COMMON_BAND_NUM,
  QFE2320EPT_LTETDD_COMMON_BAND_INVALID,
}qfe2320ept_ltetdd_common_port_data_type;

typedef enum
{
  QFE2320EPT_WCDMA_ASM_BAND1_TRX_HB2,
  QFE2320EPT_WCDMA_ASM_BAND2_TRX_HB3,
  QFE2320EPT_WCDMA_ASM_BAND2_TRX_HB4,
  QFE2320EPT_WCDMA_ASM_BAND3_TRX_HB4,
  QFE2320EPT_WCDMA_ASM_BAND3_TRX_HB5,
  QFE2320EPT_WCDMA_ASM_BAND3_TRX_HB6,
  QFE2320EPT_WCDMA_ASM_BAND4_TRX_HB4,
  QFE2320EPT_WCDMA_ASM_BAND4_TRX_HB5,
  QFE2320EPT_WCDMA_ASM_BAND4_TRX_HB6,
  QFE2320EPT_WCDMA_ASM_BAND5_TRX_LB2,
  QFE2320EPT_WCDMA_ASM_BAND8_TRX_LB1,
  QFE2320EPT_WCDMA_ASM_BAND8_TRX_LB3,
  QFE2320EPT_WCDMA_ASM_BAND9_TRX_HB4,
  QFE2320EPT_WCDMA_ASM_BAND9_TRX_HB5,
  QFE2320EPT_WCDMA_ASM_BAND9_TRX_HB6,
  QFE2320EPT_WCDMA_ASM_BAND_NUM,
  QFE2320EPT_WCDMA_ASM_BAND_INVALID,
}qfe2320ept_wcdma_asm_port_data_type;

typedef enum
{
  QFE2320EPT_GSM_ASM_BAND850_TX_LB0,
  QFE2320EPT_GSM_ASM_BAND900_TX_LB0,
  QFE2320EPT_GSM_ASM_BAND1800_TX_HB0,
  QFE2320EPT_GSM_ASM_BAND1900_TX_HB0,
  QFE2320EPT_GSM_ASM_BAND850_TRX_LB2,
  QFE2320EPT_GSM_ASM_BAND900_TRX_LB3,
  QFE2320EPT_GSM_ASM_BAND1800_TRX_HB1,
  QFE2320EPT_GSM_ASM_BAND1800_TRX_HB3,
  QFE2320EPT_GSM_ASM_BAND1800_TRX_HB5,
  QFE2320EPT_GSM_ASM_BAND1900_TRX_HB1,
  QFE2320EPT_GSM_ASM_BAND1900_TRX_HB3,
  QFE2320EPT_GSM_ASM_BAND1900_TRX_HB4,
  QFE2320EPT_GSM_ASM_BAND_NUM,
  QFE2320EPT_GSM_ASM_BAND_INVALID,
}qfe2320ept_gsm_asm_port_data_type;

typedef enum
{
  QFE2320EPT_CDMA_ASM_BAND0_TRX_LB2,
  QFE2320EPT_CDMA_ASM_BAND1_TRX_HB4,
  QFE2320EPT_CDMA_ASM_BAND6_TRX_HB2,
  QFE2320EPT_CDMA_ASM_BAND10_TRX_LB2,
  QFE2320EPT_CDMA_ASM_BAND15_TRX_HB1,
  QFE2320EPT_CDMA_ASM_BAND15_TRX_HB3,
  QFE2320EPT_CDMA_ASM_BAND15_TRX_HB5,
  QFE2320EPT_CDMA_ASM_BAND15_TRX_HB6,
  QFE2320EPT_CDMA_ASM_BAND_NUM,
  QFE2320EPT_CDMA_ASM_BAND_INVALID,
}qfe2320ept_cdma_asm_port_data_type;

typedef enum
{
  QFE2320EPT_LTEFDD_ASM_BAND1_TRX_HB2,
  QFE2320EPT_LTEFDD_ASM_BAND2_TRX_HB3,
  QFE2320EPT_LTEFDD_ASM_BAND2_TRX_HB4,
  QFE2320EPT_LTEFDD_ASM_BAND3_TRX_HB4,
  QFE2320EPT_LTEFDD_ASM_BAND3_TRX_HB5,
  QFE2320EPT_LTEFDD_ASM_BAND3_TRX_HB6,
  QFE2320EPT_LTEFDD_ASM_BAND4_TRX_HB3,
  QFE2320EPT_LTEFDD_ASM_BAND4_TRX_HB4,
  QFE2320EPT_LTEFDD_ASM_BAND4_TRX_HB5,
  QFE2320EPT_LTEFDD_ASM_BAND4_TRX_HB6,
  QFE2320EPT_LTEFDD_ASM_BAND5_TRX_LB2,
  QFE2320EPT_LTEFDD_ASM_BAND7_TRX_HB1,
  QFE2320EPT_LTEFDD_ASM_BAND7_TRX_HB3,
  QFE2320EPT_LTEFDD_ASM_BAND8_TRX_LB1,
  QFE2320EPT_LTEFDD_ASM_BAND8_TRX_LB3,
  QFE2320EPT_LTEFDD_ASM_BAND10_TRX_HB5,
  QFE2320EPT_LTEFDD_ASM_BAND12_TRX_LB1,
  QFE2320EPT_LTEFDD_ASM_BAND12_TRX_LB4,
  QFE2320EPT_LTEFDD_ASM_BAND17_TRX_LB1,
  QFE2320EPT_LTEFDD_ASM_BAND17_TRX_LB4,
  QFE2320EPT_LTEFDD_ASM_BAND20_TRX_LB1,
  QFE2320EPT_LTEFDD_ASM_BAND20_TRX_LB4,
  QFE2320EPT_LTEFDD_ASM_BAND25_TRX_HB3,
  QFE2320EPT_LTEFDD_ASM_BAND25_TRX_HB4,
  QFE2320EPT_LTEFDD_ASM_BAND26_TRX_LB2,
  QFE2320EPT_LTEFDD_ASM_BAND28_TRX_LB4,
  QFE2320EPT_LTEFDD_ASM_BAND28_B_TRX_LB4,
  QFE2320EPT_LTEFDD_ASM_BAND29_TRX_LB4,
  QFE2320EPT_LTEFDD_ASM_BAND41_TRX_HB1,
  QFE2320EPT_LTEFDD_ASM_BAND_NUM,
  QFE2320EPT_LTEFDD_ASM_BAND_INVALID,
}qfe2320ept_ltefdd_asm_port_data_type;

typedef enum
{
  QFE2320EPT_TDSCDMA_ASM_BAND34_TX_HB0,
  QFE2320EPT_TDSCDMA_ASM_BAND39_TX_HB0,
  QFE2320EPT_TDSCDMA_ASM_BAND34_TRX_HB1,
  QFE2320EPT_TDSCDMA_ASM_BAND34_TRX_HB2,
  QFE2320EPT_TDSCDMA_ASM_BAND34_TRX_HB3,
  QFE2320EPT_TDSCDMA_ASM_BAND34_TRX_HB4,
  QFE2320EPT_TDSCDMA_ASM_BAND34_TRX_HB6,
  QFE2320EPT_TDSCDMA_ASM_BAND39_TRX_HB1,
  QFE2320EPT_TDSCDMA_ASM_BAND39_TRX_HB3,
  QFE2320EPT_TDSCDMA_ASM_BAND39_TRX_HB5,
  QFE2320EPT_TDSCDMA_ASM_BAND39_TRX_HB6,
  QFE2320EPT_TDSCDMA_ASM_BAND_NUM,
  QFE2320EPT_TDSCDMA_ASM_BAND_INVALID,
}qfe2320ept_tdscdma_asm_port_data_type;

typedef enum
{
  QFE2320EPT_LTETDD_ASM_BAND34_TX_HB0,
  QFE2320EPT_LTETDD_ASM_BAND39_TX_HB0,
  QFE2320EPT_LTETDD_ASM_BAND34_TRX_HB1,
  QFE2320EPT_LTETDD_ASM_BAND39_TRX_HB1,
  QFE2320EPT_LTETDD_ASM_BAND39_TRX_HB3,
  QFE2320EPT_LTETDD_ASM_BAND39_B_TRX_HB3,
  QFE2320EPT_LTETDD_ASM_BAND39_TRX_HB5,
  QFE2320EPT_LTETDD_ASM_BAND39_TRX_HB6,
  QFE2320EPT_LTETDD_ASM_BAND_NUM,
  QFE2320EPT_LTETDD_ASM_BAND_INVALID,
}qfe2320ept_ltetdd_asm_port_data_type;

#endif
