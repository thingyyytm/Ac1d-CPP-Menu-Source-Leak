// Reconstructed from libacid.so DWARF + Ghidra decomp
// Functions: 6

// ---- line 21  addr 0xa49cdc ----
// new_Awake(void*)
// mangled: _Z9new_AwakePv
// addr 0xa49cdc  new_Awake

#include "recon_prelude.h"
void new_Awake(void *instance)

{
  orig_Awake(instance);
  ModMenu::Init();
  __android_log_print(4,"ByNameModding","Menu Initialization Called");
}

// ---- line 28  addr 0xa49d28 ----
// new_OnEvent(void*, BNM::IL2CPP::Il2CppObject*)
// mangled: _Z11new_OnEventPvPN3BNM6IL2CPP12Il2CppObjectE
// addr 0xa49d28  new_OnEvent

void new_OnEvent(void *instance,Il2CppObject *photonEvent)

{
  orig_OrigOnEvent(instance,photonEvent);
  if (photonEvent != (Il2CppObject *)0x0) {
    PlayerMods::HandleOrbitEvent((EventData *)photonEvent);
  }
}

// ---- line 37  addr 0xa49d8c ----
// new_LateUpdate(void*)
// mangled: _Z14new_LateUpdatePv
// addr 0xa49d8c  new_LateUpdate

void new_LateUpdate(void *instance)

{
  orig_LateUpdate(instance);
  ModMenu::LateUpdate();
  if ((*orig_isUpdated & 1) != 0) {
    __android_log_print(4,"ByNameModding","Menu Update Called");
    *orig_isUpdated = 0;
  }
}

// ---- line 47  addr 0xa49dfc ----
// new_Update(void*)
// mangled: _Z10new_UpdatePv
// addr 0xa49dfc  new_Update

void new_Update(void *instance)

{
  orig_Update(instance);
  ModMenu::Update();
  if ((*orig_isUpdated & 1) != 0) {
    __android_log_print(4,"ByNameModding","Menu Update Called");
    *orig_isUpdated = 0;
  }
}

// ---- line 56  addr 0xa49e6c ----
// OnLoaded()
// mangled: _Z8OnLoadedv
// addr 0xa49e6c  OnLoaded
void OnLoaded(void)

