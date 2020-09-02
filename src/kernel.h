#pragma once

#include <array>
#include <cstdint>
#include <cstdlib>

struct Machine {
    uint32_t *ram;
    size_t *ram_size;
};

struct MachineParams {
    size_t ramsize;
};

constexpr uint32_t kilo(uint32_t i) { return i * 1024; }
constexpr uint32_t mega(uint32_t i) { return i * 1024 * 1024; }
constexpr uint32_t giga(uint32_t i) { return i * 1024 * 1024 * 1024; }

void kinit(Machine *m, MachineParams params);
