#ifndef FEATURE_H
#define FEATURE_H
/*==========================================================================

  F E A T U R E   Q U E R Y   B I T   M A S K   D E F I N I T I O N S

DESCRIPTION
  Feature Query bit mask definitions to support the feature query interface 
  between the DMSS software and the tools.

NOTE
  This file is included by the DMSS and by the DM and PST.

Copyright (c) 1998-2014 by QUALCOMM Technologies, Incorporated.  All Rights Reserved.
===========================================================================*/

/* <EJECT> */
/*===========================================================================

                      EDIT HISTORY FOR FILE

This section contains comments describing changes made to this file.
Notice that changes are listed in reverse chronological order.

      $Header: //components/rel/core.mpss/3.5.c12.3/services/diag/DCM/common/src/feature.h#1 $

when       who     what, where, why
--------   ---     ---------------------------------------------------------- 
08/13/14   is      Buffering mode drain notification
04/01/14   rs      Added support for build mask centralization.  
08/31/13   is      Support for peripheral buffering mode
03/18/13   sr      Diag support for log-on-demand extended
09/21/12   is      Add suport for preset masks
08/15/12   vk/ra   Modifications for Log On Demand algorithm change 
07/24/12   is      Req/rsp path separation
09/12/11   is      Add support for Diag internal feature mask
01/26/01   ych     Merged T-53/JCDMA features for SK.
09/11/98   grl     Created. 

===========================================================================*/

/* <EJECT> */
/*===========================================================================

                     INCLUDE FILES FOR MODULE

===========================================================================*/

#include "comdef.h"

/*===========================================================================

                DEFINITIONS AND DECLARATIONS FOR MODULE

This section contains definitions for constants, macros, types, variables
and other items needed by this module.

===========================================================================*/

/* The shortest length of the mask to cover all entries in the enum */
#define FEATURE_MASK_LENGTH \
  ((FEATURE_QUERY_ENUM_LENGTH / 8)+1)

  
/*
 *  Used by Diag to create a bit mask for a given bit position relative to
 *  the current byte in the mask. That is, passing in a 9 for the 9th bit 
 *  will be transformed into a bit mask for position 1.  In this case, 
 *  the macro user must make sure to place this macro 
 *  into the second byte in diag_feature_mask defined in feature.c. 
 */
#define ADD_BIT_TO_FEATURE_MASK(BIT) \
  (0x01 << (BIT & 7))

/*
 *  Used by clients of diag to mask a particular bit position.
 *  The arguments are an array of bytes and the bit position. Bit positions
 *  are defined in feature_query_enum_type.
 *  Will return TRUE or FALSE.
 */ 
#define IS_FEATURE_BIT_SET(FEATURE_MASK,BIT) \
  (((BIT >> 3) < FEATURE_MASK_LENGTH) ? \
   ((FEATURE_MASK[BIT >> 3] & (0x01 << (BIT & 7))) ? TRUE : FALSE) : \
   FALSE)
   
/*  
 *  Used to check if the feature mask for a particular id is set
 *  or not.
 *  Will return TRUE or FALSE.
 */  
#define DIAG_INT_FEATURE_MASK_CHECK(id) \
  (diag_int_feature_mask[(id)/8] & (1 << ((id) & 0x07)))
  
 /*
 *  Used to set the feature mask for a particular id. 
 */  
#define DIAG_INT_FEATURE_MASK_SET(id) \
  (diag_int_feature_mask[(id)/8] |= (1 << ((id) & 0x07)))   
/*  
 *  This is a list of the features supported 
 *  Each entry corresponds to a bit position in the bit mask 
 *  To add a new feature add an additional entry (where FEATURE_X should be 
 *  named F_X_BIT in the enum) before FEATURE_QUERY_ENUM_LENGTH in 
 *  feature_query_enum_type and add to the diag_feature_mask in diagp.c
 */    
