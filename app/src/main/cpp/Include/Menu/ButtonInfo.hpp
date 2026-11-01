// Reconstructed from libacid.so DWARF + Ghidra decomp
// Functions: 2

// ---- line 5  addr 0xa3f698 ----
// ButtonInfo::~ButtonInfo()
// mangled: _ZN10ButtonInfoD2Ev
// addr 0xa3f698  ~ButtonInfo

#include "recon_prelude.h"
/* DWARF original prototype: void ~ButtonInfo(ButtonInfo * this) */

void __thiscall ButtonInfo::~ButtonInfo(ButtonInfo *this)

{
  std::
  function<std::std::string_()>
  ::~function(&this->getValueText);
  std::function<void_()>::~function(&this->onPlus);
  std::function<void_()>::~function(&this->onMinus);
  std::std::string::
  ~basic_string((std::string *)
                &this->toolTip);
  std::function<void_()>::~function(&this->disableMethod);
  std::function<void_()>::~function(&this->enableMethod);
  std::function<void_()>::~function(&this->method);
  std::std::string::
  ~basic_string((std::string *)
                &this->overlapText);
  std::std::string::
  ~basic_string((std::string *)
                this);
}

// ---- line 5  addr 0xa579d0 ----
// ButtonInfo::ButtonInfo(ButtonInfo const&)
// mangled: _ZN10ButtonInfoC2ERKS_
// addr 0xa579d0  ButtonInfo

/* DWARF original prototype: void ButtonInfo(ButtonInfo * this, ButtonInfo * param_1) */

void __thiscall ButtonInfo::ButtonInfo(ButtonInfo *this,ButtonInfo *param_1)

{
  bool bVar1;
  
  std::std::string::
  basic_string((std::string *)
               this,(basic_string *)param_1);
                    /* try { // try from 00b579fc to 00b57a07 has its CatchHandler @ 00b57af4 */
  std::std::string::
  basic_string((std::string *)
               &this->overlapText,(basic_string *)&param_1->overlapText);
                    /* try { // try from 00b57a20 to 00b57a23 has its CatchHandler @ 00b57b04 */
  std::function<void_()>::function(&this->method,&param_1->method);
                    /* try { // try from 00b57a3c to 00b57a3f has its CatchHandler @ 00b57b14 */
  std::function<void_()>::function(&this->enableMethod,&param_1->enableMethod);
                    /* try { // try from 00b57a58 to 00b57a5b has its CatchHandler @ 00b57b24 */
  std::function<void_()>::function(&this->disableMethod,&param_1->disableMethod);
  bVar1 = param_1->isTogglable;
  this->enabled = param_1->enabled;
  this->isTogglable = bVar1;
                    /* try { // try from 00b57a80 to 00b57a83 has its CatchHandler @ 00b57b34 */
  std::std::string::
  basic_string((std::string *)
               &this->toolTip,(basic_string *)&param_1->toolTip);
  this->isValueButton = (bool)(param_1->isValueButton & 1);
                    /* try { // try from 00b57aac to 00b57aaf has its CatchHandler @ 00b57b44 */
  std::function<void_()>::function(&this->onMinus,&param_1->onMinus);
                    /* try { // try from 00b57ac8 to 00b57acb has its CatchHandler @ 00b57b54 */
  std::function<void_()>::function(&this->onPlus,&param_1->onPlus);
                    /* try { // try from 00b57ae0 to 00b57ae3 has its CatchHandler @ 00b57b64 */
  std::
  function<std::std::string_()>
  ::function(&this->getValueText,&param_1->getValueText);
}
