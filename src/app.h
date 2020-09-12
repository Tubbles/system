#pragma once

#include "kernel.h"
#include "keyparse.h"
#include "message.h"
#include <optional>

namespace app {

struct State {
    RepeatData repeat_data;
    std::string input;
    size_t x, y;
};

void init(k::Machine &mach, State &state);
bool run(k::Machine &mach, State &state, std::optional<msg::msg> &m);

} // namespace app
