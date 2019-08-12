
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

$Header: //commercial/MPSS.JO.2.0.c1.4/Main/modem_proc/rfc_jolokia/rf_card/rfc_wtr4905_japan_4320/gsm/src/rfc_wtr4905_japan_4320_gsm_config_data_ag.c#1 $ 


=============================================================================*/

/*=============================================================================
                           INCLUDE FILES
=============================================================================*/
#include "comdef.h"

#include "rfc_wtr4905_japan_4320_cmn_ag.h" 
#include "rfc_common.h" 
#include "rfcom.h" 
#include "wtr4905_typedef_ag.h" 
#include "qfe4320_pa_port_typedef_ag.h" 
#include "rfdevice_qtuner_api.h" 

rfc_device_info_type rf_card_wtr4905_japan_4320_init_gsm_rx_device_info = 
{
  RFC_ENCODED_REVISION, 
  0 /* Warning: Not Specified */,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  1,  /* NUM_DEVICES_TO_CONFIGURE */
{
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905, /* NAME */
      0 /* Warning: Not specified */,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /* Warning: Not specified */,   /* PHY_PATH_NUM */
      {
        0 /* Warning: Not specified */,   /* INTF_REV */
        0 /* Invalid TRx port */,   /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),   /* RF_ASIC_BAND_AGC_LUT_MAPPING */        
        FALSE,   /* TXAGC_LUT */
        WTR4905_FBRX_ATTN_DEFAULT,   /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr4905_japan_4320_init_gsm_rx_sig_cfg = 
{
  RFC_ENCODED_REVISION, 
  {
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_japan_4320_init_gsm_tx_device_info = 
{
  RFC_ENCODED_REVISION, 
  0 /* Warning: Not Specified */,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  1,  /* NUM_DEVICES_TO_CONFIGURE */
{
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905, /* NAME */
      0 /* Warning: Not specified */,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /* Warning: Not specified */,   /* PHY_PATH_NUM */
      {
        0 /* Warning: Not specified */,   /* INTF_REV */
        0 /* Invalid TRx port */,   /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),   /* RF_ASIC_BAND_AGC_LUT_MAPPING */        
        FALSE,   /* TXAGC_LUT */
        WTR4905_FBRX_ATTN_DEFAULT,   /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr4905_japan_4320_init_gsm_tx_sig_cfg = 
{
  RFC_ENCODED_REVISION, 
  {
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_japan_4320_rx0_gsm_g850_device_info = 
{
  RFC_ENCODED_REVISION, 
  RFC_RX_MODEM_CHAIN_0,   /* Modem Chain */
  0,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not specified */,   /* Antenna */
  3,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905, /* NAME */
      0,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0,   /* PHY_PATH_NUM */            
      {
        0 /* Warning: Not specified */,   /* INTF_REV */                  
        (int)WTR4905_GSM_PRXLGY1_BAND850_PLB3,   /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),   /* RF_ASIC_BAND_AGC_LUT_MAPPING */        
        FALSE,   /* TXAGC_LUT */
        WTR4905_FBRX_ATTN_DEFAULT,   /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      QFE4320_LB, /* NAME */
      1,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /* Warning: Not specified */,   /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x217 << 22)/*mfg_id*/ | (0x44 << 14)/*prd_id*/ | (2)/*port_num*/, /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_TUNER,
      QFE2520, /* NAME */
      0,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /* Warning: Not specified */,   /* PHY_PATH_NUM */
      {
        0  /* Orig setting:   */,  /* INTF_REV */
        (int)RFDEVICE_QTUNER_IM_DISTORTION_INVALID,  /* DISTORTION_CONFIG */  
        0  /* Orig setting: */,  /* NOTES (REFERENCE ONLY) */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr4905_japan_4320_rx0_gsm_g850_sig_cfg = 
{
  RFC_ENCODED_REVISION, 
  {
    { (int)RFC_WTR4905_JAPAN_4320_TIMING_ASM_CTL,   { RFC_CONFIG_ONLY, -40 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_JAPAN_4320_TIMING_TUNER_CTL,   { RFC_CONFIG_ONLY, -100 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_japan_4320_rx1_gsm_g850_device_info = 
{
  RFC_ENCODED_REVISION, 
  RFC_RX_MODEM_CHAIN_1,   /* Modem Chain */
  1,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not specified */,   /* Antenna */
  2,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905, /* NAME */
      0,   /* DEVICE_MODULE_TYPE_INSTANCE */
      1,   /* PHY_PATH_NUM */            
      {
        0 /* Warning: Not specified */,   /* INTF_REV */                  
        (int)WTR4905_GSM_DRXLGY1_BAND850_DLB2,   /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),   /* RF_ASIC_BAND_AGC_LUT_MAPPING */        
        FALSE,   /* TXAGC_LUT */
        WTR4905_FBRX_ATTN_DEFAULT,   /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /* ASM_SP10T */, /* NAME */
      3,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /* Warning: Not specified */,   /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x20C << 22)/*mfg_id*/ | (0x88 << 14)/*prd_id*/ | (0)/*port_num*/, /* PORT_NUM */
        (0x20C << 22)/*mfg_id*/ | (0x88 << 14)/*prd_id*/ | (0)/*port_num*/, /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr4905_japan_4320_rx1_gsm_g850_sig_cfg = 
{
  RFC_ENCODED_REVISION, 
  {
    { (int)RFC_WTR4905_JAPAN_4320_TIMING_ASM_CTL,   { RFC_CONFIG_ONLY, -40 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_JAPAN_4320_TIMING_TUNER_CTL,   { RFC_CONFIG_ONLY, -100 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_japan_4320_tx0_gsm_g850_device_info = 
{
  RFC_ENCODED_REVISION, 
  RFC_TX_MODEM_CHAIN_0,   /* Modem Chain */
  0,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not specified */,   /* Antenna */
  6,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905, /* NAME */
      0,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0,   /* PHY_PATH_NUM */            
      {
        0 /* Warning: Not specified */,   /* INTF_REV */                  
        (int)WTR4905_GSM_TX_BAND850_THMLB2,   /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),   /* RF_ASIC_BAND_AGC_LUT_MAPPING */        
        FALSE,   /* TXAGC_LUT */
        WTR4905_FBRX_LOW_ATTN_MODE,   /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PA,
      QFE4320_GSM, /* NAME */
      0,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /* Warning: Not specified */,   /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x217 << 22)/*mfg_id*/ | (0x44 << 14)/*prd_id*/ | (QFE4320_GSM_GSM_BAND850_PORT_ANT_LB)/*port_num*/, /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PAPM,
      QFE2101, /* NAME */
      0,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /* Warning: Not specified */,   /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x217 << 22)/*mfg_id*/ | (0x31 << 14)/*prd_id*/ | (8)/*port_num*/, /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      QFE4320_TX, /* NAME */
      0,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /* Warning: Not specified */,   /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x217 << 22)/*mfg_id*/ | (0x44 << 14)/*prd_id*/ | (15)/*port_num*/, /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      QFE4320_LB, /* NAME */
      1,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /* Warning: Not specified */,   /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x217 << 22)/*mfg_id*/ | (0x44 << 14)/*prd_id*/ | (6)/*port_num*/, /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_TUNER,
      QFE2520, /* NAME */
      0,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /* Warning: Not specified */,   /* PHY_PATH_NUM */
      {
        0  /* Orig setting:   */,  /* INTF_REV */
        (int)RFDEVICE_QTUNER_IM_DISTORTION_INVALID,  /* DISTORTION_CONFIG */  
        0  /* Orig setting: */,  /* NOTES (REFERENCE ONLY) */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr4905_japan_4320_tx0_gsm_g850_sig_cfg = 
{
  RFC_ENCODED_REVISION, 
  {
    { (int)RFC_WTR4905_JAPAN_4320_TIMING_PA_CTL,   { RFC_CONFIG_ONLY, -10 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_JAPAN_4320_TIMING_PA_RANGE,   { RFC_CONFIG_ONLY, -3 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_JAPAN_4320_TIMING_ASM_CTL,   { RFC_CONFIG_ONLY, -10 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_JAPAN_4320_TIMING_TUNER_CTL,   { RFC_CONFIG_ONLY, -150 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_JAPAN_4320_TIMING_PAPM_CTL,   { RFC_CONFIG_ONLY, -100 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_JAPAN_4320_TIMING_PAPM_MULTISLOT_CTL,   { RFC_CONFIG_ONLY, -6 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_JAPAN_4320_GPDATA0_0,   { RFC_CONFIG_ONLY, 0/*Warning: Not specified*/ }, {RFC_CONFIG_ONLY, 0/*Warning: Not specified*/ }  },
    { (int)RFC_WTR4905_JAPAN_4320_INTERNAL_GNSS_BLANK,   { RFC_HIGH, -10 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_JAPAN_4320_TX_GTR_TH,   { RFC_CONFIG_ONLY, -10 }, {RFC_LOW, 66 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_japan_4320_rx0_gsm_g900_device_info = 
{
  RFC_ENCODED_REVISION, 
  RFC_RX_MODEM_CHAIN_0,   /* Modem Chain */
  0,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not specified */,   /* Antenna */
  3,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905, /* NAME */
      0,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0,   /* PHY_PATH_NUM */            
      {
        0 /* Warning: Not specified */,   /* INTF_REV */                  
        (int)WTR4905_GSM_PRXLGY1_BAND900_PLB2,   /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),   /* RF_ASIC_BAND_AGC_LUT_MAPPING */        
        FALSE,   /* TXAGC_LUT */
        WTR4905_FBRX_ATTN_DEFAULT,   /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      QFE4320_LB, /* NAME */
      1,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /* Warning: Not specified */,   /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x217 << 22)/*mfg_id*/ | (0x44 << 14)/*prd_id*/ | (0)/*port_num*/, /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_TUNER,
      QFE2520, /* NAME */
      0,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /* Warning: Not specified */,   /* PHY_PATH_NUM */
      {
        0  /* Orig setting:   */,  /* INTF_REV */
        (int)RFDEVICE_QTUNER_IM_DISTORTION_INVALID,  /* DISTORTION_CONFIG */  
        0  /* Orig setting: */,  /* NOTES (REFERENCE ONLY) */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr4905_japan_4320_rx0_gsm_g900_sig_cfg = 
{
  RFC_ENCODED_REVISION, 
  {
    { (int)RFC_WTR4905_JAPAN_4320_TIMING_ASM_CTL,   { RFC_CONFIG_ONLY, -40 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_JAPAN_4320_TIMING_TUNER_CTL,   { RFC_CONFIG_ONLY, -100 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_japan_4320_rx1_gsm_g900_device_info = 
{
  RFC_ENCODED_REVISION, 
  RFC_RX_MODEM_CHAIN_1,   /* Modem Chain */
  1,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not specified */,   /* Antenna */
  2,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905, /* NAME */
      0,   /* DEVICE_MODULE_TYPE_INSTANCE */
      1,   /* PHY_PATH_NUM */            
      {
        0 /* Warning: Not specified */,   /* INTF_REV */                  
        (int)WTR4905_GSM_DRXLGY1_BAND900_DLB3,   /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),   /* RF_ASIC_BAND_AGC_LUT_MAPPING */        
        FALSE,   /* TXAGC_LUT */
        WTR4905_FBRX_ATTN_DEFAULT,   /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /* ASM_SP10T */, /* NAME */
      3,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /* Warning: Not specified */,   /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x20C << 22)/*mfg_id*/ | (0x88 << 14)/*prd_id*/ | (1)/*port_num*/, /* PORT_NUM */
        (0x20C << 22)/*mfg_id*/ | (0x88 << 14)/*prd_id*/ | (1)/*port_num*/, /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr4905_japan_4320_rx1_gsm_g900_sig_cfg = 
{
  RFC_ENCODED_REVISION, 
  {
    { (int)RFC_WTR4905_JAPAN_4320_TIMING_ASM_CTL,   { RFC_CONFIG_ONLY, -40 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_JAPAN_4320_TIMING_TUNER_CTL,   { RFC_CONFIG_ONLY, -100 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_japan_4320_tx0_gsm_g900_device_info = 
{
  RFC_ENCODED_REVISION, 
  RFC_TX_MODEM_CHAIN_0,   /* Modem Chain */
  0,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not specified */,   /* Antenna */
  6,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905, /* NAME */
      0,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0,   /* PHY_PATH_NUM */            
      {
        0 /* Warning: Not specified */,   /* INTF_REV */                  
        (int)WTR4905_GSM_TX_BAND900_THMLB2,   /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),   /* RF_ASIC_BAND_AGC_LUT_MAPPING */        
        FALSE,   /* TXAGC_LUT */
        WTR4905_FBRX_LOW_ATTN_MODE,   /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PA,
      QFE4320_GSM, /* NAME */
      0,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /* Warning: Not specified */,   /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x217 << 22)/*mfg_id*/ | (0x44 << 14)/*prd_id*/ | (QFE4320_GSM_GSM_BAND900_PORT_ANT_LB)/*port_num*/, /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PAPM,
      QFE2101, /* NAME */
      0,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /* Warning: Not specified */,   /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x217 << 22)/*mfg_id*/ | (0x31 << 14)/*prd_id*/ | (8)/*port_num*/, /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      QFE4320_TX, /* NAME */
      0,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /* Warning: Not specified */,   /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x217 << 22)/*mfg_id*/ | (0x44 << 14)/*prd_id*/ | (15)/*port_num*/, /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      QFE4320_LB, /* NAME */
      1,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /* Warning: Not specified */,   /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x217 << 22)/*mfg_id*/ | (0x44 << 14)/*prd_id*/ | (7)/*port_num*/, /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_TUNER,
      QFE2520, /* NAME */
      0,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /* Warning: Not specified */,   /* PHY_PATH_NUM */
      {
        0  /* Orig setting:   */,  /* INTF_REV */
        (int)RFDEVICE_QTUNER_IM_DISTORTION_INVALID,  /* DISTORTION_CONFIG */  
        0  /* Orig setting: */,  /* NOTES (REFERENCE ONLY) */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr4905_japan_4320_tx0_gsm_g900_sig_cfg = 
{
  RFC_ENCODED_REVISION, 
  {
    { (int)RFC_WTR4905_JAPAN_4320_TIMING_PA_CTL,   { RFC_CONFIG_ONLY, -10 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_JAPAN_4320_TIMING_PA_RANGE,   { RFC_CONFIG_ONLY, -3 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_JAPAN_4320_TIMING_ASM_CTL,   { RFC_CONFIG_ONLY, -10 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_JAPAN_4320_TIMING_TUNER_CTL,   { RFC_CONFIG_ONLY, -150 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_JAPAN_4320_TIMING_PAPM_CTL,   { RFC_CONFIG_ONLY, -100 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_JAPAN_4320_TIMING_PAPM_MULTISLOT_CTL,   { RFC_CONFIG_ONLY, -6 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_JAPAN_4320_GPDATA0_0,   { RFC_CONFIG_ONLY, 0/*Warning: Not specified*/ }, {RFC_CONFIG_ONLY, 0/*Warning: Not specified*/ }  },
    { (int)RFC_WTR4905_JAPAN_4320_INTERNAL_GNSS_BLANK,   { RFC_HIGH, -10 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_JAPAN_4320_TX_GTR_TH,   { RFC_CONFIG_ONLY, -10 }, {RFC_LOW, 66 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_japan_4320_rx0_gsm_g1800_device_info = 
{
  RFC_ENCODED_REVISION, 
  RFC_RX_MODEM_CHAIN_0,   /* Modem Chain */
  0,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not specified */,   /* Antenna */
  3,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905, /* NAME */
      0,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0,   /* PHY_PATH_NUM */            
      {
        0 /* Warning: Not specified */,   /* INTF_REV */                  
        (int)WTR4905_GSM_PRXLGY1_BAND1800_PMB1,   /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),   /* RF_ASIC_BAND_AGC_LUT_MAPPING */        
        FALSE,   /* TXAGC_LUT */
        WTR4905_FBRX_ATTN_DEFAULT,   /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      QFE4320_MB, /* NAME */
      2,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /* Warning: Not specified */,   /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x217 << 22)/*mfg_id*/ | (0x44 << 14)/*prd_id*/ | (1)/*port_num*/, /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_TUNER,
      QFE2520, /* NAME */
      0,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /* Warning: Not specified */,   /* PHY_PATH_NUM */
      {
        0  /* Orig setting:   */,  /* INTF_REV */
        (int)RFDEVICE_QTUNER_IM_DISTORTION_INVALID,  /* DISTORTION_CONFIG */  
        0  /* Orig setting: */,  /* NOTES (REFERENCE ONLY) */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr4905_japan_4320_rx0_gsm_g1800_sig_cfg = 
{
  RFC_ENCODED_REVISION, 
  {
    { (int)RFC_WTR4905_JAPAN_4320_TIMING_ASM_CTL,   { RFC_CONFIG_ONLY, -40 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_JAPAN_4320_TIMING_TUNER_CTL,   { RFC_CONFIG_ONLY, -100 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_japan_4320_rx1_gsm_g1800_device_info = 
{
  RFC_ENCODED_REVISION, 
  RFC_RX_MODEM_CHAIN_1,   /* Modem Chain */
  1,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not specified */,   /* Antenna */
  2,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905, /* NAME */
      0,   /* DEVICE_MODULE_TYPE_INSTANCE */
      1,   /* PHY_PATH_NUM */            
      {
        0 /* Warning: Not specified */,   /* INTF_REV */                  
        (int)WTR4905_GSM_DRXLGY1_BAND1800_DMB2,   /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),   /* RF_ASIC_BAND_AGC_LUT_MAPPING */        
        FALSE,   /* TXAGC_LUT */
        WTR4905_FBRX_ATTN_DEFAULT,   /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /* ASM_SP10T */, /* NAME */
      3,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /* Warning: Not specified */,   /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x20C << 22)/*mfg_id*/ | (0x88 << 14)/*prd_id*/ | (8)/*port_num*/, /* PORT_NUM */
        (0x20C << 22)/*mfg_id*/ | (0x88 << 14)/*prd_id*/ | (8)/*port_num*/, /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr4905_japan_4320_rx1_gsm_g1800_sig_cfg = 
{
  RFC_ENCODED_REVISION, 
  {
    { (int)RFC_WTR4905_JAPAN_4320_TIMING_ASM_CTL,   { RFC_CONFIG_ONLY, -40 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_JAPAN_4320_TIMING_TUNER_CTL,   { RFC_CONFIG_ONLY, -100 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_JAPAN_4320_RF_PATH_SEL_14,   { RFC_LOW, -10 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_japan_4320_tx0_gsm_g1800_device_info = 
{
  RFC_ENCODED_REVISION, 
  RFC_TX_MODEM_CHAIN_0,   /* Modem Chain */
  0,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not specified */,   /* Antenna */
  6,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905, /* NAME */
      0,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0,   /* PHY_PATH_NUM */            
      {
        0 /* Warning: Not specified */,   /* INTF_REV */                  
        (int)WTR4905_GSM_TX_BAND1800_THMLB1,   /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),   /* RF_ASIC_BAND_AGC_LUT_MAPPING */        
        FALSE,   /* TXAGC_LUT */
        WTR4905_FBRX_LOW_ATTN_MODE,   /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PA,
      QFE4320_GSM, /* NAME */
      0,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /* Warning: Not specified */,   /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x217 << 22)/*mfg_id*/ | (0x44 << 14)/*prd_id*/ | (QFE4320_GSM_GSM_BAND1800_PORT_ANT_MB)/*port_num*/, /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PAPM,
      QFE2101, /* NAME */
      0,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /* Warning: Not specified */,   /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x217 << 22)/*mfg_id*/ | (0x31 << 14)/*prd_id*/ | (8)/*port_num*/, /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      QFE4320_TX, /* NAME */
      0,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /* Warning: Not specified */,   /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x217 << 22)/*mfg_id*/ | (0x44 << 14)/*prd_id*/ | (26)/*port_num*/, /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      QFE4320_MB, /* NAME */
      2,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /* Warning: Not specified */,   /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x217 << 22)/*mfg_id*/ | (0x44 << 14)/*prd_id*/ | (8)/*port_num*/, /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_TUNER,
      QFE2520, /* NAME */
      0,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /* Warning: Not specified */,   /* PHY_PATH_NUM */
      {
        0  /* Orig setting:   */,  /* INTF_REV */
        (int)RFDEVICE_QTUNER_IM_DISTORTION_INVALID,  /* DISTORTION_CONFIG */  
        0  /* Orig setting: */,  /* NOTES (REFERENCE ONLY) */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr4905_japan_4320_tx0_gsm_g1800_sig_cfg = 
{
  RFC_ENCODED_REVISION, 
  {
    { (int)RFC_WTR4905_JAPAN_4320_TIMING_PA_CTL,   { RFC_CONFIG_ONLY, -10 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_JAPAN_4320_TIMING_PA_RANGE,   { RFC_CONFIG_ONLY, -3 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_JAPAN_4320_TIMING_ASM_CTL,   { RFC_CONFIG_ONLY, -10 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_JAPAN_4320_TIMING_TUNER_CTL,   { RFC_CONFIG_ONLY, -150 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_JAPAN_4320_TIMING_PAPM_CTL,   { RFC_CONFIG_ONLY, -100 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_JAPAN_4320_TIMING_PAPM_MULTISLOT_CTL,   { RFC_CONFIG_ONLY, -6 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_JAPAN_4320_GPDATA0_0,   { RFC_CONFIG_ONLY, 0/*Warning: Not specified*/ }, {RFC_CONFIG_ONLY, 0/*Warning: Not specified*/ }  },
    { (int)RFC_WTR4905_JAPAN_4320_INTERNAL_GNSS_BLANK,   { RFC_HIGH, -10 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_JAPAN_4320_TX_GTR_TH,   { RFC_CONFIG_ONLY, -10 }, {RFC_LOW, 66 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_japan_4320_rx0_gsm_g1900_device_info = 
{
  RFC_ENCODED_REVISION, 
  RFC_RX_MODEM_CHAIN_0,   /* Modem Chain */
  0,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not specified */,   /* Antenna */
  3,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905, /* NAME */
      0,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0,   /* PHY_PATH_NUM */            
      {
        0 /* Warning: Not specified */,   /* INTF_REV */                  
        (int)WTR4905_GSM_PRXLGY1_BAND1900_PMB2,   /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),   /* RF_ASIC_BAND_AGC_LUT_MAPPING */        
        FALSE,   /* TXAGC_LUT */
        WTR4905_FBRX_ATTN_DEFAULT,   /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      QFE4320_MB, /* NAME */
      2,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /* Warning: Not specified */,   /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x217 << 22)/*mfg_id*/ | (0x44 << 14)/*prd_id*/ | (2)/*port_num*/, /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_TUNER,
      QFE2520, /* NAME */
      0,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /* Warning: Not specified */,   /* PHY_PATH_NUM */
      {
        0  /* Orig setting:   */,  /* INTF_REV */
        (int)RFDEVICE_QTUNER_IM_DISTORTION_INVALID,  /* DISTORTION_CONFIG */  
        0  /* Orig setting: */,  /* NOTES (REFERENCE ONLY) */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr4905_japan_4320_rx0_gsm_g1900_sig_cfg = 
{
  RFC_ENCODED_REVISION, 
  {
    { (int)RFC_WTR4905_JAPAN_4320_TIMING_ASM_CTL,   { RFC_CONFIG_ONLY, -40 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_JAPAN_4320_TIMING_TUNER_CTL,   { RFC_CONFIG_ONLY, -100 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_japan_4320_rx1_gsm_g1900_device_info = 
{
  RFC_ENCODED_REVISION, 
  RFC_RX_MODEM_CHAIN_1,   /* Modem Chain */
  1,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not specified */,   /* Antenna */
  2,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905, /* NAME */
      0,   /* DEVICE_MODULE_TYPE_INSTANCE */
      1,   /* PHY_PATH_NUM */            
      {
        0 /* Warning: Not specified */,   /* INTF_REV */                  
        (int)WTR4905_GSM_DRXLGY1_BAND1900_DMB2,   /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),   /* RF_ASIC_BAND_AGC_LUT_MAPPING */        
        FALSE,   /* TXAGC_LUT */
        WTR4905_FBRX_ATTN_DEFAULT,   /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /* ASM_SP10T */, /* NAME */
      3,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /* Warning: Not specified */,   /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x20C << 22)/*mfg_id*/ | (0x88 << 14)/*prd_id*/ | (9)/*port_num*/, /* PORT_NUM */
        (0x20C << 22)/*mfg_id*/ | (0x88 << 14)/*prd_id*/ | (9)/*port_num*/, /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr4905_japan_4320_rx1_gsm_g1900_sig_cfg = 
{
  RFC_ENCODED_REVISION, 
  {
    { (int)RFC_WTR4905_JAPAN_4320_TIMING_ASM_CTL,   { RFC_CONFIG_ONLY, -40 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_JAPAN_4320_TIMING_TUNER_CTL,   { RFC_CONFIG_ONLY, -100 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_JAPAN_4320_RF_PATH_SEL_14,   { RFC_HIGH, -10 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_japan_4320_tx0_gsm_g1900_device_info = 
{
  RFC_ENCODED_REVISION, 
  RFC_TX_MODEM_CHAIN_0,   /* Modem Chain */
  0,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not specified */,   /* Antenna */
  6,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905, /* NAME */
      0,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0,   /* PHY_PATH_NUM */            
      {
        0 /* Warning: Not specified */,   /* INTF_REV */                  
        (int)WTR4905_GSM_TX_BAND1900_THMLB1,   /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),   /* RF_ASIC_BAND_AGC_LUT_MAPPING */        
        FALSE,   /* TXAGC_LUT */
        WTR4905_FBRX_LOW_ATTN_MODE,   /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PA,
      QFE4320_GSM, /* NAME */
      0,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /* Warning: Not specified */,   /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x217 << 22)/*mfg_id*/ | (0x44 << 14)/*prd_id*/ | (QFE4320_GSM_GSM_BAND1900_PORT_ANT_MB)/*port_num*/, /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PAPM,
      QFE2101, /* NAME */
      0,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /* Warning: Not specified */,   /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x217 << 22)/*mfg_id*/ | (0x31 << 14)/*prd_id*/ | (8)/*port_num*/, /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      QFE4320_TX, /* NAME */
      0,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /* Warning: Not specified */,   /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x217 << 22)/*mfg_id*/ | (0x44 << 14)/*prd_id*/ | (26)/*port_num*/, /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      QFE4320_MB, /* NAME */
      2,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /* Warning: Not specified */,   /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x217 << 22)/*mfg_id*/ | (0x44 << 14)/*prd_id*/ | (9)/*port_num*/, /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_TUNER,
      QFE2520, /* NAME */
      0,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /* Warning: Not specified */,   /* PHY_PATH_NUM */
      {
        0  /* Orig setting:   */,  /* INTF_REV */
        (int)RFDEVICE_QTUNER_IM_DISTORTION_INVALID,  /* DISTORTION_CONFIG */  
        0  /* Orig setting: */,  /* NOTES (REFERENCE ONLY) */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr4905_japan_4320_tx0_gsm_g1900_sig_cfg = 
{
  RFC_ENCODED_REVISION, 
  {
    { (int)RFC_WTR4905_JAPAN_4320_TIMING_PA_CTL,   { RFC_CONFIG_ONLY, -10 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_JAPAN_4320_TIMING_PA_RANGE,   { RFC_CONFIG_ONLY, -3 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_JAPAN_4320_TIMING_ASM_CTL,   { RFC_CONFIG_ONLY, -10 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_JAPAN_4320_TIMING_TUNER_CTL,   { RFC_CONFIG_ONLY, -150 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_JAPAN_4320_TIMING_PAPM_CTL,   { RFC_CONFIG_ONLY, -100 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_JAPAN_4320_TIMING_PAPM_MULTISLOT_CTL,   { RFC_CONFIG_ONLY, -6 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_JAPAN_4320_GPDATA0_0,   { RFC_CONFIG_ONLY, 0/*Warning: Not specified*/ }, {RFC_CONFIG_ONLY, 0/*Warning: Not specified*/ }  },
    { (int)RFC_WTR4905_JAPAN_4320_INTERNAL_GNSS_BLANK,   { RFC_HIGH, -10 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_JAPAN_4320_TX_GTR_TH,   { RFC_CONFIG_ONLY, -10 }, {RFC_LOW, 66 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_gsm_properties_type rfc_wtr4905_japan_4320_gsm_properties =
{
  RFC_ENCODED_REVISION,
  /* GSM_DESENSE_CHANNEL (Max: 25 per band) */
  {
    { (uint32)RFCOM_BAND_GSM850 ,  198}, 
    { (uint32)RFCOM_BAND_GSM900 ,  29}, 
    { (uint32)RFCOM_BAND_GSM1800 ,  606}, 
    { (uint32)RFCOM_BAND_GSM1800 ,  702}, 
    { (uint32)RFCOM_BAND_GSM1800 ,  798}, 
    { (uint32)RFCOM_BAND_GSM1900 ,  557}, 
    { (uint32)RFCOM_BAND_GSM1900 ,  653}, 
    { (uint32)RFCOM_BAND_GSM1900 ,  749}, 
    { (uint32)RFCOM_NUM_GSM_BANDS, RFC_INVALID_PARAM },
  },
};

























