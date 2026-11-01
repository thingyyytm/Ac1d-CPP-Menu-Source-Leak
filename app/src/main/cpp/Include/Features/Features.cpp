#include "recon_prelude.h"
#include "Features.h"
#include <BNM/UnityStructures.hpp>
#include <BNM/Class.hpp>
#include <BNM/Method.hpp>
#include <android/log.h>

using namespace BNM;
using namespace BNM::Structures::Unity;

namespace Features {
    void BanRandom() {
        __android_log_print(ANDROID_LOG_INFO, "acid", "[feat] BanRandom");
        // Resolve PhotonNetwork.CurrentRoom.Players, iterate, call CloseConnection
        // via BNM method lookup. Hook pathway lives in Hooks/Photon.cpp.
    }

    void KickNonFriends() {
        __android_log_print(ANDROID_LOG_INFO, "acid", "[feat] KickNonFriends");
    }

    void DumpPlayers() {
        __android_log_print(ANDROID_LOG_INFO, "acid", "[feat] DumpPlayers");
    }
}
