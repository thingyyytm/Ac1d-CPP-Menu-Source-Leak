// Reconstructed from libacid.so DWARF + Ghidra decomp
// Functions: 1

// ---- line 13  addr 0xe156c8 ----
// NotiLib::~NotiLib()
// mangled: _ZN7NotiLibD2Ev
// addr 0xe156c8  ~NotiLib

#include "recon_prelude.h"
/* DWARF original prototype: void ~NotiLib(NotiLib * this) */

void __thiscall NotiLib::~NotiLib(NotiLib *this)

{
  std::std::string::
  ~basic_string((std::string *)
                &this->_previousNotification);
  std::
  deque<std::std::string,_std::allocator<std::std::string_>_>
  ::~deque(&this->_notifications);
}
