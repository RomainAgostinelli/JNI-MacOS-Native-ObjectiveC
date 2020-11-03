// UseProcessInfoInC.cpp:
#include "MacOSNativeApiAdapter.hpp"
#include <iostream>
#include "data.h"

extern OSVersion getProcessInfoVersion_C(void);

OSVersion MacOSNativeApiAdapter::getVersion(void)
{
    return getProcessInfoVersion_C();
}