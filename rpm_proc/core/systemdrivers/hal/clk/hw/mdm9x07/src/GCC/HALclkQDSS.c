/*
==============================================================================

FILE:         HALclkQDSS.c

DESCRIPTION:
   This auto-generated file contains the clock HAL code for the 
   QDSS clocks.

   List of clock domains:
     - HAL_clk_mGCCQDSSATClkDomain
     - HAL_clk_mGCCQDSSSTMClkDomain
     - HAL_clk_mGCCQDSSTRACECLKINClkDomain
     - HAL_clk_mGCCQDSSTSCTRClkDomain


   List of power domains:



==============================================================================

$Header: //components/rel/rpm.bf/2.1.1/core/systemdrivers/hal/clk/hw/mdm9x07/src/GCC/HALclkQDSS.c#2 $

==============================================================================
            Copyright (c) 2015 QUALCOMM Technologies Incorporated.
                    All Rights Reserved.
                  QUALCOMM Proprietary/GTDR
==============================================================================
*/

/*============================================================================

                     INCLUDE FILES FOR MODULE

============================================================================*/


#include <HALhwio.h>

#include "HALclkInternal.h"
#include "HALclkTest.h"
#include "HALclkGeneric.h"
#include "HALclkHWIO.h"


/*============================================================================

             DEFINITIONS AND DECLARATIONS FOR MODULE

=============================================================================*/


/* ============================================================================
**    Prototypes
** ==========================================================================*/


/* ============================================================================
**    Externs
** ==========================================================================*/

extern HAL_clk_ClockDomainControlType  HAL_clk_mGCCClockDomainControl;
extern HAL_clk_ClockDomainControlType  HAL_clk_mGCCClockDomainControlRO;
extern HAL_clk_ClockDomainControlType  HAL_clk_mGCCClockDomainControl_5;
//extern HAL_clk_ClockDomainControlType  HAL_clk_mGCCClockDomainControlRO_5;
extern HAL_clk_ClockDomainControlType  HAL_clk_mGCCClockDomainControl_7;
extern HAL_clk_ClockDomainControlType  HAL_clk_mGCCClockDomainControlRO_7;


/* ============================================================================
**    Data
** ==========================================================================*/


/*                           
 *  HAL_clk_mQDSSATClkDomainClks
 *                  
 *  List of clocks supported by this domain.
 */
static HAL_clk_ClockDescType HAL_clk_mQDSSATClkDomainClks[] =
{
  {
    /* .szClockName      = */ "gcc_pcnoc_at_clk",
    /* .mRegisters       = */ { HWIO_OFFS(GCC_PCNOC_AT_CBCR), HWIO_OFFS(GCC_PCNOC_BCR), {0, 0} },
    /* .pmControl        = */ &HAL_clk_mGenericClockControl,
    /* .nTestClock       = */ HAL_CLK_GCC_TEST_GCC_PCNOC_AT_CLK
  },
  {
    /* .szClockName      = */ "gcc_qdss_at_clk",
    /* .mRegisters       = */ { HWIO_OFFS(GCC_QDSS_AT_CBCR), HWIO_OFFS(GCC_QDSS_BCR), {0, 0} },
    /* .pmControl        = */ &HAL_clk_mGenericClockControl,
    /* .nTestClock       = */ HAL_CLK_GCC_TEST_GCC_QDSS_AT_CLK
  },
};


/*
 * HAL_clk_mGCCQDSSATClkDomain
 *
 * QDSSAT clock domain.
 */
HAL_clk_ClockDomainDescType HAL_clk_mGCCQDSSATClkDomain =
{
  /* .nCGRAddr             = */ HWIO_OFFS(GCC_QDSS_AT_CMD_RCGR),
  /* .pmClocks             = */ HAL_clk_mQDSSATClkDomainClks,
  /* .nClockCount          = */ sizeof(HAL_clk_mQDSSATClkDomainClks)/sizeof(HAL_clk_mQDSSATClkDomainClks[0]),
  /* .pmControl            = */ &HAL_clk_mGCCClockDomainControl_7,
  /* .pmNextClockDomain    = */ NULL
};


