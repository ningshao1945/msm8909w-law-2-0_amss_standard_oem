#ifndef __APRV2_PL_CONFIG_H__
#define __APRV2_PL_CONFIG_H__

/*
  Copyright (C) 2010-2011, 2013-2014 QUALCOMM Technologies Incorporated.
  All rights reserved.
  Qualcomm Confidential and Proprietary

  $Header: //commercial/MPSS.JO.2.0.c1.4/Main/modem_proc/apr/custom/inc/aprv2_pl_config.h#1 $
  $Author: mplcsds1 $
*/

/*****************************************************************************
 * Defines                                                                   *
 ****************************************************************************/

#ifdef PLATFORM_VUNICORE
#define APRV2_PL_MAX_DOMAIN_ID_V ( APRV2_IDS_DOMAIN_ID_ADSP2_V )
#else
#define APRV2_PL_MAX_DOMAIN_ID_V ( APRV2_IDS_DOMAIN_ID_APPS2_V )
#endif /* PLATFORM_VUNICORE */

#define APRV2_PL_DEFAULT_DOMAIN_ID_V ( APRV2_IDS_DOMAIN_ID_MODEM_V )

#ifdef PLATFORM_VUNICORE
#define APRV2_PL_ROUTING_TABLE_SIZE_ARRAY_V \
  APRV2_RTABLE_DISPATCH_TABLE_SIZE( APRV2_IDS_SERVICE_ID_RESERVED_V,    0 ),  /* RESERVED */ \
  APRV2_RTABLE_DISPATCH_TABLE_SIZE( APRV2_IDS_SERVICE_ID_RESERVED_V,    0 ),  /* SIM */ \
  APRV2_RTABLE_DISPATCH_TABLE_SIZE( APRV2_IDS_SERVICE_ID_RESERVED_V,    0 ),  /* PC */ \
  APRV2_RTABLE_DISPATCH_TABLE_SIZE( APRV2_IDS_SERVICE_ID_MODEM_OEM4_V, 10 ),  /* MODEM */ \
  APRV2_RTABLE_DISPATCH_TABLE_SIZE( APRV2_IDS_SERVICE_ID_ADSP_AFE_HACK_V,  10 ),  /* ADSP */ \
  APRV2_RTABLE_DISPATCH_TABLE_SIZE( APRV2_IDS_SERVICE_ID_RESERVED_V,    0 ),  /* APPS */ \
  APRV2_RTABLE_DISPATCH_TABLE_SIZE( APRV2_IDS_SERVICE_ID_RESERVED_V,    0 ),  /* MODEM2 */ \
  APRV2_RTABLE_DISPATCH_TABLE_SIZE( APRV2_IDS_SERVICE_ID_RESERVED_V,    0 ),  /* APPS2 */ \
  APRV2_RTABLE_DISPATCH_TABLE_SIZE( APRV2_IDS_SERVICE_ID_ADSP2_AFE_ROUTER_V,  10 ),  /* ADSP2 */
#else
#define APRV2_PL_ROUTING_TABLE_SIZE_ARRAY_V \
  APRV2_RTABLE_DISPATCH_TABLE_SIZE( APRV2_IDS_SERVICE_ID_RESERVED_V,    0 ),  /* RESERVED */ \
  APRV2_RTABLE_DISPATCH_TABLE_SIZE( APRV2_IDS_SERVICE_ID_RESERVED_V,    0 ),  /* SIM */ \
  APRV2_RTABLE_DISPATCH_TABLE_SIZE( APRV2_IDS_SERVICE_ID_RESERVED_V,    0 ),  /* PC */ \
  APRV2_RTABLE_DISPATCH_TABLE_SIZE( APRV2_IDS_SERVICE_ID_MODEM_OEM4_V, 10 ),  /* MODEM */ \
  APRV2_RTABLE_DISPATCH_TABLE_SIZE( APRV2_IDS_SERVICE_ID_ADSP_VISM_V,  10 ),  /* ADSP */ \
  APRV2_RTABLE_DISPATCH_TABLE_SIZE( APRV2_IDS_SERVICE_ID_RESERVED_V,    0 ),  /* APPS */ \
  APRV2_RTABLE_DISPATCH_TABLE_SIZE( APRV2_IDS_SERVICE_ID_RESERVED_V,    0 ),  /* MODEM2 */ \
  APRV2_RTABLE_DISPATCH_TABLE_SIZE( APRV2_IDS_SERVICE_ID_RESERVED_V,    0 ),  /* APPS2 */ 
