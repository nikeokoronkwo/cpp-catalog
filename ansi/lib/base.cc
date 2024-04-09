#include <string>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <iostream>

#include "reset.h"
#include "base.h"


#ifdef __cplusplus
extern "C" {
#endif

/// Format a string with a given ansi code
/// This is a C function and so makes use of strictly C-only code
char* format(char* str, char* code) {
    int len = strlen(str) + strlen(code) + strlen(RESET) + 1;
    snprintf(str, len, "%s%s%s", code, str, RESET);
    return str;
}

#ifdef __cplusplus
}
#endif


/// Format a C++ string with a given ansi code
std::string format(std::string str, char* code) {
    return (std::string(code) + str + std::string(RESET));
}

Ansi::Ansi(const char* m_code) {
    this->code = std::string(m_code);
}

Ansi::Ansi(std::string m_code) {
    this->code = m_code;
}

Ansi Ansi::custom(int rgbcode) {
    return Ansi("\033[38;5;" + std::to_string(rgbcode) + "m");
}

std::string Ansi::get_code() const { return this->code; }

std::string Ansi::operator()(std::string str) const {
    return (this->code + str + RESET);
}

