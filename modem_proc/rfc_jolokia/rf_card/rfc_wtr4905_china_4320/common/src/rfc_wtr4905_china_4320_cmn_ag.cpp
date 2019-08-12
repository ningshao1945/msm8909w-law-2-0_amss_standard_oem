
/*
WARNING: This file is auto-generated.

Generated using: xmlautogen.exe
Generated from: V5.9.321 of RFC_HWSWCD.xlsm
*/

/*=============================================================================

          R F C     A U T O G E N    F I L E

GENERAL DESCRIPTION
  This file is auto-generated and it captures the configuration of the RF Card.

Copyright (c) 2016 Qualcomm Technologies Incorporated.  All Rights Reserved.

$Header: //commercial/MPSS.JO.2.0.c1.4/Main/modem_proc/rfc_jolokia/rf_card/rfc_wtr4905_china_4320/common/src/rfc_wtr4905_china_4320_cmn_ag.cpp#1 $ 


=============================================================================*/

/*=============================================================================
                           INCLUDE FILES
=============================================================================*/
#include "comdef.h"

#include <stringl/stringl.h>
#include "rfc_msm_signal_info_ag.h" 
#include "rfc_wtr4905_china_4320_cmn_ag.h" 
#include "DDITlmm.h" 
#include "rfc_common.h" 
#include "rfcommon_core_sbi.h" 

#ifdef FEATURE_GSM
#include "rfc_wtr4905_china_4320_gsm_config_ag.h" 
#endif  

#ifdef FEATURE_WCDMA
#include "rfc_wtr4905_china_4320_wcdma_config_ag.h"
#endif

#ifdef FEATURE_CDMA1X
#include "rfc_wtr4905_china_4320_cdma_config_ag.h"
#endif

#ifdef FEATURE_LTE
#include "rfc_wtr4905_china_4320_lte_config_ag.h"
#endif

#ifdef FEATURE_TDSCDMA
#include "rfc_wtr4905_china_4320_tdscdma_config_ag.h"
#endif

#ifdef FEATURE_CGPS
#include "rfc_wtr4905_china_4320_gnss_config_ag.h"
#endif


