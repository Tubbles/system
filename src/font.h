#pragma once

#include "kernel.h"
#include <string>

void type(k::Machine *mach, int x, int y, std::string str,
          bool with_caret = false);
void type(k::Machine *mach, int x, int y, char c);
void type_caret(k::Machine *mach, int x, int y);
void preview_font(k::Machine *mach, int x, int y);
