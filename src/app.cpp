#include "app.h"
#include "font.h"
#include <algorithm>
#include <chrono>
#include <vector>

using namespace std::chrono_literals;

static constexpr std::chrono::milliseconds key_delay = 200ms;
static constexpr std::chrono::milliseconds key_repeat = 10ms;
static constexpr size_t grid = 16;

void app::init(k::Machine &mach, State &state) {
    state.repeat_data.key_delay = key_delay;
    state.repeat_data.key_repeat = key_repeat;
    state.repeat_data.repeat_state = RepeatData::RepeatState::KEY_UP;
    state.repeat_data.key_down_stamp = std::chrono::steady_clock::now();
    state.repeat_data.prev_key = std::nullopt;
    state.x = state.y = 0;
}

bool app::run(k::Machine &mach, State &state, std::optional<msg::msg> &m) {
    if (m) {
        // if (m.value() == '\b') {
        //     if (state.input.size() > 0) {
        //         state.input.pop_back();
        //     }
        // } else
        size_t speed = grid;
        // if (m.value() & msg::CTRL_MODIFIER) {
        //     speed *= 2;
        // }
        if (m.value() == '\e') {
            return false; // exit
            // } else if ((m.value() & 0xFF) >= msg::LOWEST_PRINTABLE &&
            //            (m.value() & 0xFF) <= msg::HIGHEST_PRINTABLE) {
            //     state.input += static_cast<char>(m.value() & 0xFF);
        } else if ((m.value() & 0xFF) == msg::LEFT) {
            if (state.x > grid - 1) {
                state.x -= grid;
            }
        } else if ((m.value() & 0xFF) == msg::DOWN) {
            if (state.y < static_cast<size_t>(k::screenh(&mach) - grid)) {
                state.y += grid;
            }
        } else if ((m.value() & 0xFF) == msg::UP) {
            if (state.y > grid - 1) {
                state.y -= grid;
            }
        } else if ((m.value() & 0xFF) == msg::RIGHT) {
            if (state.x < static_cast<size_t>(k::screenw(&mach) - grid)) {
                state.x += grid;
            }
        }
    }

    k::drawclear(&mach, k::Pixel{0, 0, 0});

    for (size_t i = 0; i < (grid + 1) / 2; ++i) {
        k::draw(&mach, state.x + i * 2, state.y, k::Pixel{0xFF, 0xFF, 0xFF});

        k::draw(&mach, state.x, state.y + i * 2, k::Pixel{0xFF, 0xFF, 0xFF});

        k::draw(&mach, state.x + grid - 1 - i * 2, state.y + grid - 1,
                k::Pixel{0xFF, 0xFF, 0xFF});

        k::draw(&mach, state.x + grid - 1, state.y + grid - 1 - i * 2,
                k::Pixel{0xFF, 0xFF, 0xFF});
    }

    type(&mach, k::screenw(&mach) / 2, k::screenh(&mach) / 2, "TEST");

    // type(&mach, 1, 1, state.input, true);

    return true;
}
