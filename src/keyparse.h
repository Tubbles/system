#pragma once

#include "olcPixelGameEngine.h"
#include <optional>

struct RepeatData {
    enum struct RepeatState {
        KEY_UP,
        KEY_DOWN,
        KEY_REPEATING,
    };

    std::chrono::milliseconds key_delay, key_repeat;
    RepeatState repeat_state;
    std::chrono::time_point<std::chrono::steady_clock> key_down_stamp;
};

std::optional<char> parse(olc::PixelGameEngine *olc, RepeatData &data);
