LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := com.ksymc.loginmessage
LOCAL_LDLIBS    := -L$(LOCAL_PATH) -ldl -llog -lstdc++ -lcom.ksymc.servermanager -lminecraftpe

FILE_LIST := $(wildcard $(LOCAL_PATH)/*.cpp)
FILE_LIST += $(wildcard $(LOCAL_PATH)/loginmessage/*.cpp)
FILE_LIST += $(wildcard $(LOCAL_PATH)/loginmessage/**/*.cpp)
FILE_LIST += $(wildcard $(LOCAL_PATH)/loginmessage/**/**/*.cpp)
FILE_LIST += $(wildcard $(LOCAL_PATH)/loginmessage/**/**/**/*.cpp)
LOCAL_SRC_FILES := $(FILE_LIST:$(LOCAL_PATH)/%=%)

include $(BUILD_SHARED_LIBRARY)