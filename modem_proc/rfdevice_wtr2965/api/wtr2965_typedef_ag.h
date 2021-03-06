#ifndef WTR2965_TYPEDEF_AG_H
#define WTR2965_TYPEDEF_AG_H
/*
  WARNING: This file is auto-generated.

  Generated at:    0
  Generated using: RFDevice_AutoGenerate.pl
  Generated from:  revision 46 of the Aadi master spreadsheet
*/

/*!
  @file
  wtr2965_typedef_ag.h

  @brief
  WTR2965 Data Type Definition autogen header

  @details
  This file is auto-generated and it contains the WTR2965 Data Type Definition SSBI data type to support the 
  interaction with the QUALCOMM WTR2965 chip

  @addtogroup WTR2965 Data Type Definition
  @{
*/

/*=============================================================================

Copyright (c) 2013 - 2016 by QUALCOMM Technologies, Inc.  All Rights Reserved.

Qualcomm Technologies Proprietary and Confidential

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

$Header: //commercial/MPSS.JO.2.0.c1.4/Main/modem_proc/rfdevice_wtr2965/api/wtr2965_typedef_ag.h#1 $
$DateTime: 2016/12/13 08:00:04 $
$Author: mplcsds1 $

=============================================================================*/
  
/*=============================================================================

                            INCLUDE FILES FOR MODULE

=============================================================================*/
#include "comdef.h"

/*----------------------------------------------------------------------------*/
/*!
   It defines the WTR2965 cdma_rx_port enum.
*/
typedef enum 
{
  WTR2965_CDMA_DRXLGY1_BAND0_DLB1, 
  WTR2965_CDMA_DRXLGY1_BAND10_DLB1, 
  WTR2965_CDMA_DRXLGY1_BAND0_DLB3, 
  WTR2965_CDMA_DRXLGY1_BAND10_DLB3, 
  WTR2965_CDMA_DRXLGY1_BAND1_DMB1, 
  WTR2965_CDMA_DRXLGY1_BAND14_DMB1, 
  WTR2965_CDMA_DRXLGY1_BAND1_DMB2, 
  WTR2965_CDMA_DRXLGY1_BAND14_DMB2, 
  WTR2965_CDMA_DRXLGY1_BAND6_DMB3, 
  WTR2965_CDMA_DRXLGY1_BAND15_DMB3, 
  WTR2965_CDMA_DRXLGY1_BAND15_DMB1, 
  WTR2965_CDMA_PRXLGY1_BAND0_PLB1, 
  WTR2965_CDMA_PRXLGY1_BAND10_PLB1, 
  WTR2965_CDMA_PRXLGY1_BAND0_PLB3, 
  WTR2965_CDMA_PRXLGY1_BAND10_PLB3, 
  WTR2965_CDMA_PRXLGY1_BAND1_PMB1, 
  WTR2965_CDMA_PRXLGY1_BAND14_PMB1, 
  WTR2965_CDMA_PRXLGY1_BAND1_PMB2, 
  WTR2965_CDMA_PRXLGY1_BAND14_PMB2, 
  WTR2965_CDMA_PRXLGY1_BAND6_PMB3, 
  WTR2965_CDMA_PRXLGY1_BAND15_PMB3, 
  WTR2965_CDMA_PRXLGY1_BAND15_PMB1, 
  WTR2965_CDMA_RX_BAND_NUM, 
  WTR2965_CDMA_RX_BAND_INVALID, 
} wtr2965_cdma_rx_port_data_type;

/*----------------------------------------------------------------------------*/
/*!
   It defines the WTR2965 cdma_tx_port enum.
*/
typedef enum 
{
  WTR2965_CDMA_TX_BAND0_THMLB2, 
  WTR2965_CDMA_TX_BAND10_THMLB2, 
  WTR2965_CDMA_TXWSAW_BAND0_THMLB2, 
  WTR2965_CDMA_TXWSAW_BAND10_THMLB2, 
  WTR2965_CDMA_TX_BAND0_THMLB1, 
  WTR2965_CDMA_TX_BAND10_THMLB1, 
  WTR2965_CDMA_TXWSAW_BAND0_THMLB1, 
  WTR2965_CDMA_TXWSAW_BAND10_THMLB1, 
  WTR2965_CDMA_TX_BAND1_THMLB4, 
  WTR2965_CDMA_TX_BAND14_THMLB4, 
  WTR2965_CDMA_TXWSAW_BAND1_THMLB4, 
  WTR2965_CDMA_TXWSAW_BAND14_THMLB4, 
  WTR2965_CDMA_TX_BAND6_THMLB4, 
  WTR2965_CDMA_TXWSAW_BAND6_THMLB4, 
  WTR2965_CDMA_TX_BAND15_THMLB4, 
  WTR2965_CDMA_TXWSAW_BAND15_THMLB4, 
  WTR2965_CDMA_TX_BAND_NUM, 
  WTR2965_CDMA_TX_BAND_INVALID, 
} wtr2965_cdma_tx_port_data_type;

/*----------------------------------------------------------------------------*/
/*!
   It defines the WTR2965 gnss enum.
*/
typedef enum 
{
  WTR2965_GNSS_M5_ET, 
  WTR2965_GNSS_M5_ET1, 
  WTR2965_GNSS_M5_HT, 
  WTR2965_GNSS_MT_E, 
  WTR2965_GNSS_M5_ELNA_2H, 
  WTR2965_GNSS_MODE_NUM, 
  WTR2965_GNSS_MODE_INVALID, 
} wtr2965_gnss_data_type;

/*----------------------------------------------------------------------------*/
/*!
   It defines the WTR2965 gsm_rx_port enum.
*/
typedef enum 
{
  WTR2965_GSM_DRXLGY1_BAND850_DLB1, 
  WTR2965_GSM_DRXLGY1_BAND900_DLB1, 
  WTR2965_GSM_DRXLGY1_BAND850_DLB3, 
  WTR2965_GSM_DRXLGY1_BAND900_DLB3, 
  WTR2965_GSM_DRXLGY1_BAND1800_DMB1, 
  WTR2965_GSM_DRXLGY1_BAND1900_DMB1, 
  WTR2965_GSM_DRXLGY1_BAND1800_DMB2, 
  WTR2965_GSM_DRXLGY1_BAND1800_DMB3, 
  WTR2965_GSM_DRXLGY1_BAND1900_DMB2, 
  WTR2965_GSM_DRXLGY1ONP_BAND850_PLB1, 
  WTR2965_GSM_DRXLGY1ONP_BAND900_PLB1, 
  WTR2965_GSM_DRXLGY1ONP_BAND1800_PMB1, 
  WTR2965_GSM_DRXLGY1ONP_BAND1900_PMB1, 
  WTR2965_GSM_DRXLGY1ONP_BAND1800_PMB2, 
  WTR2965_GSM_DRXLGY1ONP_BAND1800_PMB3, 
  WTR2965_GSM_DRXLGY1ONP_BAND1900_PMB2, 
  WTR2965_GSM_PRXLGY1_BAND850_PLB1, 
  WTR2965_GSM_PRXLGY1_BAND900_PLB1, 
  WTR2965_GSM_PRXLGY1_BAND850_PLB3, 
  WTR2965_GSM_PRXLGY1_BAND900_PLB3, 
  WTR2965_GSM_PRXLGY1_BAND1800_PMB1, 
  WTR2965_GSM_PRXLGY1_BAND1900_PMB1, 
  WTR2965_GSM_PRXLGY1_BAND1800_PMB2, 
  WTR2965_GSM_PRXLGY1_BAND1800_PMB3, 
  WTR2965_GSM_PRXLGY1_BAND1900_PMB2, 
  WTR2965_GSM_PRXLGY1SAWLESS_BAND850_PLB1, 
  WTR2965_GSM_PRXLGY1SAWLESS_BAND900_PLB1, 
  WTR2965_GSM_PRXLGY1SAWLESS_BAND1800_PMB1, 
  WTR2965_GSM_PRXLGY1SAWLESS_BAND1900_PMB1, 
  WTR2965_GSM_PRXLGY1OND_BAND850_DLB1, 
  WTR2965_GSM_PRXLGY1OND_BAND900_DLB1, 
  WTR2965_GSM_PRXLGY1OND_BAND1800_DMB1, 
  WTR2965_GSM_PRXLGY1OND_BAND1900_DMB1, 
  WTR2965_GSM_PRXLGY1OND_BAND1800_DMB2, 
  WTR2965_GSM_PRXLGY1OND_BAND1800_DMB3, 
  WTR2965_GSM_PRXLGY1OND_BAND1900_DMB2, 
  WTR2965_GSM_RX_BAND_NUM, 
  WTR2965_GSM_RX_BAND_INVALID, 
} wtr2965_gsm_rx_port_data_type;

