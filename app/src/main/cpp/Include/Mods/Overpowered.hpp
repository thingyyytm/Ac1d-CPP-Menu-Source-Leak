// Reconstructed from libacid.so DWARF + Ghidra decomp
// Functions: 2

// ---- line 3513  addr 0xc077c0 ----
// OverpoweredMods::PlayerTracker()::'lambda'()::~()
// mangled: _ZZN15OverpoweredMods13PlayerTrackerEvENUlvE_D2Ev
// addr 0xc077c0  ~(lambda_at_<redacted>)

#include "recon_prelude.h"
/* DWARF original name: ~(lambda at
   <redacted>)
   DWARF original prototype: void
   ~(lambda_at_<redacted>)(anon_class_144_6_772bb2f3_for___value_
   * this) */

void __thiscall
std::
__tuple_leaf<1UL,_(lambda_at_<redacted>),_false>
::anon_class_144_6_772bb2f3_for___value_::
~_lambda_anon_3513_37
          (anon_class_144_6_772bb2f3_for___value_ *this)

{
  std::string::~basic_string
            ((std::string *)
             &this->map);
  std::string::~basic_string
            ((std::string *)
             &this->mode);
  std::string::~basic_string
            ((std::string *)
             &this->type);
  std::string::~basic_string
            ((std::string *)
             &this->cC);
  std::string::~basic_string
            ((std::string *)
             &this->id);
  std::string::~basic_string
            ((std::string *)this)
  ;
}

// ---- line 3513  addr 0xc07e1c ----
// OverpoweredMods::PlayerTracker()::'lambda'()::('lambda'()&&)
// mangled: _ZZN15OverpoweredMods13PlayerTrackerEvENUlvE_C2EOS0_
// addr 0xc07e1c  (lambda_at_<redacted>)

/* DWARF original name: (lambda at
   <redacted>)
   DWARF original prototype: void
   (lambda_at_<redacted>)(anon_class_144_6_772bb2f3_for___value_
   * this, anon_class_144_6_772bb2f3_for___value_ * param_1) */

void __thiscall
std::
__tuple_leaf<1UL,_(lambda_at_<redacted>),_false>
::anon_class_144_6_772bb2f3_for___value_::
_lambda_anon_3513_37
          (anon_class_144_6_772bb2f3_for___value_ *this,
          anon_class_144_6_772bb2f3_for___value_ *param_1)

{
  std::string::basic_string
            (&this->name,&param_1->name);
  std::string::basic_string
            (&this->id,&param_1->id);
  std::string::basic_string
            (&this->cC,&param_1->cC);
  std::string::basic_string
            (&this->type,&param_1->type);
  std::string::basic_string
            (&this->mode,&param_1->mode);
  std::string::basic_string
            (&this->map,&param_1->map);
}
