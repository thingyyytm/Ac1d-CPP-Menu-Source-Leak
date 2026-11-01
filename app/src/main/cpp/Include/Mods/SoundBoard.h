// Reconstructed from libacid.so DWARF + Ghidra decomp
// Functions: 1

// ---- line 27  addr 0xa56284 ----
// Soundboard::SoundEntry::~SoundEntry()
// mangled: _ZN10Soundboard10SoundEntryD2Ev
// addr 0xa56284  ~SoundEntry

#include "recon_prelude.h"
/* DWARF original prototype: void ~SoundEntry(SoundEntry * this) */

void __thiscall Soundboard::SoundEntry::~SoundEntry(SoundEntry *this)

{
  std::std::string::
  ~basic_string((std::string *)
                &this->path);
  std::std::string::
  ~basic_string((std::string *)
                this);
}