/*----------------------------------------------------------------------------*/
/*!
   It defines the WTR2965 gsm_tx_port enum.
*/
typedef enum 
{
  WTR2965_GSM_TX_BAND850_THMLB1, 
  WTR2965_GSM_TX_BAND900_THMLB1, 
  WTR2965_GSM_TX_BAND1800_THMLB1, 
  WTR2965_GSM_TX_BAND1900_THMLB1, 
  WTR2965_GSM_TX_BAND850_THMLB2, 
  WTR2965_GSM_TX_BAND900_THMLB2, 
  WTR2965_GSM_TX_BAND1800_THMLB4, 
  WTR2965_GSM_TX_BAND1900_THMLB4, 
  WTR2965_GSM_TX_BAND_NUM, 
  WTR2965_GSM_TX_BAND_INVALID, 
} wtr2965_gsm_tx_port_data_type;

/*----------------------------------------------------------------------------*/
/*!
   It defines the WTR2965 ltefdd_rx_port enum.
*/
typedef enum 
{
  WTR2965_LTEFDD_DRXLGY1_BAND5_DLB1, 
  WTR2965_LTEFDD_DRXLGY1_BAND5_DLBCG1, 
  WTR2965_LTEFDD_DRXLGY1_BAND6_DLB1, 
  WTR2965_LTEFDD_DRXLGY1_BAND18_DLB1, 
  WTR2965_LTEFDD_DRXLGY1_BAND19_DLB1, 
  WTR2965_LTEFDD_DRXLGY1_BAND8_DLB1, 
  WTR2965_LTEFDD_DRXLGY1_BAND26_DLB1, 
  WTR2965_LTEFDD_DRXLGY1_BAND27_DLB1, 
  WTR2965_LTEFDD_DRXLGY1_BAND12_DLB2, 
  WTR2965_LTEFDD_DRXLGY1_BAND17_DLB2, 
  WTR2965_LTEFDD_DRXLGY1_BAND12_DLB3, 
  WTR2965_LTEFDD_DRXLGY1_BAND17_DLB3, 
  WTR2965_LTEFDD_DRXLGY1_BAND13_DLB2, 
  WTR2965_LTEFDD_DRXLGY1_BAND14_DLB2, 
  WTR2965_LTEFDD_DRXLGY1_BAND20_DLB2, 
  WTR2965_LTEFDD_DRXLGY1_RESERVED_0, 
  WTR2965_LTEFDD_DRXLGY1_RESERVED_1, 
  WTR2965_LTEFDD_DRXLGY1_BAND28_DLB2, 
  WTR2965_LTEFDD_DRXLGY1_BAND5_DLB3, 
  WTR2965_LTEFDD_DRXLGY1_BAND5_DLBCG3, 
  WTR2965_LTEFDD_DRXLGY1_BAND6_DLB3, 
  WTR2965_LTEFDD_DRXLGY1_BAND18_DLB3, 
  WTR2965_LTEFDD_DRXLGY1_BAND19_DLB3, 
  WTR2965_LTEFDD_DRXLGY1_BAND8_DLB3, 
  WTR2965_LTEFDD_DRXLGY1_BAND13_DLB3, 
  WTR2965_LTEFDD_DRXLGY1_BAND14_DLB3, 
  WTR2965_LTEFDD_DRXLGY1_BAND20_DLB3, 
  WTR2965_LTEFDD_DRXLGY1_BAND26_DLB3, 
  WTR2965_LTEFDD_DRXLGY1_BAND27_DLB3, 
  WTR2965_LTEFDD_DRXLGY1_BAND28_DLB3, 
  WTR2965_LTEFDD_DRXLGY1_BAND29_DLB3, 
  WTR2965_LTEFDD_DRXLGY1_BAND29_DLB2, 
  WTR2965_LTEFDD_DRXLGY1_BAND2_DMB1, 
  WTR2965_LTEFDD_DRXLGY1_BAND25_DMB1, 
  WTR2965_LTEFDD_DRXLGY1_BAND2_DMBCG1, 
  WTR2965_LTEFDD_DRXLGY1_BAND25_DMBCG1, 
  WTR2965_LTEFDD_DRXLGY1_BAND3_DMB1, 
  WTR2965_LTEFDD_DRXLGY1_BAND9_DMB1, 
  WTR2965_LTEFDD_DRXLGY1_BAND4_DMB1, 
  WTR2965_LTEFDD_DRXLGY1_BAND10_DMB1, 
  WTR2965_LTEFDD_DRXLGY1_BAND66_DMB1, 
  WTR2965_LTEFDD_DRXLGY1_BAND4_DMBCG1, 
  WTR2965_LTEFDD_DRXLGY1_BAND10_DMBCG1, 
  WTR2965_LTEFDD_DRXLGY1_BAND66_DMBCG1, 
  WTR2965_LTEFDD_DRXLGY1_BAND11_DMB1, 
  WTR2965_LTEFDD_DRXLGY1_BAND21_DMB1, 
  WTR2965_LTEFDD_DRXLGY1_BAND2_DMB2, 
  WTR2965_LTEFDD_DRXLGY1_BAND25_DMB2, 
  WTR2965_LTEFDD_DRXLGY1_BAND2_DMBCG2, 
  WTR2965_LTEFDD_DRXLGY1_BAND25_DMBCG2, 
  WTR2965_LTEFDD_DRXLGY1_BAND3_DMB2, 
  WTR2965_LTEFDD_DRXLGY1_BAND9_DMB2, 
  WTR2965_LTEFDD_DRXLGY1_BAND3_DMBCG2, 
  WTR2965_LTEFDD_DRXLGY1_BAND9_DMBCG2, 
  WTR2965_LTEFDD_DRXLGY1_BAND1_DMB3, 
  WTR2965_LTEFDD_DRXLGY1_BAND1_DMBCG3, 
  WTR2965_LTEFDD_DRXLGY1_BAND3_DMB3, 
  WTR2965_LTEFDD_DRXLGY1_BAND9_DMB3, 
  WTR2965_LTEFDD_DRXLGY1_BAND3_DMBCG3, 
  WTR2965_LTEFDD_DRXLGY1_BAND9_DMBCG3, 
  WTR2965_LTEFDD_DRXLGY1_BAND4_DMB3, 
  WTR2965_LTEFDD_DRXLGY1_BAND10_DMB3, 
  WTR2965_LTEFDD_DRXLGY1_BAND66_DMB3, 
  WTR2965_LTEFDD_DRXLGY1_BAND4_DMBCG3, 
  WTR2965_LTEFDD_DRXLGY1_BAND10_DMBCG3, 
  WTR2965_LTEFDD_DRXLGY1_BAND66_DMBCG3, 
  WTR2965_LTEFDD_DRXLGY1_RESERVED_2, 
  WTR2965_LTEFDD_DRXLGY1_BAND30_DHB1, 
  WTR2965_LTEFDD_DRXLGY1_BAND7_DHB2, 
  WTR2965_LTEFDD_DRXLGY1_BAND7_DHBCG2, 
  WTR2965_LTEFDD_DRXLGY1_BAND32_DMB1, 
  WTR2965_LTEFDD_DRXLGY2_BAND2_DMB1, 
  WTR2965_LTEFDD_DRXLGY2_BAND25_DMB1, 
  WTR2965_LTEFDD_DRXLGY2_BAND2_DMBCG1, 
  WTR2965_LTEFDD_DRXLGY2_BAND25_DMBCG1, 
  WTR2965_LTEFDD_DRXLGY2_BAND4_DMB1, 
  WTR2965_LTEFDD_DRXLGY2_BAND10_DMB1, 
  WTR2965_LTEFDD_DRXLGY2_BAND66_DMB1, 
  WTR2965_LTEFDD_DRXLGY2_BAND4_DMBCG1, 
  WTR2965_LTEFDD_DRXLGY2_BAND10_DMBCG1, 
  WTR2965_LTEFDD_DRXLGY2_BAND66_DMBCG1, 
  WTR2965_LTEFDD_DRXLGY2_BAND11_DMB1, 
  WTR2965_LTEFDD_DRXLGY2_BAND21_DMB1, 
  WTR2965_LTEFDD_DRXLGY2_BAND11_DMBCG1, 
  WTR2965_LTEFDD_DRXLGY2_BAND21_DMBCG1, 
  WTR2965_LTEFDD_DRXLGY2_BAND2_DMB2, 
  WTR2965_LTEFDD_DRXLGY2_BAND25_DMB2, 
  WTR2965_LTEFDD_DRXLGY2_BAND2_DMBCG2, 
  WTR2965_LTEFDD_DRXLGY2_BAND25_DMBCG2, 
  WTR2965_LTEFDD_DRXLGY2_BAND3_DMB2, 
  WTR2965_LTEFDD_DRXLGY2_BAND9_DMB2, 
  WTR2965_LTEFDD_DRXLGY2_BAND3_DMBCG2, 
  WTR2965_LTEFDD_DRXLGY2_BAND9_DMBCG2, 
  WTR2965_LTEFDD_DRXLGY2_BAND1_DMB3, 
  WTR2965_LTEFDD_DRXLGY2_BAND1_DMBCG3, 
  WTR2965_LTEFDD_DRXLGY2_BAND3_DMB3, 
  WTR2965_LTEFDD_DRXLGY2_BAND9_DMB3, 
  WTR2965_LTEFDD_DRXLGY2_BAND3_DMBCG3, 
  WTR2965_LTEFDD_DRXLGY2_BAND9_DMBCG3, 
  WTR2965_LTEFDD_DRXLGY2_BAND4_DMB3, 
  WTR2965_LTEFDD_DRXLGY2_BAND10_DMB3, 
  WTR2965_LTEFDD_DRXLGY2_BAND66_DMB3, 
  WTR2965_LTEFDD_DRXLGY2_BAND4_DMBCG3, 
  WTR2965_LTEFDD_DRXLGY2_BAND10_DMBCG3, 
  WTR2965_LTEFDD_DRXLGY2_BAND66_DMBCG3, 
  WTR2965_LTEFDD_DRXLGY2_BAND30_DHB1, 
  WTR2965_LTEFDD_DRXLGY2_BAND30_DHBCG1, 
  WTR2965_LTEFDD_DRXLGY2_BAND7_DHB2, 
  WTR2965_LTEFDD_DRXLGY2_BAND7_DHBCG2, 
  WTR2965_LTEFDD_DRXLGY2_BAND32_DMB1, 
  WTR2965_LTEFDD_DRXLGY2_BAND32_DMBCG1, 
  WTR2965_LTEFDD_DRXOFFCHIP_BAND5_DLBOC1, 
  WTR2965_LTEFDD_DRXOFFCHIP_BAND5_DLBOC3, 
  WTR2965_LTEFDD_DRXOFFCHIP_BAND2_DMBOC1, 
  WTR2965_LTEFDD_DRXOFFCHIP_BAND25_DMBOC1, 
  WTR2965_LTEFDD_DRXOFFCHIP_BAND4_DMBOC1, 
  WTR2965_LTEFDD_DRXOFFCHIP_BAND10_DMBOC1, 
  WTR2965_LTEFDD_DRXOFFCHIP_BAND66_DMBOC1, 
  WTR2965_LTEFDD_DRXOFFCHIP_BAND2_DMBOC2, 
  WTR2965_LTEFDD_DRXOFFCHIP_BAND25_DMBOC2, 
  WTR2965_LTEFDD_DRXOFFCHIP_BAND3_DMBOC2, 
  WTR2965_LTEFDD_DRXOFFCHIP_BAND9_DMBOC2, 
  WTR2965_LTEFDD_DRXOFFCHIP_BAND1_DMBOC3, 
  WTR2965_LTEFDD_DRXOFFCHIP_BAND3_DMBOC3, 
  WTR2965_LTEFDD_DRXOFFCHIP_BAND9_DMBOC3, 
  WTR2965_LTEFDD_DRXOFFCHIP_BAND4_DMBOC3, 
  WTR2965_LTEFDD_DRXOFFCHIP_BAND10_DMBOC3, 
  WTR2965_LTEFDD_DRXOFFCHIP_BAND66_DMBOC3, 
  WTR2965_LTEFDD_DRXOFFCHIP_BAND7_DHBOC2, 
  WTR2965_LTEFDD_DRXOFFCHIP2_BAND2_DMBOC1, 
  WTR2965_LTEFDD_DRXOFFCHIP2_BAND25_DMBOC1, 
  WTR2965_LTEFDD_DRXOFFCHIP2_BAND4_DMBOC1, 
  WTR2965_LTEFDD_DRXOFFCHIP2_BAND10_DMBOC1, 
  WTR2965_LTEFDD_DRXOFFCHIP2_BAND66_DMBOC1, 
  WTR2965_LTEFDD_DRXOFFCHIP2_BAND11_DMBOC1, 
  WTR2965_LTEFDD_DRXOFFCHIP2_BAND21_DMBOC1, 
  WTR2965_LTEFDD_DRXOFFCHIP2_BAND2_DMBOC2, 
  WTR2965_LTEFDD_DRXOFFCHIP2_BAND25_DMBOC2, 
  WTR2965_LTEFDD_DRXOFFCHIP2_BAND3_DMBOC2, 
  WTR2965_LTEFDD_DRXOFFCHIP2_BAND9_DMBOC2, 
  WTR2965_LTEFDD_DRXOFFCHIP2_BAND1_DMBOC3, 
  WTR2965_LTEFDD_DRXOFFCHIP2_BAND3_DMBOC3, 
  WTR2965_LTEFDD_DRXOFFCHIP2_BAND9_DMBOC3, 
  WTR2965_LTEFDD_DRXOFFCHIP2_BAND4_DMBOC3, 
  WTR2965_LTEFDD_DRXOFFCHIP2_BAND10_DMBOC3, 
  WTR2965_LTEFDD_DRXOFFCHIP2_BAND66_DMBOC3, 
  WTR2965_LTEFDD_DRXOFFCHIP2_BAND30_DHBOC1, 
  WTR2965_LTEFDD_DRXOFFCHIP2_BAND7_DHBOC2, 
  WTR2965_LTEFDD_DRXOFFCHIP2_BAND32_DMBOC1, 
  WTR2965_LTEFDD_PRXLGY1_BAND5_PLB1, 
  WTR2965_LTEFDD_PRXLGY1_BAND5_PLBCG1, 
  WTR2965_LTEFDD_PRXLGY1_BAND6_PLB1, 
  WTR2965_LTEFDD_PRXLGY1_BAND18_PLB1, 
  WTR2965_LTEFDD_PRXLGY1_BAND19_PLB1, 
  WTR2965_LTEFDD_PRXLGY1_BAND8_PLB1, 
  WTR2965_LTEFDD_PRXLGY1_BAND26_PLB1, 
  WTR2965_LTEFDD_PRXLGY1_BAND27_PLB1, 
  WTR2965_LTEFDD_PRXLGY1_BAND12_PLB2, 
  WTR2965_LTEFDD_PRXLGY1_BAND17_PLB2, 
  WTR2965_LTEFDD_PRXLGY1_BAND13_PLB2, 
  WTR2965_LTEFDD_PRXLGY1_BAND14_PLB2, 
  WTR2965_LTEFDD_PRXLGY1_BAND20_PLB2, 
  WTR2965_LTEFDD_PRXLGY1_RESERVED_0, 
  WTR2965_LTEFDD_PRXLGY1_RESERVED_1, 
  WTR2965_LTEFDD_PRXLGY1_BAND28_PLB2, 
  WTR2965_LTEFDD_PRXLGY1_BAND5_PLB3, 
  WTR2965_LTEFDD_PRXLGY1_BAND5_PLBCG3, 
  WTR2965_LTEFDD_PRXLGY1_BAND6_PLB3, 
  WTR2965_LTEFDD_PRXLGY1_BAND18_PLB3, 
  WTR2965_LTEFDD_PRXLGY1_BAND19_PLB3, 
  WTR2965_LTEFDD_PRXLGY1_BAND8_PLB3, 
  WTR2965_LTEFDD_PRXLGY1_BAND13_PLB3, 
  WTR2965_LTEFDD_PRXLGY1_BAND14_PLB3, 
  WTR2965_LTEFDD_PRXLGY1_BAND20_PLB3, 
  WTR2965_LTEFDD_PRXLGY1_BAND26_PLB3, 
  WTR2965_LTEFDD_PRXLGY1_BAND27_PLB3, 
  WTR2965_LTEFDD_PRXLGY1_BAND28_PLB3, 
  WTR2965_LTEFDD_PRXLGY1_BAND29_PLB3, 
  WTR2965_LTEFDD_PRXLGY1_BAND29_PLB2, 
  WTR2965_LTEFDD_PRXLGY1_BAND2_PMB1, 
  WTR2965_LTEFDD_PRXLGY1_BAND25_PMB1, 
  WTR2965_LTEFDD_PRXLGY1_BAND2_PMBCG1, 
  WTR2965_LTEFDD_PRXLGY1_BAND25_PMBCG1, 
  WTR2965_LTEFDD_PRXLGY1_BAND3_PMB1, 
  WTR2965_LTEFDD_PRXLGY1_BAND9_PMB1, 
  WTR2965_LTEFDD_PRXLGY1_BAND4_PMB1, 
  WTR2965_LTEFDD_PRXLGY1_BAND10_PMB1, 
  WTR2965_LTEFDD_PRXLGY1_BAND66_PMB1, 
  WTR2965_LTEFDD_PRXLGY1_BAND4_PMBCG1, 
  WTR2965_LTEFDD_PRXLGY1_BAND10_PMBCG1, 
  WTR2965_LTEFDD_PRXLGY1_BAND66_PMBCG1, 
  WTR2965_LTEFDD_PRXLGY1_BAND11_PMB1, 
  WTR2965_LTEFDD_PRXLGY1_BAND21_PMB1, 
  WTR2965_LTEFDD_PRXLGY1_BAND2_PMB2, 
  WTR2965_LTEFDD_PRXLGY1_BAND25_PMB2, 
  WTR2965_LTEFDD_PRXLGY1_BAND2_PMBCG2, 
  WTR2965_LTEFDD_PRXLGY1_BAND25_PMBCG2, 
  WTR2965_LTEFDD_PRXLGY1_BAND3_PMB2, 
  WTR2965_LTEFDD_PRXLGY1_BAND9_PMB2, 
  WTR2965_LTEFDD_PRXLGY1_BAND3_PMBCG2, 
  WTR2965_LTEFDD_PRXLGY1_BAND9_PMBCG2, 
  WTR2965_LTEFDD_PRXLGY1_BAND1_PMB3, 
  WTR2965_LTEFDD_PRXLGY1_BAND1_PMBCG3, 
  WTR2965_LTEFDD_PRXLGY1_BAND3_PMB3, 
  WTR2965_LTEFDD_PRXLGY1_BAND9_PMB3, 
  WTR2965_LTEFDD_PRXLGY1_BAND3_PMBCG3, 
  WTR2965_LTEFDD_PRXLGY1_BAND9_PMBCG3, 
  WTR2965_LTEFDD_PRXLGY1_BAND4_PMB3, 
  WTR2965_LTEFDD_PRXLGY1_BAND10_PMB3, 
  WTR2965_LTEFDD_PRXLGY1_BAND66_PMB3, 
  WTR2965_LTEFDD_PRXLGY1_BAND4_PMBCG3, 
  WTR2965_LTEFDD_PRXLGY1_BAND10_PMBCG3, 
  WTR2965_LTEFDD_PRXLGY1_BAND66_PMBCG3, 
  WTR2965_LTEFDD_PRXLGY1_RESERVED_2, 
  WTR2965_LTEFDD_PRXLGY1_BAND30_PHB1, 
  WTR2965_LTEFDD_PRXLGY1_BAND7_PHB2, 
  WTR2965_LTEFDD_PRXLGY1_BAND7_PHBCG2, 
  WTR2965_LTEFDD_PRXLGY1_BAND32_PMB1, 
  WTR2965_LTEFDD_PRXLGY2_BAND2_PMB1, 
  WTR2965_LTEFDD_PRXLGY2_BAND25_PMB1, 
  WTR2965_LTEFDD_PRXLGY2_BAND2_PMBCG1, 
  WTR2965_LTEFDD_PRXLGY2_BAND25_PMBCG1, 
  WTR2965_LTEFDD_PRXLGY2_BAND4_PMB1, 
  WTR2965_LTEFDD_PRXLGY2_BAND10_PMB1, 
  WTR2965_LTEFDD_PRXLGY2_BAND66_PMB1, 
  WTR2965_LTEFDD_PRXLGY2_BAND4_PMBCG1, 
  WTR2965_LTEFDD_PRXLGY2_BAND10_PMBCG1, 
  WTR2965_LTEFDD_PRXLGY2_BAND66_PMBCG1, 
  WTR2965_LTEFDD_PRXLGY2_BAND11_PMB1, 
  WTR2965_LTEFDD_PRXLGY2_BAND21_PMB1, 
  WTR2965_LTEFDD_PRXLGY2_BAND11_PMBCG1, 
  WTR2965_LTEFDD_PRXLGY2_BAND21_PMBCG1, 
  WTR2965_LTEFDD_PRXLGY2_BAND2_PMB2, 
  WTR2965_LTEFDD_PRXLGY2_BAND25_PMB2, 
  WTR2965_LTEFDD_PRXLGY2_BAND2_PMBCG2, 
  WTR2965_LTEFDD_PRXLGY2_BAND25_PMBCG2, 
  WTR2965_LTEFDD_PRXLGY2_BAND3_PMB2, 
  WTR2965_LTEFDD_PRXLGY2_BAND9_PMB2, 
  WTR2965_LTEFDD_PRXLGY2_BAND3_PMBCG2, 
  WTR2965_LTEFDD_PRXLGY2_BAND9_PMBCG2, 
  WTR2965_LTEFDD_PRXLGY2_BAND1_PMB3, 
  WTR2965_LTEFDD_PRXLGY2_BAND1_PMBCG3, 
  WTR2965_LTEFDD_PRXLGY2_BAND3_PMB3, 
  WTR2965_LTEFDD_PRXLGY2_BAND9_PMB3, 
  WTR2965_LTEFDD_PRXLGY2_BAND3_PMBCG3, 
  WTR2965_LTEFDD_PRXLGY2_BAND9_PMBCG3, 
  WTR2965_LTEFDD_PRXLGY2_BAND4_PMB3, 
  WTR2965_LTEFDD_PRXLGY2_BAND10_PMB3, 
  WTR2965_LTEFDD_PRXLGY2_BAND66_PMB3, 
  WTR2965_LTEFDD_PRXLGY2_BAND4_PMBCG3, 
  WTR2965_LTEFDD_PRXLGY2_BAND10_PMBCG3, 
  WTR2965_LTEFDD_PRXLGY2_BAND66_PMBCG3, 
  WTR2965_LTEFDD_PRXLGY2_BAND30_PHB1, 
  WTR2965_LTEFDD_PRXLGY2_BAND30_PHBCG1, 
  WTR2965_LTEFDD_PRXLGY2_BAND7_PHB2, 
  WTR2965_LTEFDD_PRXLGY2_BAND7_PHBCG2, 
  WTR2965_LTEFDD_PRXLGY2_BAND32_PMB1, 
  WTR2965_LTEFDD_PRXLGY2_BAND32_PMBCG1, 
  WTR2965_LTEFDD_PRXOFFCHIP_BAND5_PLBOC1, 
  WTR2965_LTEFDD_PRXOFFCHIP_BAND5_PLBOC3, 
  WTR2965_LTEFDD_PRXOFFCHIP_BAND2_PMBOC1, 
  WTR2965_LTEFDD_PRXOFFCHIP_BAND25_PMBOC1, 
  WTR2965_LTEFDD_PRXOFFCHIP_BAND4_PMBOC1, 
  WTR2965_LTEFDD_PRXOFFCHIP_BAND10_PMBOC1, 
  WTR2965_LTEFDD_PRXOFFCHIP_BAND66_PMBOC1, 
  WTR2965_LTEFDD_PRXOFFCHIP_BAND2_PMBOC2, 
  WTR2965_LTEFDD_PRXOFFCHIP_BAND25_PMBOC2, 
  WTR2965_LTEFDD_PRXOFFCHIP_BAND3_PMBOC2, 
  WTR2965_LTEFDD_PRXOFFCHIP_BAND9_PMBOC2, 
  WTR2965_LTEFDD_PRXOFFCHIP_BAND1_PMBOC3, 
  WTR2965_LTEFDD_PRXOFFCHIP_BAND3_PMBOC3, 
  WTR2965_LTEFDD_PRXOFFCHIP_BAND9_PMBOC3, 
  WTR2965_LTEFDD_PRXOFFCHIP_BAND4_PMBOC3, 
  WTR2965_LTEFDD_PRXOFFCHIP_BAND10_PMBOC3, 
  WTR2965_LTEFDD_PRXOFFCHIP_BAND66_PMBOC3, 
  WTR2965_LTEFDD_PRXOFFCHIP_BAND7_PHBOC2, 
  WTR2965_LTEFDD_PRXOFFCHIP2_BAND2_PMBOC1, 
  WTR2965_LTEFDD_PRXOFFCHIP2_BAND25_PMBOC1, 
  WTR2965_LTEFDD_PRXOFFCHIP2_BAND4_PMBOC1, 
  WTR2965_LTEFDD_PRXOFFCHIP2_BAND10_PMBOC1, 
  WTR2965_LTEFDD_PRXOFFCHIP2_BAND66_PMBOC1, 
  WTR2965_LTEFDD_PRXOFFCHIP2_BAND11_PMBOC1, 
  WTR2965_LTEFDD_PRXOFFCHIP2_BAND21_PMBOC1, 
  WTR2965_LTEFDD_PRXOFFCHIP2_BAND2_PMBOC2, 
  WTR2965_LTEFDD_PRXOFFCHIP2_BAND25_PMBOC2, 
  WTR2965_LTEFDD_PRXOFFCHIP2_BAND3_PMBOC2, 
  WTR2965_LTEFDD_PRXOFFCHIP2_BAND9_PMBOC2, 
  WTR2965_LTEFDD_PRXOFFCHIP2_BAND1_PMBOC3, 
  WTR2965_LTEFDD_PRXOFFCHIP2_BAND3_PMBOC3, 
  WTR2965_LTEFDD_PRXOFFCHIP2_BAND9_PMBOC3, 
  WTR2965_LTEFDD_PRXOFFCHIP2_BAND4_PMBOC3, 
  WTR2965_LTEFDD_PRXOFFCHIP2_BAND10_PMBOC3, 
  WTR2965_LTEFDD_PRXOFFCHIP2_BAND66_PMBOC3, 
  WTR2965_LTEFDD_PRXOFFCHIP2_BAND30_PHBOC1, 
  WTR2965_LTEFDD_PRXOFFCHIP2_BAND7_PHBOC2, 
  WTR2965_LTEFDD_PRXOFFCHIP2_BAND32_PMBOC1, 
  WTR2965_LTEFDD_RX_BAND_NUM, 
  WTR2965_LTEFDD_RX_BAND_INVALID, 
} wtr2965_ltefdd_rx_port_data_type;

