#ifndef MacOSNativeApiAdapter_hpp
#define MacOSNativeApiAdapter_hpp
/**
 * This file is used to declare the class which will be used by the file EntryPointJNI.cpp to access native libraries.
 * \file MacOsNativeApiAdapter.hpp
 * \author Romain Agostinelli
 * \date 02.11.2020
**/
#include "data.h"

/**
 * This class is used as adapter between native libraries and
 * EntryPointJNI.cpp client.
**/
class MacOSNativeApiAdapter {
public:
    /**
     * Retrieve the current version of the OS.
     * \return OSVersion object which contains major, minor and patch values of the version.
    **/
    OSVersion getVersion(void);
};

#endif /* MacOSNativeApiAdapter_hpp */