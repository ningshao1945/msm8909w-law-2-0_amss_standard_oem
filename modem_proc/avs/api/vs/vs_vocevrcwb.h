#ifndef __VS_VOCEVRCWB_H__
#define __VS_VOCEVRCWB_H__

/**
  @file vs_vocevrcwb.h
  @brief This file contains the definitions of the constants,
         data structures, and interfaces for EVRC-WB vocoder

*/

/*
  ============================================================================

   Copyright (C) 2014 Qualcomm Technologies, Inc. 
   All Rights Reserved.
   Confidential and Proprietary - Qualcomm Technologies, Inc. 

  ============================================================================

                             Edit History

  $Header: //commercial/MPSS.JO.2.0.c1.4/Main/modem_proc/avs/api/vs/vs_vocevrcwb.h#1 $
  $Author: mplcsds1 $

  when      who   what, where, why
  --------  ---   ------------------------------------------------------------
  07/18/14  shr   Initial revision

  ============================================================================
*/

/*----------------------------------------------------------------------------
  Include files for Module
----------------------------------------------------------------------------*/

#include "vs_common.h"

/** @addtogroup evrcwb_datatypes
@{ */

/*----------------------------------------------------------------------------
   Type Definitions
----------------------------------------------------------------------------*/

/*
 * Defined media types.
 */

/** EVRC-WB vocoder format. */
#define VS_COMMON_MEDIA_ID_EVRCWB ( 0x000130D0 )

/*----------------------------------------------------------------------------
   Start of Enumerations
----------------------------------------------------------------------------*/


/**
 *
 * Estimated average encoding rates for active speech (channel encoding rates).
 *
 * Refer to Table 2.5.1.2-1 in @xhyperref{S15, [S15]}.
 */
typedef enum vs_vocevrcwb_avg_enc_rate_e
{
  VS_VOCEVRCWB_AVG_ENC_RATE_4_8_KBPS = 0,
      /**< Rate -- 4.8 kbps; COP -- 7. */
  VS_VOCEVRCWB_AVG_ENC_RATE_8_5_KBPS = 1,  
      /**< Rate -- 8.5 kbps; COP -- 0. */
  VS_VOCEVRCWB_AVG_ENC_RATE_9_3_KBPS = 2, 
      /**< Rate -- 9.3 kbps; COP -- 4. */
} /** @cond */
  vs_vocevrcwb_avg_enc_rate_t/** @endcond */;

/**
 * EVRC-WB frame type (rate) information. 
 * Refer to Table 3-7 in @xhyperref{Q5, [Q5]}.
 */
typedef enum vs_vocevrcwb_frame_rate_e
{
  VS_VOCEVRCWB_FRAME_BLANK_RATE = 0,
    /**< Blank. */
  VS_VOCEVRCWB_FRAME_EIGHTH_RATE = 1,
    /**< Rate 1/8. */
  VS_VOCEVRCWB_FRAME_QUARTER_RATE = 2,
    /**< Rate 1/4. */
  VS_VOCEVRCWB_FRAME_HALF_RATE = 3,
    /**< Rate 1/2. */
  VS_VOCEVRCWB_FRAME_FULL_RATE = 4,
    /**< Rate 1. */
  VS_VOCEVRCWB_FRAME_ERASURE_RATE = 5,
    /**< Erasure rate; applicable only for downlink. */
} /** @cond */
  vs_vocevrcwb_frame_rate_t/** @endcond */;

/*  End of Enumerations */

/*----------------------------------------------------------------------------
   Start of Structures
----------------------------------------------------------------------------*/


typedef struct vs_vocevrcwb_frame_info_t
  vs_vocevrcwb_frame_info_t;

/**
 * EVRC-WB frame information structure.
 */
struct vs_vocevrcwb_frame_info_t
{
  vs_vocevrcwb_frame_rate_t rate;
      /**< EVRC-WB frame rate. */
};

/** @} */

/** @addtogroup set_evrcwb_frame_minmax_rate
@{ */

/**
 * Sets the minimum and maximum encoder rate of the EVRC-WB vocoder.
 */
#define VS_VOCEVRCWB_CMD_SET_FRAME_MINMAX_RATE ( 0x000130B9 )

typedef struct vs_vocevrcwb_cmd_set_frame_minmax_rate_t 
  vs_vocevrcwb_cmd_set_frame_minmax_rate_t;

/** Set minimum/maximum frame rate command parameters. */
struct vs_vocevrcwb_cmd_set_frame_minmax_rate_t
{
  uint32_t handle;
      /**< Handle from the Open command. */
  vs_vocevrcwb_frame_rate_t min_rate;
      /**< Minimum frame rate. */
  vs_vocevrcwb_frame_rate_t max_rate;
      /**< Maximum frame rate. */
};

/** @} */

/** @addtogroup set_evrcwb_avg_enc_rate
@{ */

/**
 * Sets the average encoder rate of the EVRC-WB vocoder.
 */
#define VS_VOCEVRCWB_CMD_SET_AVG_ENC_RATE ( 0x000130BA )

typedef struct vs_vocevrcwb_cmd_set_avg_enc_rate_t 
  vs_vocevrcwb_cmd_set_avg_enc_rate_t;

/** Set average encoder rate command parameters. */
struct vs_vocevrcwb_cmd_set_avg_enc_rate_t
{
  uint32_t handle;
      /**< Handle from the Open command. */
  vs_vocevrcwb_avg_enc_rate_t rate;
      /**< Average encoder rate. */ 
};

/** @} */

/** @addtogroup set_evrcwb_dtx_mode
@{ */

/**
 * Sets the DTX mode of the EVRC-WB vocoder.
 */
#define VS_VOCEVRCWB_CMD_SET_DTX_MODE ( 0x000130BB )

typedef struct vs_vocevrcwb_cmd_set_dtx_mode_t 
  vs_vocevrcwb_cmd_set_dtx_mode_t;

/** Set DTX mode command parameters. */
struct vs_vocevrcwb_cmd_set_dtx_mode_t
{
  uint32_t handle;
      /**< Handle from the Open command. */
  bool_t enable_flag;
      /**< Enable flag: \n
        *  - TRUE -- Enable DTX \n
        *  - FALSE -- Disable DTX @tablebulletend
        */
};

/*  End of Structures */

/** @} */

#endif /* __VS_VOCEVRCWB_H__ */