/*----------------------------------------------------------------------------*/
/*!
   It defines the WTR2965 ltefdd_tx_port enum.
*/
typedef enum 
{
  WTR2965_LTEFDD_TX_BAND8_THMLB1, 
  WTR2965_LTEFDD_TXWSAW_BAND8_THMLB1, 
  WTR2965_LTEFDD_TX_BAND11_THMLB1, 
  WTR2965_LTEFDD_TX_BAND21_THMLB1, 
  WTR2965_LTEFDD_TXWSAW_BAND11_THMLB1, 
  WTR2965_LTEFDD_TXWSAW_BAND21_THMLB1, 
  WTR2965_LTEFDD_TX_BAND12_THMLB1, 
  WTR2965_LTEFDD_TX_BAND17_THMLB1, 
  WTR2965_LTEFDD_TXWSAW_BAND12_THMLB1, 
  WTR2965_LTEFDD_TXWSAW_BAND17_THMLB1, 
  WTR2965_LTEFDD_TX_BAND13_THMLB1, 
  WTR2965_LTEFDD_TXWSAW_BAND13_THMLB1, 
  WTR2965_LTEFDD_TX_BAND14_THMLB1, 
  WTR2965_LTEFDD_TXWSAW_BAND14_THMLB1, 
  WTR2965_LTEFDD_TX_BAND5_THMLB2, 
  WTR2965_LTEFDD_TXWSAW_BAND5_THMLB2, 
  WTR2965_LTEFDD_TX_BAND6_THMLB2, 
  WTR2965_LTEFDD_TX_BAND18_THMLB2, 
  WTR2965_LTEFDD_TX_BAND19_THMLB2, 
  WTR2965_LTEFDD_TXWSAW_BAND6_THMLB2, 
  WTR2965_LTEFDD_TXWSAW_BAND18_THMLB2, 
  WTR2965_LTEFDD_TXWSAW_BAND19_THMLB2, 
  WTR2965_LTEFDD_TX_BAND8_THMLB2, 
  WTR2965_LTEFDD_TXWSAW_BAND8_THMLB2, 
  WTR2965_LTEFDD_TX_BAND20_THMLB2, 
  WTR2965_LTEFDD_TXWSAW_BAND20_THMLB2, 
  WTR2965_LTEFDD_TX_BAND26_THMLB2, 
  WTR2965_LTEFDD_TX_BAND27_THMLB2, 
  WTR2965_LTEFDD_TXWSAW_BAND26_THMLB2, 
  WTR2965_LTEFDD_TXWSAW_BAND27_THMLB2, 
  WTR2965_LTEFDD_TX_BAND28_THMLB1, 
  WTR2965_LTEFDD_TXWSAW_BAND28_THMLB1, 
  WTR2965_LTEFDD_TX_BAND28_THMLB2, 
  WTR2965_LTEFDD_TXWSAW_BAND28_THMLB2, 
  WTR2965_LTEFDD_TX_BAND7_THMLB3, 
  WTR2965_LTEFDD_TXWSAW_BAND7_THMLB3, 
  WTR2965_LTEFDD_TX_BAND30_THMLB3, 
  WTR2965_LTEFDD_TXWSAW_BAND30_THMLB3, 
  WTR2965_LTEFDD_TX_BAND1_THMLB4, 
  WTR2965_LTEFDD_TXWSAW_BAND1_THMLB4, 
  WTR2965_LTEFDD_TX_BAND2_THMLB4, 
  WTR2965_LTEFDD_TX_BAND25_THMLB4, 
  WTR2965_LTEFDD_TXWSAW_BAND2_THMLB4, 
  WTR2965_LTEFDD_TXWSAW_BAND25_THMLB4, 
  WTR2965_LTEFDD_TX_BAND3_THMLB4, 
  WTR2965_LTEFDD_TX_BAND9_THMLB4, 
  WTR2965_LTEFDD_TXWSAW_BAND3_THMLB4, 
  WTR2965_LTEFDD_TXWSAW_BAND9_THMLB4, 
  WTR2965_LTEFDD_TX_BAND4_THMLB4, 
  WTR2965_LTEFDD_TX_BAND10_THMLB4, 
  WTR2965_LTEFDD_TX_BAND66_THMLB4, 
  WTR2965_LTEFDD_TXWSAW_BAND4_THMLB4, 
  WTR2965_LTEFDD_TXWSAW_BAND10_THMLB4, 
  WTR2965_LTEFDD_TXWSAW_BAND66_THMLB4, 
  WTR2965_LTEFDD_TX_BAND11_THMLB4, 
  WTR2965_LTEFDD_TX_BAND21_THMLB4, 
  WTR2965_LTEFDD_TXWSAW_BAND11_THMLB4, 
  WTR2965_LTEFDD_TXWSAW_BAND21_THMLB4, 
  WTR2965_LTEFDD_TX_BAND23_THMLB4, 
  WTR2965_LTEFDD_TXWSAW_BAND23_THMLB4, 
  WTR2965_LTEFDD_TX_BAND_NUM, 
  WTR2965_LTEFDD_TX_BAND_INVALID, 
} wtr2965_ltefdd_tx_port_data_type;

