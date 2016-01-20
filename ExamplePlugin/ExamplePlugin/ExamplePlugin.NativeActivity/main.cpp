#include <jni.h>

#include "servermanager/ServerManager.h"
#include "ExamplePlugin.h"

JNIEXPORT jint JNI_OnLoad(JavaVM *vm, void *reserved)
{
	ServerManager::registerPlugin(new ExamplePlugin);

	return JNI_VERSION_1_2;
}