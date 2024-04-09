#include "custom.h"

#ifdef __cplusplus
extern "C" {
#endif

int calc_ansi(int red, int green, int blue) {
    return (16 + (36 * red) + (6 * green) + blue);
}

int ansi_code_from_rgb(int r, int b, int g) {
    int red = (r % 255) / 51;
    int green = (g % 255) / 51;
    int blue = (b % 255) / 51;

    return calc_ansi(red, green, blue);
}

int ansi_code_from_RGB(RGB rgb) {
    int red = (rgb.red % 255) / 51;
    int green = (rgb.green % 255) / 51;
    int blue = (rgb.blue % 255) / 51;
    
    return calc_ansi(red, green, blue);
}

#ifdef __cplusplus
}
#endif