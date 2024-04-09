#include "format.h"

#include "base.h"
#include "colours.h"

char* red(char* word) { return format(word, RED); }
char* blue(char* word) { return format(word, BLUE); }
char* green(char* word) { return format(word, GREEN); }
char* yellow(char* word) { return format(word, YELLOW); }
char* magenta(char* word) { return format(word, MAGENTA); }
char* cyan(char* word) { return format(word, CYAN); }
char* white(char* word) { return format(word, WHITE); }