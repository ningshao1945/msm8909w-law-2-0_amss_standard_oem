#ifndef BOOT_EXTERN_USB_INTERFACE_H
#define BOOT_EXTERN_USB_INTERFACE_H

/*===========================================================================

                    BOOT EXTERN USB DRIVER DEFINITIONS

DESCRIPTION
  Contains wrapper definition for external usb drivers

INITIALIZATION AND SEQUENCING REQUIREMENTS
  None
  
Copyright 2014 by QUALCOMM Technologies, Incorporated.  All Rights Reserved.
============================================================================*/
/*===========================================================================

                      EDIT HISTORY FOR FILE

This section contains comments describing changes made to this file.
Notice that changes are listed in reverse chronological order.
    
$Header: //components/rel/boot.bf/3.1.2.c3/boot_images/core/boot/secboot3/src/boot_extern_usb_interface.h#1 $
$DateTime: 2015/09/01 00:30:35 $
$Author: pwbldsvc $
    
when       who     what, where, why
--------   ---     ----------------------------------------------------------
09/08/14   jz      Added support for fast USB enumeration
06/02/14   jz      Updated with common USB driver API, except for boot_qusb_al_bulk_init
05/27/14   jz      Initial Creation.

===========================================================================*/

/*==========================================================================

                               INCLUDE FILES

===========================================================================*/

#include "boot_sahara.h"
#include "qusb_common.h"   /* for qusb_max_speed_required_t */
#include "qhsusb_al_bulk.h"  /* for qhsusb_bulk_mode_type */

/*===========================================================================
                      FUNCTION DECLARATIONS
===========================================================================*/

/*===========================================================================

**  Function :  boot_qusb_al_bulk_init

** ==========================================================================
*/
/*!
 * 
 * @brief   This function initializes the USB core and keeps polling until
 *          enumeration is complete.
 *
 * @details This function initializes the USB core and keeps polling until
 *          enumeration is complete.
 * 
 * @param   speed_required   -  [IN] The maximum speed at which USB should be
 *                            configured
 * 
 * @return  None.
 * 
 */
#if (defined(FEATURE_BOOT_EXTERN_USB_COMPLETED))
void boot_qusb_al_bulk_init(qusb_max_speed_required_t speed_required);
#elif  (defined(FEATURE_BOOT_EXTERN_HSUSB_COMPLETED))
  void boot_qhsusb_al_bulk_init(int core_id,
                                qhsusb_bulk_mode_type bulk_mode_type);
#else
  static inline void boot_qusb_al_bulk_init(qusb_max_speed_required_t speed_required)
  {
  }
  static inline void boot_qhsusb_al_bulk_init(int core_id,
                                              qhsusb_bulk_mode_type bulk_mode_type)
  {
  }
#endif


/*===========================================================================

**  Function :  boot_usb_al_bulk_poll

** ==========================================================================
*/
/*!
 * 
 * @brief   This function polls the hardware for events.
 *
 * @details This function polls the hardware for events.
 * 
 * @param   None.
 * 
 * @return  None.
 * 
 */
#if (defined(FEATURE_BOOT_EXTERN_USB_COMPLETED) || defined(FEATURE_BOOT_EXTERN_HSUSB_COMPLETED))
  void boot_usb_al_bulk_poll(void);
#else
  static inline void boot_usb_al_bulk_poll(void)
  {
  }
#endif

/*
**  Function :  boot_usb_al_bulk_set_shutdown_mode
** ==========================================================================
*/
/*!
 * 
 * @brief   This function sets shutdown mode of the hardware.
 *
 * @details This function sets shutdown mode of the hardware.
 * 
 * @param   Shutdown mode.
 * 
 * @return  None.
 * 
 */
#if defined(FEATURE_BOOT_EXTERN_USB_COMPLETED)
  void boot_usb_al_bulk_set_shutdown_mode(qusb_shutdown_mode_t mode);
#else
  static inline void boot_usb_al_bulk_set_shutdown_mode(qusb_shutdown_mode_t mode)
  {
  }
#endif

/*===========================================================================

**  Function :  boot_usb_al_bulk_shutdown

** ==========================================================================
*/
/*!
 * 
 * @brief   This function performs a shutdown of the hardware.
 *
 * @details This function performs a shutdown of the hardware.
 * 
 * @param   None.
 * 
 * @return  None.
 * 
 */
#if (defined(FEATURE_BOOT_EXTERN_USB_COMPLETED) || defined(FEATURE_BOOT_EXTERN_HSUSB_COMPLETED))
  void boot_usb_al_bulk_shutdown(void);
#else
  static inline void boot_usb_al_bulk_shutdown(void)
  {
  }
#endif


/*===========================================================================

**  Function :  boot_usb_al_bulk_receive

** ==========================================================================
*/
/*!
 * 
 * @brief   This function receives a bulk of data upto the input length.
 *
 * @details This function will continue to poll the hardware until the receive
 *          URB is not NULL, upon which the data will be copied to the
 *          input receive buffer.
 * 
 * @param   *rx_buf     -  [IN/OUT] Receive buffer for data, must be 4 byte aligned 
 * @param   len         -  [IN    ] Length of buffer, must be multiples of max packet size
 * @param   rx_cb       -  [IN    ] Return callback function
 * @param   *err_code   -  [IN/OUT] Any error that occurs during transfer
 * 
 * @return  Number of bytes receieved.
 * 
 */
