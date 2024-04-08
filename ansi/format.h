#ifdef __cplusplus
#include "base.h"
#endif
#include "colours.h"

#ifdef __cplusplus
const Ansi red = Ansi(RED);
const Ansi blue = Ansi(BLUE);
const Ansi green = Ansi(GREEN);
const Ansi yellow = Ansi(YELLOW);
const Ansi magenta = Ansi(MAGENTA);
const Ansi cyan = Ansi(CYAN);
const Ansi white = Ansi(WHITE);

#else
char* red(char* word);
char* blue(char* word);
char* green(char* word);
char* yellow(char* word);
char* magenta(char* word);
char* cyan(char* word);
char* white(char* word);

#endif

#ifdef __cplusplus
namespace ansi {
    Ansi rgb(int r, int g, int b);
}
#else 
typedef char* (*AnsiFunc)(char*);
AnsiFunc ansi_rgb(int r, int g, int b);
#endif