typedef enum { /* begin feature_query_enum_type */
  F_ACP_BIT,
  F_CDMA_800_BIT,
  F_AUTH_BIT,
  F_DS_CDMA_BIT,
  F_DS_AMPS_BIT,
  F_DS_SLIM_BIT,
  F_JSTD008_BIT,
  F_CLASS_1_IMSI_BIT,
  F_OTASP_BIT,
  F_PREFERRED_ROAMING_BIT,
  F_PRL_DLOAD_BIT,
  F_DIAG_ORIG_CALL_BIT,
  F_SMS_BIT,
  F_POWER_CLASS_III_BIT,
  F_BTU_BIT,
  F_NV_DIALING_PLAN_BIT,
  F_BRAZIL_WLL_BIT,
  F_INDIA_WLL_BIT,
  F_US_WLL_BIT,
  F_RUSSIA_WLL_BIT,
  F_MOSCOW_WLL_BIT,
  F_MYANMAR_WLL_BIT,
  F_STD_WLL_BIT,
  F_CALL_RESTRICTION_BIT,
  F_PWD_SPEED_DIALS_BIT,
  F_ALARMS_BIT,
  F_HOTLINE_BIT,
  F_SPEED_DIALS_BIT,
  F_WLL_POUND919_BIT,
  F_LCD_I2_BIT,
  F_UI_SMS_BIT,
  F_CAR_KIT_DTMF_BIT,
  F_UI_FORCE_MODE_SEL_BIT,
  F_UI_SILENT_REDIAL_BIT,
  F_OTASP_800_BIT,
  F_UI_SEND_PIN_BIT,
  F_UI_FORCE_CALL_BIT,
  F_SMS_UI_BIT,
  F_PILOT_SNIFFER_BIT,
  F_UI_KEYBEEP_AT_EARPIECE_BIT,
  F_UI_OTASP_MENU_BIT,
  F_UI_OLD_MARKOV_BIT,
  F_UI_SILENT_TO_OFF_BIT,
  F_UI_AUTO_ANS_INDICATE_BIT,
  F_UI_CASE_USE_A_BIT,
  F_UI_QZ_TO_79_BIT,
  F_UI_SHOW_DROP_CALL_BIT,
  F_UI_TIME_YES_BIT,
  F_UI_PWR_KEY_ALT_BIT,
  F_UI_ENTER_NAME_PROMPT_BIT,
  F_UI_SAVE_REDIAL_BUFFER_BIT,
  F_UI_3_8_ESN_BIT,
  F_VOICE_PRIVACY_BIT,
  F_VOICE_PRIVACY_SWITCH_BIT,
  F_UI_ENHANCED_PRIVACY_SET_BIT,
  F_CDMA_1900_BIT,
  F_UI_IMSI_ALL_0_OK_BIT,
  F_UI_OTKSL_BIT,
  F_NV_ONE_NAM_RL_LARGE_BIT,
  F_MULTIPLE_LANG_BIT,
  F_LANG_FRENCH_BIT,
  F_LANG_SPANISH_BIT,
  F_LANG_PORTUGUESE_BIT,
  F_LANG_XXX_BIT,
  F_UI_SHOW_SEARCHING_BIT,
  F_SYNC_FREQ_PLUTO_BIT,
  F_UI_ESCALATING_RING_BIT,
  F_VIBRATOR_BIT,
  F_SND_FLIP_PHONE_BIT,
  F_UI_DTMF_THRU_EARPIECE_BIT,
  F_UI_FLIP_PHONE_BIT,
  F_UI_OTASP_DIGIT_APPEND_BIT,
  F_UI_OTASP_STAR2281X_BIT,
  F_UI_POUND_INFO_ORIG_BIT,
  F_UI_ALT_CALL_FAIL_BIT,
  F_UI_STAR228_CALL_BIT,
  F_UI_ENVELOPE_VM_ICON_BIT,
  F_UI_CHECK_BILLING_BIT,
  F_UI_ONETOUCH_VM_ACCESS_BIT,
  F_UI_BOOK_TO_PH_BIT,
  F_UI_ENVELOPE_ICON_BIT,
  F_DS_BIT,
  F_DS_DOTG_BIT,
  F_DS_IS99_REFL_BIT,
  F_DSM_MEM_CHK_BIT,
  F_DS_ATD_PACK_BIT,
  F_DS_UP_BIT,
  F_DS_PSATS_BIT,
  F_DS_RPSO_BIT,
  F_DS_MTOM_BIT,
  F_NV_AUTOSIZE_BIT,
  F_UI_PRL_VER_BIT,
  F_UI_PRIVACY_ALERT_BIT,
  F_HOLD_PWRKEY_TO_PWRUP_BIT,
  F_MULTIPLE_RINGER_TYPES_BIT,
  F_REVERSE_UPDOWN_KEYS_BIT,
  F_SND_RING_SET_1_BIT,
  F_UI_CALLSTACK_NO_WRAP_BIT,
  F_UI_PWR_MUTES_ALERT_BIT,
  F_UI_CALL_ANSWER_MODE_BIT,
  F_HFK_PLUS_BIT,
  F_ENHANCED_RINGS_BIT,
  F_IDS_BIT,
  F_AGC_LOGGIN_BIT,
  F_UI_SNI_BIT,
  F_VOC_FLIP_BIT,
  F_VOC_FLIP_PHONE_BIT,
  F_AC_LOGGING_BIT,
  F_AGC_LOGGING_BIT,
  F_MC_TIMER_FIX_BIT,
  F_SND_RING_SET_2_BIT,
  F_UI_STAR2_CALL_BIT,
  F_UI_QUICK_VM_DIAL_BIT,
  F_UI_NON_ZERO_MWN_BIT,
  F_UI_MORE_911_NUMBERS_BIT,
  F_UI_CONNECTING_TXT_BIT,
  F_MWI_DETECT_BIT,
  F_HANDLE_FWD_DTMF_BIT,
  F_NO_RING_SWITCH_BIT,
  F_DEC_DTMF_KEYS_BIT,
  F_ECFM_BIT,
  F_SINBAD_BIT,
  F_IS95B_WLL_BIT,
  F_POL_REV_BIT,
  F_PRIVACY_ALERT_BIT,
  F_FASTPRL_BIT,
  F_UI_RENTAL_TIMER_BIT,
  F_NV_I2C_BIT,
  F_NO_OTASP_MENU_BIT,
  F_UI_SILENT_REDIAL_AMPS_BIT,
  F_AUXROM_MSGS_BIT,
  F_UI_LIMIT_CALL_BIT,
  F_UI_FORCE_MODE_AMPS_ONLY_BIT,
  F_2700_CAP_FIX_BIT,
  F_ID_BIT,
  F_HOME_ONLY_BIT,
  F_UI_HOME_ONLY_BIT,
  F_PRL_FORCE_MODE_BIT,
  F_UI_PRL_FORCE_MODE_SEL_BIT,
  F_UI_DTACO_BIT,
  F_CHARGER_BIT,
  F_UI_STDBY_TIMEOUT_BIT,
  F_UI_SOFT_CALL_FAIL_MSG_BIT,
  F_UI_SMS_NO_BOX_BIT,
  F_ADDITIONAL_BACKLIGHT_BIT,
  F_DOUBLE_SUBSIDY_LOCK_BIT,
  F_UI_POWERUP_HOLD_ORIG_BIT,
  F_UI_QC_VERSION_BIT,
  F_MAX_ACCESS_FALLBACK_BIT,
  F_QC_TGP_SMS_UI_BIT,
  F_LPM_BIT,
  F_DS_DOTG_DATA_BIT,
  F_DS_ATD_PKT_BIT,
  F_NV_WEB_ITEMS_BIT,
  F_DS_PSTATS_BIT,
  F_DS_DEBUG_UI_BIT,
  F_DS_ORIG_XXX_SO_BIT,
  F_DS_CHOOSE_SO_BIT,
  F_DS_ORIG_PRE707_SO_BIT,
  F_DS_ORIG_PROPTRY_SO_BIT,
  F_DS_ORIG_IS707_SO_BIT,
  F_DS_QNC_BIT,
  F_DS_VOICE_AS_DATA_BIT,
  F_DS_PCM_BIT,
  F_DYNAMIC_THROTTLE_BIT,
  F_RINGER_ALERT_SETTING_BIT,
  F_AUXROM_BIT,
  F_E911_BIT,
  F_NV_TWO_NAMS_RL_MEDIUM_BIT,
  F_UI_SPECIFY_SND_BTN_NAME_BIT,
  F_SSPR_ENHANCEMENTS_BIT,
  F_IS683A_PRL_BIT,
  F_TALK_MSG_BIT,
  F_UP_BIT,
  F_SMS_UP_BIT,
  F_KPCS_BIT,
  F_CP_KPCS_BIT,
  F_RF_KPCS_BIT,
  F_DS__BIT,
  F_DS_PROPTRY_SO_BIT,
  F_UI_800_SERVICE_PROG_BIT,
  F_DS_PAP_BIT,
  F_VOC_TGP_COEFF_BIT,
  F_UI_RESTRICTED_IN_LIST_BIT,
  F_WLL_FORCE_DOWNLOAD_BIT,
  F_VMAIL_NOTIFICATION_BIT,
  F_LCD_WLL_BIT,
  F_PRL_DOWNLOAD_BIT,
  F_UI_SEVEN_LEVEL_SND_BIT,
  F_RSSI_PACKETS_BIT,
  F_REMOTE_RINGER_BIT,
  F_SMS_PACKET_BIT,
  F_DEACTIVATE_SCREEN_BIT,
  F_DEACTIVATE_HANDSET_BIT,
  F_NV_WRITE_ONLINE_BIT,
  F_CALL_INFO_PACKET_BIT,
  F_AUDIO_CONTROL_BIT,
  F_AKEY_PACKET_BIT,
  F_BEGINNING_FLAG_BIT,
  F_MOD_DO_NOT_POWER_DOWN_BIT,
  F_NV_TWO_NAMS_RL_SMALL_BIT,
  F_MOD_GENERIC_PKT_BIT,
  F_QMIP_BIT,
  F_NEW_MOD_PACKETS_BIT,
  F_UI_IGNORE_LOW_BATT_WITH_BIT,
  F_UI_LOW_BATT_W_EXT_PWR_BIT,
  F_ODIE_FONT_BIT,
  F_UI_ODIE_AKEY_BIT,
  F_UI_NO_EARPC_BIT,
  F_UI_5GP_MENU_BIT,
  F_UI_KEYGUARD_BIT,
  F_UI_ANIMATE_SEARCH_BIT,
  F_UI_ANIMATE_CALL_BIT,
  F_UI_RESTRICT_TO_BOOK_BIT,
  F_ONE_TOUCH_MUTE_BIT,
  F_UI_BAR_PHONE_BIT,
  F_EVRC_BIT,
  F_UI_RESTRICT_TO_PHONEBOO_BIT,
  F_UI_LANG_FRENCH_BIT,
  F_UI_LANG_SPANISH_BIT,
  F_UI_LANG_PORTUGUESE_BIT,
  F_UI_MULTI_LANG_BIT,
  F_UI_ENVELOPE__BIT,
  F_UI_REVERSE_UPDOWN_BIT,
  F_TTY_TEST_BIT,
  F_ANALOG_DATA_BIT,
  F_IS95B_WLL_ONLY_BIT,
  F_BORSCHT_BIT,
  F_REN_BIT,
  F_UI_PRIMCO_OPTCALL_MENU_BIT,
  F_UI_3RD_LINE_IDLE_TXT_BIT,
  F_UI_MENU_FEATURES_TXT_BIT,
  F_UI_TOP_LVL_SHORT_MENU_BIT,
  F_SINGLE_NAM_BIT,
  F_BILLING_BIT,
  F_VOLUME_BIT,
  F_ONE_TOUCH_SMS_BIT,
  F_EXTRA_ALERTS_BIT,
  F_UI_CALL_LOG_BIT,
  F_OTASP_228_BIT,
  F_CUSTOM_FAIL_TONES_BIT,
  F_CUSTOM_INFO_BIT,
  F_CUSTOM_PAUSES_BIT,
  F_CUSTOM_XTRA_EMERGENCY_BIT,
  F_CLEAR_SMS_BIT,
  F_PHONUMBER_BIT,
  F_UI_FORCE_MODE_ALT_TXT_BIT,
  F_UI_VMN_CALLBACK_DISPLAY_BIT,
  F_UI_AMPM_DISPLAY_BIT,
  F_OTASP_2_BIT,
  F_CUSTOM_OTASP_BIT,
  F_SMS_BEEP_BIT,
  F_CONNECTING_MSG_BIT,
  F_NOICON_KEYGUARD_BIT,
  F_S_TYPE_ROAM_ALERT_BIT,
  F_SEND_TONE_BIT,
  F_NO_AUTO_MUTE_BIT,
  F_LOCK_PHONE_OFF_BIT,
  F_NO_AUTO_ANSWER_BIT,
  F_NO_ANY_KEY_BIT,
  F_HARDCODED_NUMBERS_BIT,
  F_1_2_TOUCH_VOICE_MAIL_BIT,
  F_2TALKS_FOR_REDIAL_BIT,
  F_UI_SPRINT_BEEP_MENU_BIT,
  F_SIMPLE_SMS_MESSAGES_BIT,
  F_NO_DUPLICATE_ALERT_BIT,
  F_PHONE_LIST_BIT,
  F_UI_FORCE_MODE_SP_TXT_BIT,
  F_VOC_LYNX_BIT,
  F_TCXO_CLOCK_BIT,
  F_UI_PWR_ANS_CALL_BIT,
  F_UI_ONE_TOUCH_MUTE_BIT,
  F_FAST_PRL_BIT,
  F_UI_FULL_SYSTEM_PREF_BIT,
  F_NEW_SLEEP_TIMELINE_BIT,
  F_DH_BIT,
  F_REX_SIG32_BIT,
  F_SAVE_SMS_BIT,
  F_UI_SMS_NV_RESERVATION_BIT,
  F_NV_TWO_NAMS_RL_LARGE_BIT,
  F_UI_HS_AUTO_ANSWER_BIT,
  F_UART_POWERDOWN_BIT,
  F_ENHANCED_STANDBY_BIT,
  F_FAST_WARMUP_BIT,
  F_UI_FORCE_MODE_TEMP_AMPS_BIT,
  F_MINIBROWSER_ITEM_BIT,
  F_MC_SILENT_REDIAL_AMPS_BIT,
  F_VR_HFK_BIT,
  F_UI_NEW_CH_BIT,
  F_UI_NEW_PB_BIT,
  F_UI_GENERIC_VM_DIAL_BIT,
  F_ANALOG_FAX_BIT,
  F_METER_TONE_BIT,
  F_DSP_ANS_DET_BIT,
  F_ADSP_EVRC_AUXROM_BIT,
  F_VOC_PANTHER_BIT,
  F_SBI_BIT,
  F_SLEEP_32KHZ_BIT,
  F_FM_SLOTTED_BIT,
  F_RAN_USE_BOOTDATA_1_4_BIT,
  F_EFS_BIT,
  F_TCXO1920_BIT,
  F_SSPR_800_BIT,
  F_AVAIL_HOME_SIDE_PREF_BIT,
  F_VOC_SAT_CONTROL_BIT,
  F_IS2000_BIT,
  F_IS95B_BIT,
  F_TMSI_BIT,
  F_ENHANCED_STANDBY_III_BIT,
  F_DATA_TIMELINE_ADVANCE_BIT,
  F_DIAG_RESTART_CONFIG_BIT,
  F_SCH_TRIAGE_BIT,
  F_CS_ACTION_TIME_TRANS_BIT,
  F_DS_MEM_CHK_BIT,
  F_TC_8X_SEARCHER_BIT,
  F_SRCH_DYNAMIC_BAND_CLASS_BIT,
  F_IS2000_R_SCH_BIT,
  F_DS_PPP_TERM_REQ_DROP_BIT,
  F_IS2000_TDSO_BIT,
  F_RELATIVE_DMOD_POS_BIT,
  F_RDA_CORRECTION_BIT,
  F_IS2000_QPCH_BIT,
  F_IS2000_SCH_STATS_BIT,
  F_DIAG_QCT_EXT_BIT,
  F_DS_CHAP_BIT,
  F_BROADCAST_SMS_BIT,
  F_WCARD_SID_MGMT_BIT,
  F_OTASP_OTAPA_BIT,
  F_NONSLOT_OFREQ_NSRCH_BIT,
  F_DEFAULT_BIT_RATE_38400_BIT,
  F_JTAG_DEBUG_BIT,
  F_REX_PREEMPT_INTS_BIT,
  F_DIAG_V7_LOG_COMPATIBILI_BIT,
  F_DIAG_V7_LOG_IFACE_BIT,
  F_KEYPRESS_OPTIMIZATION_BIT,
  F_DS_UI_BAUD_BIT,
  F_DS_DEFAULT_BITRATE_NV_BIT,
  F_SDEVMAP_SHARE_HFK_BIT,
  F_SDEVMAP_UI_MENU_BIT,
  F_SDEVMAP_MENU_ITEM_NV_BIT,
  F_DIAG_UI_BAUD_BIT,
  F_DIAG_DEFAULT_BITRATE_NV_BIT,
  F_DETECT_SUP_MUTING_BIT,
  F_OTASP_HOLD_CMD_IN_COMMI_BIT,
  F_UI_8K_SUPPORT_BIT,
  F_UI_8K_VOICE_SUPPORT_BIT,
  F_UI_DEBUG_SLOTTED_MODE_BIT,
  F_SEARCH2_BIT,
  F_SEARCH2_ACQ_BIT,
  F_SEARCH2_IDLE_BIT,
  F_UART_TCXO_CLK_FREQ_BIT,
  F_DIAG_DEFAULT_BITRATE_38_BIT,
  F_DIAG_NON_STREAMING_BIT,
  F_DIAG_NO_EVENTS_BIT,
  F_RLGC_BIT,
  F_INT_25_FIQ_BIT,
  F_SPECIAL_MDR_BIT,
  F_VIRTUAL_COMBINER_BIT,
  F_SERIAL_DEVICE_MAPPER_BIT,
  F_IS95B_ACC_PRB_BKOFF_DLY_BIT,
  F_DH_EXP_BIT,
  F_GSRM_SVC_IND_BIT,
  F_EVRC_SO_MGMT_BIT,
  F_DSM_DIAG_ITEMS_BIT,
  F_DS_AT_TEST_ONLY_BIT,
  F_DS_TEST_MEM_POOL_BIT,
  F_DS_BROWSER_INTERFACE_BIT,
  F_DS_NET_MODEL_BIT,
  F_DS_PAP_NV_BIT,
  F_DS_PZID_RECON_BIT,
  F_DS_CTA_DCD_ASSERT_BIT,
  F_DS_SOCKETS_BIT,
  F_DS_FADE_DORMANCY_BIT,
  F_AUTOBAUD_BIT,
  F_DS_CM_BIT,
  F_CM_PWRUP_HOLD_ORIG_BIT,
  F_CM_PREF_SRV_HOLD_ORIG_BIT,
  F_CM_SILENT_REDIAL_BIT,
  F_UASMS_BIT,
  F_CM_BIT,
  F_TX_ACCESS_POWER_FIX_BIT,
  F_SLEEP_SLOW_CLOCK_BIT,
  F_SLEEP_SLOW_CLOCK_1P92_3_BIT,
  F_TCXO_SHUTDOWN_BIT,
  F_ICE_DEBUG_BIT,
  F_CPU_CLK_27MHZ_BIT,
  F_CPU_CLK_DIV1_BIT,
  F_NEW_SIO_BIT,
  F_SECOND_UART_BIT,
  F_SIO_PNP_BIT,
  F_SIO_DTR_HIGH_GPIO_BIT,
  F_SIO_DTR_ACTIVE_LOW_BIT,
  F_IS95B_TRUE_IMSI_BIT,
  F_IS95B_OLPEC_BIT,
  F_IS95B_SYS_RESELEC_BIT,
  F_IS95B_SOFT_HO_BIT,
  F_IS95B_EXT_DISP_BIT,
  F_IS95B_ACCESS_HO_BIT,
  F_IS95B_PILOT_RPT_BIT,
  F_IS95B_NGHBR_SRCH_ENH_BIT,
  F_IS95B_RELEASE_ON_AC_BIT,
  F_IS95B_PPSMM_BIT,
  F_IS95B_NDSS_BIT,
  F_IS95B_INC_CALL_FWD_ENH_BIT,
  F_IS95B_ALERT_ANS_BYPASS_BIT,
  F_IS95B_MAHHO_BIT,
  F_IS95B_MDR_BIT,
  F_IS95B_ACCESS_ENTRY_HO_BIT,
  F_IS95B_ACCESS_PROBE_HO_BIT,
  F_MDR_DPT_MARKOV_BIT,
  F_DS_SOCKETS_USE_LSPD_BIT,
  F_DS_IS707A_CMUX_BIT,
  F_PZID_CHANGE_EXAMPLE_BIT,
  F_ANTIREGISTRATION_BIAS_BIT,
  F_ENHANCED_STANDBY_II_BIT,
  F_QUICK_SCAN_BIT,
  F_STANDBY_DEBUG_MESSAGES_BIT,
  F_NO_VBB_BIT,
  F_NO_TCXO_VOTE_BIT,
  F_EXT_LINEARIZER_BIT,
  F_FINGER_POLL_BIT,
  F_FING_MERGE_DETECT_BIT,
  F_MINIMIZE_ISR_LOADING_BIT,
  F_Q_NO_SELF_QPTR_BIT,
  F_Q_SINGLE_LINK_BIT,
  F_FFPC_BIT,
  F_RXC_ACTION_TIME_PROCESS_BIT,
  F_DS_IS2000_BIT,
  F_DS_RLP3_BIT,
  F_IS2000_SCH_BIT,
  F_IS2000_F_SCH_BIT,
  F_RLP_LOGGING_BIT,
  F_SURF_FLASH2_BIT,
  F_EFS_FLASH2_BIT,
  F_NV_ITEM_MGR_BIT,
  F_T53_BIT,
  F_JCDMA_BIT,
  F_MONITOR_BIT,
  F_ANALOG_LOGGING_BIT,
  F_NEWCM_BIT,
  F_NEWUASMS_BIT,
  F_DS_ENABLE_RM_DMNCY_IF_CTA_0_BIT,
  F_IS2000_LTU_CRCS_BIT,
  F_QWORD_MISALIGNED_METHOD_BIT,
  F_COMPOSE_MO_SMS_BIT,
  F_NEW_DSM_BIT,
  F_16BIT_SHADOW_REG_BIT,
  F_EVRC_RDA_BIT,
  F_COMPLETE_SNM_BIT,
  F_SD20_BIT,
  F_IO_CARD_BIT,
  F_NATIVE_MODE_BIT,
  F_CRF3100_PA_BIT,
  F_RFR3100_BIT,
  F_PA_RANGE_TEMP_FREQ_COMP_BIT,
  F_4PAGE_TX_LINEARIZER_BIT,
  F_IS2000_P2_BIT,
  F_IS2000_CHS_BIT,
  F_TX_ADJ_WINDDOWN_BIT,
  F_MAX_PWR_PROTECTION_BIT,
  F_IS2000_QPCH_CCI_BIT,
  F_TTY_BIT,
  F_MCLK_DYNAMIC_SPEED_CTRL_BIT,
  F_MCLK_43TCXO_BIT,
  F_QDSP_TASK_BIT,
  F_SBI_CLK_SOURCE_BIT,
  F_BSPUI_API_BIT,
  F_32K_XTAL_BIT,
  F_GPIO_GROUP_INT_BIT,
  F_SURF3100_BIT,
  F_SURF3300_BIT,
  F_FFA3300_BIT,
  F_FFA_BIT,
  F_HEADSET_GPIO5_BIT,
  F_SEC_BIT,
  F_SEC_MEM_POOL_BIT,
  F_SEC_CRYPT_TESTAPP_BIT,
  F_SEC_SSL_BIT,
  F_SEC_SSL_SVR_TEST_CERT_BIT,
  F_SEC_SSL_ERROR_CB_ONLY_BIT,
  F_SEC_SSL_KEYX_DEBUG_BIT,
  F_SEC_SSL_ALLOW_NULL_CIPH_BIT,
  F_SEC_SSL_TESTAPP_BIT,
  F_MENU_REORG_BIT,
  F_NEW_SOUND_API_BIT,
  F_AUDIO_AGC_BIT,
  F_HEADSET_BIT,
  F_ANALOG_HFK_BIT,
  F_STEREO_DAC_BIT,
  F_I2C_BIT,
  F_NEW_SBI_BIT,
  F_UP_CLOCK_SWITCHING_BIT,
  F_RUNTIME_DEVMAP_BIT,
  F_USB_BIT,
  F_USB_CDC_ACM_BIT,
  F_USB_HDR_BIT,
  F_RDEVMAP_DS_DEFAULT_TO_U_BIT,
  F_HW_FING_MERGE_DETECT_BIT,
  F_QUARTER_ROLL_TIMELINE_BIT,
  F_INT_125_FIQ_BIT,
  F_VOC_TASK_BIT,
  F_PM1000_BIT,
  F_PM1000_LDO_ONLY_BIT,
  F_PM1000_SCI_BIT,
  F_PM1000_32K_XTAL_BIT,
  F_ENC_BTF_IN_NV_BIT,
  F_GPSONE_BIT,
  F_IS2000_CAGC_BIT,
  F_PA_BYPASS_ENABLE_BIT,
  F_SUBPCG_PA_WARMUP_DELAY_BIT,
  F_FSG_CONTROL_BIT,
  F_QRF3300_BIT,
  F_TRIMODE_ITEMS_BIT,
  F_4MB_ROM_BIT,
  F_EFS_2ND_FLASH_ONLY_BIT,
  F_SEARCH3_BIT,
  F_PPM_DB_1_BIT,
  F_FULL_SNM_BIT,
  F_GPS_SRCH_ENGINE_BIT,
  F_GPSONE_MATH_IMPROVEMENT_BIT,
  F_GPSONE_SA_BIT,
  F_TX_SPECTRAL_INVERSION_BIT,
  F_AARDVARK_BIT,
  F_1MB_RAM_BIT,
  F_NSOTASP_BIT,
  F_DIAG_V7_PKT_IFACE_BIT,
  F_SURF_FLASH_BIT,
  F_EFS_ACCESS_METHODS_BIT,
  F_EFS_FLASH_BIT,
  F_EFS_SFAT_BIT,
  F_AUTO_REMOVE_REMOTE_LINK_BIT,
  F_EFS_MITSUBISHI_BIT,
  F_EFS_AMD_BIT,
  F_DS_CHAP_NV_BIT,
  F_UASMS_SAVE_MEM_BIT,
  F_VR_HELPFUL_PROMPTS_BIT,
  F_VR_EMAIL_VM_BIT,
  F_PM1000_RTC_BIT,
  F_PM1000_NO_COIN_BATT_BIT,
  F_PM1000_MANAGED_LDO_BIT,
  F_PM1000_LOW_BATT_DETECTI_BIT,
  F_GPS_MODE_BIT,
  F_CANNED_AA_DATA_BIT,
  F_GPSONE_DBM_BIT,
  F_GPSONE_GPS_FTEST_BIT,
  F_BIG_DIAG_BUFFER_FOR_GPS_BIT,
  F_MSM3300_PPM_SRCH_ENGINE_BIT,
  F_FAST_QDSP_BIT,
  F_EXTENDED_PPM_LOG_BIT,
  F_MIDI_BIT,
  F_WEBAUDIO_BIT,
  F_MP3_BIT,
  F_MIDI_OUT_BIT,
  F_MIDI_OUT_QCP_BIT,
  F_NEW_SYNTH_BIT,
  F_MULTIMEDIA_BIT,
  F_QCP_BIT,
  F_PNG_DECODER_BIT,
  F_SAF_BIT,
  F_ADEC_BIT,
  F_QSYNTH_BIT,
  F_QTUNES_BIT,
  F_VOICE_PLAYBACK_BIT,
  F_AUDIO_FORMAT_BIT,
  F_CMX_BIT,
  F_VS_TASK_BIT,
  F_BT_BIT,
  F_BT_NA_BIT,
  F_BT_AG_BIT,
  F_BT_MSG_DEBUG_BIT,
  F_BT_HS_BIT,
  F_BT_ICON_BIT,
  F_BT_MY_BD_ADDR_BIT,
  F_BT_TEST_SDP_BIT,
  F_BT_TEST_RC_2_SIO_BIT,
  F_BT_TEST_API_BIT,
  F_BT_TEST_MODE_TESTER_BIT,
  F_BT_DEBUG_BIT,
  F_BT_DEVICE_DISCOVERY_BIT,
  F_MMC_BIT,
  F_ENHANCED_VR_BIT,
  F_PHONE_VR_BIT,
  F_PHONE_VR_HFK_BIT,
  F_PHONE_VR_NO_DUP_BIT,
  F_VOICE_MEMO_BIT,
  F_DFM_ANSWER_MACHINE_BIT,
  F_VM_MEM_TO_QCP_BIT,
  F_VOICE_DATABASE_BIT,
  F_VOICE_RECORD_BIT,
  F_NO_REMOTE_FILE_BIT,
  F_SKIP_INTEGRITY_CHECK_BIT,
  F_MSM5105_PPM_SRCH_ENGINE_BIT,
  F_PPM_DB_2_BIT,
  F_SRCH_SCHEDULER_BIT,
  F_SRCH_SLEW_IN_DRV_BIT,
  F_SRCH_4_SHOULDERS_BIT,
  F_BITMAP_BIT,
  F_DS_MOBILE_IP_BIT,
  FEATURE_QUERY_ENUM_LENGTH /* used to determine mask size */
} feature_query_enum_type;


