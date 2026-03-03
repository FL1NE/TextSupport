/*******************************************************************************
* Text Support [Source] (text_support.cpp)                            [_][O][X]*
********************************************************************************
* Version 0.0.1                                                                *
* Coded by Tomoki "FL1NE" SHISHIKURA (@FL1NE)                                  *
*                                                                              *
* Copyright (c) 2017 FRONTL1NE All rights reserved                             *
* https://fl1ne.rtx1911.net                                                    *
*******************************************************************************/

#include <iostream>
#include <sstream>
#include <iomanip>
#include <time.h>

#include "text_support.h"


static std::string getTimestamp() {
    time_t timer;
    struct tm t_st;
    time(&timer);
    localtime_r(&timer, &t_st);

    std::ostringstream oss;
    oss << std::setw(4) << std::setfill('0') << t_st.tm_year + 1900 << "-"
        << std::setw(2) << std::setfill('0') << t_st.tm_mon + 1 << "-"
        << std::setw(2) << std::setfill('0') << t_st.tm_mday << " "
        << std::setw(2) << std::setfill('0') << t_st.tm_hour << ":"
        << std::setw(2) << std::setfill('0') << t_st.tm_min << ":"
        << std::setw(2) << std::setfill('0') << t_st.tm_sec;
    return oss.str();
}


static void printMessage(std::ostream& stream, const char* color, const char* label, const std::string& message) {
    const std::string lbl(label);
    stream << "[" << color << lbl << TEXT_SUPPORT_RESET << "]"
           << std::string(7 - lbl.size(), ' ')
           << getTimestamp() << "  " << message << std::endl;
}


void textSupport::debugMessage(const std::string& message) {
    printMessage(std::cout, TEXT_SUPPORT_BLUE, "DBG", message);
}

void textSupport::infoMessage(const std::string& message) {
    printMessage(std::cout, TEXT_SUPPORT_CYAN, "INFO", message);
}

void textSupport::warningMessage(const std::string& message) {
    printMessage(std::cout, TEXT_SUPPORT_YELLOW, "WARN", message);
}

void textSupport::errorMessage(const std::string& message) {
    printMessage(std::cerr, TEXT_SUPPORT_RED, "ERR", message);
}

void textSupport::fatalMessage(const std::string& message) {
    printMessage(std::cerr, TEXT_SUPPORT_BOLDRED, "FATAL", message);
}


void textSupport::testMessage() {
    std::cout
    << TEXT_SUPPORT_RESET   << "RESET "
    << TEXT_SUPPORT_BLACK   << "BLACK "
    << TEXT_SUPPORT_RED     << "RED "
    << TEXT_SUPPORT_GREEN   << "GREEN "
    << TEXT_SUPPORT_YELLOW  << "YELLOW "
    << TEXT_SUPPORT_BLUE    << "BLUE "
    << TEXT_SUPPORT_MAGENTA << "MAGENTA "
    << TEXT_SUPPORT_CYAN    << "CYAN "
    << TEXT_SUPPORT_WHITE   << "WHITE "
    << TEXT_SUPPORT_BOLDBLACK   << "BOLDBLACK "
    << TEXT_SUPPORT_BOLDRED     << "BOLDRED "
    << TEXT_SUPPORT_BOLDGREEN   << "BOLDGREEN "
    << TEXT_SUPPORT_BOLDYELLOW  << "BOLDYELLOW "
    << TEXT_SUPPORT_BOLDBLUE    << "BOLDBLUE "
    << TEXT_SUPPORT_BOLDMAGENTA << "BOLDMAGENTA "
    << TEXT_SUPPORT_BOLDCYAN    << "BOLDCYAN "
    << TEXT_SUPPORT_BOLDWHITE   << "BOLDWHITE "
    << TEXT_SUPPORT_RESET << std::endl;

    textSupport::debugMessage("This is DEBUG Message.");
    textSupport::infoMessage("This is INFORMATION Message.");
    textSupport::warningMessage("This is WARNING Message");
    textSupport::errorMessage("This is ERROR Message.");
    textSupport::fatalMessage("This is FATAL ERROR Message.");
}
