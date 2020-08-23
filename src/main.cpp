#define OLC_PGE_APPLICATION
#include "olcPixelGameEngine.h"

#include "font.h"
#include "keyparse.h"
#include <vector>

constexpr int pixel_size = 1;

class System : public olc::PixelGameEngine {
public:
    System() { sAppName = "System"; }
    std::string input;

public:
    bool OnUserCreate() override { return true; }

    bool OnUserUpdate(float fElapsedTime) override {
        Clear(olc::BLACK);

        // preview_font(this, GetMouseX() + 8, GetMouseY() + 8);

        auto c = parse(this);
        if (c) {
            if (c.value() == '\b') {
                if (input.size() > 0) {
                    input.pop_back();
                }
            } else {
                input += c.value();
            }
        }

        // type(this, GetMouseX() + 8, GetMouseY() + 8, "mouse pointer");

        type(this, GetMouseX() + 16 * pixel_size, GetMouseY() + 16 * pixel_size,
             input);

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
