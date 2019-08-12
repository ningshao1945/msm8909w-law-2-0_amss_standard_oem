
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

$Header: //commercial/MPSS.JO.2.0.c1.4/Main/modem_proc/rfc_jolokia/rf_card/rfc_wtr2965_qrd_non_ca_4373_3/tdscdma/src/rfc_wtr2965_qrd_non_ca_4373_3_tdscdma_config_data_ag.c#1 $ 


=============================================================================*/

/*=============================================================================
                           INCLUDE FILES
=============================================================================*/
#include "comdef.h"

#include "rfc_wtr2965_qrd_non_ca_4373_3_cmn_ag.h" 
#include "rfc_common.h" 
#include "rfcom.h" 
#include "wtr2965_typedef_ag.h" 
#include "qfe4373fc_pa_port_typedef_ag.h" 
#include "rfdevice_coupler.h" 

rfc_device_info_type rf_card_wtr2965_qrd_non_ca_4373_3_init_tdscdma_rx_device_info = 
{
  RFC_ENCODED_REVISION, 
  0 /* Warning: Not Specified */,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  1,  /* NUM_DEVICES_TO_CONFIGURE */
{
    {
      RFDEVICE_TRANSCEIVER,
      WTR2965, /* NAME */
      0 /* Warning: Not specified */,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /* Warning: Not specified */,   /* PHY_PATH_NUM */
      {
        0 /* Warning: Not specified */,   /* INTF_REV */
        0 /* Invalid TRx port */,   /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),   /* RF_ASIC_BAND_AGC_LUT_MAPPING */        
        FALSE,   /* TXAGC_LUT */
        WTR2965_FBRX_ATTN_DEFAULT,   /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr2965_qrd_non_ca_4373_3_init_tdscdma_rx_sig_cfg = 
{
  RFC_ENCODED_REVISION, 
  {
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr2965_qrd_non_ca_4373_3_init_tdscdma_tx_device_info = 
{
  RFC_ENCODED_REVISION, 
  0 /* Warning: Not Specified */,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  1,  /* NUM_DEVICES_TO_CONFIGURE */
{
    {
      RFDEVICE_TRANSCEIVER,
      WTR2965, /* NAME */
      0 /* Warning: Not specified */,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /* Warning: Not specified */,   /* PHY_PATH_NUM */
      {
        0 /* Warning: Not specified */,   /* INTF_REV */
        0 /* Invalid TRx port */,   /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),   /* RF_ASIC_BAND_AGC_LUT_MAPPING */        
        FALSE,   /* TXAGC_LUT */
        WTR2965_FBRX_ATTN_DEFAULT,   /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr2965_qrd_non_ca_4373_3_init_tdscdma_tx_sig_cfg = 
{
  RFC_ENCODED_REVISION, 
  {
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr2965_qrd_non_ca_4373_3_rx0_tdscdma_b34_device_info = 
{
  RFC_ENCODED_REVISION, 
  RFC_RX_MODEM_CHAIN_0,   /* Modem Chain */
  0,   /* NV Container */
  0,   /* Antenna */
  3,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR2965, /* NAME */
      0,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0,   /* PHY_PATH_NUM */            
      {
        0 /* Warning: Not specified */,   /* INTF_REV */                  
        (int)WTR2965_TDSCDMA_PRXLGY1_BAND34_PMB2,   /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),   /* RF_ASIC_BAND_AGC_LUT_MAPPING */        
        FALSE,   /* TXAGC_LUT */
        WTR2965_FBRX_ATTN_DEFAULT,   /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      QFE4373FC, /* NAME */
      0,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /* Warning: Not specified */,   /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x217 << 22)/*mfg_id*/ | (0x45 << 14)/*prd_id*/ | (2)/*port_num*/, /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      QFE2085FC, /* NAME */
      1,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /* Warning: Not specified */,   /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x217 << 22)/*mfg_id*/ | (0x17 << 14)/*prd_id*/ | (2)/*port_num*/, /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr2965_qrd_non_ca_4373_3_rx0_tdscdma_b34_sig_cfg = 
{
  RFC_ENCODED_REVISION, 
  {
    { (int)RFC_WTR2965_QRD_NON_CA_4373_3_TIMING_ASM_CTL,   { RFC_CONFIG_ONLY, -3 }, {RFC_LOW, -6 }  },
    { (int)RFC_WTR2965_QRD_NON_CA_4373_3_RF_PATH_SEL_06,   { RFC_LOW, -4 }, {RFC_LOW, -6 }  },
    { (int)RFC_WTR2965_QRD_NON_CA_4373_3_RF_PATH_SEL_14,   { RFC_HIGH, -4 }, {RFC_LOW, -6 }  },
    { (int)RFC_WTR2965_QRD_NON_CA_4373_3_RF_PATH_SEL_07,   { RFC_LOW, -4 }, {RFC_LOW, -6 }  },
    { (int)RFC_WTR2965_QRD_NON_CA_4373_3_RF_PATH_SEL_16,   { RFC_HIGH, -4 }, {RFC_LOW, -6 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr2965_qrd_non_ca_4373_3_tx0_tdscdma_b34_device_info = 
{
  RFC_ENCODED_REVISION, 
  RFC_TX_MODEM_CHAIN_0,   /* Modem Chain */
  0,   /* NV Container */
  0,   /* Antenna */
  7,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR2965, /* NAME */
      0,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0,   /* PHY_PATH_NUM */            
      {
        0 /* Warning: Not specified */,   /* INTF_REV */                  
        (int)WTR2965_TDSCDMA_TX_BAND34_THMLB1,   /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_VALID | WTR2965_LP_LUT_TYPE << RFDEVICE_PA_STATE_0_BSHFT | WTR2965_HP_LUT_TYPE << RFDEVICE_PA_STATE_1_BSHFT | WTR2965_HP_LUT_TYPE << RFDEVICE_PA_STATE_2_BSHFT | WTR2965_HP_LUT_TYPE << RFDEVICE_PA_STATE_3_BSHFT  ),   /* RF_ASIC_BAND_AGC_LUT_MAPPING */
        FALSE,   /* TXAGC_LUT */
        WTR2965_FBRX_LOW_ATTN_MODE,   /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PA,
      QFE4373FC, /* NAME */
      0,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /* Warning: Not specified */,   /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x217 << 22)/*mfg_id*/ | (0x45 << 14)/*prd_id*/ | (QFE4373FC_TDSCDMA_BAND34_PORT_TX_PORT_1)/*port_num*/, /* PORT_NUM */
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
        (0x217 << 22)/*mfg_id*/ | (0x31 << 14)/*prd_id*/ | (10)/*port_num*/, /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      QFE4373FC, /* NAME */
      0,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /* Warning: Not specified */,   /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x217 << 22)/*mfg_id*/ | (0x45 << 14)/*prd_id*/ | (2)/*port_num*/, /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      QFE2085FC, /* NAME */
      1,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /* Warning: Not specified */,   /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x217 << 22)/*mfg_id*/ | (0x17 << 14)/*prd_id*/ | (10)/*port_num*/, /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_COUPLER,
      QFE2085FC, /* NAME */
      0,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /* Warning: Not specified */,   /* PHY_PATH_NUM */
      {
        (0x217 << 22)/*mfg_id*/ | (0x17 << 14)/*prd_id*/ | (2)/*port_num*/, /* PORT_NUM */
        (int)RFDEVICE_COUPLER_ATTENUATION_INVALID,   /* ATTEN_FWD */            
        (int)RFDEVICE_COUPLER_ATTENUATION_INVALID,   /* ATTEN_FWD */
        (int)RFDEVICE_COUPLER_DIRECTION_FWD,   /* POSITION */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_HDET,
      TRX_HDET, /* NAME */
      0,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /* Warning: Not specified */,   /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr2965_qrd_non_ca_4373_3_tx0_tdscdma_b34_sig_cfg = 
{
  RFC_ENCODED_REVISION, 
  {
    { (int)RFC_WTR2965_QRD_NON_CA_4373_3_TIMING_PA_CTL,   { RFC_CONFIG_ONLY, -1 }, {RFC_LOW, -4 }  },
    { (int)RFC_WTR2965_QRD_NON_CA_4373_3_TIMING_PA_RANGE,   { RFC_CONFIG_ONLY, -5 }, {RFC_LOW, -4 }  },
    { (int)RFC_WTR2965_QRD_NON_CA_4373_3_TIMING_ASM_CTL,   { RFC_CONFIG_ONLY, 1 }, {RFC_LOW, -8 }  },
    { (int)RFC_WTR2965_QRD_NON_CA_4373_3_TIMING_PAPM_CTL,   { RFC_CONFIG_ONLY, -5 }, {RFC_LOW, 2 }  },
    { (int)RFC_WTR2965_QRD_NON_CA_4373_3_TIMING_TX_TX_RF_ON0,   { RFC_CONFIG_ONLY, -5 }, {RFC_LOW, 2 }  },
    { (int)RFC_WTR2965_QRD_NON_CA_4373_3_TIMING_TX_RX_RF_ON0,   { RFC_CONFIG_ONLY, 0 }, {RFC_LOW, 12 }  },
    { (int)RFC_WTR2965_QRD_NON_CA_4373_3_TIMING_ASM_TRIGGER,   { RFC_CONFIG_ONLY, -5 }, {RFC_CONFIG_ONLY, -6 }  },
    { (int)RFC_WTR2965_QRD_NON_CA_4373_3_TIMING_PAPM_TX_TX_TRIGGER,   { RFC_CONFIG_ONLY, -6 }, {RFC_CONFIG_ONLY, -6 }  },
    { (int)RFC_WTR2965_QRD_NON_CA_4373_3_TIMING_PAPM_OFF_TX_RX_TX_TRIGGER,   { RFC_CONFIG_ONLY, -24 }, {RFC_CONFIG_ONLY, -10 }  },
    { (int)RFC_WTR2965_QRD_NON_CA_4373_3_TIMING_PA_TRIGGER,   { RFC_CONFIG_ONLY, -2 }, {RFC_CONFIG_ONLY, -4 }  },
    { (int)RFC_WTR2965_QRD_NON_CA_4373_3_TIMING_PAPM_OFF_TX_RX_TX_CTL,   { RFC_CONFIG_ONLY, -10 }, {RFC_CONFIG_ONLY, -10 }  },
    { (int)RFC_WTR2965_QRD_NON_CA_4373_3_TIMING_PAPM_TX_TX_CTL,   { RFC_CONFIG_ONLY, -6 }, {RFC_CONFIG_ONLY, -6 }  },
    { (int)RFC_WTR2965_QRD_NON_CA_4373_3_RF_PATH_SEL_11,   { RFC_LOW, -10 }, {RFC_LOW, -6 }  },
    { (int)RFC_WTR2965_QRD_NON_CA_4373_3_RF_PATH_SEL_07,   { RFC_LOW, -10 }, {RFC_LOW, -6 }  },
    { (int)RFC_WTR2965_QRD_NON_CA_4373_3_RF_PATH_SEL_16,   { RFC_HIGH, -10 }, {RFC_LOW, -6 }  },
    { (int)RFC_WTR2965_QRD_NON_CA_4373_3_INTERNAL_GNSS_BLANK_CONCURRENCY,   { RFC_HIGH, -5 }, {RFC_LOW, -6 }  },
    { (int)RFC_WTR2965_QRD_NON_CA_4373_3_TX_GTR_TH,   { RFC_CONFIG_ONLY, -5 }, {RFC_LOW, -6 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr2965_qrd_non_ca_4373_3_rx0_tdscdma_b39_device_info = 
{
  RFC_ENCODED_REVISION, 
  RFC_RX_MODEM_CHAIN_0,   /* Modem Chain */
  0,   /* NV Container */
  0,   /* Antenna */
  3,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR2965, /* NAME */
      0,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0,   /* PHY_PATH_NUM */            
      {
        0 /* Warning: Not specified */,   /* INTF_REV */                  
        (int)WTR2965_TDSCDMA_PRXLGY1_BAND39_PMB2,   /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),   /* RF_ASIC_BAND_AGC_LUT_MAPPING */        
        FALSE,   /* TXAGC_LUT */
        WTR2965_FBRX_ATTN_DEFAULT,   /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      QFE4373FC, /* NAME */
      0,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /* Warning: Not specified */,   /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x217 << 22)/*mfg_id*/ | (0x45 << 14)/*prd_id*/ | (2)/*port_num*/, /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      QFE2085FC, /* NAME */
      1,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /* Warning: Not specified */,   /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x217 << 22)/*mfg_id*/ | (0x17 << 14)/*prd_id*/ | (2)/*port_num*/, /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr2965_qrd_non_ca_4373_3_rx0_tdscdma_b39_sig_cfg = 
{
  RFC_ENCODED_REVISION, 
  {
    { (int)RFC_WTR2965_QRD_NON_CA_4373_3_TIMING_ASM_CTL,   { RFC_CONFIG_ONLY, -3 }, {RFC_LOW, -6 }  },
    { (int)RFC_WTR2965_QRD_NON_CA_4373_3_RF_PATH_SEL_06,   { RFC_HIGH, -4 }, {RFC_LOW, -6 }  },
    { (int)RFC_WTR2965_QRD_NON_CA_4373_3_RF_PATH_SEL_14,   { RFC_LOW, -4 }, {RFC_LOW, -6 }  },
    { (int)RFC_WTR2965_QRD_NON_CA_4373_3_RF_PATH_SEL_07,   { RFC_LOW, -4 }, {RFC_LOW, -6 }  },
    { (int)RFC_WTR2965_QRD_NON_CA_4373_3_RF_PATH_SEL_16,   { RFC_HIGH, -4 }, {RFC_LOW, -6 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr2965_qrd_non_ca_4373_3_tx0_tdscdma_b39_device_info = 
{
  RFC_ENCODED_REVISION, 
  RFC_TX_MODEM_CHAIN_0,   /* Modem Chain */
  0,   /* NV Container */
  0,   /* Antenna */
  7,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR2965, /* NAME */
      0,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0,   /* PHY_PATH_NUM */            
      {
        0 /* Warning: Not specified */,   /* INTF_REV */                  
        (int)WTR2965_TDSCDMA_TX_BAND39_THMLB1,   /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_VALID | WTR2965_LP_LUT_TYPE << RFDEVICE_PA_STATE_0_BSHFT | WTR2965_HP_LUT_TYPE << RFDEVICE_PA_STATE_1_BSHFT | WTR2965_HP_LUT_TYPE << RFDEVICE_PA_STATE_2_BSHFT | WTR2965_HP_LUT_TYPE << RFDEVICE_PA_STATE_3_BSHFT  ),   /* RF_ASIC_BAND_AGC_LUT_MAPPING */
        FALSE,   /* TXAGC_LUT */
        WTR2965_FBRX_LOW_ATTN_MODE,   /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PA,
      QFE4373FC, /* NAME */
      0,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /* Warning: Not specified */,   /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x217 << 22)/*mfg_id*/ | (0x45 << 14)/*prd_id*/ | (QFE4373FC_TDSCDMA_BAND39_PORT_TX_PORT_1)/*port_num*/, /* PORT_NUM */
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
        (0x217 << 22)/*mfg_id*/ | (0x31 << 14)/*prd_id*/ | (10)/*port_num*/, /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      QFE4373FC, /* NAME */
      0,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /* Warning: Not specified */,   /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x217 << 22)/*mfg_id*/ | (0x45 << 14)/*prd_id*/ | (2)/*port_num*/, /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      QFE2085FC, /* NAME */
      1,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /* Warning: Not specified */,   /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x217 << 22)/*mfg_id*/ | (0x17 << 14)/*prd_id*/ | (10)/*port_num*/, /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_COUPLER,
      QFE2085FC, /* NAME */
      0,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /* Warning: Not specified */,   /* PHY_PATH_NUM */
      {
        (0x217 << 22)/*mfg_id*/ | (0x17 << 14)/*prd_id*/ | (2)/*port_num*/, /* PORT_NUM */
        (int)RFDEVICE_COUPLER_ATTENUATION_INVALID,   /* ATTEN_FWD */            
        (int)RFDEVICE_COUPLER_ATTENUATION_INVALID,   /* ATTEN_FWD */
        (int)RFDEVICE_COUPLER_DIRECTION_FWD,   /* POSITION */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_HDET,
      TRX_HDET, /* NAME */
      0,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /* Warning: Not specified */,   /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr2965_qrd_non_ca_4373_3_tx0_tdscdma_b39_sig_cfg = 
{
  RFC_ENCODED_REVISION, 
  {
    { (int)RFC_WTR2965_QRD_NON_CA_4373_3_TIMING_PA_CTL,   { RFC_CONFIG_ONLY, -1 }, {RFC_LOW, -4 }  },
    { (int)RFC_WTR2965_QRD_NON_CA_4373_3_TIMING_PA_RANGE,   { RFC_CONFIG_ONLY, -5 }, {RFC_LOW, -4 }  },
    { (int)RFC_WTR2965_QRD_NON_CA_4373_3_TIMING_ASM_CTL,   { RFC_CONFIG_ONLY, 1 }, {RFC_LOW, -8 }  },
    { (int)RFC_WTR2965_QRD_NON_CA_4373_3_TIMING_PAPM_CTL,   { RFC_CONFIG_ONLY, -5 }, {RFC_LOW, 2 }  },
    { (int)RFC_WTR2965_QRD_NON_CA_4373_3_TIMING_TX_TX_RF_ON0,   { RFC_CONFIG_ONLY, -5 }, {RFC_LOW, 2 }  },
    { (int)RFC_WTR2965_QRD_NON_CA_4373_3_TIMING_TX_RX_RF_ON0,   { RFC_CONFIG_ONLY, 0 }, {RFC_LOW, 12 }  },
    { (int)RFC_WTR2965_QRD_NON_CA_4373_3_TIMING_ASM_TRIGGER,   { RFC_CONFIG_ONLY, -5 }, {RFC_CONFIG_ONLY, -6 }  },
    { (int)RFC_WTR2965_QRD_NON_CA_4373_3_TIMING_PAPM_TX_TX_TRIGGER,   { RFC_CONFIG_ONLY, -6 }, {RFC_CONFIG_ONLY, -6 }  },
    { (int)RFC_WTR2965_QRD_NON_CA_4373_3_TIMING_PAPM_OFF_TX_RX_TX_TRIGGER,   { RFC_CONFIG_ONLY, -24 }, {RFC_CONFIG_ONLY, -10 }  },
    { (int)RFC_WTR2965_QRD_NON_CA_4373_3_TIMING_PA_TRIGGER,   { RFC_CONFIG_ONLY, -2 }, {RFC_CONFIG_ONLY, -4 }  },
    { (int)RFC_WTR2965_QRD_NON_CA_4373_3_TIMING_PAPM_OFF_TX_RX_TX_CTL,   { RFC_CONFIG_ONLY, -10 }, {RFC_CONFIG_ONLY, -10 }  },
    { (int)RFC_WTR2965_QRD_NON_CA_4373_3_TIMING_PAPM_TX_TX_CTL,   { RFC_CONFIG_ONLY, -6 }, {RFC_CONFIG_ONLY, -6 }  },
    { (int)RFC_WTR2965_QRD_NON_CA_4373_3_RF_PATH_SEL_11,   { RFC_LOW, -10 }, {RFC_LOW, -6 }  },
    { (int)RFC_WTR2965_QRD_NON_CA_4373_3_RF_PATH_SEL_07,   { RFC_LOW, -10 }, {RFC_LOW, -6 }  },
    { (int)RFC_WTR2965_QRD_NON_CA_4373_3_RF_PATH_SEL_16,   { RFC_HIGH, -10 }, {RFC_LOW, -6 }  },
    { (int)RFC_WTR2965_QRD_NON_CA_4373_3_INTERNAL_GNSS_BLANK_CONCURRENCY,   { RFC_HIGH, -5 }, {RFC_LOW, -6 }  },
    { (int)RFC_WTR2965_QRD_NON_CA_4373_3_TX_GTR_TH,   { RFC_CONFIG_ONLY, -5 }, {RFC_LOW, -6 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr2965_qrd_non_ca_4373_3_tdscdma_en_et_cal0_fbrx_path_internal_adc_device_info = 
{
  RFC_ENCODED_REVISION, 
  0 /* Warning: Not specified */,   /* Modem Chain */        
  0 /* Warning: Not specified */,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not specified */,   /* Antenna */
  1,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR2965, /* NAME */
      0,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0,   /* PHY_PATH_NUM */            
      {
        0 /* Warning: Not specified */,   /* INTF_REV */                  
        RFDEVICE_FBRX_PATH_INTERNAL_ADC,   /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),   /* RF_ASIC_BAND_AGC_LUT_MAPPING */        
        FALSE,   /* TXAGC_LUT */
        WTR2965_FBRX_ATTN_DEFAULT,   /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr2965_qrd_non_ca_4373_3_tdscdma_en_et_cal0_fbrx_path_internal_adc_sig_cfg = 
{
  RFC_ENCODED_REVISION, 
  {
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr2965_qrd_non_ca_4373_3_tdscdma_dis_et_cal0_fbrx_path_internal_adc_device_info = 
{
  RFC_ENCODED_REVISION, 
  0 /* Warning: Not specified */,   /* Modem Chain */        
  0 /* Warning: Not specified */,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not specified */,   /* Antenna */
  1,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR2965, /* NAME */
      0,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0,   /* PHY_PATH_NUM */            
      {
        0 /* Warning: Not specified */,   /* INTF_REV */                  
        RFDEVICE_FBRX_PATH_INTERNAL_ADC,   /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),   /* RF_ASIC_BAND_AGC_LUT_MAPPING */        
        FALSE,   /* TXAGC_LUT */
        WTR2965_FBRX_ATTN_DEFAULT,   /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr2965_qrd_non_ca_4373_3_tdscdma_dis_et_cal0_fbrx_path_internal_adc_sig_cfg = 
{
  RFC_ENCODED_REVISION, 
  {
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr2965_qrd_non_ca_4373_3_tdscdma_en_et_cal0_fbrx_path_drx_iq_device_info = 
{
  RFC_ENCODED_REVISION, 
  RFC_RX_MODEM_CHAIN_1,   /* Modem Chain */        
  0 /* Warning: Not specified */,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not specified */,   /* Antenna */
  1,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR2965, /* NAME */
      0,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0,   /* PHY_PATH_NUM */            
      {
        0 /* Warning: Not specified */,   /* INTF_REV */                  
        RFDEVICE_FBRX_PATH_DRX_IQ,   /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),   /* RF_ASIC_BAND_AGC_LUT_MAPPING */        
        FALSE,   /* TXAGC_LUT */
        WTR2965_FBRX_ATTN_DEFAULT,   /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr2965_qrd_non_ca_4373_3_tdscdma_en_et_cal0_fbrx_path_drx_iq_sig_cfg = 
{
  RFC_ENCODED_REVISION, 
  {
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr2965_qrd_non_ca_4373_3_tdscdma_dis_et_cal0_fbrx_path_drx_iq_device_info = 
{
  RFC_ENCODED_REVISION, 
  RFC_RX_MODEM_CHAIN_1,   /* Modem Chain */        
  0 /* Warning: Not specified */,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not specified */,   /* Antenna */
  1,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR2965, /* NAME */
      0,   /* DEVICE_MODULE_TYPE_INSTANCE */
      0,   /* PHY_PATH_NUM */            
      {
        0 /* Warning: Not specified */,   /* INTF_REV */                  
        RFDEVICE_FBRX_PATH_DRX_IQ,   /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),   /* RF_ASIC_BAND_AGC_LUT_MAPPING */        
        FALSE,   /* TXAGC_LUT */
        WTR2965_FBRX_ATTN_DEFAULT,   /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr2965_qrd_non_ca_4373_3_tdscdma_dis_et_cal0_fbrx_path_drx_iq_sig_cfg = 
{
  RFC_ENCODED_REVISION, 
  {
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


























