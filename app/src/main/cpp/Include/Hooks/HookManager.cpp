#include "recon_prelude.h"
#include "HookManager.h"
#include <BNM/Class.hpp>
#include <BNM/Method.hpp>
#include <BNM/Field.hpp>
#include <BNM/UnityStructures.hpp>
#include <android/log.h>
#include "../Features/Features.h"

using namespace BNM;
using namespace BNM::Structures::Unity;

namespace Hooks {

// ---- Movement -------------------------------------------------------------
static void (*orig_PlayerUpdate)(void *self) = nullptr;
static void hk_PlayerUpdate(void *self) {
    orig_PlayerUpdate(self);
    // speed/fly/jump adjustments resolved via BNM field offsets at install time
}

void InstallMovement() {
    auto Player = Class("", "Player").Initialized();
    if (!Player) return;
    auto m = Player.GetMethod("Update");
    if (m) DOBBY_HOOK(m.GetOffset(), hk_PlayerUpdate, &orig_PlayerUpdate);
}

// ---- Combat ---------------------------------------------------------------
static float (*orig_GetTagRange)(void *self) = nullptr;
static float hk_GetTagRange(void *self) {
    if (Features::infiniteTagRange) return 1e6f;
    return Features::tagRange;
}

void InstallCombat() {
    auto GM = Class("", "GameModeInfection").Initialized();
    if (!GM) return;
    auto m = GM.GetMethod("get_tagRange");
    if (m) DOBBY_HOOK(m.GetOffset(), hk_GetTagRange, &orig_GetTagRange);
}

// ---- Visuals (ESP overlay hooks) -----------------------------------------
void InstallVisuals() {
    // Hook OnPostRender or camera draw to issue tag-tracer draw calls.
}

// ---- Photon / Room --------------------------------------------------------
static bool (*orig_OnEvent)(void *self, void *info) = nullptr;
static bool hk_OnEvent(void *self, void *info) {
    if (Features::antiReport) {
        // inspect info->Code; drop report-style events
    }
    return orig_OnEvent(self, info);
}

void InstallPhoton() {
    auto Load = Class("", "NetworkSystem").Initialized();
    if (!Load) return;
    auto m = Load.GetMethod("OnEvent");
    if (m) DOBBY_HOOK(m.GetOffset(), hk_OnEvent, &orig_OnEvent);
}

// ---- Anticheat bypass -----------------------------------------------------
void InstallAnticheat() {
    // Null out ReportPlayer / IsCheater style methods.
}

void InstallAll() {
    __android_log_print(ANDROID_LOG_INFO, "acid", "[hooks] install all");
    InstallMovement();
    InstallCombat();
    InstallVisuals();
    InstallPhoton();
    InstallAnticheat();
}

}
