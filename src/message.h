#pragma once

#include <cstdint>

namespace msg {

typedef std::uint64_t msg;

enum special {
    _RESERVED = 0,
    LEFT = 1,
    DOWN = 2,
    UP = 3,
    RIGHT = 4,
    LOWEST_PRINTABLE = 32,
    HIGHEST_PRINTABLE = 126,

    CTRL_MODIFIER_SHIFT = 8,
    SHIFT_MODIFIER_SHIFT = 9,

    CTRL_MODIFIER = 1 << CTRL_MODIFIER_SHIFT,
    SHIFT_MODIFIER = 1 << SHIFT_MODIFIER_SHIFT,
};

} // namespace msg
