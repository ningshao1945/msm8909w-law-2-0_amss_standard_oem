#==============================================================================
# Target Build ID Config Script.
#
# Copyright (c) 2010 Qualcomm Technologies Inc.  All Rights Reserved
#==============================================================================

def exists(env):
   return env.Detect('tcfg_8909.gens.prodQ_data')

def generate(env):
   # Save the tcfg_bid_data in the env
   env['TCFG_BID_IMAGE'] = 'MODEM_PROC'

   env.AddUsesFlags('USES_AKA', from_builds_file = True)
   env.AddUsesFlags('USES_AUDIO_AVS_SOURCES', from_builds_file = True)
   env.AddUsesFlags('USES_BLAST', from_builds_file = True)
   env.AddUsesFlags('USES_CDMA', from_builds_file = True)
   env.AddUsesFlags('USES_CGPS', from_builds_file = True)
   env.AddUsesFlags('USES_CORE_DSM', from_builds_file = True)
   env.AddUsesFlags('USES_CTA_STRIP', from_builds_file = True)
   env.AddUsesFlags('USES_DAL', from_builds_file = True)
   env.AddUsesFlags('USES_DIAG_NV_SUPPORT', from_builds_file = True)
   env.AddUsesFlags('USES_DIAG_SMD_SUPPORT', from_builds_file = True)
   env.AddUsesFlags('USES_DUAL_SIM', from_builds_file = True)
   env.AddUsesFlags('USES_DUMMY_SEG', from_builds_file = True)
   env.AddUsesFlags('USES_EFS_DISABLE_WRITE_CACHE', from_builds_file = True)
   env.AddUsesFlags('USES_ERR_INJECT_CRASH', from_builds_file = True)
   env.AddUsesFlags('USES_EXPORT_LOC_API', from_builds_file = True)
   env.AddUsesFlags('USES_EXPORT_PBMLIB', from_builds_file = True)
   env.AddUsesFlags('USES_FEATURE_CGPS_XTRA', from_builds_file = True)
   env.AddUsesFlags('USES_FEATURE_CGPS_XTRA_T', from_builds_file = True)
   env.AddUsesFlags('USES_FEATURE_CMI_PMB', from_builds_file = True)
   env.AddUsesFlags('USES_FEATURE_DYNAMIC_LOADING', from_builds_file = True)
   env.AddUsesFlags('USES_FEATURE_GNSS_DYNAMIC_HEAP_MEM_ENABLED', from_builds_file = True)
   env.AddUsesFlags('USES_FEATURE_GNSS_NAV_HW_VER5', from_builds_file = True)
   env.AddUsesFlags('USES_FEATURE_GNSS_OSYS_V665', from_builds_file = True)
   env.AddUsesFlags('USES_FEATURE_GNSS_OTDOA_50', from_builds_file = True)
   env.AddUsesFlags('USES_FEATURE_GNSS_TLE_LEGACY_ENABLED', from_builds_file = True)
   env.AddUsesFlags('USES_FEATURE_JOLOKIA_MODEM', from_builds_file = True)
   env.AddUsesFlags('USES_FEATURE_LOCTECH_QMISLIM', from_builds_file = True)
   env.AddUsesFlags('USES_FEATURE_LOCTECH_QMISLIM', from_builds_file = True)
   env.AddUsesFlags('USES_FEATURE_LTE_ELS_ENABLED', from_builds_file = True)
   env.AddUsesFlags('USES_FEATURE_LTE_UDC_ENABLED', from_builds_file = True)
   env.AddUsesFlags('USES_FEATURE_MCS_TCXO_REFACTORED', from_builds_file = True)
   env.AddUsesFlags('USES_FEATURE_RFA_TDSCDMA', from_builds_file = True)
   env.AddUsesFlags('USES_FEATURE_SEGMENT_LOADING', from_builds_file = True)
   env.AddUsesFlags('USES_FS_ASYNC_PUT', from_builds_file = True)
   env.AddUsesFlags('USES_FS_TAR', from_builds_file = True)
   env.AddUsesFlags('USES_FS_ZIP_TAR', from_builds_file = True)
   env.AddUsesFlags('USES_FTM_HWTC', from_builds_file = True)
   env.AddUsesFlags('USES_GEOFENCE', from_builds_file = True)
   env.AddUsesFlags('USES_GNSS_BDS', from_builds_file = True)
   env.AddUsesFlags('USES_GNSS_GLO', from_builds_file = True)
   env.AddUsesFlags('USES_GSM', from_builds_file = True)
   env.AddUsesFlags('USES_GSTK', from_builds_file = True)
   env.AddUsesFlags('USES_HDR', from_builds_file = True)
   env.AddUsesFlags('USES_IMS', from_builds_file = True)
   env.AddUsesFlags('USES_IMS_NO_MSRP', from_builds_file = True)
   env.AddUsesFlags('USES_IMS_NO_RTP', from_builds_file = True)
   env.AddUsesFlags('USES_IMS_NO_SDP', from_builds_file = True)
   env.AddUsesFlags('USES_IMS_NO_STANDALONE_AKA', from_builds_file = True)
   env.AddUsesFlags('USES_IMS_NO_USB_LOGGING', from_builds_file = True)
   env.AddUsesFlags('USES_IMS_NO_VIDEO', from_builds_file = True)
   env.AddUsesFlags('USES_IMS_PRESENCE', from_builds_file = True)
   env.AddUsesFlags('USES_IMS_PROCESS', from_builds_file = True)
   env.AddUsesFlags('USES_IMS_RCS', from_builds_file = True)
   env.AddUsesFlags('USES_IMS_UT', from_builds_file = True)
   env.AddUsesFlags('USES_IMS_XML', from_builds_file = True)
   env.AddUsesFlags('USES_IPSEC', from_builds_file = True)
   env.AddUsesFlags('USES_JOLOKIA_MODEM', from_builds_file = True)
   env.AddUsesFlags('USES_LCS_FILE', from_builds_file = True)
   env.AddUsesFlags('USES_LTE', from_builds_file = True)
   env.AddUsesFlags('USES_MBNTOOLS', from_builds_file = True)
   env.AddUsesFlags('USES_MODEM_ANTENNA_SWITCH_DIVERSITY', from_builds_file = True)
   env.AddUsesFlags('USES_MODEM_RCINIT', from_builds_file = True)
   env.AddUsesFlags('USES_MSGR', from_builds_file = True)
   env.AddUsesFlags('USES_MYPS_LINKER', from_builds_file = True)
   env.AddUsesFlags('USES_NO_IMS_SVS', from_builds_file = True)
   env.AddUsesFlags('USES_PBMTASK', from_builds_file = True)
   env.AddUsesFlags('USES_POSIX', from_builds_file = True)
   env.AddUsesFlags('USES_PSMEDIA', from_builds_file = True)
   env.AddUsesFlags('USES_QDJ', from_builds_file = True)
   env.AddUsesFlags('USES_QDSP6', from_builds_file = True)
   env.AddUsesFlags('USES_QMI_SAP', from_builds_file = True)
   env.AddUsesFlags('USES_QMI_SI_LOG', from_builds_file = True)
   env.AddUsesFlags('USES_QURT', from_builds_file = True)
   env.AddUsesFlags('USES_QURT_DEMAND_PAGE', from_builds_file = True)
   env.AddUsesFlags('USES_RCINIT', from_builds_file = True)
   env.AddUsesFlags('USES_REMOTEFS_QMI', from_builds_file = True)
   env.AddUsesFlags('USES_REMOTEFS_QMI', from_builds_file = True)
   env.AddUsesFlags('USES_REX', from_builds_file = True)
   env.AddUsesFlags('USES_RFS_USE_TFTP', from_builds_file = True)
   env.AddUsesFlags('USES_RUIM', from_builds_file = True)
   env.AddUsesFlags('USES_SBI', from_builds_file = True)
   env.AddUsesFlags('USES_SEC', from_builds_file = True)
   env.AddUsesFlags('USES_SEC_CLNT', from_builds_file = True)
   env.AddUsesFlags('USES_SEC_POLICY_DEFAULT_SIGN', from_builds_file = True)
   env.AddUsesFlags('USES_SENSORS_COMPONENT', from_builds_file = True)
   env.AddUsesFlags('USES_SERVICES_ZLIB', from_builds_file = True)
   env.AddUsesFlags('USES_SFS', from_builds_file = True)
   env.AddUsesFlags('USES_STACK_PROTECTOR', from_builds_file = True)
   env.AddUsesFlags('USES_STORAGE_REMOTEFS', from_builds_file = True)
   env.AddUsesFlags('USES_STRIP_NO_ODM', from_builds_file = True)
   env.AddUsesFlags('USES_SUPPORT_CDMA_GPS_PROTOCOLS', from_builds_file = True)
   env.AddUsesFlags('USES_SUPPORT_UMTS_GPS_PROTOCOLS', from_builds_file = True)
   env.AddUsesFlags('USES_TDSCDMA', from_builds_file = True)
   env.AddUsesFlags('USES_TDSCDMA_JOLOKIA', from_builds_file = True)
   env.AddUsesFlags('USES_TDSCDMA_VSTMR', from_builds_file = True)
   env.AddUsesFlags('USES_TFTP_CLIENT', from_builds_file = True)
   env.AddUsesFlags('USES_TFTP_CLIENT_DEBUG_FLAGS', from_builds_file = True)
   env.AddUsesFlags('USES_THERMAL', from_builds_file = True)
   env.AddUsesFlags('USES_UMTS', from_builds_file = True)
   env.AddUsesFlags('USES_VIRTIO', from_builds_file = True)
   env.AddUsesFlags('USES_WTR1625', from_builds_file = True)
