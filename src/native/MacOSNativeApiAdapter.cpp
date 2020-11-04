/**
* This file is used to implement the methods of the class declared in the MacOsNativeAdapter.hpp file.
* \file MacOsNativeApiAdapter.cpp
* \author Romain Agostinelli
* \date 02.11.2020
**/
#include "MacOSNativeApiAdapter.hpp"
#include <iostream>
#include "data.h"

/**
* Declaration of the extern method implemented in the NativeApiTranslator.mm.
**/
extern OSVersion getProcessInfoVersion_C(void);

OSVersion MacOSNativeApiAdapter::getVersion(void)
{
    // call the external function
    return getProcessInfoVersion_C();
}