#include "recon_prelude.h"
#include "ModMenu.h"
#include "../Features/Features.h"
#include <android/log.h>

namespace Menu {
    static std::vector<Tab> g_tabs;

    Tab &AddTab(const std::string &name) {
        g_tabs.push_back({name, {}, {}, {}});
        return g_tabs.back();
    }

    void Init() {
        __android_log_print(ANDROID_LOG_INFO, "acid", "[menu] init");

        auto &combat = AddTab("Combat");
        combat.toggles.push_back({"Infinite Tag Range", &Features::infiniteTagRange});
        combat.toggles.push_back({"Instant Tag",        &Features::instantTag});
        combat.sliders.push_back({"Tag Range", &Features::tagRange, 1.f, 500.f});

        auto &move = AddTab("Movement");
        move.toggles.push_back({"Fly",       &Features::fly});
        move.toggles.push_back({"Speed Mod", &Features::speed});
        move.sliders.push_back({"Speed Mult",  &Features::speedMult,  1.f, 10.f});
        move.sliders.push_back({"Jump Height", &Features::jumpHeight, 1.f, 50.f});

        auto &visuals = AddTab("Visuals");
        visuals.toggles.push_back({"ESP",        &Features::esp});
        visuals.toggles.push_back({"Name Tags",  &Features::nameTags});
        visuals.toggles.push_back({"Tracers",    &Features::tracers});

        auto &room = AddTab("Room");
        room.toggles.push_back({"Anti Report",    &Features::antiReport});
        room.toggles.push_back({"Anti Moderator", &Features::antiModerator});
        room.buttons.push_back({"Ban Random Player",  Features::BanRandom});
        room.buttons.push_back({"Kick Non-Friends",   Features::KickNonFriends});

        auto &misc = AddTab("Misc");
        misc.toggles.push_back({"Bypass Anticheats", &Features::bypassAnticheats});
        misc.buttons.push_back({"Dump Players", Features::DumpPlayers});
    }

    void Shutdown() { g_tabs.clear(); }

    void Render() {
        // Overlay surface drives this. Stubbed; wire to your GL/native overlay.
    }
}
