LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := com.ksymc.loginmessage
LOCAL_LDLIBS    := -L$(LOCAL_PATH) -ldl -llog -lstdc++ -lcom.ksymc.servermanager

LOCAL_SRC_FILES :=                \
    main.cpp                      \
    loginmessage/LoginMessage.cpp \

include $(BUILD_SHARED_LIBRARY)