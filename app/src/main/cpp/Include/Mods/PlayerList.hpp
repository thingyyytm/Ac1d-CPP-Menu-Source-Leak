// Reconstructed from libacid.so DWARF + Ghidra decomp
// Functions: 1

// ---- line 16  addr 0xa565f8 ----
// PlayerList::PlayerEntry::~PlayerEntry()
// mangled: _ZN10PlayerList11PlayerEntryD2Ev
// addr 0xa565f8  ~PlayerEntry

#include "recon_prelude.h"
/* DWARF original prototype: void ~PlayerEntry(PlayerEntry * this) */

void __thiscall PlayerList::PlayerEntry::~PlayerEntry(PlayerEntry *this)

{
  std::std::string::
  ~basic_string((std::string *)
                &this->name);
}