#endif /* PLATFORM_VUNICORE */

#ifdef PLATFORM_VUNICORE
#define APRV2_PL_LOCAL_DNS_ARRAY_V \
  /* Supported entries. */ \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_MODEM_V, APRV2_IDS_SERVICE_ID_RESERVED_V ),        "local.default" }, \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_MODEM_V, APRV2_IDS_SERVICE_ID_ROUTER_V ),          "local.router" }, \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_MODEM_V, APRV2_IDS_SERVICE_ID_TESTCLIENT_V ),      "local.testclient" }, \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_MODEM_V, APRV2_IDS_SERVICE_ID_MODEM_MVS_V ),       "qcom.audio.mvs" }, \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_ADSP_V,  APRV2_IDS_SERVICE_ID_ADSP_CORE_V ),       "qcom.audio.core" }, \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_ADSP_V,  APRV2_IDS_SERVICE_ID_ADSP_AFE_HACK_V ),   "qcom.audio.hack.afe" }, \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_ADSP_V,  APRV2_IDS_SERVICE_ID_ADSP_VSM_V ),        "qcom.audio.vsm" }, \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_ADSP_V,  APRV2_IDS_SERVICE_ID_ADSP_VPM_V ),        "qcom.audio.vpm" }, \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_ADSP_V,  APRV2_IDS_SERVICE_ID_ADSP_ASM_V ),        "qcom.audio.asm" }, \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_ADSP_V,  APRV2_IDS_SERVICE_ID_ADSP_ADM_V ),        "qcom.audio.adm" }, \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_ADSP_V,  APRV2_IDS_SERVICE_ID_ADSP_MVM_V ),        "qcom.audio.mvm" }, \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_ADSP_V,  APRV2_IDS_SERVICE_ID_ADSP_CVS_V ),        "qcom.audio.cvs" }, \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_ADSP_V,  APRV2_IDS_SERVICE_ID_ADSP_CVP_V ),        "qcom.audio.cvp" }, \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_ADSP_V,  APRV2_IDS_SERVICE_ID_ADSP_USM_V ),        "qcom.mm.usm" }, \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_ADSP_V,  APRV2_IDS_SERVICE_ID_ADSP_LSM_V ),        "qcom.audio.lsm" }, \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_ADSP_V,  APRV2_IDS_SERVICE_ID_ADSP_DSF_V ),        "qcom.mm.dsf" }, \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_ADSP_V,  APRV2_IDS_SERVICE_ID_ADSP_VISM_V ),       "qcom.video.vism" }, \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_APPS_V,  APRV2_IDS_SERVICE_ID_APPS_OEM_MW ),       "oem.mw" }, \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_APPS_V,  APRV2_IDS_SERVICE_ID_APPS_OEM_V ),        "oem.toyclient" }, \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_MODEM_V, APRV2_IDS_SERVICE_ID_MODEM_OEM_CM_V ),    "oem.cm" }, \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_MODEM_V, APRV2_IDS_SERVICE_ID_MODEM_OEM_V ),       "oem.toyserver" }, \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_ADSP_V,  APRV2_IDS_SERVICE_ID_ADSP_OEM_V ),        "qcom.audio.testserver" }, \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_ADSP2_V,  APRV2_IDS_SERVICE_ID_ADSP2_AFE_V ),      "qcom.audio.afe" }, \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_ADSP2_V,  APRV2_IDS_SERVICE_ID_ADSP2_AFE_ROUTER_V ),   "qcom.audio.afe.router" }, \
  /* Deprecated entries. */ \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_ADSP_V,  APRV2_IDS_SERVICE_ID_ADSP_CORE_V ),  "qcom.adsp.core" }, \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_ADSP_V,  APRV2_IDS_SERVICE_ID_ADSP_AFE_V ),   "qcom.adsp.afe" }, \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_ADSP_V,  APRV2_IDS_SERVICE_ID_ADSP_VSM_V ),   "qcom.adsp.vsm" }, \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_ADSP_V,  APRV2_IDS_SERVICE_ID_ADSP_VPM_V ),   "qcom.adsp.vpm" }, \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_ADSP_V,  APRV2_IDS_SERVICE_ID_ADSP_ASM_V ),   "qcom.adsp.asm" }, \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_ADSP_V,  APRV2_IDS_SERVICE_ID_ADSP_ADM_V ),   "qcom.adsp.adm" }, \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_APPS_V,  APRV2_IDS_SERVICE_ID_APPS_OEM_MW ),  "qcom.apps.mws" },
