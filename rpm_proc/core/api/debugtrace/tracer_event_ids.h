#ifndef _TRACER_EVENT_IDS_H
#define _TRACER_EVENT_IDS_H

typedef enum {
	TRACER_EVENT_RESERVE_0=0,
	DDR_EVENT_FIRST=1,
	DDR_EVENT_BIMC_SR_ENTRY_IDLE,
	DDR_EVENT_BIMC_SR_ENTRY_ASAP,
	DDR_EVENT_BIMC_SR_EXIT,
	DDR_EVENT_BIMC_DPD_ENTRY,
	DDR_EVENT_BIMC_DPD_EXIT,
	DDR_EVENT_BIMC_PASR_UPDATE,
	DDR_EVENT_BIMC_PWR_COLLAPSE_ENTRY,
	DDR_EVENT_BIMC_PWR_COLLAPSE_EXIT,
	DDR_EVENT_BIMC_PRE_CLK_SWITCH,
	DDR_EVENT_BIMC_POST_CLK_SWITCH,
	DDR_EVENT_DDR_DRIVER_ERROR_FATAL,
	DDR_EVENT_LAST=63,
	BUS_EVENT_INIT_DONE=64,
	BUS_EVENT_SLAVE_XLATE,
	BUS_EVENT_SLAVE_APPLY,
	BUS_EVENT_MASTER_XLATE,
	BUS_EVENT_MASTER_APPLY,
	BUS_EVENT_SPDM_XLATE,
	BUS_EVENT_SPDM_APPLY,
	BUS_EVENT_SPDM_STATE,
	BUS_EVENT_MASTER_LATENCY_XLATE,
	BUS_EVENT_MASTER_LATENCY_APPLY,
	SPMI_EVENT_FATAL_ERROR=80,
	SPMI_EVENT_ERROR,
	SPMI_EVENT_WARNING,
	BUS_EVENT_LAST=191,
	QDSS_TS_FREQ_CHANGE=690,
	QDSS_INIT_COMPLETE,
	QDSS_RESERVED=699,
	OCMEM_APPLY=640,
	OCMEM_UPDATE_BANK_SETTING,
	OCMEM_LAST=649,
	RAILWAY_CHANGE_VOLTAGE=650,
	RAILWAY_LAST=669,
	PLACE_HOLDER=670,
	RBCPR_CORNER_UPDATE_REC,
	RBCPR_CORNER_UPDATE_ACT,
	RBCPR_ISR,
	RBCPR_LAST=689,
	RPM_BOOT_STARTED=192,
	RPM_BOOT_FINISHED,
	RPM_BRINGUP_REQ,
	RPM_BRINGUP_ACK,
	RPM_SHUTDOWN_REQ,
	RPM_SHUTDOWN_ACK,
	RPM_TRANSITION_QUEUED,
	RPM_MASTER_SET_TRANSITION,
	RPM_MASTER_SET_TRANSITION_COMPLETE,
	RPM_HASH_MISMATCH,
	RPM_SVS_FAST_EXTERNAL_VOTE,
	RPM_SVS_FAST_IMMINENT_PROCESSING,
	RPM_SVS_FAST_SCHEDULE_IS_FULL,
	RPM_SVS_SLOW_IDLE,
	RPM_SVS_FAST_SPEEDUP,
	RPM_SVS_SLOW_NO_SPEEDUP,
	RPM_MESSAGE_RECEIVED,
	RPM_PROCESS_REQUEST,
	RPM_SEND_RESPONSE,
	RPM_ERR_FATAL,
	RPM_XLATE_REQUEST,
	RPM_APPLY_REQUEST,
	RPM_ESTIMATE_CACHE_HIT,
	RPM_ESTIMATE_CACHE_MISMATCH,
	RPM_MASTER_SET_TRANSITION_BYPASS,
	RPM_RESOURCE_SETTLING,
	RPM_RESOURCE_SETTLING_TIME,
	RPM_RESOURCE_SETTLING_COMPLETE,
	RPM_RESOURCE_SETTLING_SPIN,
	RPM_SETTLING_MESSAGE_REQUEUED,
	RPM_SETTLING_TRANSITION_REQUEUED,
	RPM_CPR_SENSOR_DISABLED,
	RPM_TRANSITION_POSTPONED,
	RPM_OUT_OF_HEAP,
	RPM_COMMAND_RECEIVED,
	RPM_HEAP_CHECK,
	RPM_MASTER_STATES,
	RPM_NAS_START,
	RPM_SVS_SCHED_UPDATED_TO_FAST,
	RPM_TZ_HALT_INT_RECEIVED,
	RPM_LAST=319,
	SLEEP_DEEP_SLEEP_ENTER=320,
	SLEEP_DEEP_SLEEP_EXIT,
	SLEEP_NO_DEEP_SLEEP,
	SLEEP_RPM_HALT_ENTER,
	SLEEP_RPM_HALT_EXIT,
	SLEEP_MPM_INTS,
	SLEEP_DEEP_SLEEP_ENTER_COMPLETE,
	SLEEP_DEEP_SLEEP_EXIT_COMPLETE,
	SLEEP_MPM_INTS_ENABLED,
	SLEEP_MPM_WAKEUP_TIME,
	SLEEP_EVENT_LAST=383,
	SYSTEM_DB_ADD_WRITE=700,
	SYSTEM_DB_ADD_READ,
	SYSTEM_DB_FLUSH_QUEUE,
	SYSTEM_DB_STATE_HANDLER,
	SYSTEM_DB_WRITE,
	SYSTEM_DB_READ,
	SYSTEM_DB_CLK_STATUS,
	SYSTEM_DB_CLK_PWR_DOMAIN,
	SYSTEM_DB_EVENT_LAST=709,
	CLOCK_EVENT_FIRST=384,
	CLOCK_EVENT_INIT,
	CLOCK_EVENT_STATUS,
	CLOCK_EVENT_FREQ,
	CLOCK_EVENT_PLL_STATUS,
	CLOCK_EVENT_POWER_COLLAPSE,
	CLOCK_EVENT_POWER_RESTORE,
	CLOCK_EVENT_BIMC_COLLAPSE,
	CLOCK_EVENT_BIMC_RESTORE,
	CLOCK_EVENT_CX,
	CLOCK_EVENT_GFX,
	CLOCK_EVENT_LAST=511,
	PMIC_EVENT_FIRST=512,
	PMIC_DRV_PWR_SW_EN,
	PMIC_DRV_PWR_PIN_CTRL,
	PMIC_DRV_PWR_PIN_CTRL_MODE,
	PMIC_DRV_PWR_VOLT_LVL,
	PMIC_DRV_PWR_PIN_VOLT_LVL,
	PMIC_DRV_PWR_MODE,
	PMIC_DRV_PWR_PULL_DOWN_ERROR,
	PMIC_DRV_PWR_SW_EN_ERROR,
	PMIC_DRV_PWR_PIN_CTRL_ERROR,
	PMIC_DRV_PWR_VOLT_LVL_ERROR,
	PMIC_DRV_PWR_PIN_VOLT_LVL_ERROR,
	PMIC_DRV_PWR_MODE_ERROR,
	PMIC_DRV_PWR_IRQ_ERROR,
	PMIC_DRV_SMPS_ILIM_ERROR,
	PMIC_DRV_SMPS_QM_ERROR,
	PMIC_DRV_SMPS_SWITCH_FREQ_ERROR,
	PMIC_DRV_SMPS_PHASE_ERROR,
	PMIC_DRV_SMPS_SS_ERROR,
	PMIC_DRV_SMPS_VSTEP_ERROR,
	PMIC_DRV_CLK_SW_EN,
	PMIC_DRV_CLK_PIN_CTRL,
	PMIC_DRV_CLK_SW_EN_ERROR,
	PMIC_DRV_CLK_PIN_CTRL_ERROR,
	PMIC_RPM_VREG_SETTLING_ERROR,
	PMIC_RPM_STEPPER_SETTLING_ERROR,
	PMIC_DRV_SMPS_OCP_ERROR,
	PMIC_EVENT_LAST=639,
	TRACER_EVENT_ID_MAX,
	TRACER_EVENT_RESERVE_LAST=0x400,
	TRACER_EVENT_ALL=0x7FFFFFFF,
} tracer_event_id_t;

#endif // _TRACER_EVENT_IDS_H
