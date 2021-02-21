#pragma once

#include <stdint.h>
#include <stddef.h>

enum{
    B_COLOR = 0,
    BL_COLOR = 1,
    GR_COLOR = 2,
    C_COLOR = 3,
    R_COLOR = 4,
    M_COLOR = 5,
    BR_COLOR = 6,
    L_G_COLOR = 7,
    D_G_COLOR = 8,
    L_B_COLOR = 9,
    L_GR_COLOR = 10,
    L_C_COLOR = 11,
    L_R_COLOR = 12,
    P_COLOR = 13,
    Y_COLOR = 14,
    W_COLOR = 15,
};

void print_clear();
void print_char(char character);
void print_str(char* string);
void print_set_color(uint8_t foreground, uint8_t background);