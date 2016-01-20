#include <jni.h>

#include "servermanager/ServerManager.h"
#include "loginmessage/LoginMessage.h"

JNIEXPORT jint JNI_OnLoad(JavaVM *vm, void *reserved)
{
	ServerManager::registerPlugin(new LoginMessage);

	return JNI_VERSION_1_2;
}