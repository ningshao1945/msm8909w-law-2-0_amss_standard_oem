#ifndef FTM_WCDMA_CALV3_H
#define FTM_WCDMA_CALV3_H

/*====*====*====*====*====*====*====*====*====*====*====*====*====*====*====*

                            F T M   W C D M A   C A L V 3   

GENERAL DESCRIPTION
  This is the header file for the embedded FTM RF Commands 


Copyright (c) 2002 - 2013 by Qualcomm Technologies, Incorporated.  All Rights Reserved.
*====*====*====*====*====*====*====*====*====*====*====*====*====*====*====*/

/*===========================================================================

                        EDIT HISTORY FOR MODULE

  This section contains comments describing changes made to the module.
  Notice that changes are listed in reverse chronological order.

  $Header: //commercial/MPSS.JO.2.0.c1.4/Main/modem_proc/rftech_wcdma/api/ftm_wcdma_calv3.h#1 $ 
  $DateTime: 2016/12/13 07:59:54 $ 
  $Author: mplcsds1 $

when       who     what, where, why
--------   ---     ---------------------------------------------------------- 
10/17/14   ac      lna offset delta between baseline and nbee for lna state 3/high Ior
05/16/14   kai     Added XPT IQ capture offloading to RF thread
09/10/13   aa      Enable/Disable NBEE RXCAL on the fly
08/21/13   dj      Moved feedback_setup to be run from the ftm command dispatch
07/10/13   aa      RX calibration optimization using NBEE
06/25/13   kai     Reduce RX_AGC_SETTLING_TIME to 2000
04/24/13    dj     Added support for Feedback Setup
03/28/13   kai     Added xpt opcode support for WCDMA
01/21/13   kai     Added calv3_tx_measure and calv3_rx_measure
01/18/13   kai     Removed ftm_wcdma_cal_sweep_radio_setup_req_type
12/06/12   aki     Added ftm_wcdma_calv3_sweep_polling_event_init and
				   inclusion guards 
11/26/12   kai     Added wcdma tx override operation support
11/15/12   kai     Added radio setup operation
07/18/12   aro     Renamed the XPT type definitions
07/18/12   aro     Moved the XPT result pushing to common XPT framework
07/18/12   aro     Added Error Code and SubCopde fields in XPT results
07/17/12   aro     Updated XPT Opcode payload
06/14/12   anr     Moved EPT specific FTM functionality to this file. 
11/16/11    gh     Add definition for RxAGC settling time
09/04/11    gh     Add support for dual carrier cal
08/19/11    gh     Initial Release
===========================================================================*/

/*===========================================================================
 *        Include Files                                                     *
===========================================================================*/
#include "ftm_common.h"
#include "ftm_common_calibration_v3.h"

/*===========================================================================
 *        Definitions                                                       *
===========================================================================*/


/*changed #define FTM_WCDMA_CALV3_RX_NBEE_SETTLING_TIME 150 to 400 for NBEE lna offset issue for G3*/
#define FTM_WCDMA_CALV3_RX_NBEE_SETTLING_TIME 400
#define FTM_WCDMA_CALV3_RX_AGC_SETTLING_TIME 2000

#define IS_FTM_IN_WCAL_MODE() ( ftm_wcdma_calv3_get_cal_flag() )

/*===========================================================================
 *        Data Types                                                        *
===========================================================================*/

/*!
  @brief
  FTM WCDMA Radio Dispatch Request Packet to be used to configure radio for
  calibration v3 sweep
*/
typedef PACK(struct)
{
  uint8 cmd;
  /*!< Command Identification */

  uint8 sub_sys;
  /*!< Sub-system Identification. For instance - 11 for FTM */

  uint16  mode;
  /*!< RF Mode Identification. For Instance - 0 for FTM_RFM_C */

  uint16  wcdma_cmd;
  /*!< FTM Sub Command. Example-  FTM_INT_WCDMA_CALV3_CONFIGURE_RADIO */

  uint16  req_len;
  /*!< Length of Diag Request Packet to the Target */

  uint16  rsp_len;
  /*!< Length of response packet to Diag/PC */

  uint8   device_master_mask;
  /*!< Master device Mask */

  uint32 device_slave;
  /*!< List of slave devices for each master device */

  uint8 band;
  /*!< RF band to which radio is to be tuned */

  uint16 channel;
  /*!< RF channel to which radio is to be tuned */

  uint16 dc_channel_offset;
  /*!< RF channel offset for DC tune */

} ftm_wcdma_cal_sweep_configure_radio_req_type;

