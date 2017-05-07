/*******************************************************************************
* Text Support [Header] (text_support.h)                              [_][O][X]*
********************************************************************************
* Version 0.0.1                                                                *
* Coded by Tomoki "FL1NE" SHISHIKURA (@FL1NE)                                  *
*                                                                              *
* Copyright (c) 2017 FRONTL1NE All rights reserved                             *
* https://fl1ne.rtx1911.net                                                    *
*******************************************************************************/


#ifndef __TEXT_SUPPORT_INCLUDED__
#define __TEXT_SUPPORT_INCLUDED__


#include <string>


#define TEXT_SUPPORT_VERSION "0.0.1"

#define TEXT_SUPPORT_RESET   "\033[0m"
#define TEXT_SUPPORT_BLACK   "\033[30m"
#define TEXT_SUPPORT_RED     "\033[31m"
#define TEXT_SUPPORT_GREEN   "\033[32m"
#define TEXT_SUPPORT_YELLOW  "\033[33m"
#define TEXT_SUPPORT_BLUE    "\033[34m"
#define TEXT_SUPPORT_MAGENTA "\033[35m"
#define TEXT_SUPPORT_CYAN    "\033[36m"
#define TEXT_SUPPORT_WHITE   "\033[37m"
#define TEXT_SUPPORT_BOLDBLACK   "\033[1m\033[30m"
#define TEXT_SUPPORT_BOLDRED     "\033[1m\033[31m"
#define TEXT_SUPPORT_BOLDGREEN   "\033[1m\033[32m"
#define TEXT_SUPPORT_BOLDYELLOW  "\033[1m\033[33m"
#define TEXT_SUPPORT_BOLDBLUE    "\033[1m\033[34m"
#define TEXT_SUPPORT_BOLDMAGENTA "\033[1m\033[35m"
#define TEXT_SUPPORT_BOLDCYAN    "\033[1m\033[36m"
#define TEXT_SUPPORT_BOLDWHITE   "\033[1m\033[37m"


namespace textSupport{
    void debugMessage(const char* message);
    void debugMessage(std::string message);
    void infoMessage(const char* message);
    void infoMessage(std::string message);
    void warningMessage(const char* message);
    void warningMessage(std::string message);
    void errorMessage(const char* message);
    void errorMessage(std::string message);
    void fatalMessage(const char* message);
    void fatalMessage(std::string message);

    void testMessage(void);
}


#endif
