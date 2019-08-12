/* Copyright (c) 2011-2013 QUALCOMM Technologies, Inc. All Rights Reserved
 * QUALCOMM Technologies Proprietary and Confidential.
 */

#ifndef ACDB_LOADER_DEF_H

#define ACDB_BLOCK_SIZE         4096
/* Need for all TX blocks to support quad-mic */
#define MAX_BLOCK_SIZE          (4 * ACDB_BLOCK_SIZE)
#define NUM_NETWORKS            15

#define NUM_AUDPROC_BLOCKS      9
#define NUM_VOCPROC_BLOCKS      (6 * NUM_NETWORKS)
#define NUM_CVP_BLOCKS          (2 * NUM_NETWORKS)
#define NUM_AFE_BLOCKS          2
#define NUM_ANC_BLOCKS          1

#define NUM_LISTEN_AFE_PATHS    1
#define NUM_LISTEN_LSM_PATHS    2
#define NUM_LISTEN_BLOCKS       (NUM_LISTEN_AFE_PATHS + NUM_LISTEN_LSM_PATHS)

#define NUM_CUST_TOP_BLOCKS     2
#define NUM_AANC_BLOCKS         1
#define NUM_CAL_BLOCKS          (NUM_AUDPROC_BLOCKS + NUM_VOCPROC_BLOCKS + \
                    NUM_AFE_BLOCKS + NUM_ANC_BLOCKS + \
                    NUM_LISTEN_BLOCKS + NUM_CUST_TOP_BLOCKS + \
                    NUM_AANC_BLOCKS)