{
  long lVar1;
  std::string_view bStack_1c8;
  std::string_view bStack_1b8;
  Image IStack_1a8;
  std::string_view bStack_1a0;
  std::string_view bStack_190;
  Class CStack_180;
  MethodBase MStack_171;
  std::string_view bStack_160;
  std::string_view bStack_150;
  Image IStack_140;
  std::string_view bStack_138;
  std::string_view bStack_128;
  Class CStack_118;
  MethodBase MStack_109;
  std::string_view bStack_f8;
  std::string_view bStack_e8;
  Image IStack_d8;
  std::string_view bStack_d0;
  std::string_view bStack_c0;
  Class CStack_b0;
  MethodBase MStack_a1;
  std::string_view bStack_90;
  std::string_view bStack_80;
  Image IStack_70;
  std::string_view bStack_68;
  std::string_view bStack_58;
  Class CStack_48;
  MethodBase MStack_39;
  __android_log_print(4,"ByNameModding","Hooking Methods Now!!");
  Bypasses::BypassAnticheats();
  std::std::string_view::basic_string_view
            (&bStack_58,"GorillaLocomotion");
  std::std::string_view::basic_string_view
            (&bStack_68,"Player");
  std::std::string_view::basic_string_view
            (&bStack_80,"Assembly-CSharp.dll");
  BNM::Image::Image(&IStack_70,&bStack_80);
  BNM::Class::Class(&CStack_48,&bStack_58,&bStack_68,&IStack_70);
  std::std::string_view::basic_string_view
            (&bStack_90,"LateUpdate");
  BNM::Class::GetMethod(&MStack_39,&CStack_48,&bStack_90,-1);
  BNM::InvokeHook<void_(*)(void_*),_void_(*)(void_*)>
            (&MStack_39,(_func_void_void_ptr *)orig_new_LateUpdate,
             (_func_void_void_ptr **)orig_LateUpdate);
  std::std::string_view::basic_string_view
            (&bStack_c0,"GorillaLocomotion");
  std::std::string_view::basic_string_view
            (&bStack_d0,"Player");
  std::std::string_view::basic_string_view
            (&bStack_e8,"Assembly-CSharp.dll");
  BNM::Image::Image(&IStack_d8,&bStack_e8);
  BNM::Class::Class(&CStack_b0,&bStack_c0,&bStack_d0,&IStack_d8);
  std::std::string_view::basic_string_view
            (&bStack_f8,"Update");
  BNM::Class::GetMethod(&MStack_a1,&CStack_b0,&bStack_f8,-1);
  BNM::InvokeHook<void_(*)(void_*),_void_(*)(void_*)>
            (&MStack_a1,(_func_void_void_ptr *)orig_new_Update,
             (_func_void_void_ptr **)orig_Update);
  std::std::string_view::basic_string_view
            (&bStack_128,"GorillaLocomotion");
  std::std::string_view::basic_string_view
            (&bStack_138,"Player");
  std::std::string_view::basic_string_view
            (&bStack_150,"Assembly-CSharp.dll");
  BNM::Image::Image(&IStack_140,&bStack_150);
  BNM::Class::Class(&CStack_118,&bStack_128,&bStack_138,&IStack_140);
  std::std::string_view::basic_string_view
            (&bStack_160,"Awake");
  BNM::Class::GetMethod(&MStack_109,&CStack_118,&bStack_160,-1);
  BNM::InvokeHook<void_(*)(void_*),_void_(*)(void_*)>
            (&MStack_109,(_func_void_void_ptr *)orig_new_Awake,
             (_func_void_void_ptr **)orig_Awake);
  std::std::string_view::basic_string_view
            (&bStack_190,"Photon.Pun");
  std::std::string_view::basic_string_view
            (&bStack_1a0,"PhotonNetwork");
  std::std::string_view::basic_string_view
            (&bStack_1b8,"PhotonUnityNetworking.dll");
  BNM::Image::Image(&IStack_1a8,&bStack_1b8);
  BNM::Class::Class(&CStack_180,&bStack_190,&bStack_1a0,&IStack_1a8);
  std::std::string_view::basic_string_view
            (&bStack_1c8,"OnEvent");
  BNM::Class::GetMethod(&MStack_171,&CStack_180,&bStack_1c8,-1);
  BNM::
  InvokeHook<void_(*)(void_*,_BNM::IL2CPP::Il2CppObject_*),_void_(*)(void_*,_BNM::IL2CPP::Il2CppObject_*)>
            (&MStack_171,(_func_void_void_ptr_Il2CppObject_ptr *)orig_new_OnEvent,
             (_func_void_void_ptr_Il2CppObject_ptr **)orig_OrigOnEvent);
  __android_log_print(4,"ByNameModding","Hooked Methods...");
  lVar1 = *(long *)(lVar1 + 0x28) - local_28;
  if (lVar1 != 0) {
    __stack_chk_fail(lVar1);
  }
}

// ---- line 80  addr 0xa4c7d8 ----
// JNI_OnLoad
// mangled: JNI_OnLoad
// addr 0xa4c7d8  JNI_OnLoad

jint JNI_OnLoad(JavaVM *vm,void *reserved)

{
  long lVar1;
  bool bVar2;
  jint jVar3;
  jint local_24;
  JNIEnv *local_20;
  long local_18;
  
                    /* Unresolved local var: JNIEnv * env@[???] */
  lVar1 = tpidr_el0;
  local_18 = *(long *)(lVar1 + 0x28);
  jVar3 = _JavaVM::GetEnv(vm,&local_20,0x10006);
  if (jVar3 == 0) {
    BNM::Loading::AddOnLoadedEvent((_func_void *)orig_OnLoaded);
    __android_log_print(4,"ByNameModding","loaded! Calling TryLoadByJNI...");
    bVar2 = BNM::Loading::TryLoadByJNI(local_20,(jobject)0x0);
    if (bVar2) {
      local_24 = 0x10006;
    }
    else {
      __android_log_print(6,"ByNameModding","TryLoadByJNI failed!");
      local_24 = -1;
    }
  }
  else {
    __android_log_print(6,"ByNameModding","Failed to get JNI environment!");
    local_24 = -1;
  }
  lVar1 = tpidr_el0;
  lVar1 = *(long *)(lVar1 + 0x28) - local_18;
  if (lVar1 != 0) {
    __stack_chk_fail(lVar1);
  }
  return local_24;
}
