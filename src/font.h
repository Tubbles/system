#pragma once

#include "olcPixelGameEngine.h"

void type(olc::PixelGameEngine *olc, int x, int y, std::string str,
          bool with_caret = false);
void type(olc::PixelGameEngine *olc, int x, int y, char c);
void preview_font(olc::PixelGameEngine *olc, int x, int y);
