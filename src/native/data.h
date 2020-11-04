#pragma once
#ifndef DATA_H
#define DATA_H

/**
* This file is used to declare the different structures used to communicate between the NativeApiTranslator.mm and the
* MacOsNativeAdapter.cpp
* \file data.h
* \author Romain Agostinelli
* \date 02.11.2020
**/

/**
* This struct is used to convert the type
* NSOperatingSystemVersion returned by the native library.
**/
typedef struct OSVersion {
    long major;
    long minor;
    long patch;
} OSVersion;

#endif