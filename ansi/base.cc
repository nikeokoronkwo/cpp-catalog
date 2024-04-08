#include <string>
#include <cstdlib>
#include <cstdio>
#include <cstring>

#include "reset.h"

/// Format a string with a given ansi code
/// This is a C function and so makes use of strictly C-oly code
char* format(char* str, char* code) {
    int len = strlen(str) + strlen(code) + strlen(RESET) + 1;
    char buffer[len];
    sprintf(buffer, "%s%s%s", code, str, RESET);
    return buffer;
}

/// Format a C++ string with a given ansi code
std::string format(std::string str, char* code) {
    return (std::string(code) + str + std::string(RESET));
}


