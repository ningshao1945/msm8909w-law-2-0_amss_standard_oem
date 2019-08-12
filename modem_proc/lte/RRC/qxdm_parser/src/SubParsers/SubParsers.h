/*!
  @file
  SubParsers.h

  @brief
  Generalized Log Packet subpacket parser module header

*/

/*===========================================================================

  Copyright (c) 2007 Qualcomm Technologies Incorporated. All Rights Reserved

  Qualcomm Proprietary

  Export of this technology or software is regulated by the U.S. Government.
  Diversion contrary to U.S. law prohibited.

  All ideas, data and information contained in or disclosed by
  this document are confidential and proprietary information of
  Qualcomm Technologies Incorporated and all rights therein are expressly reserved.
  By accepting this material the recipient agrees that this material
  and the information contained therein are held in confidence and in
  trust and will not be used, copied, reproduced in whole or in part,
  nor its contents revealed in any manner to others without the express
  written permission of Qualcomm Technologies Incorporated.

===========================================================================*/

/*===========================================================================

                        EDIT HISTORY FOR MODULE

This section contains comments describing changes made to the module.
Notice that changes are listed in reverse chronological order.

$Header: //commercial/MPSS.JO.2.0.c1.4/Main/modem_proc/lte/RRC/qxdm_parser/src/SubParsers/SubParsers.h#1 $

when       who     what, where, why
--------   ---     ----------------------------------------------------------
01/22/08   tjc     Ported to Genlog2
06/05/07   trc     Include genlog.h for GENLOG_VER_* definitions
04/30/07   trc     initial version
===========================================================================*/

#ifndef SUBPARSERS_H
#define SUBPARSERS_H

/*===========================================================================

                           INCLUDE FILES

===========================================================================*/

#include "Common.h"
#include "GenLogPacket.h"
#include <genlog.h>

/*===========================================================================

                   EXTERNAL DEFINITIONS AND TYPES

===========================================================================*/

/*! @brief Maximum subpacket informational name length */
#define MAX_SUBP_NAME_LEN 64


/*! @brief Subpacket Text Parser function
*/
typedef void (*PSF)(const BYTE    *pInBuf,
                    UINT          nBufSize,
                    COutputBuffer &pOutBuf);


/*! @brief Subpacket parser definition record
*/
typedef struct
{
  BYTE  SubpacketId;      /*!< ID of Subpacket to be parsed */
  BYTE  SubpacketVersion; /*!< Version (of ID) of Subpacket to be parsed */
  CHAR  Name[MAX_SUBP_NAME_LEN];
                          /*!< Subpacket informational name */
  PSF   SubpacketParserFn;/*!< Subpacket Text parsing function */
} SubpacketParserType;


/*===========================================================================

                    EXTERNAL FUNCTION PROTOTYPES

===========================================================================*/

// Parse a general log packet (dispatching to all relevant subpacket parsers)
void GenLogTextParser
(
const LogPacketHeaderType   *pInBuf,
UINT                        nBufSize,
COutputBuffer               &pOutBuf
);

#endif /* SUBPARSERS_H */
