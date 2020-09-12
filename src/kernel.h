#pragma once

#include "olcPixelGameEngine.h"
#include <array>
#include <cstdint>
#include <cstdlib>

namespace k {
struct Machine {
    std::uint32_t *ram;
    size_t ramsize;
    size_t drawoffset;
    olc::PixelGameEngine *olc;
};

struct MachineParams {
    size_t ramsize;
    size_t drawoffset;
};

struct Pixel {
    std::uint8_t r;
    std::uint8_t g;
    std::uint8_t b;
    Pixel() = default;
    Pixel(std::uint8_t r, std::uint8_t g, std::uint8_t b) : r(r), g(g), b(b) {}
};

constexpr std::uint32_t kilo(std::uint32_t i) { return i * 1024; }
constexpr std::uint32_t mega(std::uint32_t i) { return i * 1024 * 1024; }
constexpr std::uint32_t giga(std::uint32_t i) { return i * 1024 * 1024 * 1024; }

void init(Machine *m, olc::PixelGameEngine *olc, MachineParams params);
void draw(Machine *m, uint32_t x, uint32_t y, Pixel p);
void drawclear(Machine *m, Pixel p);
std::uint32_t screenw(Machine *m);
std::uint32_t screenh(Machine *m);
Pixel *drawptr(Machine *m);
} // namespace k
