#ifndef ANSI_FORMAT_H
#define ANSI_FORMAT_H

#include "base.h"
#include "colours.h"
#include "custom.h"

const Ansi red = Ansi(RED);
const Ansi blue = Ansi(BLUE);
const Ansi green = Ansi(GREEN);
const Ansi yellow = Ansi(YELLOW);
const Ansi magenta = Ansi(MAGENTA);
const Ansi cyan = Ansi(CYAN);
const Ansi white = Ansi(WHITE);

namespace ansi {
Ansi rgb(int r, int g, int b);
}

#endif