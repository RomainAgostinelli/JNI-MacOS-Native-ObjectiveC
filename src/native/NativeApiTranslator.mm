#import <Foundation/Foundation.h>
#import <Foundation/NSProcessInfo.h>
#include <string.h>
#include <iostream>
#include "data.h"

/**
* Retrieve the current version of the Operating System.
* \return OSVersion object containing major, minor and patch version of the OS if the current version is 10.10+,
*         otherwise return empty object.
**/
OSVersion getProcessInfoVersion_C(void) {
    NSProcessInfo *processInfo = [[NSProcessInfo alloc] init];

    OSVersion version;
    // check availability of the property operatingSystemVersion (10.10+) at runtime
    if ([processInfo respondsToSelector:@selector(operatingSystemVersion)]) {
        NSOperatingSystemVersion versionObj = [processInfo operatingSystemVersion];

        version.major = (long) versionObj.majorVersion;
        version.minor = (long) versionObj.minorVersion;
        version.patch = (long) versionObj.patchVersion;

    }
    return version;
}