// Reconstructed from libacid.so DWARF + Ghidra decomp
// Functions: 1

// ---- line 65  addr 0xa56c9c ----
// Buttons::Preset::~Preset()
// mangled: _ZN7Buttons6PresetD2Ev
// addr 0xa56c9c  ~Preset

#include "recon_prelude.h"
/* DWARF original prototype: void ~Preset(Preset * this) */

void __thiscall Buttons::Preset::~Preset(Preset *this)

{
  std::
  vector<std::std::string,_std::allocator<std::std::string_>_>
  ::~vector(&this->mods);
  std::std::string::
  ~basic_string((std::string *)
                this);
}