/*----------------------------------------------------------------------------*/
/*!
   It defines the WTR2965 ltetdd_rx_port enum.
*/
typedef enum 
{
  WTR2965_LTETDD_DRXLGY1_BAND34_DMB1, 
  WTR2965_LTETDD_DRXLGY1_BAND34_DMB2, 
  WTR2965_LTETDD_DRXLGY1_BAND39_DMB1, 
  WTR2965_LTETDD_DRXLGY1_BAND39_DMB2, 
  WTR2965_LTETDD_DRXLGY1_BAND38_DHB1, 
  WTR2965_LTETDD_DRXLGY1_RESERVED_0, 
  WTR2965_LTETDD_DRXLGY1_BAND40_DHB1, 
  WTR2965_LTETDD_DRXLGY1_BAND41_DHB1, 
  WTR2965_LTETDD_DRXLGY1_BAND41_DHBCG1, 
  WTR2965_LTETDD_DRXLGY1_BAND38_DHB2, 
  WTR2965_LTETDD_DRXLGY1_BAND38_DHBCG2, 
  WTR2965_LTETDD_DRXLGY1_BAND41_DHB2, 
  WTR2965_LTETDD_DRXLGY1_BAND41_DHBCG2, 
  WTR2965_LTETDD_DRXLGY2_BAND39_DMB1, 
  WTR2965_LTETDD_DRXLGY2_BAND39_DMBCG1, 
  WTR2965_LTETDD_DRXLGY2_BAND39_DMB2, 
  WTR2965_LTETDD_DRXLGY2_BAND39_DMBCG2, 
  WTR2965_LTETDD_DRXLGY2_BAND38_DHB1, 
  WTR2965_LTETDD_DRXLGY2_BAND38_DHBCG1, 
  WTR2965_LTETDD_DRXLGY2_BAND40_DHB1, 
  WTR2965_LTETDD_DRXLGY2_BAND40_DHBCG1, 
  WTR2965_LTETDD_DRXLGY2_BAND41_DHB1, 
  WTR2965_LTETDD_DRXLGY2_BAND41_DHBCG1, 
  WTR2965_LTETDD_DRXLGY2_BAND38_DHB2, 
  WTR2965_LTETDD_DRXLGY2_BAND38_DHBCG2, 
  WTR2965_LTETDD_DRXLGY2_BAND41_DHB2, 
  WTR2965_LTETDD_DRXLGY2_BAND41_DHBCG2, 
  WTR2965_LTETDD_DRXOFFCHIP_BAND41_DHBOC1, 
  WTR2965_LTETDD_DRXOFFCHIP_BAND38_DHBOC2, 
  WTR2965_LTETDD_DRXOFFCHIP_BAND41_DHBOC2, 
  WTR2965_LTETDD_DRXOFFCHIP2_BAND39_DMBOC1, 
  WTR2965_LTETDD_DRXOFFCHIP2_BAND39_DMBOC2, 
  WTR2965_LTETDD_DRXOFFCHIP2_BAND38_DHBOC1, 
  WTR2965_LTETDD_DRXOFFCHIP2_BAND40_DHBOC1, 
  WTR2965_LTETDD_DRXOFFCHIP2_BAND41_DHBOC1, 
  WTR2965_LTETDD_DRXOFFCHIP2_BAND38_DHBOC2, 
  WTR2965_LTETDD_DRXOFFCHIP2_BAND41_DHBOC2, 
  WTR2965_LTETDD_PRXLGY1_BAND34_PMB1, 
  WTR2965_LTETDD_PRXLGY1_BAND34_PMB2, 
  WTR2965_LTETDD_PRXLGY1_BAND39_PMB1, 
  WTR2965_LTETDD_PRXLGY1_BAND39_PMB2, 
  WTR2965_LTETDD_PRXLGY1_BAND38_PHB1, 
  WTR2965_LTETDD_PRXLGY1_RESERVED_0, 
  WTR2965_LTETDD_PRXLGY1_BAND40_PHB1, 
  WTR2965_LTETDD_PRXLGY1_BAND41_PHB1, 
  WTR2965_LTETDD_PRXLGY1_BAND41_PHBCG1, 
  WTR2965_LTETDD_PRXLGY1_BAND38_PHB2, 
  WTR2965_LTETDD_PRXLGY1_BAND38_PHBCG2, 
  WTR2965_LTETDD_PRXLGY1_BAND41_PHB2, 
  WTR2965_LTETDD_PRXLGY1_BAND41_PHBCG2, 
  WTR2965_LTETDD_PRXLGY1SAWLESS_BAND39_PMB1, 
  WTR2965_LTETDD_PRXLGY2_BAND39_PMB1, 
  WTR2965_LTETDD_PRXLGY2_BAND39_PMBCG1, 
  WTR2965_LTETDD_PRXLGY2_BAND39_PMB2, 
  WTR2965_LTETDD_PRXLGY2_BAND39_PMBCG2, 
  WTR2965_LTETDD_PRXLGY2_BAND38_PHB1, 
  WTR2965_LTETDD_PRXLGY2_BAND38_PHBCG1, 
  WTR2965_LTETDD_PRXLGY2_BAND40_PHB1, 
  WTR2965_LTETDD_PRXLGY2_BAND40_PHBCG1, 
  WTR2965_LTETDD_PRXLGY2_BAND41_PHB1, 
  WTR2965_LTETDD_PRXLGY2_BAND41_PHBCG1, 
  WTR2965_LTETDD_PRXLGY2_BAND38_PHB2, 
  WTR2965_LTETDD_PRXLGY2_BAND38_PHBCG2, 
  WTR2965_LTETDD_PRXLGY2_BAND41_PHB2, 
  WTR2965_LTETDD_PRXLGY2_BAND41_PHBCG2, 
  WTR2965_LTETDD_PRXOFFCHIP_BAND41_PHBOC1, 
  WTR2965_LTETDD_PRXOFFCHIP_BAND38_PHBOC2, 
  WTR2965_LTETDD_PRXOFFCHIP_BAND41_PHBOC2, 
  WTR2965_LTETDD_PRXOFFCHIP2_BAND39_PMBOC1, 
  WTR2965_LTETDD_PRXOFFCHIP2_BAND39_PMBOC2, 
  WTR2965_LTETDD_PRXOFFCHIP2_BAND38_PHBOC1, 
  WTR2965_LTETDD_PRXOFFCHIP2_BAND40_PHBOC1, 
  WTR2965_LTETDD_PRXOFFCHIP2_BAND41_PHBOC1, 
  WTR2965_LTETDD_PRXOFFCHIP2_BAND38_PHBOC2, 
  WTR2965_LTETDD_PRXOFFCHIP2_BAND41_PHBOC2, 
  WTR2965_LTETDD_RX_BAND_NUM, 
  WTR2965_LTETDD_RX_BAND_INVALID, 
} wtr2965_ltetdd_rx_port_data_type;

