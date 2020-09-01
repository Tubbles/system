#define OLC_PGE_APPLICATION
#include "olcPixelGameEngine.h"

#include "font.h"
#include "keyparse.h"
#include <chrono>
#include <vector>

constexpr int pixel_size = 2;

using namespace std::chrono_literals;

class System : public olc::PixelGameEngine {
private:
    RepeatData repeat_data;

public:
    System() { sAppName = "System"; }
    std::string input;

    static constexpr std::chrono::milliseconds key_delay = 200ms;
    static constexpr std::chrono::milliseconds key_repeat = 17ms;

    bool OnUserCreate() override {
        repeat_data.key_delay = key_delay;
        repeat_data.key_repeat = key_repeat;
        repeat_data.repeat_state = RepeatData::RepeatState::KEY_UP;
        repeat_data.key_down_stamp = std::chrono::steady_clock::now();
        return true;
    }

    bool OnUserUpdate(float fElapsedTime) override {
        Clear(olc::BLACK);

        auto c = parse(this, repeat_data);
        if (c) {
            if (c.value() == '\b') {
                if (input.size() > 0) {
                    input.pop_back();
                }
            } else {
                input += c.value();
            }
        }

        type(this, 1, 1, input);

        if (GetKey(olc::Key::ESCAPE).bPressed) {
            return false;
        }
        return true;
    }
};

int main() {
    System demo;

    if (demo.Construct(1920 / pixel_size, 1080 / pixel_size, pixel_size,
                       pixel_size, true)) {
        demo.Start();
    }

    return 0;
}
