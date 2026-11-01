// Reconstructed from libacid.so DWARF + Ghidra decomp
// Functions: 1

// ---- line 11  addr 0xe15700 ----
// NotiLib::NotiLib()
// mangled: _ZN7NotiLibC2Ev
// addr 0xe15700  NotiLib

#include "recon_prelude.h"
/* DWARF original prototype: void NotiLib(NotiLib * this) */

void __thiscall NotiLib::NotiLib(NotiLib *this)

{
  this->_initialized = false;
  this->_notifInstance = (GameObject *)0x0;
  this->_notifText = (Text *)0x0;
  std::
  deque<std::std::string,_std::allocator<std::std::string_>_>
  ::deque(&this->_notifications);
  this->_notificationDecayTime = 0x96;
  this->_decayCounter = 0;
  this->_isEnabled = true;
  std::std::string::
  basic_string(&this->_previousNotification);
                    /* try { // try from 00f1574c to 00f15763 has its CatchHandler @ 00f15774 */
  __android_log_print(4,"ByNameModding","| Notification Lib Started! | [+]");
}
