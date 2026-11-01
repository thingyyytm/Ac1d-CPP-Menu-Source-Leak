// Reconstructed from libacid.so DWARF + Ghidra decomp
// Functions: 1

// ---- line 9  addr 0xb38000 ----
// GunData::GunData()
// mangled: _ZN7GunDataC2Ev
// addr 0xb38000  GunData

#include "recon_prelude.h"
/* DWARF original prototype: void GunData(GunData * this) */

void __thiscall GunData::GunData(GunData *this)

{
  BNM::Structures::Unity::RaycastHit::RaycastHit(&this->raycastHit);
}