rfc_phy_device_info_type rfc_wtr4905_china_4320_phy_devices_list[] =
{
  { /*Device: WTR4905 */ 
    WTR4905, /* PHY_DEVICE_NAME */ 
    0, /* PHY_DEVICE_INSTANCES */ 
    RFC_NO_ALTERNATE_PART, /* PHY_DEVICE_ALT_PART_NUM_OF_INSTANCE */ 
    RFDEVICE_COMM_PROTO_RFFE, /* PHY_DEVICE_COMM_PROTOCOL */ 
    {    4,0 /* 0 not specified */,}, /* PHY_DEVICE_COMM_BUS */ 
    0x217, /* PHY_DEVICE_MANUFACTURER_ID */ 
    0xC8, /* PHY_DEVICE_PRODUCT_ID */ 
    0, /* PHY_DEVICE_PRODUCT_REV */  
    0x1, /* DEFAULT USID RANGE START */ 
    0x1, /* DEFAULT USID RANGE END */ 
    0x1, /* PHY_DEVICE_ASSIGNED_USID */  
    0 /*Warning: Not specified*/, /* RFFE_GROUP_ID */ 
    FALSE, /* INIT */ 
    RFC_TX_MODEM_CHAIN_0, /* ASSOCIATED_DAC */                 
  }, /* END - Device: WTR4905 */ 

  { /*Device: QFE2101 */ 
    QFE2101, /* PHY_DEVICE_NAME */ 
    1, /* PHY_DEVICE_INSTANCES */ 
    RFC_NO_ALTERNATE_PART, /* PHY_DEVICE_ALT_PART_NUM_OF_INSTANCE */ 
    RFDEVICE_COMM_PROTO_RFFE, /* PHY_DEVICE_COMM_PROTOCOL */ 
    {    0,0 /* 0 not specified */,}, /* PHY_DEVICE_COMM_BUS */ 
    0x217, /* PHY_DEVICE_MANUFACTURER_ID */ 
    0x31, /* PHY_DEVICE_PRODUCT_ID */ 
    0, /* PHY_DEVICE_PRODUCT_REV */  
    0x4, /* DEFAULT USID RANGE START */ 
    0x4, /* DEFAULT USID RANGE END */ 
    0x4, /* PHY_DEVICE_ASSIGNED_USID */  
    0 /*Warning: Not specified*/, /* RFFE_GROUP_ID */ 
    TRUE, /* INIT */ 
    RFC_INVALID_PARAM, /* ASSOCIATED_DAC */   
  }, /* END - Device: QFE2101 */ 

  { /*Device: QFE2340 */ 
    QFE2340, /* PHY_DEVICE_NAME */ 
    2, /* PHY_DEVICE_INSTANCES */ 
    RFC_NO_ALTERNATE_PART, /* PHY_DEVICE_ALT_PART_NUM_OF_INSTANCE */ 
    RFDEVICE_COMM_PROTO_RFFE, /* PHY_DEVICE_COMM_PROTOCOL */ 
    {    0,0 /* 0 not specified */,}, /* PHY_DEVICE_COMM_BUS */ 
    0x217, /* PHY_DEVICE_MANUFACTURER_ID */ 
    0x21, /* PHY_DEVICE_PRODUCT_ID */ 
    1, /* PHY_DEVICE_PRODUCT_REV */  
    0x0F, /* DEFAULT USID RANGE START */ 
    0x0F, /* DEFAULT USID RANGE END */ 
    0x0F, /* PHY_DEVICE_ASSIGNED_USID */  
    0 /*Warning: Not specified*/, /* RFFE_GROUP_ID */ 
    FALSE, /* INIT */ 
    RFC_INVALID_PARAM, /* ASSOCIATED_DAC */   
  }, /* END - Device: QFE2340 */ 

  { /*Device: QFE4320 */ 
    QFE4320, /* PHY_DEVICE_NAME */ 
    3, /* PHY_DEVICE_INSTANCES */ 
    RFC_NO_ALTERNATE_PART, /* PHY_DEVICE_ALT_PART_NUM_OF_INSTANCE */ 
    RFDEVICE_COMM_PROTO_RFFE, /* PHY_DEVICE_COMM_PROTOCOL */ 
    {    0,0 /* 0 not specified */,}, /* PHY_DEVICE_COMM_BUS */ 
    0x217, /* PHY_DEVICE_MANUFACTURER_ID */ 
    0x44, /* PHY_DEVICE_PRODUCT_ID */ 
    0, /* PHY_DEVICE_PRODUCT_REV */  
    0xC, /* DEFAULT USID RANGE START */ 
    0xC, /* DEFAULT USID RANGE END */ 
    0x02, /* PHY_DEVICE_ASSIGNED_USID */  
    0 /*Warning: Not specified*/, /* RFFE_GROUP_ID */ 
    TRUE, /* INIT */ 
    RFC_INVALID_PARAM, /* ASSOCIATED_DAC */   
  }, /* END - Device: QFE4320 */ 

  { /*Device: ASM_SP4T */ 
    GEN_ASM /* ASM_SP4T */, /* PHY_DEVICE_NAME */ 
    4, /* PHY_DEVICE_INSTANCES */ 
    RFC_NO_ALTERNATE_PART, /* PHY_DEVICE_ALT_PART_NUM_OF_INSTANCE */ 
    RFDEVICE_COMM_PROTO_RFFE, /* PHY_DEVICE_COMM_PROTOCOL */ 
    {    0,0 /* 0 not specified */,}, /* PHY_DEVICE_COMM_BUS */ 
    0x1B0, /* PHY_DEVICE_MANUFACTURER_ID */ 
    0x2, /* PHY_DEVICE_PRODUCT_ID */ 
    0, /* PHY_DEVICE_PRODUCT_REV */  
    0xA, /* DEFAULT USID RANGE START */ 
    0xA, /* DEFAULT USID RANGE END */ 
    0xA, /* PHY_DEVICE_ASSIGNED_USID */  
    0 /*Warning: Not specified*/, /* RFFE_GROUP_ID */ 
    FALSE, /* INIT */ 
    RFC_INVALID_PARAM, /* ASSOCIATED_DAC */   
  }, /* END - Device: ASM_SP4T */ 

  { /*Device: ASM_SP12T */ 
    GEN_ASM /* ASM_SP12T */, /* PHY_DEVICE_NAME */ 
    5, /* PHY_DEVICE_INSTANCES */ 
    RFC_NO_ALTERNATE_PART, /* PHY_DEVICE_ALT_PART_NUM_OF_INSTANCE */ 
    RFDEVICE_COMM_PROTO_RFFE, /* PHY_DEVICE_COMM_PROTOCOL */ 
    {    1,0 /* 0 not specified */,}, /* PHY_DEVICE_COMM_BUS */ 
    0x20C, /* PHY_DEVICE_MANUFACTURER_ID */ 
    0x81, /* PHY_DEVICE_PRODUCT_ID */ 
    0, /* PHY_DEVICE_PRODUCT_REV */  
    0xA, /* DEFAULT USID RANGE START */ 
    0xA, /* DEFAULT USID RANGE END */ 
    0xB, /* PHY_DEVICE_ASSIGNED_USID */  
    0 /*Warning: Not specified*/, /* RFFE_GROUP_ID */ 
    FALSE, /* INIT */ 
    RFC_INVALID_PARAM, /* ASSOCIATED_DAC */   
  }, /* END - Device: ASM_SP12T */ 

  { /*Device: QFE2550 */ 
    QFE2550, /* PHY_DEVICE_NAME */ 
    6, /* PHY_DEVICE_INSTANCES */ 
    0, /* PHY_DEVICE_ALT_PART_NUM_OF_INSTANCE */ 
    RFDEVICE_COMM_PROTO_RFFE, /* PHY_DEVICE_COMM_PROTOCOL */ 
    {    1,0 /* 0 not specified */,}, /* PHY_DEVICE_COMM_BUS */ 
    0x217, /* PHY_DEVICE_MANUFACTURER_ID */ 
    0x4, /* PHY_DEVICE_PRODUCT_ID */ 
    0, /* PHY_DEVICE_PRODUCT_REV */  
    0x06, /* DEFAULT USID RANGE START */ 
    0x06, /* DEFAULT USID RANGE END */ 
    0x06, /* PHY_DEVICE_ASSIGNED_USID */  
    0 /*Warning: Not specified*/, /* RFFE_GROUP_ID */ 
    FALSE, /* INIT */ 
    RFC_INVALID_PARAM, /* ASSOCIATED_DAC */   
  }, /* END - Device: QFE2550 */ 

  { /*Device: QFE1550 */ 
    QFE1550, /* PHY_DEVICE_NAME */ 
    6, /* PHY_DEVICE_INSTANCES */ 
    1, /* PHY_DEVICE_ALT_PART_NUM_OF_INSTANCE */ 
    RFDEVICE_COMM_PROTO_RFFE, /* PHY_DEVICE_COMM_PROTOCOL */ 
    {    1,0 /* 0 not specified */,}, /* PHY_DEVICE_COMM_BUS */ 
    0x217, /* PHY_DEVICE_MANUFACTURER_ID */ 
    0x2, /* PHY_DEVICE_PRODUCT_ID */ 
    0, /* PHY_DEVICE_PRODUCT_REV */  
    0x7, /* DEFAULT USID RANGE START */ 
    0x7, /* DEFAULT USID RANGE END */ 
    0x7, /* PHY_DEVICE_ASSIGNED_USID */  
    0 /*Warning: Not specified*/, /* RFFE_GROUP_ID */ 
    FALSE, /* INIT */ 
    RFC_INVALID_PARAM, /* ASSOCIATED_DAC */   
  }, /* END - Device: QFE1550 */ 

  { /*Device: RFDEVICE_INVALID */ 
    RFDEVICE_INVALID, /* PHY_DEVICE_NAME */
    0 /*Warning: Not specified*/, /* PHY_DEVICE_INSTANCE */ 
    0 /*Warning: Not specified*/, /* PHY_DEVICE_ALT_PART_NUM_OF_INSTANCE */ 
    RFDEVICE_COMM_PROTO_INVALID, /* PHY_DEVICE_COMM_PROTOCOL */ 
    {    0 /* 0 not specified */,0 /* 0 not specified */,}, /* PHY_DEVICE_COMM_BUS */ 
    0 /*Warning: Not specified*/, /* PHY_DEVICE_MANUFACTURER_ID */ 
    0 /*Warning: Not specified*/, /* PHY_DEVICE_PRODUCT_ID */ 
    0 /*Warning: Not specified*/, /* PHY_DEVICE_PRODUCT_REV */ 
    0 /*Warning: Not specified*/, /* DEFAULT USID RANGE START */
    0 /*Warning: Not specified*/, /* DEFAULT USID RANGE END */
    0 /*Warning: Not specified*/, /* PHY_DEVICE_ASSIGNED_USID */  
    0 /*Warning: Not specified*/, /* RFFE_GROUP_ID */ 
    FALSE, /* INIT */ 
    RFC_INVALID_PARAM, /* ASSOCIATED_DAC */ 
  }, /* END - Device: RFDEVICE_INVALID */  

};