#else
#define APRV2_PL_LOCAL_DNS_ARRAY_V \
  /* Supported entries. */ \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_MODEM_V, APRV2_IDS_SERVICE_ID_RESERVED_V ),        "local.default" }, \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_MODEM_V, APRV2_IDS_SERVICE_ID_ROUTER_V ),          "local.router" }, \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_MODEM_V, APRV2_IDS_SERVICE_ID_TESTCLIENT_V ),      "local.testclient" }, \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_MODEM_V, APRV2_IDS_SERVICE_ID_MODEM_MVS_V ),       "qcom.audio.mvs" }, \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_ADSP_V,  APRV2_IDS_SERVICE_ID_ADSP_CORE_V ),       "qcom.audio.core" }, \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_ADSP_V,  APRV2_IDS_SERVICE_ID_ADSP_AFE_V ),        "qcom.audio.afe" }, \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_ADSP_V,  APRV2_IDS_SERVICE_ID_ADSP_VSM_V ),        "qcom.audio.vsm" }, \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_ADSP_V,  APRV2_IDS_SERVICE_ID_ADSP_VPM_V ),        "qcom.audio.vpm" }, \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_ADSP_V,  APRV2_IDS_SERVICE_ID_ADSP_ASM_V ),        "qcom.audio.asm" }, \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_ADSP_V,  APRV2_IDS_SERVICE_ID_ADSP_ADM_V ),        "qcom.audio.adm" }, \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_ADSP_V,  APRV2_IDS_SERVICE_ID_ADSP_MVM_V ),        "qcom.audio.mvm" }, \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_ADSP_V,  APRV2_IDS_SERVICE_ID_ADSP_CVS_V ),        "qcom.audio.cvs" }, \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_ADSP_V,  APRV2_IDS_SERVICE_ID_ADSP_CVP_V ),        "qcom.audio.cvp" }, \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_ADSP_V,  APRV2_IDS_SERVICE_ID_ADSP_USM_V ),        "qcom.mm.usm" }, \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_ADSP_V,  APRV2_IDS_SERVICE_ID_ADSP_LSM_V ),        "qcom.audio.lsm" }, \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_ADSP_V,  APRV2_IDS_SERVICE_ID_ADSP_DSF_V ),        "qcom.mm.dsf" }, \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_ADSP_V,  APRV2_IDS_SERVICE_ID_ADSP_VISM_V ),       "qcom.video.vism" }, \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_APPS_V,  APRV2_IDS_SERVICE_ID_APPS_OEM_MW ),       "oem.mw" }, \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_APPS_V,  APRV2_IDS_SERVICE_ID_APPS_OEM_V ),        "oem.toyclient" }, \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_MODEM_V, APRV2_IDS_SERVICE_ID_MODEM_OEM_CM_V ),    "oem.cm" }, \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_MODEM_V, APRV2_IDS_SERVICE_ID_MODEM_OEM_V ),       "oem.toyserver" }, \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_ADSP_V,  APRV2_IDS_SERVICE_ID_ADSP_OEM_V ),        "qcom.audio.testserver" }, \
  /* Deprecated entries. */ \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_ADSP_V,  APRV2_IDS_SERVICE_ID_ADSP_CORE_V ),  "qcom.adsp.core" }, \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_ADSP_V,  APRV2_IDS_SERVICE_ID_ADSP_AFE_V ),   "qcom.adsp.afe" }, \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_ADSP_V,  APRV2_IDS_SERVICE_ID_ADSP_VSM_V ),   "qcom.adsp.vsm" }, \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_ADSP_V,  APRV2_IDS_SERVICE_ID_ADSP_VPM_V ),   "qcom.adsp.vpm" }, \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_ADSP_V,  APRV2_IDS_SERVICE_ID_ADSP_ASM_V ),   "qcom.adsp.asm" }, \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_ADSP_V,  APRV2_IDS_SERVICE_ID_ADSP_ADM_V ),   "qcom.adsp.adm" }, \
  { APRV2_RTABLE_MAKE_ADDR( APRV2_IDS_DOMAIN_ID_APPS_V,  APRV2_IDS_SERVICE_ID_APPS_OEM_MW ),  "qcom.apps.mws" },
#endif /* PLATFORM_VUNICORE */
/*****************************************************************************
 * Definitions                                                               *
 ****************************************************************************/

#define APRV2_PL_NUM_TOTAL_DOMAINS_V ( APRV2_PL_MAX_DOMAIN_ID_V + 1 )

#endif /*  __APRV2_PL_CONFIG_H__ */