#define NUM_AUDPROC_PATHS       2
#define ACDB_VOCSTRM_OFFSET     (NUM_NETWORKS * 4)
#define ACDB_VOCVOL_OFFSET      (NUM_NETWORKS + ACDB_VOCSTRM_OFFSET)
#define ACDB_VOCSTRM_SIZE_OFFSET    (ACDB_VOCSTRM_OFFSET * ACDB_BLOCK_SIZE)
#define ACDB_VOCVOL_SIZE_OFFSET     (ACDB_VOCVOL_OFFSET * ACDB_BLOCK_SIZE)
#define ACDB_AUDSTRM_OFFSET     (NUM_VOCPROC_BLOCKS + NUM_AUDPROC_PATHS + 3)
#define ACDB_AUDVOL_OFFSET      (ACDB_AUDSTRM_OFFSET + NUM_AUDPROC_PATHS)
#define ACDB_AFE_OFFSET         (ACDB_AUDVOL_OFFSET + NUM_AUDPROC_PATHS)
#define ACDB_ANC_OFFSET         (ACDB_AFE_OFFSET + NUM_AUDPROC_PATHS)
#define ACDB_LISTEN_ULP_AFE_OFFSET      (ACDB_ANC_OFFSET + NUM_ANC_BLOCKS)
#define ACDB_LISTEN_ULP_LSM_OFFSET      (ACDB_LISTEN_ULP_AFE_OFFSET + 1)
#define ACDB_LISTEN_LP_LSM_OFFSET       (ACDB_LISTEN_ULP_LSM_OFFSET + 1)
#define ACDB_ADM_CUST_TOP_OFFSET        (ACDB_LISTEN_LP_LSM_OFFSET + 1)
#define ACDB_ASM_CUST_TOP_OFFSET    (ACDB_ADM_CUST_TOP_OFFSET + 1)
#define ACDB_AANC_OFFSET        (ACDB_ASM_CUST_TOP_OFFSET + 1)
#define VOCPROC_SIZE            (ACDB_BLOCK_SIZE * ACDB_VOCSTRM_OFFSET)
#define VOCPROC_W_DEV_SIZE      (VOCPROC_SIZE - MAX_BLOCK_SIZE)
#define VOCPROC_DEV_CFG_SIZE        MAX_BLOCK_SIZE
#define VOCSTRM_SIZE            (ACDB_BLOCK_SIZE * NUM_NETWORKS)
#define VOCVOL_SIZE         (ACDB_BLOCK_SIZE * NUM_NETWORKS)
#define ACDB_BUFFER_SIZE        (ACDB_BLOCK_SIZE * NUM_CAL_BLOCKS)

    /* Partition the PMEM into the following region for voice/audio cal
     * voice blocks 0-74 & 75-89 are now placed squentially in two big blocks
     * one 75 x 4096 and the other 15 x 4096
     * [0 * 4096] =   VOICE_VOCPROC_VOLTE_NB
     * [1 * 4096] =   VOICE_VOCPROC_VOLTE_NB
     * [2 * 4096] =   VOICE_VOCPROC_VOLTE_NB
     * [3 * 4096] =   VOICE_VOCPROC_VOLTE_NB
     * [4 * 4096] =   VOICE_VOCPROC_VOLTE_WB
     * [5 * 4096] =   VOICE_VOCPROC_VOLTE_WB
     * [6 * 4096] =   VOICE_VOCPROC_VOLTE_WB
     * [7 * 4096] =   VOICE_VOCPROC_VOLTE_WB
     * [8 * 4096] =   VOICE_VOCPROC_VOLTE_WV
     * [9 * 4096] =   VOICE_VOCPROC_VOLTE_WV
     * [10 * 4096] =  VOICE_VOCPROC_VOLTE_WV
     * [11 * 4096] =  VOICE_VOCPROC_VOLTE_WV
     * [12 * 4096] =  VOICE_VOCPROC_VOIP_NB
     * [13 * 4096] =  VOICE_VOCPROC_VOIP_NB
     * [14 * 4096] =  VOICE_VOCPROC_VOIP_NB
     * [15 * 4096] =  VOICE_VOCPROC_VOIP_NB
     * [16 * 4096] =  VOICE_VOCPROC_VOIP_WB
     * [17 * 4096] =  VOICE_VOCPROC_VOIP_WB
     * [18 * 4096] =  VOICE_VOCPROC_VOIP_WB
     * [19 * 4096] =  VOICE_VOCPROC_VOIP_WB
     * [20 * 4096] =  VOICE_VOCPROC_VOIP_WV
     * [21 * 4096] =  VOICE_VOCPROC_VOIP_WV
     * [22 * 4096] =  VOICE_VOCPROC_VOIP_WV
     * [23 * 4096] =  VOICE_VOCPROC_VOIP_WV
     * [24 * 4096] =  VOICE_VOCPROC_CDMA_NB
     * [25 * 4096] =  VOICE_VOCPROC_CDMA_NB
     * [26 * 4096] =  VOICE_VOCPROC_CDMA_NB
     * [27 * 4096] =  VOICE_VOCPROC_CDMA_NB
     * [28 * 4096] =  VOICE_VOCPROC_CDMA_WB
     * [29 * 4096] =  VOICE_VOCPROC_CDMA_WB
     * [30 * 4096] =  VOICE_VOCPROC_CDMA_WB
     * [31 * 4096] =  VOICE_VOCPROC_CDMA_WB
     * [32 * 4096] =  VOICE_VOCPROC_CDMA_WV
     * [33 * 4096] =  VOICE_VOCPROC_CDMA_WV
     * [34 * 4096] =  VOICE_VOCPROC_CDMA_WV
     * [35 * 4096] =  VOICE_VOCPROC_CDMA_WV
     * [36 * 4096] =  VOICE_VOCPROC_GSM_NB
     * [37 * 4096] =  VOICE_VOCPROC_GSM_NB
     * [38 * 4096] =  VOICE_VOCPROC_GSM_NB
     * [39 * 4096] =  VOICE_VOCPROC_GSM_NB
     * [40 * 4096] =  VOICE_VOCPROC_GSM_WB
     * [41 * 4096] =  VOICE_VOCPROC_GSM_WB
     * [42 * 4096] =  VOICE_VOCPROC_GSM_WB
     * [43 * 4096] =  VOICE_VOCPROC_GSM_WB
     * [44 * 4096] =  VOICE_VOCPROC_GSM_WV
     * [45 * 4096] =  VOICE_VOCPROC_GSM_WV
     * [46 * 4096] =  VOICE_VOCPROC_GSM_WV
     * [47 * 4096] =  VOICE_VOCPROC_GSM_WV
     * [48 * 4096] =  VOICE_VOCPROC_WCDMA_NB
     * [49 * 4096] =  VOICE_VOCPROC_WCDMA_NB
     * [50 * 4096] =  VOICE_VOCPROC_WCDMA_NB
     * [51 * 4096] =  VOICE_VOCPROC_WCDMA_NB
     * [52 * 4096] =  VOICE_VOCPROC_WCDMA_WB
     * [53 * 4096] =  VOICE_VOCPROC_WCDMA_WB
     * [54 * 4096] =  VOICE_VOCPROC_WCDMA_WB
     * [55 * 4096] =  VOICE_VOCPROC_WCDMA_WB
     * [56 * 4096] =  VOICE_VOCPROC_WCDMA_WV
     * [57 * 4096] =  VOICE_VOCPROC_WCDMA_WV
     * [58 * 4096] =  VOICE_VOCPROC_WCDMA_WV
     * [59 * 4096] =  VOICE_VOCPROC_WCDMA_WV
     * [60 * 4096] =  VOICE_VOCVOL_VOLTE_NB
     * [61 * 4096] =  VOICE_VOCVOL_VOLTE_WB
     * [62 * 4096] =  VOICE_VOCVOL_VOLTE_WV
     * [63 * 4096] =  VOICE_VOCVOL_VOIP_NB
     * [64 * 4096] =  VOICE_VOCVOL_VOIP_WB
     * [65 * 4096] =  VOICE_VOCVOL_VOIP_WV
     * [66 * 4096] =  VOICE_VOCVOL_CDMA_NB
     * [67 * 4096] =  VOICE_VOCVOL_CDMA_WB
     * [68 * 4096] =  VOICE_VOCVOL_CDMA_WV
     * [69 * 4096] =  VOICE_VOCVOL_GSM_NB
     * [70 * 4096] =  VOICE_VOCVOL_GSM_WB
     * [71 * 4096] =  VOICE_VOCVOL_GSM_WV
     * [72 * 4096] =  VOICE_VOCVOL_WCDMA_NB
     * [73 * 4096] =  VOICE_VOCVOL_WCDMA_WB
     * [74 * 4096] =  VOICE_VOCVOL_WCDMA_WV
     * <End of first voice cal block>
     * [75 * 4096] =  VOICE_VOCSTRM_VOLTE_NB
     * [76 * 4096] =  VOICE_VOCSTRM_VOLTE_WB
     * [77 * 4096] =  VOICE_VOCSTRM_VOLTE_WV
     * [78 * 4096] =  VOICE_VOCSTRM_VOIP_NB
     * [79 * 4096] =  VOICE_VOCSTRM_VOIP_WB
     * [80 * 4096] =  VOICE_VOCSTRM_VOIP_WV
     * [81 * 4096] =  VOICE_VOCSTRM_CDMA_NB
     * [82 * 4096] =  VOICE_VOCSTRM_CDMA_WB
     * [83 * 4096] =  VOICE_VOCSTRM_CDMA_WV
     * [84 * 4096] =  VOICE_VOCSTRM_GSM_NB
     * [85 * 4096] =  VOICE_VOCSTRM_GSM_WB
     * [86 * 4096] =  VOICE_VOCSTRM_GSM_WV
     * [87 * 4096] =  VOICE_VOCSTRM_WCDMA_NB
     * [88 * 4096] =  VOICE_VOCSTRM_WCDMA_WB
     * [89 * 4096] =  VOICE_VOCSTRM_WCDMA_WV
     * <End of second voice cal block>
     * [90 * 4096] =  AUDPROC_RX_CAL
     * [91 * 4096] =  AUDPROC_TX_CAL
     * [92 * 4096] =  AUDPROC_TX_CAL
     * [93 * 4096] =  AUDPROC_TX_CAL
     * [94 * 4096] =  AUDPROC_TX_CAL
     * [95 * 4096] =  AUDPROC_RX_STREAM_CAL
     * [96 * 4096] =  AUDPROC_TX_STREAM_CAL
     * [97 * 4096] =  AUDPROC_RX_VOL_CAL
     * [98 * 4096] =  AUDPROC_TX_VOL_CAL
     * [99 * 4096] =  AFE_RX_CAL
     * [100 * 4096] = AFE_TX_CAL
     * [101 * 4096] = ANC_CAL
     * [102 * 4096] = LISTEN_ULP_AFE
     * [103 * 4096] = LISTEN_ULP_LSM
     * [104 * 4096] = LISTEN_LP_LSM
     * [105 * 4096] = ADM_CUSTOM_TOPOLOGY
     * [106 * 4096] = ASM_CUSTOM_TOPOLOGY
     * [107 * 4096] = AANC_TX;
     */

#endif /* ACDB_LOADER_DEF_H */
