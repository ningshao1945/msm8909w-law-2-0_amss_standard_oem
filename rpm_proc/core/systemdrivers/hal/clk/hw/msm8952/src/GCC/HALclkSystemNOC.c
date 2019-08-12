/*
==============================================================================

FILE:         HALclkSystemNOC.c

DESCRIPTION:
   This auto-generated file contains the clock HAL code for the 
   System NOC clocks.

   List of clock domains:
   -HAL_clk_mGCCSYSMMNOCBFDCDClkDomain
   -HAL_clk_mGCCSYSNOCBFDCDClkDomain


==============================================================================

                             Edit History

$Header: //components/rel/rpm.bf/2.1.1/core/systemdrivers/hal/clk/hw/msm8952/src/GCC/HALclkSystemNOC.c#1 $

when          who     what, where, why
----------    ---     --------------------------------------------------------
03/21/2014            Auto-generated.

==============================================================================
            Copyright (c) 2014 QUALCOMM Technologies Incorporated.
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


/* ============================================================================
**    Data
** ==========================================================================*/

                                    
/*                           
 *  HAL_clk_mSYSMMNOCBFDCDClkDomainClks
 *                  
 *  List of clocks supported by this domain.
 */
static HAL_clk_ClockDescType HAL_clk_mSYSMMNOCBFDCDClkDomainClks[] =
{
  {
    /* .szClockName      = */ "gcc_sys_mm_noc_axi_clk",
    /* .mRegisters       = */ { HWIO_OFFS(GCC_SYS_MM_NOC_AXI_CBCR), HWIO_OFFS(GCC_SYSTEM_NOC_BCR), {0, 0} },
    /* .pmControl        = */ &HAL_clk_mGenericClockControl,
    /* .nTestClock       = */ HAL_CLK_GCC_TEST_GCC_SYS_MM_NOC_AXI_CLK
  },
  {
    /* .szClockName      = */ "gcc_mdp_tbu_clk",
    /* .mRegisters       = */ { HWIO_OFFS(GCC_MDP_TBU_CBCR), HWIO_OFFS(GCC_SMMU_BCR), HAL_CLK_FMSK(PROC_SMMU_CLK_BRANCH_ENA_VOTE, MDP_TBU_CLK_ENA) },
    /* .pmControl        = */ &HAL_clk_mGenericClockControl,
    /* .nTestClock       = */ HAL_CLK_GCC_TEST_GCC_MDP_TBU_CLK
  },
  {
    /* .szClockName      = */ "gcc_venus_tbu_clk",
    /* .mRegisters       = */ { HWIO_OFFS(GCC_VENUS_TBU_CBCR), HWIO_OFFS(GCC_SMMU_BCR), HAL_CLK_FMSK(PROC_SMMU_CLK_BRANCH_ENA_VOTE, VENUS_TBU_CLK_ENA) },
    /* .pmControl        = */ &HAL_clk_mGenericClockControl,
    /* .nTestClock       = */ HAL_CLK_GCC_TEST_GCC_VENUS_TBU_CLK
  },
  {
    /* .szClockName      = */ "gcc_vfe_tbu_clk",
    /* .mRegisters       = */ { HWIO_OFFS(GCC_VFE_TBU_CBCR), HWIO_OFFS(GCC_SMMU_BCR), HAL_CLK_FMSK(PROC_SMMU_CLK_BRANCH_ENA_VOTE, VFE_TBU_CLK_ENA) },
    /* .pmControl        = */ &HAL_clk_mGenericClockControl,
    /* .nTestClock       = */ HAL_CLK_GCC_TEST_GCC_VFE_TBU_CLK
  },
  {
    /* .szClockName      = */ "gcc_vfe1_tbu_clk",
    /* .mRegisters       = */ { HWIO_OFFS(GCC_VFE1_TBU_CBCR), HWIO_OFFS(GCC_SMMU_BCR), {0, 0} },
    /* .pmControl        = */ &HAL_clk_mGenericClockControl,
    /* .nTestClock       = */ HAL_CLK_GCC_TEST_GCC_VFE1_TBU_CLK
  },
  {
    /* .szClockName      = */ "gcc_cpp_tbu_clk",
    /* .mRegisters       = */ { HWIO_OFFS(GCC_CPP_TBU_CBCR), HWIO_OFFS(GCC_SMMU_BCR), HAL_CLK_FMSK(PROC_SMMU_CLK_BRANCH_ENA_VOTE, CPP_TBU_CLK_ENA) },
    /* .pmControl        = */ &HAL_clk_mGenericClockControl,
    /* .nTestClock       = */ HAL_CLK_GCC_TEST_GCC_CPP_TBU_CLK
  },
  {
    /* .szClockName      = */ "gcc_jpeg_tbu_clk",
    /* .mRegisters       = */ { HWIO_OFFS(GCC_JPEG_TBU_CBCR), HWIO_OFFS(GCC_SMMU_BCR), HAL_CLK_FMSK(PROC_SMMU_CLK_BRANCH_ENA_VOTE, JPEG_TBU_CLK_ENA) },
    /* .pmControl        = */ &HAL_clk_mGenericClockControl,
    /* .nTestClock       = */ HAL_CLK_GCC_TEST_GCC_JPEG_TBU_CLK
  },
  {
    /* .szClockName      = */ "gcc_bimc_sysnoc_mm_axi_clk",
    /* .mRegisters       = */ { HWIO_OFFS(GCC_BIMC_SYSNOC_MM_AXI_CBCR), HWIO_OFFS(GCC_BIMC_BCR), {0, 0} },
    /* .pmControl        = */ &HAL_clk_mGenericClockControl,
    /* .nTestClock       = */ HAL_CLK_GCC_TEST_GCC_BIMC_SYSNOC_MM_AXI_CLK
  },
  {
    /* .szClockName      = */ "gcc_venus0_axi_clk",
    /* .mRegisters       = */ { HWIO_OFFS(GCC_VENUS0_AXI_CBCR), HWIO_OFFS(GCC_VENUS0_BCR), {0, 0} },
    /* .pmControl        = */ &HAL_clk_mGenericClockControl,
    /* .nTestClock       = */ HAL_CLK_GCC_TEST_GCC_VENUS0_AXI_CLK
  },
  {
    /* .szClockName      = */ "gcc_mdss_axi_clk",
    /* .mRegisters       = */ { HWIO_OFFS(GCC_MDSS_AXI_CBCR), HWIO_OFFS(GCC_MDSS_BCR), {0, 0} },
    /* .pmControl        = */ &HAL_clk_mGenericClockControl,
    /* .nTestClock       = */ HAL_CLK_GCC_TEST_GCC_MDSS_AXI_CLK
  },
  {
    /* .szClockName      = */ "gcc_camss_jpeg_axi_clk",
    /* .mRegisters       = */ { HWIO_OFFS(GCC_CAMSS_JPEG_AXI_CBCR), HWIO_OFFS(GCC_CAMSS_JPEG_BCR), {0, 0} },
    /* .pmControl        = */ &HAL_clk_mGenericClockControl,
    /* .nTestClock       = */ HAL_CLK_GCC_TEST_GCC_CAMSS_JPEG_AXI_CLK
  },
  {
    /* .szClockName      = */ "gcc_camss_vfe_axi_clk",
    /* .mRegisters       = */ { HWIO_OFFS(GCC_CAMSS_VFE_AXI_CBCR), HWIO_OFFS(GCC_CAMSS_VFE_BCR), {0, 0} },
    /* .pmControl        = */ &HAL_clk_mGenericClockControl,
    /* .nTestClock       = */ HAL_CLK_GCC_TEST_GCC_CAMSS_VFE_AXI_CLK
  },
  {
    /* .szClockName      = */ "gcc_camss_vfe1_axi_clk",
    /* .mRegisters       = */ { HWIO_OFFS(GCC_CAMSS_VFE1_AXI_CBCR), HWIO_OFFS(GCC_CAMSS_VFE1_BCR), {0, 0} },
    /* .pmControl        = */ &HAL_clk_mGenericClockControl,
    /* .nTestClock       = */ HAL_CLK_GCC_TEST_GCC_CAMSS_VFE1_AXI_CLK
  },
  {
    /* .szClockName      = */ "gcc_camss_cpp_axi_clk",
    /* .mRegisters       = */ { HWIO_OFFS(GCC_CAMSS_CPP_AXI_CBCR), HWIO_OFFS(GCC_CAMSS_CPP_BCR), {0, 0} },
    /* .pmControl        = */ &HAL_clk_mGenericClockControl,
    /* .nTestClock       = */ HAL_CLK_GCC_TEST_GCC_CAMSS_CPP_AXI_CLK
  },
};


