// Auto-generated prelude for the decompiled-and-cleaned HoldableTemplate tree.
// Provides the type names Ghidra's output refers to without carrying full
// headers through every file.
#pragma once

#include <cstdint>
#include <cstddef>
#include <string>
#include <string_view>
#include <vector>
#include <map>
#include <functional>
#include <android/log.h>
#include <pthread.h>
#include <unistd.h>
#include <dlfcn.h>

// BNM core
#include <BNM/Loading.hpp>
#include <BNM/Class.hpp>
#include <BNM/MethodBase.hpp>
#include <BNM/FieldBase.hpp>
#include <BNM/Image.hpp>
#include <BNM/UnityStructures.hpp>
#include <BNM/BasicMonoStructures.hpp>
#include <BNM/UserSettings/GlobalSettings.hpp>

// Short local aliases Ghidra's decomp uses with no namespace path.
using Il2CppObject = BNM::IL2CPP::Il2CppObject;
using Il2CppClass  = BNM::IL2CPP::Il2CppClass;
using Il2CppImage  = BNM::IL2CPP::Il2CppImage;
using Il2CppType   = BNM::IL2CPP::Il2CppType;
using Image        = BNM::Image;
using Class        = BNM::Class;
using MethodBase   = BNM::MethodBase;
using FieldBase    = BNM::FieldBase;

// Photon event struct — opaque forward; access through BNM::Class lookups.
struct EventData;

// Mod own-namespaces touched by decomp bodies.
namespace ModMenu {
    void Init();
    void Update();
    void LateUpdate();
}
namespace PlayerMods {
    void HandleOrbitEvent(EventData *e);
}
namespace Bypasses {
    void BypassAnticheats();
}

// Dobby trampoline table — one typed function pointer per hook.
#include "orig_table.h"
