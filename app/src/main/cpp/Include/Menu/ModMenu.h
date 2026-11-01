#include "recon_prelude.h"
#pragma once
#include <string>
#include <vector>
#include <functional>

namespace Menu {
    struct Toggle { std::string label; bool *value; };
    struct Slider { std::string label; float *value; float min, max; };
    struct Button { std::string label; std::function<void()> cb; };

    struct Tab {
        std::string name;
        std::vector<Toggle> toggles;
        std::vector<Slider> sliders;
        std::vector<Button> buttons;
    };

    void Init();
    void Shutdown();
    void Render();
    Tab &AddTab(const std::string &name);
}
