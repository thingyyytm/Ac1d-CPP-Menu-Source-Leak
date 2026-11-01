#include "recon_prelude.h"
#pragma once
#include <dobby.h>

namespace Hooks {
    void InstallAll();
    void InstallMovement();
    void InstallCombat();
    void InstallVisuals();
    void InstallPhoton();
    void InstallAnticheat();
}

#define DOBBY_HOOK(target, repl, orig) \
    DobbyHook((void*)(target), (dobby_dummy_func_t)(repl), (dobby_dummy_func_t*)(orig))
