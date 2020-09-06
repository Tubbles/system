#include "kernel.h"

void k::init(Machine *m, olc::PixelGameEngine *olc, MachineParams params) {
    m->ram = new uint32_t[params.ramsize];
    m->ramsize = params.ramsize;
    m->drawoffset = params.drawoffset;
    m->olc = olc;
}

void k::draw(Machine *m, uint32_t x, uint32_t y, Pixel p) {
    reinterpret_cast<Pixel *>(m->drawoffset)[x + y * k::screenw(m)] = p;
}

std::uint32_t k::screenw(Machine *m) { return m->olc->ScreenWidth(); }

std::uint32_t k::screenh(Machine *m) { return m->olc->ScreenHeight(); }

k::Pixel *k::drawptr(Machine *m) {
    return reinterpret_cast<Pixel *>(m->drawoffset);
}
