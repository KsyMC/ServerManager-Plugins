#include <jni.h>

#include "servermanager/ServerManager.h"
#include "cameraman/Cameraman.h"

JNIEXPORT jint JNI_OnLoad(JavaVM *vm, void *reserved)
{
	ServerManager::registerPlugin(new Cameraman);

	return JNI_VERSION_1_2;
}