/*----------------------------------------------------------------------------*/
/*!
   It defines the WTR2965 ltetdd_tx_port enum.
*/
typedef enum 
{
  WTR2965_LTETDD_TX_BAND38_THMLB3, 
  WTR2965_LTETDD_TXWSAW_BAND38_THMLB3, 
  WTR2965_LTETDD_TX_BAND40_THMLB3, 
  WTR2965_LTETDD_TXWSAW_BAND40_THMLB3, 
  WTR2965_LTETDD_TX_BAND41_THMLB3, 
  WTR2965_LTETDD_TXWSAW_BAND41_THMLB3, 
  WTR2965_LTETDD_TX_BAND39_THMLB1, 
  WTR2965_LTETDD_TXWSAW_BAND39_THMLB1, 
  WTR2965_LTETDD_TX_BAND34_THMLB1, 
  WTR2965_LTETDD_TXWSAW_BAND34_THMLB1, 
  WTR2965_LTETDD_TX_BAND39_THMLB4, 
  WTR2965_LTETDD_TXWSAW_BAND39_THMLB4, 
  WTR2965_LTETDD_TX_BAND34_THMLB4, 
  WTR2965_LTETDD_TXWSAW_BAND34_THMLB4, 
  WTR2965_LTETDD_TX_BAND_NUM, 
  WTR2965_LTETDD_TX_BAND_INVALID, 
} wtr2965_ltetdd_tx_port_data_type;

