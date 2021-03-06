#ifndef PLAYER_H
#define PLAYER_H

#include <stdint.h>
#include <stdbool.h>
#include "RGBImage.h"

bool change_effect(uint_fast16_t number);
void next_effect(void);

void close_effect(void);

bool render_effect(RGBPixel* image);

void next_module(void);

#endif //PLAYER_H