rfc_logical_device_info_type rfc_wtr4905_china_4320_logical_devices_list[] = 
{
  { /*Device: WTR4905 */ 
    RFDEVICE_TRANSCEIVER, /* DEVICE_MODULE_TYPE */ 
    WTR4905, /* DEVICE_MODULE_NAME */ 
    0, /* DEVICE_MODULE_TYPE_INSTANCE */ 
    0, /* ASSOCIATED_PHY_DEVICE_INSTANCE */ 
  }, /* END - Device: WTR4905 */ 

  { /*Device: QFE2101 */ 
    RFDEVICE_PAPM, /* DEVICE_MODULE_TYPE */ 
    QFE2101, /* DEVICE_MODULE_NAME */ 
    0, /* DEVICE_MODULE_TYPE_INSTANCE */ 
    1, /* ASSOCIATED_PHY_DEVICE_INSTANCE */ 
  }, /* END - Device: QFE2101 */ 

  { /*Device: QFE2340 */ 
    RFDEVICE_PA, /* DEVICE_MODULE_TYPE */ 
    QFE2340, /* DEVICE_MODULE_NAME */ 
    0, /* DEVICE_MODULE_TYPE_INSTANCE */ 
    2, /* ASSOCIATED_PHY_DEVICE_INSTANCE */ 
  }, /* END - Device: QFE2340 */ 

  { /*Device: QFE4320_EPT */ 
    RFDEVICE_PA, /* DEVICE_MODULE_TYPE */ 
    QFE4320_EPT, /* DEVICE_MODULE_NAME */ 
    1, /* DEVICE_MODULE_TYPE_INSTANCE */ 
    3, /* ASSOCIATED_PHY_DEVICE_INSTANCE */ 
  }, /* END - Device: QFE4320_EPT */ 

  { /*Device: QFE4320_GSM */ 
    RFDEVICE_PA, /* DEVICE_MODULE_TYPE */ 
    QFE4320_GSM, /* DEVICE_MODULE_NAME */ 
    2, /* DEVICE_MODULE_TYPE_INSTANCE */ 
    3, /* ASSOCIATED_PHY_DEVICE_INSTANCE */ 
  }, /* END - Device: QFE4320_GSM */ 

  { /*Device: QFE4320_TDD */ 
    RFDEVICE_PA, /* DEVICE_MODULE_TYPE */ 
    QFE4320_TDD, /* DEVICE_MODULE_NAME */ 
    3, /* DEVICE_MODULE_TYPE_INSTANCE */ 
    3, /* ASSOCIATED_PHY_DEVICE_INSTANCE */ 
  }, /* END - Device: QFE4320_TDD */ 

  { /*Device: QFE2340 */ 
    RFDEVICE_ASM, /* DEVICE_MODULE_TYPE */ 
    QFE2340, /* DEVICE_MODULE_NAME */ 
    3, /* DEVICE_MODULE_TYPE_INSTANCE */ 
    2, /* ASSOCIATED_PHY_DEVICE_INSTANCE */ 
  }, /* END - Device: QFE2340 */ 

  { /*Device: QFE4320_TX */ 
    RFDEVICE_ASM, /* DEVICE_MODULE_TYPE */ 
    QFE4320_TX, /* DEVICE_MODULE_NAME */ 
    0, /* DEVICE_MODULE_TYPE_INSTANCE */ 
    3, /* ASSOCIATED_PHY_DEVICE_INSTANCE */ 
  }, /* END - Device: QFE4320_TX */ 

  { /*Device: QFE4320_LB */ 
    RFDEVICE_ASM, /* DEVICE_MODULE_TYPE */ 
    QFE4320_LB, /* DEVICE_MODULE_NAME */ 
    1, /* DEVICE_MODULE_TYPE_INSTANCE */ 
    3, /* ASSOCIATED_PHY_DEVICE_INSTANCE */ 
  }, /* END - Device: QFE4320_LB */ 

  { /*Device: QFE4320_MB */ 
    RFDEVICE_ASM, /* DEVICE_MODULE_TYPE */ 
    QFE4320_MB, /* DEVICE_MODULE_NAME */ 
    2, /* DEVICE_MODULE_TYPE_INSTANCE */ 
    3, /* ASSOCIATED_PHY_DEVICE_INSTANCE */ 
  }, /* END - Device: QFE4320_MB */ 

  { /*Device: ASM_SP4T */ 
    RFDEVICE_ASM, /* DEVICE_MODULE_TYPE */ 
    GEN_ASM /* ASM_SP4T */, /* DEVICE_MODULE_NAME */ 
    4, /* DEVICE_MODULE_TYPE_INSTANCE */ 
    4, /* ASSOCIATED_PHY_DEVICE_INSTANCE */ 
  }, /* END - Device: ASM_SP4T */ 

  { /*Device: ASM_SP12T */ 
    RFDEVICE_ASM, /* DEVICE_MODULE_TYPE */ 
    GEN_ASM /* ASM_SP12T */, /* DEVICE_MODULE_NAME */ 
    5, /* DEVICE_MODULE_TYPE_INSTANCE */ 
    5, /* ASSOCIATED_PHY_DEVICE_INSTANCE */ 
  }, /* END - Device: ASM_SP12T */ 

  { /*Device: QFE2550 */ 
    RFDEVICE_TUNER, /* DEVICE_MODULE_TYPE */ 
    QFE2550, /* DEVICE_MODULE_NAME */ 
    0, /* DEVICE_MODULE_TYPE_INSTANCE */ 
    6, /* ASSOCIATED_PHY_DEVICE_INSTANCE */ 
  }, /* END - Device: QFE2550 */ 

  { /*Device: QFE2550 */ 
    RFDEVICE_TUNER, /* DEVICE_MODULE_TYPE */ 
    QFE2550, /* DEVICE_MODULE_NAME */ 
    0, /* DEVICE_MODULE_TYPE_INSTANCE */ 
    6, /* ASSOCIATED_PHY_DEVICE_INSTANCE */ 
  }, /* END - Device: QFE2550 */ 

  { /*Device: TRX_HDET */ 
    RFDEVICE_HDET, /* DEVICE_MODULE_TYPE */ 
    TRX_HDET, /* DEVICE_MODULE_NAME */ 
    0, /* DEVICE_MODULE_TYPE_INSTANCE */ 
    0, /* ASSOCIATED_PHY_DEVICE_INSTANCE */ 
  }, /* END - Device: TRX_HDET */ 

  { /*Device: RFDEVICE_INVALID */ 
    RFDEVICE_TYPE_INVALID, /* DEVICE_MODULE_TYPE */ 
    RFDEVICE_INVALID, /* DEVICE_MODULE_NAME */ 
    0 /* Warning: Not specified */,   /* DEVICE_MODULE_TYPE_INSTANCE */
    0 /* Warning: Not specified */,   /* ASSOCIATED_PHY_DEVICE_INSTANCE */
  }, /* END - Device: RFDEVICE_INVALID */ 

};


