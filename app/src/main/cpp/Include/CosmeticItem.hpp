// Reconstructed from libacid.so DWARF + Ghidra decomp
// Functions: 3

// ---- line 8  addr 0xbefe90 ----
// GlobalNamespace::CosmeticItemClass::CosmeticItem::CosmeticItem(GlobalNamespace::CosmeticItemClass::CosmeticItem const&)
// mangled: _ZN15GlobalNamespace17CosmeticItemClass12CosmeticItemC2ERKS1_
// addr 0xbefe90  CosmeticItem

#include "recon_prelude.h"
/* DWARF original prototype: void CosmeticItem(CosmeticItem * this, CosmeticItem * param_1) */

void __thiscall
GlobalNamespace::CosmeticItemClass::CosmeticItem::CosmeticItem
          (CosmeticItem *this,CosmeticItem *param_1)

{
  uint32_t uVar1;
  int iVar2;
  Il2CppClass *pIVar3;
  
  pIVar3 = (param_1->itemName).super_Il2CppObject.field_0.klass;
  (this->itemName).super_Il2CppObject.monitor = (param_1->itemName).super_Il2CppObject.monitor;
  (this->itemName).super_Il2CppObject.field_0.klass = pIVar3;
  uVar1 = *(uint32_t *)&(param_1->itemName).field_0x14;
  (this->itemName).length = (param_1->itemName).length;
  *(uint32_t *)&(this->itemName).field_0x14 = uVar1;
  std::std::string::
  basic_string((std::string *)
               &this->itemSlot,(basic_string *)&param_1->itemSlot);
  this->itemPicture = param_1->itemPicture;
                    /* try { // try from 00cefee4 to 00cefeef has its CatchHandler @ 00ceff18 */
  std::std::string::
  basic_string((std::string *)
               &this->displayName,(basic_string *)&param_1->displayName);
  iVar2 = param_1->cost;
  uVar1 = *(uint32_t *)&param_1->field_0x54;
  this->bundledItems = param_1->bundledItems;
  this->cost = iVar2;
  *(uint32_t *)&this->field_0x54 = uVar1;
  this->canTryOn = param_1->canTryOn;
}

// ---- line 8  addr 0xbeffdc ----
// GlobalNamespace::CosmeticItemClass::CosmeticItem::~CosmeticItem()
// mangled: _ZN15GlobalNamespace17CosmeticItemClass12CosmeticItemD2Ev
// addr 0xbeffdc  ~CosmeticItem

/* DWARF original prototype: void ~CosmeticItem(CosmeticItem * this) */

void __thiscall GlobalNamespace::CosmeticItemClass::CosmeticItem::~CosmeticItem(CosmeticItem *this)

{
  std::std::string::
  ~basic_string((std::string *)
                &this->displayName);
  std::std::string::
  ~basic_string((std::string *)
                &this->itemSlot);
}

// ---- line 8  addr 0xbf1b38 ----
// GlobalNamespace::CosmeticItemClass::CosmeticItem::CosmeticItem(GlobalNamespace::CosmeticItemClass::CosmeticItem&&)
// mangled: _ZN15GlobalNamespace17CosmeticItemClass12CosmeticItemC2EOS1_
// addr 0xbf1b38  CosmeticItem

/* DWARF original prototype: void CosmeticItem(CosmeticItem * this, CosmeticItem * param_1) */

void __thiscall
GlobalNamespace::CosmeticItemClass::CosmeticItem::CosmeticItem
          (CosmeticItem *this,CosmeticItem *param_1)

{
  uint32_t uVar1;
  int iVar2;
  Il2CppClass *pIVar3;
  
  pIVar3 = (param_1->itemName).super_Il2CppObject.field_0.klass;
  (this->itemName).super_Il2CppObject.monitor = (param_1->itemName).super_Il2CppObject.monitor;
  (this->itemName).super_Il2CppObject.field_0.klass = pIVar3;
  uVar1 = *(uint32_t *)&(param_1->itemName).field_0x14;
  (this->itemName).length = (param_1->itemName).length;
  *(uint32_t *)&(this->itemName).field_0x14 = uVar1;
  std::std::string::
  basic_string(&this->itemSlot,&param_1->itemSlot);
  this->itemPicture = param_1->itemPicture;
  std::std::string::
  basic_string(&this->displayName,&param_1->displayName);
  iVar2 = param_1->cost;
  uVar1 = *(uint32_t *)&param_1->field_0x54;
  this->bundledItems = param_1->bundledItems;
  this->cost = iVar2;
  *(uint32_t *)&this->field_0x54 = uVar1;
  this->canTryOn = param_1->canTryOn;
}
