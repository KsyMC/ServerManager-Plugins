LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := com.ksymc.cameraman
LOCAL_LDLIBS    := -L$(LOCAL_PATH) -ldl -llog -lstdc++ -lminecraftpe -lmcpelauncher_tinysubstrate -lcom.ksymc.servermanager

LOCAL_SRC_FILES :=          \
    main.cpp                \
    cameraman/Cameraman.cpp \

include $(BUILD_SHARED_LIBRARY)