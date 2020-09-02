#include "kernel.h"

void kinit(Machine *m, MachineParams params) {
    m->ram = new uint32_t[params.ramsize];
    return;
}