/*                           
 *  HAL_clk_mQDSSSTMClkDomainClks
 *                  
 *  List of clocks supported by this domain.
 */
static HAL_clk_ClockDescType HAL_clk_mQDSSSTMClkDomainClks[] =
{
  {
    /* .szClockName      = */ "gcc_pcnoc_qdss_stm_axi_clk",
    /* .mRegisters       = */ { HWIO_OFFS(GCC_PCNOC_QDSS_STM_AXI_CBCR), HWIO_OFFS(GCC_PCNOC_BCR), {0, 0} },
    /* .pmControl        = */ &HAL_clk_mGenericClockControl,
    /* .nTestClock       = */ HAL_CLK_GCC_TEST_GCC_PCNOC_QDSS_STM_AXI_CLK
  },
  {
    /* .szClockName      = */ "gcc_qdss_stm_clk",
    /* .mRegisters       = */ { HWIO_OFFS(GCC_QDSS_STM_CBCR), HWIO_OFFS(GCC_QDSS_BCR), {0, 0} },
    /* .pmControl        = */ &HAL_clk_mGenericClockControl,
    /* .nTestClock       = */ HAL_CLK_GCC_TEST_GCC_QDSS_STM_CLK
  },
};


/*
 * HAL_clk_mGCCQDSSSTMClkDomain
 *
 * QDSSSTM clock domain.
 */
HAL_clk_ClockDomainDescType HAL_clk_mGCCQDSSSTMClkDomain =
{
  /* .nCGRAddr             = */ HWIO_OFFS(GCC_QDSS_STM_CMD_RCGR),
  /* .pmClocks             = */ HAL_clk_mQDSSSTMClkDomainClks,
  /* .nClockCount          = */ sizeof(HAL_clk_mQDSSSTMClkDomainClks)/sizeof(HAL_clk_mQDSSSTMClkDomainClks[0]),
  /* .pmControl            = */ &HAL_clk_mGCCClockDomainControl,
  /* .pmNextClockDomain    = */ NULL
};


/*                           
 *  HAL_clk_mQDSSTRACECLKINClkDomainClks
 *                  
 *  List of clocks supported by this domain.
 */
static HAL_clk_ClockDescType HAL_clk_mQDSSTRACECLKINClkDomainClks[] =
{
  {
    /* .szClockName      = */ "gcc_qdss_traceclkin_clk",
    /* .mRegisters       = */ { HWIO_OFFS(GCC_QDSS_TRACECLKIN_CBCR), HWIO_OFFS(GCC_QDSS_BCR), {0, 0} },
    /* .pmControl        = */ &HAL_clk_mGenericClockControl,
    /* .nTestClock       = */ HAL_CLK_GCC_TEST_GCC_QDSS_TRACECLKIN_CLK
  },
};


/*
 * HAL_clk_mGCCQDSSTRACECLKINClkDomain
 *
 * QDSSTRACECLKIN clock domain.
 */
HAL_clk_ClockDomainDescType HAL_clk_mGCCQDSSTRACECLKINClkDomain =
{
  /* .nCGRAddr             = */ HWIO_OFFS(GCC_QDSS_TRACECLKIN_CMD_RCGR),
  /* .pmClocks             = */ HAL_clk_mQDSSTRACECLKINClkDomainClks,
  /* .nClockCount          = */ sizeof(HAL_clk_mQDSSTRACECLKINClkDomainClks)/sizeof(HAL_clk_mQDSSTRACECLKINClkDomainClks[0]),
  /* .pmControl            = */ &HAL_clk_mGCCClockDomainControl_5,
  /* .pmNextClockDomain    = */ NULL
};


/*                           
 *  HAL_clk_mQDSSTSCTRClkDomainClks
 *                  
 *  List of clocks supported by this domain.
 */
