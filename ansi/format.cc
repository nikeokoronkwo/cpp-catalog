#include <cstdio>
#include <cmath>

#include "format.h"
#include "custom.h"
#include "base.h"
#include "colours.h"

ansi::rgb(int r, int g, int b) {
    int ansicode = ansi_code_from_rgb(r, g, b);
    char buffer[12];
    sprintf(buffer, "\033[38;5;%dm", ansicode);
    return Ansi(buffer);
}

char* red(char* word) { return format(word, RED); }
char* blue(char* word) { return format(word, BLUE); }
char* green(char* word) { return format(word, GREEN); }
char* yellow(char* word) { return format(word, YELLOW); }
char* magenta(char* word) { return format(word, MAGENTA); }
char* cyan(char* word) { return format(word, CYAN); }
char* white(char* word) { return format(word, WHITE); }

int numlen(int n) {
    return log10(n);
}

AnsiFunc ansi_rgb(int r, int g, int b) {
    int ansicode = ansi_code_from_rgb(r, g, b);
    
    char* specialformat(char* source) {
	char buffer[12];
	sprintf(buffer, "\033[38;5;%dm", ansicode);
	return format(source, buffer);
    }

    return specialformat;
}


