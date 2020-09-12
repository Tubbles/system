#define OLC_PGE_APPLICATION
#include "olcPixelGameEngine.h"

#include "app.h"
#include "kernel.h"

constexpr int pixel_size = 2;

class System : public olc::PixelGameEngine {
private:
    k::Machine mach;
    app::State state;

public:
    System() { sAppName = "System"; }

    bool OnUserCreate() override {

        k::init(&mach, this,
                {.ramsize = k::mega(1) + ScreenHeight() * ScreenHeight(),
                 .drawoffset = k::kilo(1)});
        app::init(mach, state);
        return true;
    }

    bool OnUserUpdate(float fElapsedTime) override {
        Clear(olc::BLACK);

        auto m = parse(this, state.repeat_data);

        k::Pixel *p = k::drawptr(&mach);
        for (size_t i = 0; i < k::screenw(&mach) * k::screenh(&mach); ++i) {
            Draw(i % k::screenw(&mach), i / k::screenw(&mach),
                 olc::Pixel(p[i].r, p[i].g, p[i].b));
        }

        return app::run(mach, state, m);
    }
};

int main() {
    static System sys;

    if (sys.Construct(1920 / pixel_size, 1080 / pixel_size, pixel_size,
                      pixel_size, true)) {
        sys.Start();
    }

    return 0;
}
