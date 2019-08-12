BUILD_PTT_SOCKET_APP:=1

ifeq ($(BUILD_PTT_SOCKET_APP),1)

LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_SRC_FILES += \
	pttSocketApp.c

LOCAL_CFLAGS += \
	-fno-short-enums  \
	-Wall -Werror

#LOCAL_CFLAGS += \
	-DANI_DEBUG
LOCAL_CFLAGS += \
	-DWLAN_KD_READY_NOTIFIER

ifeq ($(TARGET_SUPPORTS_WEARABLES),true)
LOCAL_CFLAGS += \
       -DTARGET_SUPPORTS_WEARABLES
endif

LOCAL_C_INCLUDES := $(LOCAL_PATH)/../asf/inc
LOCAL_C_INCLUDES += $(TARGET_OUT_HEADERS)/diag/include
LOCAL_C_INCLUDES += $(TARGET_OUT_HEADERS)/common/inc


LOCAL_SHARED_LIBRARIES := \
	libutils \
	libcutils \
	libdiag

LOCAL_STATIC_LIBRARIES := \
	libAniAsf

LOCAL_PRELINK_MODULE := false

LOCAL_MODULE := ptt_socket_app
LOCAL_MODULE_TAGS := optional

LOCAL_MODULE_OWNER := qcom

include $(BUILD_EXECUTABLE)

endif
