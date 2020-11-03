#include "MacOSNativeApiAdapter.hpp"
#include "../OSApiAdapter.h"
#include <iostream>
#include "data.h"
//int main(int argc, char * argv[]) {
//
//    MacOSNativeApiAdapter pi;
//    OSVersion v = pi.getVersion();
//    std::cout << v.major << std::endl;
//
//}
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