/**
 * @file sns_ddf_smgr_if.h  
 * @brief Interface exposed by the Sensors Manager to device drivers for 
 *        asynchronous functionality. 
 *  
 * Copyright (c) 2010-2012,2014 by Qualcomm Technologies, Inc.  All Rights Reserved
 * Qualcomm Technologies Proprietary and Confidential
 *  
 * @see sns_ddf_driver_if.h
 */

/*==============================================================================
  Edit History

  This section contains comments describing changes made to the module. Notice
  that changes are listed in reverse chronological order. Please use ISO format
  for dates.

  $Header: //commercial/MPSS.JO.2.0.c1.4/Main/modem_proc/Sensors/ddf/inc/sns_ddf_smgr_if.h#1 $
  $DateTime: 2016/12/13 08:00:23 $

  when       who  what, where, why 
  ---------- ---  -----------------------------------------------------------
  2014-07-20 VY   Disabled logging in uImage 
  2014-07-09 vy   Added support for non-uimage dd
  2014-02-14 tc   Added sns_ddf_smgr_notify_daf_ind
  2011-03-06 br   Added sns_ddf_signal_irq_e
  2011-08-22 yk   Added function to notify SMGR of completed sensor tests.
  2010-09-24 yk   Renamed functions to include "smgr". Added notify_timer().
  2010-08-14 yk   Renamed identifiers to conform to DSPS naming convention.
  2010-07-30 yk   Initial revision
==============================================================================*/

#ifndef SDDF_SMGR_IF_H
#define SDDF_SMGR_IF_H

#include "sns_ddf_common.h"

/* Old naming convention is deprecated. However, we maintain backwards
 * compatibility until drivers update. */
#define sns_ddf_irq_e sns_ddf_signal_irq_e


/**
 * List of IRQs for this platform. 
 */
typedef enum
{
    SNS_DDF_SIGNAL_IRQ_MOTION_DETECT,
    SNS_DDF_SIGNAL_IRQ__ALL

} sns_ddf_signal_irq_e;

/** 
 *  @brief Notifies the Sensors Manager of newly available data.
 *  
 *  Drivers use this function when data cannot be retrieved synchronously, or
 *  when continuous sampling is generated by the driver/device.
 *  
 *  @param[in] smgr_handle  Handle given to this driver at init time.
 *  @param[in] data         Sensor data to pass to the Sensors Manager.
 *  @param[in] data_len     Length of @a data.
 *  
 *  @note The sensor types included in a response must match those in the
 *        original request. I.e. if a request was made for multiple sensors,
 *        the driver must collect samples from all sensors before responding.
 *  
 *  @return Success if the Sensors Manager was able to queue the data for
 *          processing. Otherwise a specific error code is returned.
 */
sns_ddf_status_e sns_ddf_smgr_notify_data(
    sns_ddf_handle_t       smgr_handle,
    sns_ddf_sensor_data_s  data[],
    uint32_t               data_len);


/** 
 * @brief Notifies the Sensors Manager that a device/driver event occurred. 
 *  
 * Drivers generally use this function to deliver event information when event 
 * monitoring is enabled (e.g. motion detection). 
 *  
 * @param[in] smgr_handle  Handle given to this driver at init time. 
 * @param[in] sensor       Sensor type that generated this event. 
 * @param[in] event        Event type detected by the device. 
 *  
 * @return Success if the Sensors Manager was able to queue the event for
 *         processing. Otherwise a specific error code is returned.
 */
sns_ddf_status_e sns_ddf_smgr_notify_event(
    sns_ddf_handle_t  smgr_handle,
    sns_ddf_sensor_e  sensor,
    sns_ddf_event_e   event);