/*
 * HAL_clk_mGCCSYSMMNOCBFDCDClkDomain
 *
 * SYS MM NOCBFDCD clock domain.
 */
HAL_clk_ClockDomainDescType HAL_clk_mGCCSYSMMNOCBFDCDClkDomain =
{
  /* .nCGRAddr             = */ HWIO_OFFS(GCC_SYSTEM_MM_NOC_BFDCD_CMD_RCGR),
  /* .pmClocks             = */ HAL_clk_mSYSMMNOCBFDCDClkDomainClks,
  /* .nClockCount          = */ sizeof(HAL_clk_mSYSMMNOCBFDCDClkDomainClks)/sizeof(HAL_clk_mSYSMMNOCBFDCDClkDomainClks[0]),
  /* .pmControl            = */ &HAL_clk_mGCCClockDomainControl,
  /* .pmNextClockDomain    = */ NULL
};


                                    
/*                           
 *  HAL_clk_mSYSNOCBFDCDClkDomainClks
 *                  
 *  List of clocks supported by this domain.
 */
static HAL_clk_ClockDescType HAL_clk_mSYSNOCBFDCDClkDomainClks[] =
{
  {
    /* .szClockName      = */ "gcc_sys_noc_axi_clk",
    /* .mRegisters       = */ { HWIO_OFFS(GCC_SYS_NOC_AXI_CBCR), HWIO_OFFS(GCC_SYSTEM_NOC_BCR), {0, 0} },
    /* .pmControl        = */ &HAL_clk_mGenericClockControl,
    /* .nTestClock       = */ HAL_CLK_GCC_TEST_GCC_SYS_NOC_AXI_CLK
  },
  {
    /* .szClockName      = */ "gcc_imem_axi_clk",
    /* .mRegisters       = */ { HWIO_OFFS(GCC_IMEM_AXI_CBCR), HWIO_OFFS(GCC_IMEM_BCR), HAL_CLK_FMSK(PROC_CLK_BRANCH_ENA_VOTE, IMEM_AXI_CLK_ENA) },
    /* .pmControl        = */ &HAL_clk_mGenericClockControl,
    /* .nTestClock       = */ HAL_CLK_GCC_TEST_GCC_IMEM_AXI_CLK
  },
  {
    /* .szClockName      = */ "gcc_pronto_tbu_clk",
    /* .mRegisters       = */ { HWIO_OFFS(GCC_PRONTO_TBU_CBCR), HWIO_OFFS(GCC_SMMU_BCR), HAL_CLK_FMSK(PROC_SMMU_CLK_BRANCH_ENA_VOTE, PRONTO_TBU_CLK_ENA) },
    /* .pmControl        = */ &HAL_clk_mGenericClockControl,
    /* .nTestClock       = */ HAL_CLK_GCC_TEST_GCC_PRONTO_TBU_CLK
  },
  {
    /* .szClockName      = */ "gcc_mss_tbu_axi_clk",
    /* .mRegisters       = */ { HWIO_OFFS(GCC_MSS_TBU_AXI_CBCR), HWIO_OFFS(GCC_SMMU_BCR), HAL_CLK_FMSK(PROC_SMMU_CLK_BRANCH_ENA_VOTE, MSS_TBU_AXI_CLK_ENA) },
    /* .pmControl        = */ &HAL_clk_mGenericClockControl,
    /* .nTestClock       = */ HAL_CLK_GCC_TEST_GCC_MSS_TBU_AXI_CLK
  },
  {
    /* .szClockName      = */ "gcc_mss_tbu_gss_axi_clk",
    /* .mRegisters       = */ { HWIO_OFFS(GCC_MSS_TBU_GSS_AXI_CBCR), HWIO_OFFS(GCC_SMMU_BCR), HAL_CLK_FMSK(PROC_SMMU_CLK_BRANCH_ENA_VOTE, MSS_TBU_GSS_AXI_CLK_ENA) },
    /* .pmControl        = */ &HAL_clk_mGenericClockControl,
    /* .nTestClock       = */ HAL_CLK_GCC_TEST_GCC_MSS_TBU_GSS_AXI_CLK
  },
  {
    /* .szClockName      = */ "gcc_lpass_tbu_clk",
    /* .mRegisters       = */ { HWIO_OFFS(GCC_LPASS_TBU_CBCR), HWIO_OFFS(GCC_SMMU_BCR), {0, 0} },
    /* .pmControl        = */ &HAL_clk_mGenericClockControl,
    /* .nTestClock       = */ HAL_CLK_GCC_TEST_GCC_LPASS_TBU_CLK
  },
  {
    /* .szClockName      = */ "gcc_smmu_cats_clk",
    /* .mRegisters       = */ { HWIO_OFFS(GCC_SMMU_CATS_CBCR), HWIO_OFFS(GCC_SMMU_BCR), {0, 0} },
    /* .pmControl        = */ &HAL_clk_mGenericClockControl,
    /* .nTestClock       = */ HAL_CLK_GCC_TEST_GCC_SMMU_CATS_CLK
  },
  {
    /* .szClockName      = */ "gcc_qdss_etr_usb_clk",
    /* .mRegisters       = */ { HWIO_OFFS(GCC_QDSS_ETR_USB_CBCR), HWIO_OFFS(GCC_QDSS_BCR), {0, 0} },
    /* .pmControl        = */ &HAL_clk_mGenericClockControl,
    /* .nTestClock       = */ HAL_CLK_GCC_TEST_GCC_QDSS_ETR_USB_CLK
  },
  {
    /* .szClockName      = */ "gcc_spdm_snoc_cy_clk",
    /* .mRegisters       = */ { HWIO_OFFS(GCC_SPDM_SNOC_CY_CBCR), HWIO_OFFS(GCC_SPDM_BCR), {0, 0} },
    /* .pmControl        = */ &HAL_clk_mGenericClockControl,
    /* .nTestClock       = */ HAL_CLK_GCC_TEST_GCC_SPDM_SNOC_CY_CLK
  },
  {
    /* .szClockName      = */ "gcc_bimc_sysnoc_axi_clk",
    /* .mRegisters       = */ { HWIO_OFFS(GCC_BIMC_SYSNOC_AXI_CBCR), HWIO_OFFS(GCC_BIMC_BCR), {0, 0} },
    /* .pmControl        = */ &HAL_clk_mGenericClockControl,
    /* .nTestClock       = */ HAL_CLK_GCC_TEST_GCC_BIMC_SYSNOC_AXI_CLK
  },
  {
    /* .szClockName      = */ "gcc_snoc_bus_timeout2_ahb_clk",
    /* .mRegisters       = */ { HWIO_OFFS(GCC_SNOC_BUS_TIMEOUT2_AHB_CBCR), HWIO_OFFS(GCC_SNOC_BUS_TIMEOUT2_BCR), {0, 0} },
    /* .pmControl        = */ &HAL_clk_mGenericClockControl,
    /* .nTestClock       = */ HAL_CLK_GCC_TEST_GCC_SNOC_BUS_TIMEOUT2_AHB_CLK
  },
  {
    /* .szClockName      = */ "gcc_gmem_sys_noc_axi_clk",
    /* .mRegisters       = */ { HWIO_OFFS(GCC_GMEM_SYS_NOC_AXI_CBCR), HWIO_OFFS(GCC_GMEM_BCR), HAL_CLK_FMSK(PROC_CLK_BRANCH_ENA_VOTE, GMEM_SYS_NOC_AXI_CLK_ENA) },
    /* .pmControl        = */ &HAL_clk_mGenericClockControl,
    /* .nTestClock       = */ HAL_CLK_GCC_TEST_GCC_GMEM_SYS_NOC_AXI_CLK
  },
  {
    /* .szClockName      = */ "gcc_lpass_sway_clk",
    /* .mRegisters       = */ { HWIO_OFFS(GCC_LPASS_SWAY_CBCR), 0, {0, 0} },
    /* .pmControl        = */ &HAL_clk_mGenericClockControl,
    /* .nTestClock       = */ HAL_CLK_GCC_TEST_GCC_LPASS_SWAY_CLK
  },
  {
    /* .szClockName      = */ "gcc_lpass_q6_axi_clk",
    /* .mRegisters       = */ { HWIO_OFFS(GCC_LPASS_Q6_AXI_CBCR), 0, {0, 0} },
    /* .pmControl        = */ &HAL_clk_mGenericClockControl,
    /* .nTestClock       = */ HAL_CLK_GCC_TEST_GCC_LPASS_Q6_AXI_CLK
  },
};


/*
 * HAL_clk_mGCCSYSNOCBFDCDClkDomain
 *
 * SYS NOCBFDCD clock domain.
 */
HAL_clk_ClockDomainDescType HAL_clk_mGCCSYSNOCBFDCDClkDomain =
{
  /* .nCGRAddr             = */ HWIO_OFFS(GCC_SYSTEM_NOC_BFDCD_CMD_RCGR),
  /* .pmClocks             = */ HAL_clk_mSYSNOCBFDCDClkDomainClks,
  /* .nClockCount          = */ sizeof(HAL_clk_mSYSNOCBFDCDClkDomainClks)/sizeof(HAL_clk_mSYSNOCBFDCDClkDomainClks[0]),
  /* .pmControl            = */ &HAL_clk_mGCCClockDomainControl,
  /* .pmNextClockDomain    = */ NULL
};