/*----------------------------------------------------------------------------*/
/*!
  @brief
  FTM WCDMA Radio Dispatch Request Packet to be used to retune radio for
  calibration v3 sweep
*/
typedef PACK(struct)
{
  uint8 cmd;
  /*!< Command Identification */

  uint8 sub_sys;
  /*!< Sub-system Identification. For instance - 11 for FTM */

  uint16  mode;
  /*!< RF Mode Identification. For Instance - 0 for FTM_RFM_C */

  uint16  wcdma_cmd;
  /*!< FTM Sub Command. Example-  FTM_CDMA_RFM_1X_WAKEUP_RX */

  uint16  req_len;
  /*!< Length of Diag Request Packet to the Target */

  uint16  rsp_len;
  /*!< Length of response packet to Diag/PC */

  uint8   device_master_mask;
  /*!< Master device Mask */

  uint16 channel;
  /*!< RF channel to which radio is to be retuned */

} ftm_wcdma_cal_sweep_retune_radio_req_type;

/*----------------------------------------------------------------------------*/
/*!
  @brief
  FTM WCDMA Radio Dispatch Request Packet to be used to tear down radio for
  calibration v3 sweep
*/
typedef PACK(struct)
{
  uint8 cmd;
  /*!< Command Identification */

  uint8 sub_sys;
  /*!< Sub-system Identification. For instance - 11 for FTM */

  uint16  mode;
  /*!< RF Mode Identification. For Instance - 0 for FTM_RFM_C */

  uint16  wcdma_cmd;
  /*!< FTM Sub Command. Example-  FTM_CDMA_RFM_1X_WAKEUP_RX */

  uint16  req_len;
  /*!< Length of Diag Request Packet to the Target */

  uint16  rsp_len;
  /*!< Length of response packet to Diag/PC */

} ftm_wcdma_cal_sweep_tear_radio_req_type;

/*===========================================================================
 *        Function Headers                                                  *
===========================================================================*/

/*----------------------------------------------------------------------------*/
/*!
  @brief
  FUNCTION FTM_WCDMA_CALV3_SWEEP_CONFIGURE_RADIO
  Configure Radio for Calibration Sweep
 
  @details
  Based on the RF Configuration paylaod, this function will configure the radio.
  All radio tuning actions will be done under FTM Task context by sending
  Radio tune command to FTM Task Q.
 
  @param rf_cfg
  Pointer to the data structure containing RF Configuration parameter:
      device_master: Bit mask indicating which devices/chain to config
      device_slave:  Not used here
      rf_mode:       RF Mode
      channel:       UL channel
 
 @return
 boolean that indicates whether there had been an error or not
*/
boolean 
ftm_wcdma_calv3_sweep_configure_radio
(
   ftm_cal_instr_payload_config_radio_type const *rf_cfg
);

/*----------------------------------------------------------------------------*/
/*!
  @brief
  FUNCTION FTM_WCDMA_CALV3_SWEEP_RETUNE_RADIO
  Retune Radio for calibration based on input parameters
 
  @details
  Retune Radio for calibration based on input parameters
 
  @param rf_retune
  Pointer to the data structure containing RF retune parameter: 
      primary chain
      ul channel
 
 @return
 boolean that indicates whether there had been an error or not
*/

boolean
ftm_wcdma_calv3_sweep_retune_radio
(
   ftm_cal_instr_payload_retune_radio_type const *rf_retune
);

/*----------------------------------------------------------------------------*/
/*!
  @brief
  FUNCTION FTM_WCDMA_CALV3_SWEEP_CONFIGURE_RX
  Configure Rx for Calibration Sweep
 
  @details
  Configure Rx for calibration based on input parameters. cal_action field in
  the input param is a bit mask that indicates the LNA state. For WCDMA only 
  ONE action is supported per segment. This function will return FALSE if 
  there is more than one cal_action bits.

  rx_flag field in the input param is a bit mask that indicates which
  rf device(s) to be used. Only bits 0 and 1 are used for W where both
  bits can be enabled for a given segment.
 
  @param rx_config
  Pointer to the data structure containing RF config parameter: 
      cal_action: 0 - 5 indicates LNA 0 - LNA 5 calibration respectively
      power_mode: used by cdma for linearity only
      exp_rxagc: Expected RxAGC
      rx_flag: Rx Flag, B[3:0] indicates Rx device
 
 @return
 boolean that indicates whether there had been an error or not
*/
boolean
ftm_wcdma_calv3_sweep_configure_rx
(
   ftm_cal_instr_payload_config_rx_type const *rx_config
);