/*----------------------------------------------------------------------------*/
/*!
   It defines the WTR2965 tdscdma_rx_port enum.
*/
typedef enum 
{
  WTR2965_TDSCDMA_DRXLGY1_BAND34_DMB1, 
  WTR2965_TDSCDMA_DRXLGY1_BAND34_DMB2, 
  WTR2965_TDSCDMA_DRXLGY1_BAND39_DMB1, 
  WTR2965_TDSCDMA_DRXLGY1_BAND39_DMB2, 
  WTR2965_TDSCDMA_PRXLGY1_BAND34_PMB1, 
  WTR2965_TDSCDMA_PRXLGY1_BAND34_PMB2, 
  WTR2965_TDSCDMA_PRXLGY1_BAND39_PMB1, 
  WTR2965_TDSCDMA_PRXLGY1_BAND39_PMB2, 
  WTR2965_TDSCDMA_PRXLGY1SAWLESS_BAND34_PMB1, 
  WTR2965_TDSCDMA_PRXLGY1SAWLESS_BAND39_PMB1, 
  WTR2965_TDSCDMA_RX_BAND_NUM, 
  WTR2965_TDSCDMA_RX_BAND_INVALID, 
} wtr2965_tdscdma_rx_port_data_type;

/*----------------------------------------------------------------------------*/
/*!
   It defines the WTR2965 tdscdma_tx_port enum.
*/
typedef enum 
{
  WTR2965_TDSCDMA_TX_BAND34_THMLB1, 
  WTR2965_TDSCDMA_TXWSAW_BAND34_THMLB1, 
  WTR2965_TDSCDMA_TX_BAND34_THMLB4, 
  WTR2965_TDSCDMA_TXWSAW_BAND34_THMLB4, 
  WTR2965_TDSCDMA_TX_BAND39_THMLB1, 
  WTR2965_TDSCDMA_TXWSAW_BAND39_THMLB1, 
  WTR2965_TDSCDMA_TX_BAND39_THMLB4, 
  WTR2965_TDSCDMA_TXWSAW_BAND39_THMLB4, 
  WTR2965_TDSCDMA_TX_BAND_NUM, 
  WTR2965_TDSCDMA_TX_BAND_INVALID, 
} wtr2965_tdscdma_tx_port_data_type;

