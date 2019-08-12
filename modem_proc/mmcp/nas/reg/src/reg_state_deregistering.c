/*==============================================================================

                             COPYRIGHT INFORMATION

Copyright (c) 2002 Qualcomm Technologies, Incorporated and its licensors.  All Rights
Reserved.  QUALCOMM Proprietary.  Export of this technology or software
is regulated by the U.S. Government. Diversion contrary to U.S. law prohibited.

                            EDIT HISTORY FOR MODULE

This section contains comments describing changes made to the module.
Notice that changes are listed in reverse chronological order.

$PVCSPath:  L:/src/asw/MSM5200/reg/vcs/reg_state_deregistering.c_v   1.3   06 Jun 2002 10:50:36   kabraham  $
$Header: //commercial/MPSS.JO.2.0.c1.4/Main/modem_proc/mmcp/nas/reg/src/reg_state_deregistering.c#1 $ $DateTime: 2016/12/13 08:00:05 $ $Author: mplcsds1 $

when       who     what, where, why
--------   ---     -------------------------------------------------------------
02/13/02   kwa     Initial release
05/20/02   kwa     Added output_name function.
06/05/02   kwa     Filled roaming_ind upon receiving an mmr_service_ind.
09/19/02   kwa     Added function to process the cm_act_req message.
05/21/03   kwa     Restructured code to eliminate lint warnings.
09/08/03   kwa     Removed FEATURE_REG_DEEP_SLEEP.
11/11/03   kwa     Added process_mmr_stop_mode_cnf.
11/19/03   kwa     Removed obsolete function for retrieving the state name.
05/17/04   kwa     Added function to process the mmr_camped_ind message.
02/22/05   up      Updated for Cingular ENS feature.
                   Updated state table to add new function pointer for FCN IND.
09/19/05   up      Updated state table for new primitive CM_HPLMN_SEARCH_REQ.
11/07/05   ajt     Added handling of MMR_EMERGENCY_NUM_LIST_IND in deregistering state.
==============================================================================*/

/*==============================================================================

                            INCLUDE FILES FOR MODULE

==============================================================================*/

#include "mmcp_variation.h"
#include "msg.h"
#include "reg_mode.h"
#include "reg_send.h"
#include "reg_sim_v.h"
#include "reg_state.h"
#include "reg_timers.h"
#include "reg_nv.h"

/*==============================================================================

                                TYPE DEFINITIONS

==============================================================================*/

/*==============================================================================

                            STATIC DATA DECLARATIONS

==============================================================================*/

/*==============================================================================

                          STATIC FUNCTION DEFINITIONS

==============================================================================*/

/*==============================================================================

FUNCTION NAME

  process_mmr_service_ind

==============================================================================*/

static reg_state_p_type process_mmr_service_ind
(
  mmr_service_ind_s_type* msg_p
)
{
  sys_plmn_id_s_type hplmn;

  hplmn = reg_sim_read_hplmn();

  if ( sys_plmn_match(hplmn, msg_p->service_state.plmn) )
  {
    msg_p->service_state.roaming_ind = SYS_ROAM_STATUS_OFF;
  }
  else
  {
    msg_p->service_state.roaming_ind = SYS_ROAM_STATUS_ON;
  }

  reg_state_print_service_state(msg_p->service_state);

  reg_send_cm_service_ind(msg_p->service_state);

  return (&reg_state_deregistering);
}


/*==============================================================================

FUNCTION NAME

  process_mmr_sim_not_available_cnf

==============================================================================*/

static reg_state_p_type process_mmr_sim_not_available_cnf
(
  mmr_sim_not_available_cnf_s_type* msg_p
)
{
  (void) msg_p;

  reg_send_cm_sim_not_available_cnf
  (
    reg_state_cm_transaction_id_get()
  );

  return (&reg_state_idle);
}


/*==============================================================================

FUNCTION NAME

  process_mmr_stop_mode_cnf

==============================================================================*/