/*----------------------------------------------------------------------------*/
/*!
  @brief
  FUNCTION FTM_WCDMA_CALV3_SWEEP_CONFIGURE_TX
  Configure Tx for Calibration Sweep
 
  @details
  Configure Tx for calibration sweep based on input parameters.
 
  @param tx_config
  Pointer to the data structure containing Tx measurement parameter:
     pa_state: PA State to which the TxAGC is to be overridden during Tx Measurement
     rgi: RTR Gain Index to be overridden to
     pa_bias: PA Bias value to be applied
     tx_flag: Bit mask corresponding to Tx Device to be used
              i.e. B[0] : RFM Device 0 calibration 
 
 @return
 boolean that indicates whether there had been an error or not
*/
boolean
ftm_wcdma_calv3_sweep_configure_tx
(
   ftm_cal_instr_payload_config_tx_type const *tx_config
);

/*----------------------------------------------------------------------------*/
/*!
  @brief
  FUNCTION FTM_WCDMA_CALV3_SWEEP_MEASURE_RX
  Measure Rx for calibration sweep
 
  @details
  Measure Rx for calibration sweep and populate results (DVGA or LNA offsets)
  in to the input result buffer.

  @param rx_meas
  Pointer to the data structure containing Rx configuration parameter:
 
  cal_action: Bit mask corresponding to LNA state
     BIT[0]: Corresponds to gain state 0 -> get DVGA offset
     BIT[x]: Corresponds to gain state x -> get LNA offset
  power_mode: Used by cdma only
  exp_rxagc: Expected RxAGC
  rx_flag:
     Bit mask corresponding to device
     BIT[0]: Corresponds to primary chain
     BIT[1]: Corresponds to secondary chain

  @param rx_result
  Result buffer where Rx measurement results are to be populated in.
  Number of measurements is also populated here when completed.
  Contains max_rx_buffer_len field which indicates the size of the result
  buffer. This is used for checking against buffer overflow.
 
 @return
 boolean that indicates whether there had been an error or not
*/
boolean
ftm_wcdma_calv3_sweep_measure_rx
(
   ftm_cal_instr_payload_meas_rx_type const *rx_meas,
   ftm_calibration_rx_result_type *rxacg_result
);

/*----------------------------------------------------------------------------*/
/*!
  @brief
  FTM_WCDMA_CALV3_SWEEP_MEASURE_TX
  Perform an hdet read bases on passed-in parameter.
 
  @details
  Perform an hdet read bases on passed-in parameter.

  @param hdet_meas
  Pointer to the data structure containing Tx measurement settings:
     hdet_sample:       Number of HDET Samples to be taken for averaging
     lpm_hdet_sample:   Used in CDMA only
     tx_flag:           Which chain of interest
 
  @param tx_result
  Pointer to data structure to populate measurement results
     tx_buffer:         Array to populate HDET results
     num_of_tx_reads:   Number of HDET reads
     max_tx_buffer_len: Size of the tx_buffer allocated

  Result buffer where Tx measurement result is to be populated in.
  Number of measurements is also populated here when completed.
  Contains max_tx_buffer_len field which indicates the size of the result
  buffer. This is used for checking against buffer overflow.
 
 @return
 boolean that indicates whether there had been an error or not
*/
boolean
ftm_wcdma_calv3_sweep_measure_tx
(
  ftm_cal_instr_payload_meas_hdet_type const *hdet_meas,
  ftm_calibration_tx_result_type *tx_result
);

/*----------------------------------------------------------------------------*/
/*!
  @brief
  FUNCTION FTM_WCDMA_CALV3_SWEEP_TEAR_DOWN_RADIO
  Tear Down Radio for calibration sweep
 
  @details
  This function will tear down all radios that are tuned to WCDMA mode to
  sleep state.
 
 @return
 boolean that indicates whether there had been an error or not
*/
boolean ftm_wcdma_calv3_sweep_tear_down_radio(void);

/*----------------------------------------------------------------------------*/
/*!
  @brief
  FUNCTION FTM_INT_CALV3_RADIO_SETUP
  Perform Radio Setup to given state
 
  @details
  This function will be called from cal v3 common framework to perform
  radio setup operation.All radio setup operation will be done under FTM
  Task context by sending radio setup command to FTM Task Q.
 
  @param radio_setup
  Pointer to the data structure containing radio setup unpacked parameter
 
  @return
  Flag indicating the status of radio setup operation
*/
boolean
ftm_wcdma_calv3_sweep_radio_setup
(
  ftm_cal_radio_setup_parameter_type const *radio_setup
);

/*----------------------------------------------------------------------------*/
/*!
  @brief
  FUNCTION FTM_INT_CALV3_FEEDBACK_SETUP
  Perform Feedback Setup
 
  @details
  This function will be called from cal v3 common framework to perform
  feedback setup operation.
 
  @param feedback_setup
  Pointer to the data structure containing radio setup unpacked parameter
 
  @return
  Flag indicating the status of feedback setup operation
*/
boolean
ftm_wcdma_calv3_sweep_feedback_setup
(
  ftm_cal_feedback_setup_parameter_type const *feedback_setup
);