static HAL_clk_ClockDescType HAL_clk_mQDSSTSCTRClkDomainClks[] =
{
  {
    /* .szClockName      = */ "gcc_qdss_dap_clk",
    /* .mRegisters       = */ { HWIO_OFFS(GCC_QDSS_DAP_CBCR), HWIO_OFFS(GCC_QDSS_BCR), HAL_CLK_FMSK(PROC_CLK_BRANCH_ENA_VOTE, QDSS_DAP_CLK_ENA) },
    /* .pmControl        = */ &HAL_clk_mGenericClockControl,
    /* .nTestClock       = */ HAL_CLK_GCC_TEST_GCC_QDSS_DAP_CLK
  },
  {
    /* .szClockName      = */ "gcc_qdss_tsctr_div16_clk",
    /* .mRegisters       = */ { HWIO_OFFS(GCC_QDSS_TSCTR_DIV16_CBCR), HWIO_OFFS(GCC_QDSS_BCR), {0, 0} },
    /* .pmControl        = */ &HAL_clk_mGenericClockControl,
    /* .nTestClock       = */ HAL_CLK_GCC_TEST_GCC_QDSS_TSCTR_DIV16_CLK
  },
  {
    /* .szClockName      = */ "gcc_qdss_tsctr_div2_clk",
    /* .mRegisters       = */ { HWIO_OFFS(GCC_QDSS_TSCTR_DIV2_CBCR), HWIO_OFFS(GCC_QDSS_BCR), {0, 0} },
    /* .pmControl        = */ &HAL_clk_mGenericClockControl,
    /* .nTestClock       = */ HAL_CLK_GCC_TEST_GCC_QDSS_TSCTR_DIV2_CLK
  },
  {
    /* .szClockName      = */ "gcc_qdss_tsctr_div3_clk",
    /* .mRegisters       = */ { HWIO_OFFS(GCC_QDSS_TSCTR_DIV3_CBCR), HWIO_OFFS(GCC_QDSS_BCR), {0, 0} },
    /* .pmControl        = */ &HAL_clk_mGenericClockControl,
    /* .nTestClock       = */ HAL_CLK_GCC_TEST_GCC_QDSS_TSCTR_DIV3_CLK
  },
  {
    /* .szClockName      = */ "gcc_qdss_tsctr_div4_clk",
    /* .mRegisters       = */ { HWIO_OFFS(GCC_QDSS_TSCTR_DIV4_CBCR), HWIO_OFFS(GCC_QDSS_BCR), {0, 0} },
    /* .pmControl        = */ &HAL_clk_mGenericClockControl,
    /* .nTestClock       = */ HAL_CLK_GCC_TEST_GCC_QDSS_TSCTR_DIV4_CLK
  },
  {
    /* .szClockName      = */ "gcc_qdss_tsctr_div8_clk",
    /* .mRegisters       = */ { HWIO_OFFS(GCC_QDSS_TSCTR_DIV8_CBCR), HWIO_OFFS(GCC_QDSS_BCR), {0, 0} },
    /* .pmControl        = */ &HAL_clk_mGenericClockControl,
    /* .nTestClock       = */ HAL_CLK_GCC_TEST_GCC_QDSS_TSCTR_DIV8_CLK
  },
};


/*
 * HAL_clk_mGCCQDSSTSCTRClkDomain
 *
 * QDSSTSCTR clock domain.
 */
HAL_clk_ClockDomainDescType HAL_clk_mGCCQDSSTSCTRClkDomain =
{
  /* .nCGRAddr             = */ HWIO_OFFS(GCC_QDSS_TSCTR_CMD_RCGR),
  /* .pmClocks             = */ HAL_clk_mQDSSTSCTRClkDomainClks,
  /* .nClockCount          = */ sizeof(HAL_clk_mQDSSTSCTRClkDomainClks)/sizeof(HAL_clk_mQDSSTSCTRClkDomainClks[0]),
  /* .pmControl            = */ &HAL_clk_mGCCClockDomainControl_5,
  /* .pmNextClockDomain    = */ NULL
};