rfc_signal_info_type rfc_wtr4905_china_4320_sig_info[RFC_WTR4905_CHINA_4320_SIG_NUM + 1] = 
{
  { RFC_MSM_TIMING_PA_CTL , RFC_LOW, DAL_GPIO_NO_PULL, DAL_GPIO_2MA, (DALGpioIdType)NULL }, /* RFC_WTR4905_CHINA_4320_TIMING_PA_CTL */ 
  { RFC_MSM_TIMING_PA_RANGE , RFC_LOW, DAL_GPIO_NO_PULL, DAL_GPIO_2MA, (DALGpioIdType)NULL }, /* RFC_WTR4905_CHINA_4320_TIMING_PA_RANGE */ 
  { RFC_MSM_TIMING_ASM_CTL , RFC_LOW, DAL_GPIO_NO_PULL, DAL_GPIO_2MA, (DALGpioIdType)NULL }, /* RFC_WTR4905_CHINA_4320_TIMING_ASM_CTL */ 
  { RFC_MSM_TIMING_TUNER_CTL , RFC_LOW, DAL_GPIO_NO_PULL, DAL_GPIO_2MA, (DALGpioIdType)NULL }, /* RFC_WTR4905_CHINA_4320_TIMING_TUNER_CTL */ 
  { RFC_MSM_TIMING_PAPM_CTL , RFC_LOW, DAL_GPIO_NO_PULL, DAL_GPIO_2MA, (DALGpioIdType)NULL }, /* RFC_WTR4905_CHINA_4320_TIMING_PAPM_CTL */ 
  { RFC_MSM_TIMING_PAPM_MULTISLOT_CTL , RFC_LOW, DAL_GPIO_NO_PULL, DAL_GPIO_2MA, (DALGpioIdType)NULL }, /* RFC_WTR4905_CHINA_4320_TIMING_PAPM_MULTISLOT_CTL */ 
  { RFC_MSM_TIMING_TX_TX_RF_ON0 , RFC_LOW, DAL_GPIO_NO_PULL, DAL_GPIO_2MA, (DALGpioIdType)NULL }, /* RFC_WTR4905_CHINA_4320_TIMING_TX_TX_RF_ON0 */ 
  { RFC_MSM_TIMING_TX_RX_RF_ON0 , RFC_LOW, DAL_GPIO_NO_PULL, DAL_GPIO_2MA, (DALGpioIdType)NULL }, /* RFC_WTR4905_CHINA_4320_TIMING_TX_RX_RF_ON0 */ 
  { RFC_MSM_TIMING_ASM_TRIGGER , RFC_CONFIG_ONLY, DAL_GPIO_NO_PULL, DAL_GPIO_2MA, (DALGpioIdType)NULL }, /* RFC_WTR4905_CHINA_4320_TIMING_ASM_TRIGGER */ 
  { RFC_MSM_TIMING_PAPM_TX_TX_TRIGGER , RFC_CONFIG_ONLY, DAL_GPIO_NO_PULL, DAL_GPIO_2MA, (DALGpioIdType)NULL }, /* RFC_WTR4905_CHINA_4320_TIMING_PAPM_TX_TX_TRIGGER */ 
  { RFC_MSM_TIMING_PAPM_OFF_TX_RX_TX_TRIGGER , RFC_CONFIG_ONLY, DAL_GPIO_NO_PULL, DAL_GPIO_2MA, (DALGpioIdType)NULL }, /* RFC_WTR4905_CHINA_4320_TIMING_PAPM_OFF_TX_RX_TX_TRIGGER */ 
  { RFC_MSM_TIMING_PA_TRIGGER , RFC_CONFIG_ONLY, DAL_GPIO_NO_PULL, DAL_GPIO_2MA, (DALGpioIdType)NULL }, /* RFC_WTR4905_CHINA_4320_TIMING_PA_TRIGGER */ 
  { RFC_MSM_TIMING_PAPM_OFF_TX_RX_TX_CTL , RFC_CONFIG_ONLY, DAL_GPIO_NO_PULL, DAL_GPIO_2MA, (DALGpioIdType)NULL }, /* RFC_WTR4905_CHINA_4320_TIMING_PAPM_OFF_TX_RX_TX_CTL */ 
  { RFC_MSM_TIMING_PAPM_TX_TX_CTL , RFC_CONFIG_ONLY, DAL_GPIO_NO_PULL, DAL_GPIO_2MA, (DALGpioIdType)NULL }, /* RFC_WTR4905_CHINA_4320_TIMING_PAPM_TX_TX_CTL */ 
  { RFC_MSM_RF_PATH_SEL_14 , RFC_LOW, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioIdType)NULL }, /* RFC_WTR4905_CHINA_4320_RF_PATH_SEL_14 */            
  { RFC_MSM_RF_PATH_SEL_09 , RFC_LOW, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioIdType)NULL }, /* RFC_WTR4905_CHINA_4320_RF_PATH_SEL_09 */            
  { RFC_MSM_RF_PATH_SEL_06 , RFC_LOW, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioIdType)NULL }, /* RFC_WTR4905_CHINA_4320_RF_PATH_SEL_06 */            
  { RFC_MSM_RF_PATH_SEL_11 , RFC_LOW, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioIdType)NULL }, /* RFC_WTR4905_CHINA_4320_RF_PATH_SEL_11 */            
  { RFC_MSM_GPDATA0_0 , RFC_CONFIG_ONLY, DAL_GPIO_NO_PULL, DAL_GPIO_2MA, (DALGpioIdType)NULL }, /* RFC_WTR4905_CHINA_4320_GPDATA0_0 */            
  { RFC_MSM_RFFE5_CLK , RFC_CONFIG_ONLY, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioIdType)NULL }, /* RFC_WTR4905_CHINA_4320_RFFE5_CLK */            
  { RFC_MSM_RFFE5_DATA , RFC_CONFIG_ONLY, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioIdType)NULL }, /* RFC_WTR4905_CHINA_4320_RFFE5_DATA */            
  { RFC_MSM_RFFE1_CLK , RFC_CONFIG_ONLY, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioIdType)NULL }, /* RFC_WTR4905_CHINA_4320_RFFE1_CLK */            
  { RFC_MSM_RFFE1_DATA , RFC_CONFIG_ONLY, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioIdType)NULL }, /* RFC_WTR4905_CHINA_4320_RFFE1_DATA */            
  { RFC_MSM_RFFE2_CLK , RFC_CONFIG_ONLY, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioIdType)NULL }, /* RFC_WTR4905_CHINA_4320_RFFE2_CLK */            
  { RFC_MSM_RFFE2_DATA , RFC_CONFIG_ONLY, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioIdType)NULL }, /* RFC_WTR4905_CHINA_4320_RFFE2_DATA */            
  { RFC_MSM_RFFE3_CLK , RFC_CONFIG_ONLY, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioIdType)NULL }, /* RFC_WTR4905_CHINA_4320_RFFE3_CLK */            
  { RFC_MSM_RFFE3_DATA , RFC_CONFIG_ONLY, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioIdType)NULL }, /* RFC_WTR4905_CHINA_4320_RFFE3_DATA */            
  { RFC_MSM_INTERNAL_GNSS_BLANK , RFC_LOW, DAL_GPIO_NO_PULL, DAL_GPIO_2MA, (DALGpioIdType)NULL }, /* RFC_WTR4905_CHINA_4320_INTERNAL_GNSS_BLANK */            
  { RFC_MSM_INTERNAL_GNSS_BLANK_CONCURRENCY , RFC_LOW, DAL_GPIO_NO_PULL, DAL_GPIO_2MA, (DALGpioIdType)NULL }, /* RFC_WTR4905_CHINA_4320_INTERNAL_GNSS_BLANK_CONCURRENCY */            
  { RFC_MSM_TX_GTR_TH , RFC_LOW, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioIdType)NULL }, /* RFC_WTR4905_CHINA_4320_TX_GTR_TH */            
  { RFC_MSM_PA_IND , RFC_LOW, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioIdType)NULL }, /* RFC_WTR4905_CHINA_4320_PA_IND */            
  { (rfc_msm_signal_type)RFC_SIG_LIST_END   , (rfc_logic_type)RFC_ENCODED_REVISION, DAL_GPIO_NO_PULL, DAL_GPIO_2MA, (DALGpioIdType)NULL } /* LAST SIG INDICATOR */ 

};