/**
 * @brief Notifies the Sensors Manager that a factory test completed.
 * 
 * @param[in] smgr_handle  Handle given to this driver at init time. 
 * @param[in] sensor       Sensor type that generated this notification. 
 * @param[in] status       SNS_DDF_SUCCESS or SNS_DDF_EFAIL.
 * @param[in] err          Driver-specific error code to describe the result.
 * 
 * @return Success if the Sensors Manager was able to queue the notification for
 *         processing. Otherwise a specific error code is returned.
 */
sns_ddf_status_e sns_ddf_smgr_notify_test_complete(
    sns_ddf_handle_t  smgr_handle,
    sns_ddf_sensor_e  sensor,
    sns_ddf_status_e  status,
    uint32_t          err);


/**
 * @brief Notifies the Sensors Manager that a driver timer has expired. 
 *  
 * The SMGR is responsible for dispatching timer callback functions. Once the 
 * timer service has determined that a timer has expired, it will call this 
 * function so that SMGR can dispatch the timer's callback function when it 
 * deems appropriate.
 * 
 * @param[in] timer  Timer object to dispatch.
 */
void sns_ddf_smgr_notify_timer(void* timer);


/**
 * @brief Notifies the Sensors Manager that an interrupt has occured.
 *  
 * The SMGR is responsible for signaling drivers when an interrupt has occured. 
 * It does this by receiving the interrupt notification in the ISR context, and 
 * then forwarding it to drivers in the SMGR task context. Therefore, this 
 * function should only be called by the platform interrupt services.
 * 
 * @param[in] param  Parameter submitted when the interrupt was registered.
 */
void sns_ddf_smgr_notify_irq(uint32_t param);

/**
 * @brief Notifies a Sensor1 client of a Driver Access message from the driver.
 *        Asynchronous API.
 *
 * @param[in]  ind_id        Indication identifier.
 * @param[in]  ind_msg       Pointer to the Indication message. This is allocated
 *                           by the device driver and must be freed by the driver
 *                           upon returning from this function!
 * @param[in]  ind_size      The number of bytes in @ind_msg. If there is no
 *                           indication message for the indication, then this
 *                           will be 0 to show that the DAF indication is not
 *                           present. This cannot be larger than
 *                           @SNS_SMGR_MAX_DAF_MESSAGE_SIZE_V01 bytes. If it is
 *                           the indication message will be truncated.
 * @param[in]  trans_id_ptr  Pointer to the transaction identifier. If there is
                             no transaction ID, this field will be null.
 * @param[in]  conn_handle   The connection handle for the request message.
 *                           This value must be saved by the device driver if the
 *                           corresponding request is expected to generate
 *                           indications. Upon notifying the SMGR of an
 *                           indication, this value must be provided to the SMGR
 *                           so the SMGR can forward the indication to the client.
 *
 * @return Success if the message was correctly sent. Otherwise a specific
 *         error code is returned.
 */
sns_ddf_status_e sns_ddf_smgr_notify_daf_ind(
    uint32_t               ind_id,
    const void*            ind_msg,
    uint32_t               ind_size,
    const uint8_t*         trans_id_ptr,
    void*                  conn_handle);


/**
 * @brief Updates the SMGR info to indicate the uImage 
 *        refactored code for this driver in use
 *
 * @param[in]  smgr_handle    Pointer to SMGR sensor's DD info
 *
 * @return None.
 */
void sns_ddf_smgr_set_uimg_refac(
    sns_ddf_handle_t  smgr_handle);


/**
 * @brief Gets from SMGR if this driver supports refactored code
 *        for uImage.
 *
 * @param[in]  dd_handle    handle to DD.
 *
 * @return True if suppports, False otherwise. 
 *  
 */
bool sns_ddf_smgr_get_uimg_refac(
    sns_ddf_handle_t  dd_handle);

/**
 * @brief Gets from SMGR if it is in uImage mode
 *
 * @param[in]  None.
 *
 * @return True if in uImage mode, False otherwise. 
 *  
 */
bool sns_ddf_smgr_is_in_uimage(
    void);


#endif