/*----------------------------------------------------------------------------*/
/*!
  @brief
  Perform XPT sample capture
 
  @details
  This function will be called from cal v3 common framework to perform
  XPT sample capture.
 
  @param payload
  Payload associated with the XPT IQ Capture
 
  @return
  Flag indicating the status of the XPT IQ Capture action
*/
boolean
ftm_wcdma_calv3_sweep_xpt_iq_capture
(
  ftm_cal_xpt_instr_payload_iq_capture_type const *payload
);

/*----------------------------------------------------------------------------*/
/*!
  @brief
  FUNCTION FTM_INT_CALV3_FEEDBACK_SETUP
  Perform Feedback Setup
 
  @details
  This function will be called from WCDMA FTM dispatch to perform
  feedback setup operation.
 
  @param ftm_req_data
  Pointer to the data structure containing radio setup unpacked parameter
 
  @return
  ftm_rsp_pkt_type
*/
ftm_rsp_pkt_type ftm_wcdma_calv3_feedback_setup(void *ftm_req_data);

/*----------------------------------------------------------------------------*/
/*!
  @brief
  FUNCTION FTM_WCDMA_CALV3_CONFIGURE_RADIO
  Configures radio for calibration sweep.
 
  @details
  Configures RF based on passed in parameters to prepare for sweep.
  ftm_wcdma_calv3_sweep_configure_radio (which executes in ISR context)
  populates the required fields and pushes cmd to ftm. ftm will then
  pick up the cmd and execute this function in ftm context.

  @param ftm_req_data
  Pointer to ftm_wcdma_cal_sweep_configure_radio_req_type:
     mode:
       RF mode
     channel
       RF channel
     device_master_mask
       8-bit parameter
       For W we only use the first bit which indicates Tx device 0
     device_slave
       32-bit parameter
       Each master bit has usage of 4 bits of the slave_device.
       If the 4-bit val is 0xF then it is don't-care
       For W, we only use the last four bits: 0x1 - DRx enabled, 0xF - disabled 
 
 @return
 ftm_rsp_pkt_type
*/

/*----------------------------------------------------------------------------*/
ftm_rsp_pkt_type ftm_wcdma_calv3_configure_radio(void *ftm_req_data);

/*----------------------------------------------------------------------------*/
ftm_rsp_pkt_type ftm_wcdma_calv3_radio_setup(void *ftm_req_data);

/*----------------------------------------------------------------------------*/
boolean
ftm_wcdma_calv3_rx_measure
(
  ftm_cal_rx_meas_parameter_type const *rx_measure,
  ftm_cal_rx_meas_result_data_type *cal_result
);

/*----------------------------------------------------------------------------*/
boolean
ftm_wcdma_calv3_tx_measure
(
  ftm_cal_tx_meas_parameter_type const *tx_measure,
  ftm_cal_tx_meas_result_data_type *cal_result
);

/*----------------------------------------------------------------------------*/
boolean
ftm_wcdma_calv3_sweep_tx_override
(
  ftm_cal_tx_override_parameter_type const *tx_override
);

/*----------------------------------------------------------------------------*/
/*!
  @brief
  Intialize polling events
 
  @details
  This function will register the callbacks for the event to be used in
  cal v3 polling segment.
 
  To increase the registration efficiency register for the event with
  higher event_ID is registered first. This prevents multiple re-allocs in
  ftm_calibration_polling_register_event() function
 
  @return
  Status of 1x polling event registration.
*/
boolean
ftm_wcdma_calv3_sweep_polling_event_init
(
  void
);

/*----------------------------------------------------------------------------*/
boolean
ftm_wcdma_cal_xpt_configure
(
  ftm_cal_xpt_instr_payload_ept_config_type const *payload
);

/*----------------------------------------------------------------------------*/
ftm_rsp_pkt_type ftm_wcdma_cal_xpt_iq_capture(void *ftm_req_data);


/*----------------------------------------------------------------------------*/
/*!
  @brief
  Sets or clears the calibration state flag
 
  @details
  This function sets or clears the calibration flag indicating cal v3 is in progress
  or not.
 
  @return
  None
*/
void
ftm_wcdma_calv3_set_cal_flag
(
  boolean cal_flag
);


/*----------------------------------------------------------------------------*/
/*!
  @brief
  Returns calibration state flag
 
  @details
  This function shows if calibration is in progress or not
 
  @return
  True or False
*/
boolean
ftm_wcdma_calv3_get_cal_flag
(
  void
);

uint16 ftm_wcdma_calv3_get_rx_settling_time(void);

#endif // FTM_WCDMA_CALV3_H