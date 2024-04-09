#include "format.hpp"

#include <cmath>
#include <cstdio>

#include "base.h"
#include "colours.h"
#include "custom.h"

namespace ansi {
Ansi rgb(int r, int g, int b) {
  int ansicode = ansi_code_from_rgb(r, g, b);
  char buffer[12];
  sprintf(buffer, "\033[38;5;%dm", ansicode);
  return Ansi(buffer);
}
}  // namespace ansi

int numlen(int n) { return log10(n); }

char* ansi_rgb(RGB rgb, char* source) {
  int ansicode = ansi_code_from_RGB(rgb);

  char buffer[12];
  sprintf(buffer, "\033[38;5;%dm", ansicode);
  return format(source, buffer);
}