/*----------------------------------------------------------------------------*/
/*!
   It defines the WTR2965 wcdma_rx_port enum.
*/
typedef enum 
{
  WTR2965_WCDMA_DRXLGY1_BAND5_DLB1, 
  WTR2965_WCDMA_DRXLGY1_BAND6_DLB1, 
  WTR2965_WCDMA_DRXLGY1_BAND19_DLB1, 
  WTR2965_WCDMA_DRXLGY1_BAND8_DLB1, 
  WTR2965_WCDMA_DRXLGY1_BAND5_DLB3, 
  WTR2965_WCDMA_DRXLGY1_BAND8_DLB3, 
  WTR2965_WCDMA_DRXLGY1_BAND2_DMB1, 
  WTR2965_WCDMA_DRXLGY1_BAND25_DMB1, 
  WTR2965_WCDMA_DRXLGY1_RESERVED_0, 
  WTR2965_WCDMA_DRXLGY1_RESERVED_1, 
  WTR2965_WCDMA_DRXLGY1_BAND11_DMB1, 
  WTR2965_WCDMA_DRXLGY1_BAND2_DMB2, 
  WTR2965_WCDMA_DRXLGY1_BAND25_DMB2, 
  WTR2965_WCDMA_DRXLGY1_BAND3_DMB2, 
  WTR2965_WCDMA_DRXLGY1_BAND9_DMB2, 
  WTR2965_WCDMA_DRXLGY1_BAND3_DMB3, 
  WTR2965_WCDMA_DRXLGY1_RESERVED_2, 
  WTR2965_WCDMA_DRXLGY1_BAND1_DMB3, 
  WTR2965_WCDMA_DRXLGY1_BAND4_DMB3, 
  WTR2965_WCDMA_DRXLGY1_BAND10_DMB3, 
  WTR2965_WCDMA_DRXLGY1_BAND4_DMB1, 
  WTR2965_WCDMA_DRXLGY1_RESERVED_3, 
  WTR2965_WCDMA_PRXLGY1_BAND5_PLB1, 
  WTR2965_WCDMA_PRXLGY1_BAND6_PLB1, 
  WTR2965_WCDMA_PRXLGY1_BAND19_PLB1, 
  WTR2965_WCDMA_PRXLGY1_BAND8_PLB1, 
  WTR2965_WCDMA_PRXLGY1_BAND5_PLB3, 
  WTR2965_WCDMA_PRXLGY1_BAND8_PLB3, 
  WTR2965_WCDMA_PRXLGY1_BAND2_PMB1, 
  WTR2965_WCDMA_PRXLGY1_BAND25_PMB1, 
  WTR2965_WCDMA_PRXLGY1_RESERVED_0, 
  WTR2965_WCDMA_PRXLGY1_RESERVED_1, 
  WTR2965_WCDMA_PRXLGY1_BAND11_PMB1, 
  WTR2965_WCDMA_PRXLGY1_BAND2_PMB2, 
  WTR2965_WCDMA_PRXLGY1_BAND25_PMB2, 
  WTR2965_WCDMA_PRXLGY1_BAND3_PMB2, 
  WTR2965_WCDMA_PRXLGY1_BAND9_PMB2, 
  WTR2965_WCDMA_PRXLGY1_BAND3_PMB3, 
  WTR2965_WCDMA_PRXLGY1_RESERVED_2, 
  WTR2965_WCDMA_PRXLGY1_BAND1_PMB3, 
  WTR2965_WCDMA_PRXLGY1_BAND4_PMB3, 
  WTR2965_WCDMA_PRXLGY1_BAND10_PMB3, 
  WTR2965_WCDMA_PRXLGY1_BAND4_PMB1, 
  WTR2965_WCDMA_PRXLGY1_RESERVED_3, 
  WTR2965_WCDMA_RX_BAND_NUM, 
  WTR2965_WCDMA_RX_BAND_INVALID, 
} wtr2965_wcdma_rx_port_data_type;