static reg_state_p_type process_mmr_stop_mode_cnf
(
  mmr_stop_mode_cnf_s_type* msg_p
)
{
  (void) msg_p;

  reg_send_cm_stop_mode_cnf
  (
    reg_state_cm_transaction_id_get()
  );

  return (&reg_state_inactive);
}


/*==============================================================================

FUNCTION NAME

  number

==============================================================================*/

static reg_state_e_type number ( void )
{
  return REG_STATE_DEREGISTERING;
}

/*==============================================================================

FUNCTION NAME

  process_cm_set_hplmn_irat_timer

==============================================================================*/
static reg_state_p_type process_cm_set_hplmn_irat_timer
(
  const cm_set_hplmn_irat_search_timer_req_s_type *msg_p
)
{
  
  uint32 timer_val = msg_p->timer_value;

  MSG_HIGH_DS_1(REG_SUB, "=REG= CM sent HPLMN IRAT timer  - %lu(milli-sec)", timer_val);   
  if(timer_val == 0)
  {
    timer_val = REG_TIMERS_MAX_TIMER_VALUE;    
  }

  reg_nv_hplmn_irat_search_timer_set(timer_val);

  return (&reg_state_deregistering);
}



/*==============================================================================

FUNCTION NAME

  output_name

==============================================================================*/

static void output_name ( void )
{
  MSG_HIGH_DS_0(REG_SUB, "=REG= REG_STATE_DEREGISTERING");
}


/*==============================================================================

                               DATA DECLARATIONS

==============================================================================*/

reg_state_s_type reg_state_deregistering = 
{
  reg_state_unexpected_cm_network_list_req,
  reg_state_unexpected_cm_service_req,
  reg_state_unexpected_cm_sim_available_req,
  reg_state_unexpected_cm_sim_not_available_req,
  reg_state_unexpected_cm_stop_mode_req,
#ifdef FEATURE_GW_ON_DEMAND_HPLMN_SRCH
  reg_state_ignore_hplmn_search_request,
#endif
  reg_state_unexpected_cm_ph_status_chgd_req,
#ifdef FEATURE_LTE
  reg_state_unexpected_cm_set_drx_req,
#endif 
  reg_state_unexpected_mmr_camped_ind,
  reg_state_process_mmr_attach_failed_ind,
  reg_state_unexpected_mmr_mm_information_ind,
  reg_state_unexpected_mmr_plmn_search_cnf,
  reg_state_unexpected_mmr_reg_cnf,
  process_mmr_service_ind,
  reg_state_unexpected_mmr_sim_available_cnf,
  process_mmr_sim_not_available_cnf,
  process_mmr_stop_mode_cnf,
  reg_state_unexpected_hplmn_search_timer_expiration,
  reg_state_process_mmr_emergency_num_list_ind,
  reg_state_unexpected_sim_refresh_fcn_ind,
  reg_state_unexpected_ph_status_change_cnf,
  reg_state_unexpected_mmr_reg_reject_ind,
  reg_state_unexpected_hplmn_irat_search_timer_expiration,
  process_cm_set_hplmn_irat_timer,
  reg_state_t3245_exp_clean_up,
#ifdef FEATURE_LTE
  reg_state_unexpected_backoff_fplmn_timer_expiration,
  reg_state_process_cm_block_plmn_req,
  reg_state_ignore_update_lte_cap_timer_expiration,
#endif
#ifdef FEATURE_SGLTE
  reg_state_unexpected_sglte_ps_timer_expiry,
#endif
  reg_state_unexpected_lte_irat_search_timer_expiration,
#ifdef FEATURE_FEMTO_CSG
  reg_state_process_unexpected_mmr_csg_list_read_complete,
#endif 
  reg_state_unexpected_mmr_reg_req_ignored_ind,
  number,
  output_name
};

/*==============================================================================

                              FUNCTION DEFINITIONS

==============================================================================*/