rfc_common_data* rfc_wtr4905_china_4320_cmn_ag::get_instance(rf_hw_type rf_hw)
{
  if (rfc_common_data_ptr == NULL)
  {
    rfc_common_data_ptr = (rfc_common_data *)new rfc_wtr4905_china_4320_cmn_ag(rf_hw);
  }
  return( (rfc_common_data *)rfc_common_data_ptr);
}

//constructor
rfc_wtr4905_china_4320_cmn_ag::rfc_wtr4905_china_4320_cmn_ag(rf_hw_type rf_hw)
  :rfc_common_data(rf_hw)
{
}


uint32 rfc_wtr4905_china_4320_cmn_ag::sig_info_table_get(rfc_signal_info_type **rfc_info_table)
{
  if (NULL == rfc_info_table)
  {
    return 0;
  }

  *rfc_info_table = &rfc_wtr4905_china_4320_sig_info[0];

#ifdef FEATURE_GSM
  // Create GSM RFC AG Data Object
  rfc_gsm_data* rfc_gsm_data = rfc_wtr4905_china_4320_gsm_ag::get_instance();
  if (rfc_gsm_data == NULL)
      {
          MSG_1(MSG_SSID_RF, MSG_LEGACY_ERROR, "RFC GSM Data Object is NOT Created", 0);
    return 0;
  }
#endif /* FEATURE_GSM */

#ifdef FEATURE_WCDMA
  // Create WCDMA RFC AG Data Object
  rfc_wcdma_data* rfc_wcdma_data = rfc_wtr4905_china_4320_wcdma_ag::get_instance();
  if (rfc_wcdma_data == NULL)
      {
          MSG_1(MSG_SSID_RF, MSG_LEGACY_ERROR, "RFC WCDMA Data Object is NOT Created", 0);
    return 0;
  }
#endif /* FEATURE_WCDMA */

#ifdef FEATURE_CDMA1X
  // Create CDMA RFC AG Data Object
  rfc_cdma_data* rfc_cdma_data = rfc_wtr4905_china_4320_cdma_ag::get_instance();
  if (rfc_cdma_data == NULL)
      {
          MSG_1(MSG_SSID_RF, MSG_LEGACY_ERROR, "RFC CDMA Data Object is NOT Created", 0);
    return 0;
  }
#endif /* FEATURE_CDMA */

#ifdef FEATURE_LTE
  // Create LTE RFC AG Data Object
  rfc_lte_data* rfc_lte_data = rfc_wtr4905_china_4320_lte_ag::get_instance();
  if (rfc_lte_data == NULL)
      {
          MSG_1(MSG_SSID_RF, MSG_LEGACY_ERROR, "RFC LTE Data Object is NOT Created", 0);
    return 0;
  }
#endif /* FEATURE_LTE */

#ifdef FEATURE_TDSCDMA
  // Create TDSCDMA RFC AG Data Object
  rfc_tdscdma_data* rfc_tdscdma_data = rfc_wtr4905_china_4320_tdscdma_ag::get_instance();
  if (rfc_tdscdma_data == NULL)
      {
          MSG_1(MSG_SSID_RF, MSG_LEGACY_ERROR, "RFC TDSCDMA Data Object is NOT Created", 0);
    return 0;
  }
#endif /* FEATURE_TDSCDMA */

#ifdef FEATURE_CGPS
  // Create GNSS RFC AG Data Object
  rfc_gnss_data* rfc_gnss_data = rfc_wtr4905_china_4320_gnss_ag::get_instance();
  if (rfc_gnss_data == NULL)
      {
      MSG_1(MSG_SSID_RF, MSG_LEGACY_ERROR, "RFC GNSS Data Object is NOT Created", 0);
    return 0;
  }
#endif /* FEATURE_GNSS */


  return RFC_WTR4905_CHINA_4320_SIG_NUM;
}