/*----------------------------------------------------------------------------*/
/*!
   It defines the WTR2965 wcdma_tx_port enum.
*/
typedef enum 
{
  WTR2965_WCDMA_TX_BAND8_THMLB1, 
  WTR2965_WCDMA_TXWSAW_BAND8_THMLB1, 
  WTR2965_WCDMA_TX_BAND11_THMLB1, 
  WTR2965_WCDMA_TXWSAW_BAND11_THMLB1, 
  WTR2965_WCDMA_TX_BAND5_THMLB2, 
  WTR2965_WCDMA_TXWSAW_BAND5_THMLB2, 
  WTR2965_WCDMA_TX_BAND6_THMLB2, 
  WTR2965_WCDMA_TX_BAND19_THMLB2, 
  WTR2965_WCDMA_TXWSAW_BAND6_THMLB2, 
  WTR2965_WCDMA_TXWSAW_BAND19_THMLB2, 
  WTR2965_WCDMA_TX_BAND8_THMLB2, 
  WTR2965_WCDMA_TXWSAW_BAND8_THMLB2, 
  WTR2965_WCDMA_TX_BAND1_THMLB4, 
  WTR2965_WCDMA_TXWSAW_BAND1_THMLB4, 
  WTR2965_WCDMA_TX_BAND2_THMLB4, 
  WTR2965_WCDMA_TX_BAND25_THMLB4, 
  WTR2965_WCDMA_TXWSAW_BAND2_THMLB4, 
  WTR2965_WCDMA_TXWSAW_BAND25_THMLB4, 
  WTR2965_WCDMA_TX_BAND3_THMLB4, 
  WTR2965_WCDMA_TX_BAND9_THMLB4, 
  WTR2965_WCDMA_TXWSAW_BAND3_THMLB4, 
  WTR2965_WCDMA_TXWSAW_BAND9_THMLB4, 
  WTR2965_WCDMA_TX_BAND4_THMLB4, 
  WTR2965_WCDMA_TX_BAND10_THMLB4, 
  WTR2965_WCDMA_TXWSAW_BAND4_THMLB4, 
  WTR2965_WCDMA_TXWSAW_BAND10_THMLB4, 
  WTR2965_WCDMA_TX_BAND11_THMLB4, 
  WTR2965_WCDMA_TXWSAW_BAND11_THMLB4, 
  WTR2965_WCDMA_TX_BAND_NUM, 
  WTR2965_WCDMA_TX_BAND_INVALID, 
} wtr2965_wcdma_tx_port_data_type;

/*----------------------------------------------------------------------------*/
/*!
   It defines the WTR2965 lut_pwr enum.
*/
typedef enum 
{
  WTR2965_HP_LUT_TYPE, 
  WTR2965_MP_LUT_TYPE, 
  WTR2965_LP_LUT_TYPE, 
  WTR2965_LUT_PWR_NUM, 
  WTR2965_LUT_PWR_INVALID, 
} wtr2965_lut_pwr_data_type;

/*----------------------------------------------------------------------------*/
/*!
   It defines the WTR2965 fbrx_attn_mode enum.
*/
typedef enum 
{
  WTR2965_FBRX_LOW_ATTN_MODE, 
  WTR2965_FBRX_HIGH_ATTN_MODE, 
  WTR2965_FBRX_ATTN_NUM, 
  WTR2965_FBRX_ATTN_INVALID, 
  WTR2965_FBRX_ATTN_DEFAULT = WTR2965_FBRX_LOW_ATTN_MODE, 
} wtr2965_fbrx_attn_mode_data_type;

/*----------------------------------------------------------------------------*/
/*!
   It defines the WTR2965 wcdma_rx_gain_list enum.
*/
typedef enum 
{
  WTR2965_WCDMA_RX_G0, 
  WTR2965_WCDMA_RX_G1, 
  WTR2965_WCDMA_RX_G2, 
  WTR2965_WCDMA_RX_G3, 
  WTR2965_WCDMA_RX_G4, 
  WTR2965_WCDMA_RX_G5, 
  WTR2965_WCDMA_RX_GAIN_NUM, 
  WTR2965_WCDMA_RX_GAIN_INVALID, 
} wtr2965_wcdma_rx_gain_list_data_type;

/*----------------------------------------------------------------------------*/
/*!
   It defines the WTR2965 cdma_rx_gain_list enum.
*/
typedef enum 
{
  WTR2965_CDMA_RX_G0, 
  WTR2965_CDMA_RX_G1, 
  WTR2965_CDMA_RX_G2, 
  WTR2965_CDMA_RX_G3, 
  WTR2965_CDMA_RX_G4, 
  WTR2965_CDMA_RX_G5, 
  WTR2965_CDMA_RX_GAIN_NUM, 
  WTR2965_CDMA_RX_GAIN_INVALID, 
} wtr2965_cdma_rx_gain_list_data_type;

/*----------------------------------------------------------------------------*/
/*!
   It defines the WTR2965 gsm_rx_gain_list enum.
*/
typedef enum 
{
  WTR2965_GSM_RX_G0, 
  WTR2965_GSM_RX_G1, 
  WTR2965_GSM_RX_G2, 
  WTR2965_GSM_RX_G3, 
  WTR2965_GSM_RX_G4, 
  WTR2965_GSM_RX_G5, 
  WTR2965_GSM_RX_G6, 
  WTR2965_GSM_RX_GAIN_NUM, 
  WTR2965_GSM_RX_GAIN_INVALID, 
} wtr2965_gsm_rx_gain_list_data_type;

/*----------------------------------------------------------------------------*/
/*!
   It defines the WTR2965 tdscdma_rx_gain_list enum.
*/
typedef enum 
{
  WTR2965_TDSCDMA_RX_G0, 
  WTR2965_TDSCDMA_RX_G1, 
  WTR2965_TDSCDMA_RX_G2, 
  WTR2965_TDSCDMA_RX_G3, 
  WTR2965_TDSCDMA_RX_G4, 
  WTR2965_TDSCDMA_RX_G5, 
  WTR2965_TDSCDMA_RX_GAIN_NUM, 
  WTR2965_TDSCDMA_RX_GAIN_INVALID, 
} wtr2965_tdscdma_rx_gain_list_data_type;

/*----------------------------------------------------------------------------*/
/*!
   It defines the WTR2965 ltefdd_rx_gain_list enum.
*/
typedef enum 
{
  WTR2965_LTEFDD_RX_G0, 
  WTR2965_LTEFDD_RX_G1, 
  WTR2965_LTEFDD_RX_G2, 
  WTR2965_LTEFDD_RX_G3, 
  WTR2965_LTEFDD_RX_G4, 
  WTR2965_LTEFDD_RX_G5, 
  WTR2965_LTEFDD_RX_GAIN_NUM, 
  WTR2965_LTEFDD_RX_GAIN_INVALID, 
} wtr2965_ltefdd_rx_gain_list_data_type;

/*----------------------------------------------------------------------------*/
/*!
   It defines the WTR2965 ltetdd_rx_gain_list enum.
*/
typedef enum 
{
  WTR2965_LTETDD_RX_G0, 
  WTR2965_LTETDD_RX_G1, 
  WTR2965_LTETDD_RX_G2, 
  WTR2965_LTETDD_RX_G3, 
  WTR2965_LTETDD_RX_G4, 
  WTR2965_LTETDD_RX_G5, 
  WTR2965_LTETDD_RX_GAIN_NUM, 
  WTR2965_LTETDD_RX_GAIN_INVALID, 
} wtr2965_ltetdd_rx_gain_list_data_type;


#endif /* WTR2965_TYPEDEF_AG_H */

/*! @} */ 
