#include "MacOSNativeApiAdapter.hpp"
#include "../OSApiAdapter.h"
#include "data.h"
#include <iostream>

JNIEXPORT jobject JNICALL Java_OSApiAdapter_getOsVersion
        (JNIEnv *env, jobject thisObject) 	{
    jclass cls = env->FindClass("OperatingSystemVersion");
    if(NULL == cls)
    printf("Cannot find the class");

    jmethodID cid = env->GetMethodID(cls, "<init>", "(III)V");
    if(NULL == cid)
        printf("Cannot find constructor");

    MacOSNativeApiAdapter pi;
    OSVersion version = pi.getVersion();
    return env->NewObject(cls, cid, version.major, version.minor, version.patch);
}