/* diag_feature_query_enum_type */
typedef enum { 
  F_DIAG_INT_FEATURE_MASK = 0,
  F_DIAG_MASTER_SETS_COMMON_MASK = 1,
  F_DIAG_LOG_ON_DEMAND_RSP_ON_MASTER = 2,
  F_DIAG_VERSION_RSP_ON_MASTER = 3,
  F_DIAG_REQ_RSP_CHANNEL = 4,
  F_DIAG_PRESET_MASKS = 5,
  F_DIAG_HDLC_ENCODE_IN_APPS = 6,
  F_DIAG_LOG_ON_DEMAND_EXT_RSP_ON_MASTER = 7,
  F_DIAG_OPTIMIZED_DISABLE_MSG_MASKS = 8,
  F_DIAG_OVER_STM = 9,
  F_DIAG_PERIPH_BUFFERING_SUPPORT = 10,
  F_DIAG_BT_MASK_CENTRALIZATION_SUPPORT = 11,
  F_DIAG_PERIPH_BUFFERING_DRAIN_NOTIFICATION = 12,
  DIAG_INT_FEATURE_LAST,
  
  F_DIAG_MAX = 0x0FFF
} diag_feature_query_enum_type;

/* The shortest length of the mask to cover all entries in the enum */
#define DIAG_INT_FEATURE_MASK_LEN (DIAG_INT_FEATURE_LAST/8 + 1)

/*
 *  Used by diag to check if a particular bit is set or not.
 *  The arguments are an array of bytes and the bit position. Bit positions
 *  are defined in diag_feature_query_enum_type.
 *  Will return TRUE or FALSE.
 */
#define DIAG_IS_INT_FEATURE_BIT_SET(FEATURE_MASK, BIT) \
  (((BIT >> 3) < DIAG_INT_FEATURE_LAST) ? \
   ((FEATURE_MASK[BIT >> 3] & (0x01 << (BIT & 7))) ? TRUE : FALSE) : \
     FALSE)
     
extern byte diag_feature_mask[FEATURE_MASK_LENGTH];
extern byte diag_int_feature_mask[DIAG_INT_FEATURE_MASK_LEN];

void diag_init_feature_mask( void );
void diag_ctrl_send_feature_mask( void );

#endif /* FEATURE_H */
