#include "recon_prelude.h"
#include <jni.h>
#include <android/log.h>
#include <pthread.h>
#include <unistd.h>
#include <dlfcn.h>

#include <BNM/Loading.hpp>
#include <BNM/UserSettings/GlobalSettings.hpp>

#include "Include/Menu/ModMenu.h"
#include "Include/Hooks/HookManager.h"

#define LOG_TAG "acid"
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO,  LOG_TAG, __VA_ARGS__)
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)

static void OnBNMLoaded() {
    LOGI("[acid] BNM up — installing hooks");
    Hooks::InstallAll();
    Menu::Init();
    LOGI("[acid] boot complete");
}

static void *init_thread(void *) {
    BNM::WaitForIl2Cpp();
    OnBNMLoaded();
    return nullptr;
}

extern "C" [[gnu::visibility("default")]]
jint JNI_OnLoad(JavaVM *vm, void *) {
    LOGI("[acid] JNI_OnLoad");
    BNM::SetDebugMode(false);
    pthread_t th;
    pthread_create(&th, nullptr, init_thread, nullptr);
    pthread_detach(th);
    return JNI_VERSION_1_6;
}

__attribute__((constructor))
static void acid_ctor() {
    LOGI("[acid] .so loaded");
}
