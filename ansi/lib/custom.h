#ifndef ANSI_CUSTOM_H
#define ANSI_CUSTOM_H

#ifdef __cplusplus
extern "C" {
#endif

/// The struct used to represent Red, Green and Blue Colours
typedef struct RGB {
  int red;
  int green;
  int blue;
} RGB;

/// Get the required ansi code from the given rgb code
int ansi_code_from_rgb(int r, int b, int g);

/// Get the required ansi code from the given RGB struct
int ansi_code_from_RGB(RGB rgb);

#ifdef __cplusplus
}
#endif

#endif