#if (defined(FEATURE_BOOT_EXTERN_USB_COMPLETED) || defined(FEATURE_BOOT_EXTERN_HSUSB_COMPLETED))
  uint32 boot_usb_al_bulk_receive(byte *rx_buf, 
                                     uint32 len, 
                                     sahara_rx_cb_type rx_cb, 
                                     uint32 * err_code);
#else
  static inline uint32 boot_usb_al_bulk_receive(byte *rx_buf, 
                                     uint32 len, 
                                     sahara_rx_cb_type rx_cb, 
                                     uint32 * err_code)
  {
    return 0;
  }
#endif


/*===========================================================================

**  Function :  boot_usb_al_bulk_transmit

** ==========================================================================
*/
/*!
 * 
 * @brief   This function receives a bulk of data upto the input length.
 *
 * @details This function will continue to poll the hardware until the transmit
 *          URB transfer is complete.
 * 
 * @param   *tx_buf     -  [IN/OUT] Transmit buffer for data, must be 4 byte aligned 
 * @param   len         -  [IN    ] Length of data to trasmit in bytes
 * @param   tx_cb       -  [IN    ] Transmit complete callback
 * @param   *err_code   -  [IN/OUT] Any error that occurs during transfer
 * 
 * @return  Number of bytes transmitted.
 * 
 */
#if (defined(FEATURE_BOOT_EXTERN_USB_COMPLETED) || defined(FEATURE_BOOT_EXTERN_HSUSB_COMPLETED))
  uint32 boot_usb_al_bulk_transmit(byte *tx_buf,    
                                      uint32 len,       
                                      sahara_tx_cb_type tx_cb, 
                                      uint32 * err_code);
#else
  static inline uint32 boot_usb_al_bulk_transmit(byte *tx_buf,    
                                      uint32 len,       
                                      sahara_tx_cb_type tx_cb, 
                                      uint32 * err_code)
  {
    return 0;
  }
#endif



/*===========================================================================

**  Function :  boot_usb_al_bulk_get_max_packet_size

** ==========================================================================
*/
/*!
 * 
 * @brief   This function returns whether USB spec defined max packet sizes
 *
 * @details Correct packet sizes are determined internally and will be
 *          returned to external interface
 *          
 * @return  Max packet sizes
 * 
 */
#if (defined(FEATURE_BOOT_EXTERN_USB_COMPLETED) || defined(FEATURE_BOOT_EXTERN_HSUSB_COMPLETED))
  uint32 boot_usb_al_bulk_get_max_packet_size(void);
#else
  static inline uint32 boot_usb_al_bulk_get_max_packet_size(void)
  {
    return 0;
  }
#endif

/*===========================================================================

**  Function :  boot_usb_al_check_for_pbl_dload

** ==========================================================================
*/
/*!
 * 
 * @brief   This function checks if the USB D+ line is grounded.
 *
 * 
 * @param   core_id   -  [IN] USB core ID to initialize
 * 
 *
 * @return  boolean - returns whether we should enter PBL EDL mode.
 * 
 */
#if (defined(FEATURE_BOOT_EXTERN_USB_COMPLETED) || defined(FEATURE_BOOT_EXTERN_HSUSB_COMPLETED))
  boolean boot_usb_al_check_for_pbl_dload(uint32 core_id);
#else
  static inline boolean boot_usb_al_check_for_pbl_dload(uint32 core_id)
  {
    return FALSE;
  }
#endif

/*===========================================================================

**  Function :  qusb_al_bulk_get_max_raw_data_size

** ==========================================================================
*/
/*!
 * 
 * @brief   Returns the maximum bulk transfer level size that can be requested
 *          by the client
 *
 * @details Windows only support maximum bulk transfer size of 1MB, whereas
 *          Linux supports a larger maximum 
 *          
 * @return  Max USB bulk transfer level size
 * 
 */
#if (defined(FEATURE_BOOT_EXTERN_USB_COMPLETED) || defined(FEATURE_BOOT_EXTERN_HSUSB_COMPLETED))
  uint32 boot_usb_al_bulk_get_max_raw_data_size(void);
#else
  static inline uint32 boot_usb_al_bulk_get_max_raw_data_size(void)
  {
    return 0;
  }
#endif

/*===========================================================================

**  Function :  boot_qusb_al_do_fast_enum

** ==========================================================================
*/
/*!
 * 
 * @brief   Does fast enumeration 
 *
 * @details In case of data card on PC, BIOS may want to enumerate all
            attached devices in order to check every device against its
            whitelist.
            Application starts stack, polls it until enumeration done,
            then shuts down stack.
 *          
 * @param   speed_required   -  [IN] The maximum speed at which USB should be
 *                            configured
 * 
 * @return  None
 * 
 */

#if (defined(FEATURE_BOOT_EXTERN_USB_COMPLETED) && defined(FEATURE_QUSB_FAST_ENUMERATION))
  void boot_qusb_al_do_fast_enum(qusb_max_speed_required_t speed_required);
#else
  static inline void boot_qusb_al_do_fast_enum(qusb_max_speed_required_t speed_required)
  {
    return;
  }
#endif

#endif /* BOOT_EXTERN_USB_INTERFACE_H */
