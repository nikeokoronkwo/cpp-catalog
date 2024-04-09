#ifndef ANSI_FORMAT_H
#define ANSI_FORMAT_H

#include "colours.h"
#include "custom.h"

char* red(char* word);
char* blue(char* word);
char* green(char* word);
char* yellow(char* word);
char* magenta(char* word);
char* cyan(char* word);
char* white(char* word);

char* ansi_rgb(RGB rgb, char* src);
#endif
