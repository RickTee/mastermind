/*
 * File: version.h
 * Program: REqualilzer
 * Author: Richard G Townsend
 * Email: ricktee@virginmedia.com
 * Created on: 04 February 2020, 08:44
 * Copyright (C) 2020 - 2024  Richard G Townsend
 * Standard major, minor, micro version number.
 */

#ifndef __VERSION_H__
#define __VERSION_H__

#define SPC         " "
#define RELEASE     "0.0"
#define REVISION    ".1"
#define DATE        "(Feb 2020)"
#define YEAR        "2020 - 2024"
#define VERSION     "Version: " RELEASE REVISION SPC DATE

#define AUTHOR      "Richard G Townsend"
#define TITLE       "Mastermind "
#define DESCRIPTION "written in C++ with the Qt library"
//#define VERSTAG     "$VER: " TITLE VERSION SPC DESCRIPTION
#define VERSTAG     TITLE VERSION SPC DESCRIPTION
#define APPLICATION TITLE VERSION
#define COPYRIGHT   "(C) " YEAR SPC AUTHOR
#define EMAIL       "ricktee@virginmedia.com"

#endif