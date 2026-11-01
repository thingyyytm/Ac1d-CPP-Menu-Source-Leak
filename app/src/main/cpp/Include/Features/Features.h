#include "recon_prelude.h"
#pragma once

namespace Features {
    // Combat
    inline bool  infiniteTagRange = false;
    inline bool  instantTag       = false;
    inline float tagRange         = 5.f;

    // Movement
    inline bool  fly        = false;
    inline bool  speed      = false;
    inline float speedMult  = 1.f;
    inline float jumpHeight = 2.f;

    // Visuals
    inline bool esp       = false;
    inline bool nameTags  = false;
    inline bool tracers   = false;

    // Room
    inline bool antiReport    = true;
    inline bool antiModerator = true;

    // Misc
    inline bool bypassAnticheats = true;

    void BanRandom();
    void KickNonFriends();
    void DumpPlayers();
}