rfc_phy_device_info_type* rfc_wtr4905_china_4320_cmn_ag::get_phy_device_cfg( void )
{
  return (&rfc_wtr4905_china_4320_phy_devices_list[0]);
}

rfc_logical_device_info_type* rfc_wtr4905_china_4320_cmn_ag::get_logical_device_cfg( void )
{
  return (&rfc_wtr4905_china_4320_logical_devices_list[0]);
}




rfm_devices_configuration_type rfc_wtr4905_china_4320_logical_device_properties = 
{
169, /* HWID */

{ /* Mode Concurrencies: Bit0 represents Rx concurrency and Bit1 represents Tx concurrency */
    {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, }, 
{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, }, 
{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, }, 
{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, }, 
{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, }, 
{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, }, 
{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, }, 
{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, }, 
{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, }, 
{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, }, 
{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, }, 
{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, }, 
{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, }, 
{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, }, 
{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, }, 
{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, }, 
{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, }, 
{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, }, 

},
{ /* device_support */ 
    { /* Logical Device 0 */ 
      /* bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
        ( ( (uint64)1 << (SYS_BAND_GSM_850 - 0) ) | ( (uint64)1 << (SYS_BAND_GSM_EGSM_900 - 0) ) | ( (uint64)1 << (SYS_BAND_GSM_DCS_1800 - 0) ) | ( (uint64)1 << (SYS_BAND_GSM_PCS_1900 - 0) ) | ( (uint64)1 << (SYS_BAND_BC0 - 0) ) | ( (uint64)1 << (SYS_BAND_BC1 - 0) ) | ( (uint64)1 << (SYS_BAND_BC6 - 0) ) 
        ),
          /* Bit mask element 1 */ 
        ( ( (uint64)1 << (SYS_BAND_WCDMA_I_IMT_2000 - 64) ) | ( (uint64)1 << (SYS_BAND_WCDMA_II_PCS_1900 - 64) ) | ( (uint64)1 << (SYS_BAND_WCDMA_IV_1700 - 64) ) | ( (uint64)1 << (SYS_BAND_WCDMA_V_850 - 64) ) | ( (uint64)1 << (SYS_BAND_WCDMA_VIII_900 - 64) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND1 - 64) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND2 - 64) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND3 - 64) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND4 - 64) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND5 - 64) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND7 - 64) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND8 - 64) ) 
        ),
          /* Bit mask element 2 */ 
        ( ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND17 - 128) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND20 - 128) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND26 - 128) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND27 - 128) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND28 - 128) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND38 - 128) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND39 - 128) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND40 - 128) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND41 - 128) ) | ( (uint64)1 << (SYS_BAND_TDS_BANDA - 128) ) | ( (uint64)1 << (SYS_BAND_TDS_BANDF - 128) ) 
        ),
        },
      },
      /* ca1_bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
           0
          ),
          /* Bit mask element 1 */ 
          (
           0
          ),
          /* Bit mask element 2 */ 
          (
           0
          ),
        },
      },
      /* dr_bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
           0
          ),
          /* Bit mask element 1 */ 
          (
           0
          ),
          /* Bit mask element 2 */ 
          (
           0
          ),
        },
      },
      /* ho_rxd_bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
           0
          ),
          /* Bit mask element 1 */ 
          (
           0
          ),
          /* Bit mask element 2 */ 
          (
           0
          ),
        },
      },
      ( RFM_DEVICE_RX_SUPPORTED | RFM_DEVICE_TX_SUPPORTED),
      RFM_DEVICE_1, /* Associated Slave Device for RFM_DEVICE_0 */
    }, /* End Logical Device 0 */ 
    { /* Logical Device 1 */ 
      /* bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
        ( ( (uint64)1 << (SYS_BAND_BC0 - 0) ) | ( (uint64)1 << (SYS_BAND_BC1 - 0) ) | ( (uint64)1 << (SYS_BAND_BC6 - 0) ) 
        ),
          /* Bit mask element 1 */ 
        ( ( (uint64)1 << (SYS_BAND_WCDMA_I_IMT_2000 - 64) ) | ( (uint64)1 << (SYS_BAND_WCDMA_II_PCS_1900 - 64) ) | ( (uint64)1 << (SYS_BAND_WCDMA_IV_1700 - 64) ) | ( (uint64)1 << (SYS_BAND_WCDMA_V_850 - 64) ) | ( (uint64)1 << (SYS_BAND_WCDMA_VIII_900 - 64) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND1 - 64) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND2 - 64) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND3 - 64) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND4 - 64) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND5 - 64) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND7 - 64) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND8 - 64) ) 
        ),
          /* Bit mask element 2 */ 
        ( ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND17 - 128) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND20 - 128) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND26 - 128) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND27 - 128) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND28 - 128) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND38 - 128) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND39 - 128) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND40 - 128) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND41 - 128) ) | ( (uint64)1 << (SYS_BAND_TDS_BANDA - 128) ) | ( (uint64)1 << (SYS_BAND_TDS_BANDF - 128) ) 
        ),
        },
      },
      /* ca1_bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
           0
          ),
          /* Bit mask element 1 */ 
          (
           0
          ),
          /* Bit mask element 2 */ 
          (
           0
          ),
        },
      },
      /* dr_bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
           0
          ),
          /* Bit mask element 1 */ 
          (
           0
          ),
          /* Bit mask element 2 */ 
          (
           0
          ),
        },
      },
      /* ho_rxd_bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
           0
          ),
          /* Bit mask element 1 */ 
          (
           0
          ),
          /* Bit mask element 2 */ 
          (
           0
          ),
        },
      },
      ( RFM_DEVICE_RX_SUPPORTED),
      RFM_INVALID_DEVICE, /* Associated Slave Device for RFM_DEVICE_1 */
    }, /* End Logical Device 1 */ 
    { /* Logical Device 2 */ 
      /* bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
           0
          ),
          /* Bit mask element 1 */ 
          (
           0
          ),
          /* Bit mask element 2 */ 
          (
           0
          ),
        },
      },
      /* ca1_bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
           0
          ),
          /* Bit mask element 1 */ 
          (
           0
          ),
          /* Bit mask element 2 */ 
          (
           0
          ),
        },
      },
      /* dr_bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
           0
          ),
          /* Bit mask element 1 */ 
          (
           0
          ),
          /* Bit mask element 2 */ 
          (
           0
          ),
        },
      },
      /* ho_rxd_bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
           0
          ),
          /* Bit mask element 1 */ 
          (
           0
          ),
          /* Bit mask element 2 */ 
          (
           0
          ),
        },
      },
      ( 0),
      RFM_DEVICE_3, /* Associated Slave Device for RFM_DEVICE_2 */        
    }, /* End Logical Device 2 */ 
    { /* Logical Device 3 */ 
      /* bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
           0
          ),
          /* Bit mask element 1 */ 
          (
           0
          ),
          /* Bit mask element 2 */ 
          (
           0
          ),
        },
      },
      /* ca1_bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
           0
          ),
          /* Bit mask element 1 */ 
          (
           0
          ),
          /* Bit mask element 2 */ 
          (
           0
          ),
        },
      },
      /* dr_bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
           0
          ),
          /* Bit mask element 1 */ 
          (
           0
          ),
          /* Bit mask element 2 */ 
          (
           0
          ),
        },
      },
      /* ho_rxd_bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
           0
          ),
          /* Bit mask element 1 */ 
          (
           0
          ),
          /* Bit mask element 2 */ 
          (
           0
          ),
        },
      },
      ( 0),
      RFM_INVALID_DEVICE, /* Associated Slave Device for RFM_DEVICE_3 */
    }, /* End Logical Device 3 */ 
    { /* Logical Device 4 */ 
      /* bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
           0
          ),
          /* Bit mask element 1 */ 
          (
           0
          ),
          /* Bit mask element 2 */ 
          (
           0
          ),
        },
      },
      /* ca1_bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
           0
          ),
          /* Bit mask element 1 */ 
          (
           0
          ),
          /* Bit mask element 2 */ 
          (
           0
          ),
        },
      },
      /* dr_bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
           0
          ),
          /* Bit mask element 1 */ 
          (
           0
          ),
          /* Bit mask element 2 */ 
          (
           0
          ),
        },
      },
      /* ho_rxd_bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
           0
          ),
          /* Bit mask element 1 */ 
          (
           0
          ),
          /* Bit mask element 2 */ 
          (
           0
          ),
        },
      },
      ( 0),
      RFM_INVALID_DEVICE, /* Associated Slave Device for RFM_DEVICE_4 */
    }, /* End Logical Device 4 */ 
    { /* Logical Device 5 */ 
      /* bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
           0
          ),
          /* Bit mask element 1 */ 
          (
           0
          ),
          /* Bit mask element 2 */ 
          (
           0
          ),
        },
      },
      /* ca1_bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
           0
          ),
          /* Bit mask element 1 */ 
          (
           0
          ),
          /* Bit mask element 2 */ 
          (
           0
          ),
        },
      },
      /* dr_bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
           0
          ),
          /* Bit mask element 1 */ 
          (
           0
          ),
          /* Bit mask element 2 */ 
          (
           0
          ),
        },
      },
      /* ho_rxd_bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
           0
          ),
          /* Bit mask element 1 */ 
          (
           0
          ),
          /* Bit mask element 2 */ 
          (
           0
          ),
        },
      },
      ( 0),
      RFM_INVALID_DEVICE, /* Associated Slave Device for RFM_DEVICE_5 */
    }, /* End Logical Device 5 */ 
    { /* Logical Device 6 */ 
      /* bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
           0
          ),
          /* Bit mask element 1 */ 
          (
           0
          ),
          /* Bit mask element 2 */ 
          (
           0
          ),
        },
      },
      /* ca1_bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
           0
          ),
          /* Bit mask element 1 */ 
          (
           0
          ),
          /* Bit mask element 2 */ 
          (
           0
          ),
        },
      },
      /* dr_bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
           0
          ),
          /* Bit mask element 1 */ 
          (
           0
          ),
          /* Bit mask element 2 */ 
          (
           0
          ),
        },
      },
      /* ho_rxd_bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
           0
          ),
          /* Bit mask element 1 */ 
          (
           0
          ),
          /* Bit mask element 2 */ 
          (
           0
          ),
        },
      },
      ( 0),
      RFM_INVALID_DEVICE, /* Associated Slave Device for RFM_DEVICE_6 */
    }, /* End Logical Device 6 */ 
    { /* Logical Device 7 */ 
      /* bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
           0
          ),
          /* Bit mask element 1 */ 
          (
           0
          ),
          /* Bit mask element 2 */ 
          (
           0
          ),
        },
      },
      /* ca1_bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
           0
          ),
          /* Bit mask element 1 */ 
          (
           0
          ),
          /* Bit mask element 2 */ 
          (
           0
          ),
        },
      },
      /* dr_bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
           0
          ),
          /* Bit mask element 1 */ 
          (
           0
          ),
          /* Bit mask element 2 */ 
          (
           0
          ),
        },
      },
      /* ho_rxd_bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
           0
          ),
          /* Bit mask element 1 */ 
          (
           0
          ),
          /* Bit mask element 2 */ 
          (
           0
          ),
        },
      },
      ( 0),
      RFM_INVALID_DEVICE, /* Associated Slave Device for RFM_DEVICE_7 */
    }, /* End Logical Device 7 */ 
  },
  {
    0, /* num_restriction_groups */ 
    NULL,
  },
  
  {
    0, /* num_dglna_combos */ 
    NULL, /* No DGLNA Combos */ 
  },

  FALSE, /* gps_has_independent_receive_chain */
  FALSE, /* antenna_swap_supported */                
  0, /* concurrency_features */ 
};

boolean rfc_wtr4905_china_4320_cmn_ag::get_logical_path_config(rfm_devices_configuration_type* dev_cfg)
{
  if ( dev_cfg == NULL )
  {
    MSG_1(MSG_SSID_RF, MSG_LEGACY_ERROR, "rfm_get_devices_configuration: Invalid Container", 0);
    return FALSE;
  }

  memscpy(dev_cfg,
          sizeof(rfm_devices_configuration_type),
          &rfc_wtr4905_china_4320_logical_device_properties,
          sizeof(rfm_devices_configuration_type));

  return TRUE;
}





rfc_cmn_properties_type rfc_wtr4905_china_4320_cmn_properties = 
{
  RFC_ENCODED_REVISION,   
  RFC_ATTENUATION_STATE_MID,
};

boolean rfc_wtr4905_china_4320_cmn_ag::get_cmn_properties(rfc_cmn_properties_type **ptr)
{
  if (NULL==ptr)
  {
    return FALSE;
  }

  *ptr = &rfc_wtr4905_china_4320_cmn_properties;
  return TRUE;
}
















