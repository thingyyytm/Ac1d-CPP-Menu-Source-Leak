// Reconstructed from libacid.so DWARF + Ghidra decomp
// Functions: 14

// ---- line 38  addr 0xa6ed38 ----
// ButtonCollider::ButtonCollider()
// mangled: _ZN14ButtonColliderC2Ev
// addr 0xa6ed38  ButtonCollider

#include "recon_prelude.h"
/* DWARF original prototype: void ButtonCollider(ButtonCollider * this) */

void __thiscall ButtonCollider::ButtonCollider(ButtonCollider *this)

{
  BNM::UnityEngine::MonoBehaviour::MonoBehaviour(&this->super_MonoBehaviour);
  std::std::string::
  basic_string(&this->buttonName);
}

// ---- line 38  addr 0xa6edbc ----
// ButtonCollider::~ButtonCollider()
// mangled: _ZN14ButtonColliderD2Ev
// addr 0xa6edbc  ~ButtonCollider

/* DWARF original prototype: void ~ButtonCollider(ButtonCollider * this) */

void __thiscall ButtonCollider::~ButtonCollider(ButtonCollider *this)

{
  std::std::string::
  ~basic_string((std::string *)
                &this->buttonName);
}

// ---- line 39  addr 0xa49748 ----
// ButtonCollider::_BNMCustomClass::~_BNMCustomClass()
// mangled: _ZN14ButtonCollider15_BNMCustomClassD2Ev
// addr 0xa49748  ~_BNMCustomClass

/* DWARF original prototype: void ~_BNMCustomClass(_BNMCustomClass * this) */

void __thiscall ButtonCollider::_BNMCustomClass::~_BNMCustomClass(_BNMCustomClass *this)

{
  BNM::MANAGEMENT_STRUCTURES::CustomClass::~CustomClass(&this->super_CustomClass);
}

// ---- line 62  addr 0xa49918 ----
// ButtonCollider::_BNMCustomMethod_OnTriggerEnter::~_BNMCustomMethod_OnTriggerEnter()
// mangled: _ZN14ButtonCollider31_BNMCustomMethod_OnTriggerEnterD2Ev
// addr 0xa49918  ~_BNMCustomMethod_OnTriggerEnter

/* DWARF original prototype: void ~_BNMCustomMethod_OnTriggerEnter(_BNMCustomMethod_OnTriggerEnter *
   this) */

void __thiscall
ButtonCollider::_BNMCustomMethod_OnTriggerEnter::~_BNMCustomMethod_OnTriggerEnter
          (_BNMCustomMethod_OnTriggerEnter *this)

{
  BNM::MANAGEMENT_STRUCTURES::CustomMethod::~CustomMethod(&this->super_CustomMethod);
}

// ---- line 63  addr 0xa49ae8 ----
// ButtonCollider::_BNMCustomMethod_OnTriggerExit::~_BNMCustomMethod_OnTriggerExit()
// mangled: _ZN14ButtonCollider30_BNMCustomMethod_OnTriggerExitD2Ev
// addr 0xa49ae8  ~_BNMCustomMethod_OnTriggerExit

/* DWARF original prototype: void ~_BNMCustomMethod_OnTriggerExit(_BNMCustomMethod_OnTriggerExit *
   this) */

void __thiscall
ButtonCollider::_BNMCustomMethod_OnTriggerExit::~_BNMCustomMethod_OnTriggerExit
          (_BNMCustomMethod_OnTriggerExit *this)

{
  BNM::MANAGEMENT_STRUCTURES::CustomMethod::~CustomMethod(&this->super_CustomMethod);
}

// ---- line 64  addr 0xa49cb8 ----
// ButtonCollider::_BNMCustomMethod_Constructor::~_BNMCustomMethod_Constructor()
// mangled: _ZN14ButtonCollider28_BNMCustomMethod_ConstructorD2Ev
// addr 0xa49cb8  ~_BNMCustomMethod_Constructor

/* DWARF original prototype: void ~_BNMCustomMethod_Constructor(_BNMCustomMethod_Constructor * this)
    */

void __thiscall
ButtonCollider::_BNMCustomMethod_Constructor::~_BNMCustomMethod_Constructor
          (_BNMCustomMethod_Constructor *this)

{
  BNM::MANAGEMENT_STRUCTURES::CustomMethod::~CustomMethod(&this->super_CustomMethod);
}

// ---- line 67  addr 0xa64ec0 ----
// fixShader(Renderer*)
// mangled: _Z9fixShaderP8Renderer
// addr 0xa64ec0  fixShader

void fixShader(Renderer *rend)

{
  long lVar1;
  Material *this;
  Shader *local_70;
  std::string bStack_60;
  std::string bStack_48;
  std::string bStack_30;
  long local_18;
  
                    /* Unresolved local var: Shader * shader@[DW_OP_breg31(sp): +80] */
  lVar1 = tpidr_el0;
  local_18 = *(long *)(lVar1 + 0x28);
  std::std::string::
  basic_string<0>(&bStack_30,"Universal Render Pipeline/Unlit");
                    /* try { // try from 00b64ef4 to 00b64ef7 has its CatchHandler @ 00b64f54 */
  local_70 = Shader::Find(&bStack_30);
  std::std::string::
  ~basic_string((std::string *)
                &bStack_30);
  if (local_70 == (Shader *)0x0) {
    std::std::string::
    basic_string<0>(&bStack_48,"Unlit/Color");
                    /* try { // try from 00b64f34 to 00b64f37 has its CatchHandler @ 00b64f6c */
    local_70 = Shader::Find(&bStack_48);
    std::std::string::
    ~basic_string((std::string *)
                  &bStack_48);
  }
  if (local_70 == (Shader *)0x0) {
    std::std::string::
    basic_string<0>(&bStack_60,"GorillaTag/UberShader");
                    /* try { // try from 00b64fa8 to 00b64fab has its CatchHandler @ 00b64fc8 */
    local_70 = Shader::Find(&bStack_60);
    std::std::string::
    ~basic_string((std::string *)
                  &bStack_60);
  }
  if (local_70 != (Shader *)0x0) {
    this = Renderer::GetMaterial(rend);
    Material::SetShader(this,local_70);
  }
  lVar1 = tpidr_el0;
  lVar1 = *(long *)(lVar1 + 0x28) - local_18;
  if (lVar1 != 0) {
    __stack_chk_fail(lVar1);
  }
}

// ---- line 74  addr 0xa65050 ----
// CreateOutline(float, GameObject*)
// mangled: _Z13CreateOutlinefP10GameObject
// addr 0xa65050  CreateOutline

void CreateOutline(float thickness,GameObject *obj)

{
  long lVar1;
  Transform *this;
  GameObject *this_00;
  MonoType *pMVar2;
  Object *pOVar3;
  Transform *this_01;
  Renderer *rend;
  Material *this_02;
  uint64_t extraout_x1;
  uint64_t extraout_x1_00;
  uint64_t extraout_x1_01;
  float extraout_s0;
  float in_s1;
  float fVar4;
  float in_s2;
  float fVar5;
  Vector3 scale;
  Vector3 position;
  Quaternion rotation;
  Color color;
  Vector3 local_5c;
  float local_50 [2];
  float local_48;
  uint64_t local_40;
  uint64_t uStack_38;
  anon_union_12_2_47202220_for_Vector3_0 local_24;
  long local_18;
  
                    /* Unresolved local var: Transform * objTr@[DW_OP_breg31(sp): +88]
                       Unresolved local var: Vector3 objPos@[DW_OP_breg31(sp): +76]
                       Unresolved local var: Vector3 objScale@[DW_OP_breg31(sp): +64]
                       Unresolved local var: Vector3 targetScale@[???]
                       Unresolved local var: GameObject * outlineObj@[DW_OP_breg31(sp): +56]
                       Unresolved local var: Transform * outlineTr@[DW_OP_breg31(sp): +48]
                       Unresolved local var: Renderer * outlineRend@[DW_OP_breg31(sp): +40] */
  lVar1 = tpidr_el0;
  local_18 = *(long *)(lVar1 + 0x28);
  this = GameObject::GetTransform(obj);
  Transform::GetPosition(this);
  fVar4 = in_s1;
  fVar5 = in_s2;
  Transform::GetLocalScale(this);
  BNM::Structures::Unity::Vector3::Vector3
            ((Vector3 *)&local_24.field_0,1.0,thickness / fVar4 + 1.0,thickness / fVar5 + 1.0);
  this_00 = GameObject::CreatePrimitive(Cube);
  pMVar2 = Rigidbody::GetType();
  pOVar3 = (Object *)GameObject::GetComponent(this_00,pMVar2);
  GameObject::Destroy(pOVar3);
  pMVar2 = BoxCollider::GetType();
  pOVar3 = (Object *)GameObject::GetComponent(this_00,pMVar2);
  GameObject::Destroy(pOVar3);
  this_01 = GameObject::GetTransform(this_00);
  Transform::SetParent(this_01,this);
  uStack_38 = *(uint64_t *)(orig_identity + 8);
  local_40 = *(uint64_t *)orig_identity;
  rotation.field_0.data[2] = (float)(int)in_x2;
  rotation.field_0.data[3] = (float)(int)((ulong)in_x2 >> 0x20);
  rotation.field_0.data[0] = (float)(int)extraout_x1;
  rotation.field_0.data[1] = (float)(int)((ulong)extraout_x1 >> 0x20);
  Transform::SetRotation(this_01,rotation);
  local_48 = local_24.field_0.z;
  local_50[0] = local_24.field_0.x;
  local_50[1] = local_24.field_0.y;
  scale.field_0._8_4_ = (uint32_t)in_x2;
  scale.field_0.data[0] = (float)(int)rotation.field_0._0_8_;
  scale.field_0.data[1] = (float)(int)((ulong)rotation.field_0._0_8_ >> 0x20);
  Transform::SetLocalScale(this_01,scale);
  BNM::Structures::Unity::Vector3::Vector3(&local_5c,extraout_s0 + -0.001,in_s1,in_s2);
  position.field_0._8_4_ = (uint32_t)in_x2;
  position.field_0.data[0] = (float)(int)extraout_x1_00;
  position.field_0.data[1] = (float)(int)((ulong)extraout_x1_00 >> 0x20);
  Transform::SetPosition(this_01,position);
  pMVar2 = Renderer::GetType();
  rend = (Renderer *)GameObject::GetComponent(this_00,pMVar2);
  fixShader(rend);
  this_02 = Renderer::GetMaterial(rend);
  color.field_0.data[2] = (float)(int)in_x2;
  color.field_0.data[3] = (float)(int)((ulong)in_x2 >> 0x20);
  color.field_0.data[0] = (float)(int)extraout_x1_01;
  color.field_0.data[1] = (float)(int)((ulong)extraout_x1_01 >> 0x20);
  Material::SetColor(this_02,color);
  lVar1 = *(long *)(lVar1 + 0x28) - local_18;
  if (lVar1 != 0) {
    __stack_chk_fail(lVar1);
  }
}

// ---- line 96  addr 0xa6711c ----
// CreateButton(float, ButtonInfo*, bool)
// mangled: _Z12CreateButtonfP10ButtonInfob
// addr 0xa6711c  CreateButton

void CreateButton(float offset,ButtonInfo *info,bool isSelected)

{
  long lVar1;
  bool bVar2;
  GameObject *pGVar3;
  MonoType *pMVar4;
  Object *pOVar5;
  Collider *pCVar6;
  Transform *pTVar7;
  Transform *pTVar8;
  Renderer *pRVar9;
  Material *pMVar10;
  Component *pCVar11;
  Il2CppObject *pIVar12;
  Text *pTVar13;
  uint64_t extraout_x0;
  reference pvVar14;
  uint64_t extraout_x0_00;
  uint64_t extraout_x0_01;
  uint64_t extraout_x0_02;
  uint64_t extraout_x1;
  uint64_t extraout_x1_00;
  uint64_t extraout_x1_01;
  uint64_t extraout_x1_02;
  uint64_t extraout_x1_03;
  uint64_t extraout_x1_04;
  uint64_t uVar15;
  uint64_t extraout_x1_05;
  Vector2 sizeDelta;
  uint64_t extraout_x1_06;
  uint64_t extraout_x1_07;
  uint64_t extraout_x1_08;
  uint64_t extraout_x1_09;
  uint64_t extraout_x1_10;
  uint64_t extraout_x1_11;
  uint64_t extraout_x1_12;
  uint64_t extraout_x1_13;
  Vector2 sizeDelta_00;
  uint64_t extraout_x1_14;
  uint64_t extraout_x1_15;
  uint64_t extraout_x1_16;
  uint64_t extraout_x1_17;
  uint64_t extraout_x1_18;
  uint64_t extraout_x1_19;
  uint64_t extraout_x1_20;
  uint64_t extraout_x1_21;
  Vector2 sizeDelta_01;
  uint64_t extraout_x1_22;
  uint64_t extraout_x1_23;
  uint64_t extraout_x1_24;
  uint64_t extraout_x1_25;
  uint64_t extraout_x1_26;
  uint64_t extraout_x1_27;
  uint64_t extraout_x1_28;
  uint64_t extraout_x1_29;
  uint64_t extraout_x1_30;
  Vector2 sizeDelta_02;
  uint64_t extraout_x1_31;
  uint64_t extraout_x1_32;
  value_type *in_x2;
  Vector3 scale;
  Vector3 position;
  Vector3 position_00;
  Vector3 position_01;
  Vector3 scale_00;
  Vector3 position_02;
  Vector3 position_03;
  Vector3 position_04;
  Vector3 scale_01;
  Vector3 position_05;
  Vector3 position_06;
  Vector3 position_07;
  Vector3 scale_02;
  Vector3 position_08;
  Vector3 position_09;
  Vector3 position_10;
  Quaternion rotation;
  Color color;
  Color color_00;
  Quaternion rotation_00;
  Quaternion rotation_01;
  Color color_01;
  Color color_02;
  Quaternion rotation_02;
  Quaternion rotation_03;
  Color color_03;
  Color color_04;
  Quaternion rotation_04;
  Color color_05;
  Color color_06;
  Quaternion rotation_05;
  Vector3 rotation_06;
  Vector3 rotation_07;
  Vector3 rotation_08;
  Vector3 rotation_09;
  Quaternion QVar16;
  reference local_8f8;
  reference local_898;
  reference local_590;
  reference local_530;
  ButtonInfo *local_4b0;
  Vector3 local_33c;
  Vector3 local_330;
  Vector2 local_324;
  Vector3 local_31c;
  uint64_t local_310;
  uint64_t uStack_308;
  string sStack_300;
  Class local_2e8;
  uint64_t local_2e0;
  uint64_t uStack_2d8;
  uint64_t local_2d0;
  uint64_t uStack_2c8;
  Vector3 local_2b8;
  Vector3 local_2ac;
  uint64_t local_2a0;
  uint64_t uStack_298;
  Vector3 local_28c;
  Vector3 local_280;
  Vector2 local_274;
  Vector3 local_26c;
  uint64_t local_260;
  uint64_t uStack_258;
  std::string bStack_248;
  Class local_230;
  std::string bStack_228;
  uint64_t local_210;
  uint64_t uStack_208;
  Vector3 local_1f8;
  Vector3 local_1ec;
  uint64_t local_1e0;
  uint64_t uStack_1d8;
  Vector3 local_1cc;
  Vector3 local_1c0;
  Vector2 local_1b4;
  Vector3 local_1ac;
  uint64_t local_1a0;
  uint64_t uStack_198;
  std::string bStack_188;
  Class local_170;
  std::string bStack_168;
  uint64_t local_150;
  uint64_t uStack_148;
  Vector3 local_138;
  Vector3 local_12c;
  uint64_t local_120;
  uint64_t uStack_118;
  Vector3 local_10c;
  Vector3 local_100;
  Vector2 local_f4;
  Vector3 local_ec;
  uint64_t local_e0;
  uint64_t uStack_d8;
  string sStack_d0;
  Class local_b8;
  uint64_t local_b0;
  uint64_t uStack_a8;
  uint64_t local_a0;
  uint64_t uStack_98;
  Vector3 local_88;
  Vector3 local_7c;
  uint64_t local_70;
  uint64_t uStack_68;
  std::string bStack_58;
  std::string bStack_40;
  long local_28;
  
                    /* Unresolved local var: string displayText@[???] */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  std::std::string::
  basic_string(&bStack_40);
  if (((info->isValueButton & 1U) == 0) ||
     (bVar2 = std::
              operator==<std::std::string_>
                        (&info->getValueText,(nullptr_t)0x0), bVar2)) {
    bVar2 = std::
            std::string::empty
                      (&info->overlapText);
    if (bVar2) {
      local_4b0 = info;
    }
    else {
      local_4b0 = (ButtonInfo *)&info->overlapText;
    }
    std::std::string::
    operator=((std::string *)
              &bStack_40,(basic_string *)local_4b0);
  }
  else {
                    /* try { // try from 00b6717c to 00b6759b has its CatchHandler @ 00b671a4 */
    std::
    function<std::std::string_()>
    ::operator()(&bStack_58,&info->getValueText);
    std::std::string::
    operator=(&bStack_40,&bStack_58);
    std::std::string::
    ~basic_string((std::string *)
                  &bStack_58);
  }
  if (isSelected) {
    std::std::string::
    operator+=(&bStack_40,(value_type *)" <");
  }
  if ((info->isValueButton & 1U) == 0) {
                    /* Unresolved local var: GameObject * buttonObj@[???]
                       Unresolved local var: Collider * col@[???]
                       Unresolved local var: Transform * buttonTr@[???]
                       Unresolved local var: Renderer * rend@[???]
                       Unresolved local var: Color btnCol@[???]
                       Unresolved local var: ButtonCollider * nbc@[???]
                       Unresolved local var: GameObject * textObj@[???]
                       Unresolved local var: Text * text@[???]
                       Unresolved local var: RectTransform * rect@[???] */
    pGVar3 = GameObject::CreatePrimitive(Cube);
    pMVar4 = Rigidbody::GetType();
    pOVar5 = (Object *)GameObject::GetComponent(pGVar3,pMVar4);
    GameObject::Destroy(pOVar5);
    pMVar4 = BoxCollider::GetType();
    pCVar6 = (Collider *)GameObject::GetComponent(pGVar3,pMVar4);
    Collider::SetIsTrigger(pCVar6,true);
    pTVar7 = GameObject::GetTransform(pGVar3);
    pTVar8 = GameObject::GetTransform(*(GameObject **)orig_menu);
    Transform::SetParent(pTVar7,pTVar8);
    uStack_298 = *(uint64_t *)(orig_identity + 8);
    local_2a0 = *(uint64_t *)orig_identity;
    QVar16.field_0.data._8_8_ = in_x2;
    QVar16.field_0.data[0] = (float)(int)extraout_x1_24;
    QVar16.field_0.data[1] = (float)(int)((ulong)extraout_x1_24 >> 0x20);
    Transform::SetRotation(pTVar7,QVar16);
    BNM::Structures::Unity::Vector3::Vector3(&local_2ac,0.09,0.8,0.08);
    scale_02.field_0._8_4_ = SUB84(in_x2,0);
    scale_02.field_0.data[0] = (float)(int)extraout_x1_25;
    scale_02.field_0.data[1] = (float)(int)((ulong)extraout_x1_25 >> 0x20);
    Transform::SetLocalScale(pTVar7,scale_02);
    BNM::Structures::Unity::Vector3::Vector3(&local_2b8,0.56,0.0,0.32 - offset);
    position_08.field_0._8_4_ = SUB84(in_x2,0);
    position_08.field_0.data[0] = (float)(int)extraout_x1_26;
    position_08.field_0.data[1] = (float)(int)((ulong)extraout_x1_26 >> 0x20);
    Transform::SetLocalPosition(pTVar7,position_08);
    CreateOutline(0.011,pGVar3);
    pMVar4 = Renderer::GetType();
    pRVar9 = (Renderer *)GameObject::GetComponent(pGVar3,pMVar4);
    fixShader(pRVar9);
    if ((info->enabled & 1U) == 0) {
      local_898 = std::
                  vector<BNM::Structures::Unity::Color,_std::allocator<BNM::Structures::Unity::Color>_>
                  ::operator[]((vector<BNM::Structures::Unity::Color,_std::allocator<BNM::Structures::Unity::Color>_>
                                *)orig_buttonColors,0);
    }
    else {
      local_898 = std::
                  vector<BNM::Structures::Unity::Color,_std::allocator<BNM::Structures::Unity::Color>_>
                  ::operator[]((vector<BNM::Structures::Unity::Color,_std::allocator<BNM::Structures::Unity::Color>_>
                                *)orig_buttonColors,1);
    }
    uStack_2c8._0_4_ = *(float *)((long)&(local_898->field_0).field_0 + 8);
    uStack_2c8._4_4_ = *(float *)((long)&(local_898->field_0).field_0 + 0xc);
    local_2d0 = *(uint64_t *)(local_898->field_0).data;
    pMVar10 = Renderer::GetMaterial(pRVar9);
    uStack_2d8 = uStack_2c8;
    local_2e0 = local_2d0;
    color_05.field_0.data._8_8_ = in_x2;
    color_05.field_0.data[0] = (float)(int)extraout_x1_27;
    color_05.field_0.data[1] = (float)(int)((ulong)extraout_x1_27 >> 0x20);
    Material::SetColor(pMVar10,color_05);
    pCVar11 = GameObject::AddComponent(pGVar3,*(MonoType **)(orig_BNMCustomClass + 0x88));
    std::std::string::
    operator=((std::string *)
              &pCVar11[1].super_NamedObject.super_Object.super_Il2CppObject.monitor,
              (basic_string *)info);
    local_2e8 = GameObject::GetClass();
    pIVar12 = BNM::Class::CreateNewObjectParameters<>(&local_2e8);
    pTVar7 = GameObject::GetTransform((GameObject *)pIVar12);
    pTVar8 = GameObject::GetTransform(*(GameObject **)orig_canvasObject);
    Transform::SetParent(pTVar7,pTVar8);
    pMVar4 = Text::GetType();
    pTVar13 = (Text *)GameObject::AddComponent((GameObject *)pIVar12,pMVar4);
    Text::SetFont(pTVar13,*(Font **)orig_currentFont);
    std::std::string::
    basic_string((std::string *)
                 &sStack_300,(basic_string *)&bStack_40);
                    /* try { // try from 00b68734 to 00b6873f has its CatchHandler @ 00b689b4 */
    Text::SetText(pTVar13,&sStack_300);
    std::std::string::
    ~basic_string((std::string *)
                  &sStack_300);
                    /* try { // try from 00b68750 to 00b689ab has its CatchHandler @ 00b671a4 */
    Text::SetSupportRichText(pTVar13,true);
    Text::SetFontSize(pTVar13,1);
    if ((info->enabled & 1U) == 0) {
      local_8f8 = std::
                  vector<BNM::Structures::Unity::Color,_std::allocator<BNM::Structures::Unity::Color>_>
                  ::operator[]((vector<BNM::Structures::Unity::Color,_std::allocator<BNM::Structures::Unity::Color>_>
                                *)orig_textColors,0);
      uVar15 = extraout_x1_29;
    }
    else {
      local_8f8 = std::
                  vector<BNM::Structures::Unity::Color,_std::allocator<BNM::Structures::Unity::Color>_>
                  ::operator[]((vector<BNM::Structures::Unity::Color,_std::allocator<BNM::Structures::Unity::Color>_>
                                *)orig_textColors,1);
      uVar15 = extraout_x1_28;
    }
    uStack_308._0_4_ = *(float *)((long)&(local_8f8->field_0).field_0 + 8);
    uStack_308._4_4_ = *(float *)((long)&(local_8f8->field_0).field_0 + 0xc);
    local_310 = *(uint64_t *)(local_8f8->field_0).data;
    color_06.field_0.data._8_8_ = in_x2;
    color_06.field_0.data[0] = (float)(int)uVar15;
    color_06.field_0.data[1] = (float)(int)((ulong)uVar15 >> 0x20);
    Graphic::SetColor((Graphic *)pTVar13,color_06);
    Text::SetAlignment(pTVar13,MiddleCenter);
    Text::SetFontStyle(pTVar13,Normal);
    Text::SetTextResizeForBestFit(pTVar13,true);
    Text::SetResizeTextMinSize(pTVar13,0);
    pMVar4 = RectTransform::GetType();
    pTVar7 = (Transform *)Component::GetComponent((Component *)pTVar13,pMVar4);
    BNM::Structures::Unity::Vector3::Vector3(&local_31c,0.0,0.0,0.0);
    position_09.field_0._8_4_ = SUB84(in_x2,0);
    position_09.field_0.data[0] = (float)(int)extraout_x1_30;
    position_09.field_0.data[1] = (float)(int)((ulong)extraout_x1_30 >> 0x20);
    Transform::SetLocalPosition(pTVar7,position_09);
    BNM::Structures::Unity::Vector2::Vector2(&local_324,0.2,0.03);
    RectTransform::SetSizeDelta((RectTransform *)pTVar7,sizeDelta_02);
    BNM::Structures::Unity::Vector3::Vector3(&local_330,0.064,0.0,offset / -2.6 + 0.12307692);
    position_10.field_0._8_4_ = SUB84(in_x2,0);
    position_10.field_0.data[0] = (float)(int)extraout_x1_31;
    position_10.field_0.data[1] = (float)(int)((ulong)extraout_x1_31 >> 0x20);
    Transform::SetPosition(pTVar7,position_10);
    BNM::Structures::Unity::Vector3::Vector3(&local_33c,180.0,90.0,90.0);
    rotation_09.field_0._8_4_ = (uint32_t)extraout_x1_32;
    rotation_09.field_0.data[0] = (float)(int)extraout_x0_02;
    rotation_09.field_0.data[1] = (float)(int)((ulong)extraout_x0_02 >> 0x20);
    QVar16 = BNM::Structures::Unity::Quaternion::FromEuler(rotation_09);
    rotation_05.field_0._0_8_ = QVar16.field_0._8_8_;
    rotation_05.field_0.data._8_8_ = in_x2;
    Transform::SetRotation(pTVar7,rotation_05);
  }
  else {
                    /* Unresolved local var: GameObject * buttonObj@[???]
                       Unresolved local var: Collider * col@[???]
                       Unresolved local var: Transform * buttonTr@[???]
                       Unresolved local var: Renderer * rend@[???]
                       Unresolved local var: Color btnCol@[???]
                       Unresolved local var: ButtonCollider * nbc@[???]
                       Unresolved local var: GameObject * textObj@[???]
                       Unresolved local var: Text * text@[???]
                       Unresolved local var: RectTransform * rect@[???]
                       Unresolved local var: GameObject * minusObj@[???]
                       Unresolved local var: Collider * minusCol@[???]
                       Unresolved local var: Transform * minusTr@[???]
                       Unresolved local var: Renderer * minusRend@[???]
                       Unresolved local var: ButtonCollider * minusNbc@[???]
                       Unresolved local var: GameObject * minusTextObj@[???]
                       Unresolved local var: Text * minusText@[???]
                       Unresolved local var: RectTransform * minusRect@[???]
                       Unresolved local var: GameObject * plusObj@[???]
                       Unresolved local var: Collider * plusCol@[???]
                       Unresolved local var: Transform * plusTr@[???]
                       Unresolved local var: Renderer * plusRend@[???]
                       Unresolved local var: ButtonCollider * plusNbc@[???]
                       Unresolved local var: GameObject * plusTextObj@[???]
                       Unresolved local var: Text * plusText@[???]
                       Unresolved local var: RectTransform * plusRect@[???] */
    pGVar3 = GameObject::CreatePrimitive(Cube);
    pMVar4 = Rigidbody::GetType();
    pOVar5 = (Object *)GameObject::GetComponent(pGVar3,pMVar4);
    GameObject::Destroy(pOVar5);
    pMVar4 = BoxCollider::GetType();
    pCVar6 = (Collider *)GameObject::GetComponent(pGVar3,pMVar4);
    Collider::SetIsTrigger(pCVar6,true);
    pTVar7 = GameObject::GetTransform(pGVar3);
    pTVar8 = GameObject::GetTransform(*(GameObject **)orig_menu);
    Transform::SetParent(pTVar7,pTVar8);
    uStack_68 = *(uint64_t *)(orig_identity + 8);
    local_70 = *(uint64_t *)orig_identity;
    rotation.field_0.data._8_8_ = in_x2;
    rotation.field_0.data[0] = (float)(int)extraout_x1;
    rotation.field_0.data[1] = (float)(int)((ulong)extraout_x1 >> 0x20);
    Transform::SetRotation(pTVar7,rotation);
    BNM::Structures::Unity::Vector3::Vector3(&local_7c,0.09,0.52,0.08);
    scale.field_0._8_4_ = SUB84(in_x2,0);
    scale.field_0.data[0] = (float)(int)extraout_x1_00;
    scale.field_0.data[1] = (float)(int)((ulong)extraout_x1_00 >> 0x20);
    Transform::SetLocalScale(pTVar7,scale);
    BNM::Structures::Unity::Vector3::Vector3(&local_88,0.56,0.0,0.32 - offset);
    position.field_0._8_4_ = SUB84(in_x2,0);
    position.field_0.data[0] = (float)(int)extraout_x1_01;
    position.field_0.data[1] = (float)(int)((ulong)extraout_x1_01 >> 0x20);
    Transform::SetLocalPosition(pTVar7,position);
    CreateOutline(0.011,pGVar3);
    pMVar4 = Renderer::GetType();
    pRVar9 = (Renderer *)GameObject::GetComponent(pGVar3,pMVar4);
    fixShader(pRVar9);
    if ((info->enabled & 1U) == 0) {
      local_530 = std::
                  vector<BNM::Structures::Unity::Color,_std::allocator<BNM::Structures::Unity::Color>_>
                  ::operator[]((vector<BNM::Structures::Unity::Color,_std::allocator<BNM::Structures::Unity::Color>_>
                                *)orig_buttonColors,0);
    }
    else {
      local_530 = std::
                  vector<BNM::Structures::Unity::Color,_std::allocator<BNM::Structures::Unity::Color>_>
                  ::operator[]((vector<BNM::Structures::Unity::Color,_std::allocator<BNM::Structures::Unity::Color>_>
                                *)orig_buttonColors,1);
    }
    uStack_98._0_4_ = *(float *)((long)&(local_530->field_0).field_0 + 8);
    uStack_98._4_4_ = *(float *)((long)&(local_530->field_0).field_0 + 0xc);
    local_a0 = *(uint64_t *)(local_530->field_0).data;
    pMVar10 = Renderer::GetMaterial(pRVar9);
    uStack_a8 = uStack_98;
    local_b0 = local_a0;
    color.field_0.data._8_8_ = in_x2;
    color.field_0.data[0] = (float)(int)extraout_x1_02;
    color.field_0.data[1] = (float)(int)((ulong)extraout_x1_02 >> 0x20);
    Material::SetColor(pMVar10,color);
    pCVar11 = GameObject::AddComponent(pGVar3,*(MonoType **)(orig_BNMCustomClass + 0x88));
    std::std::string::
    operator=((std::string *)
              &pCVar11[1].super_NamedObject.super_Object.super_Il2CppObject.monitor,
              (basic_string *)info);
    local_b8 = GameObject::GetClass();
    pIVar12 = BNM::Class::CreateNewObjectParameters<>(&local_b8);
    pTVar7 = GameObject::GetTransform((GameObject *)pIVar12);
    pTVar8 = GameObject::GetTransform(*(GameObject **)orig_canvasObject);
    Transform::SetParent(pTVar7,pTVar8);
    pMVar4 = Text::GetType();
    pTVar13 = (Text *)GameObject::AddComponent((GameObject *)pIVar12,pMVar4);
    Text::SetFont(pTVar13,*(Font **)orig_currentFont);
    std::std::string::
    basic_string((std::string *)
                 &sStack_d0,(basic_string *)&bStack_40);
                    /* try { // try from 00b675a0 to 00b675ab has its CatchHandler @ 00b68378 */
    Text::SetText(pTVar13,&sStack_d0);
    std::std::string::
    ~basic_string((std::string *)
                  &sStack_d0);
                    /* try { // try from 00b675bc to 00b67b7b has its CatchHandler @ 00b671a4 */
    Text::SetSupportRichText(pTVar13,true);
    Text::SetFontSize(pTVar13,1);
    if ((info->enabled & 1U) == 0) {
      local_590 = std::
                  vector<BNM::Structures::Unity::Color,_std::allocator<BNM::Structures::Unity::Color>_>
                  ::operator[]((vector<BNM::Structures::Unity::Color,_std::allocator<BNM::Structures::Unity::Color>_>
                                *)orig_textColors,0);
      uVar15 = extraout_x1_04;
    }
    else {
      local_590 = std::
                  vector<BNM::Structures::Unity::Color,_std::allocator<BNM::Structures::Unity::Color>_>
                  ::operator[]((vector<BNM::Structures::Unity::Color,_std::allocator<BNM::Structures::Unity::Color>_>
                                *)orig_textColors,1);
      uVar15 = extraout_x1_03;
    }
    uStack_d8._0_4_ = *(float *)((long)&(local_590->field_0).field_0 + 8);
    uStack_d8._4_4_ = *(float *)((long)&(local_590->field_0).field_0 + 0xc);
    local_e0 = *(uint64_t *)(local_590->field_0).data;
    color_00.field_0.data._8_8_ = in_x2;
    color_00.field_0.data[0] = (float)(int)uVar15;
    color_00.field_0.data[1] = (float)(int)((ulong)uVar15 >> 0x20);
    Graphic::SetColor((Graphic *)pTVar13,color_00);
    Text::SetAlignment(pTVar13,MiddleCenter);
    Text::SetFontStyle(pTVar13,Normal);
    Text::SetTextResizeForBestFit(pTVar13,true);
    Text::SetResizeTextMinSize(pTVar13,0);
    pMVar4 = RectTransform::GetType();
    pTVar7 = (Transform *)Component::GetComponent((Component *)pTVar13,pMVar4);
    BNM::Structures::Unity::Vector3::Vector3(&local_ec,0.0,0.0,0.0);
    position_00.field_0._8_4_ = SUB84(in_x2,0);
    position_00.field_0.data[0] = (float)(int)extraout_x1_05;
    position_00.field_0.data[1] = (float)(int)((ulong)extraout_x1_05 >> 0x20);
    Transform::SetLocalPosition(pTVar7,position_00);
    BNM::Structures::Unity::Vector2::Vector2(&local_f4,0.13,0.03);
    RectTransform::SetSizeDelta((RectTransform *)pTVar7,sizeDelta);
    BNM::Structures::Unity::Vector3::Vector3(&local_100,0.064,0.0,offset / -2.6 + 0.12307692);
    position_01.field_0._8_4_ = SUB84(in_x2,0);
    position_01.field_0.data[0] = (float)(int)extraout_x1_06;
    position_01.field_0.data[1] = (float)(int)((ulong)extraout_x1_06 >> 0x20);
    Transform::SetPosition(pTVar7,position_01);
    BNM::Structures::Unity::Vector3::Vector3(&local_10c,180.0,90.0,90.0);
    rotation_06.field_0._8_4_ = (uint32_t)extraout_x1_07;
    rotation_06.field_0.data[0] = (float)(int)extraout_x0;
    rotation_06.field_0.data[1] = (float)(int)((ulong)extraout_x0 >> 0x20);
    QVar16 = BNM::Structures::Unity::Quaternion::FromEuler(rotation_06);
    rotation_00.field_0._0_8_ = QVar16.field_0._8_8_;
    rotation_00.field_0.data._8_8_ = in_x2;
    Transform::SetRotation(pTVar7,rotation_00);
    pGVar3 = GameObject::CreatePrimitive(Cube);
    pMVar4 = Rigidbody::GetType();
    pOVar5 = (Object *)GameObject::GetComponent(pGVar3,pMVar4);
    GameObject::Destroy(pOVar5);
    pMVar4 = BoxCollider::GetType();
    pCVar6 = (Collider *)GameObject::GetComponent(pGVar3,pMVar4);
    Collider::SetIsTrigger(pCVar6,true);
    pTVar7 = GameObject::GetTransform(pGVar3);
    pTVar8 = GameObject::GetTransform(*(GameObject **)orig_menu);
    Transform::SetParent(pTVar7,pTVar8);
    uStack_118 = *(uint64_t *)(orig_identity + 8);
    local_120 = *(uint64_t *)orig_identity;
    rotation_01.field_0.data._8_8_ = in_x2;
    rotation_01.field_0.data[0] = (float)(int)extraout_x1_08;
    rotation_01.field_0.data[1] = (float)(int)((ulong)extraout_x1_08 >> 0x20);
    Transform::SetRotation(pTVar7,rotation_01);
    BNM::Structures::Unity::Vector3::Vector3(&local_12c,0.09,0.11,0.08);
    scale_00.field_0._8_4_ = SUB84(in_x2,0);
    scale_00.field_0.data[0] = (float)(int)extraout_x1_09;
    scale_00.field_0.data[1] = (float)(int)((ulong)extraout_x1_09 >> 0x20);
    Transform::SetLocalScale(pTVar7,scale_00);
    BNM::Structures::Unity::Vector3::Vector3(&local_138,0.56,0.345,0.32 - offset);
    position_02.field_0._8_4_ = SUB84(in_x2,0);
    position_02.field_0.data[0] = (float)(int)extraout_x1_10;
    position_02.field_0.data[1] = (float)(int)((ulong)extraout_x1_10 >> 0x20);
    Transform::SetLocalPosition(pTVar7,position_02);
    CreateOutline(0.011,pGVar3);
    pMVar4 = Renderer::GetType();
    pRVar9 = (Renderer *)GameObject::GetComponent(pGVar3,pMVar4);
    fixShader(pRVar9);
    pMVar10 = Renderer::GetMaterial(pRVar9);
    pvVar14 = std::
              vector<BNM::Structures::Unity::Color,_std::allocator<BNM::Structures::Unity::Color>_>
              ::operator[]((vector<BNM::Structures::Unity::Color,_std::allocator<BNM::Structures::Unity::Color>_>
                            *)orig_buttonColors,0);
    uStack_148._0_4_ = *(float *)((long)&(pvVar14->field_0).field_0 + 8);
    uStack_148._4_4_ = *(float *)((long)&(pvVar14->field_0).field_0 + 0xc);
    local_150 = *(uint64_t *)(pvVar14->field_0).data;
    color_01.field_0.data._8_8_ = in_x2;
    color_01.field_0.data[0] = (float)(int)extraout_x1_11;
    color_01.field_0.data[1] = (float)(int)((ulong)extraout_x1_11 >> 0x20);
    Material::SetColor(pMVar10,color_01);
    pCVar11 = GameObject::AddComponent(pGVar3,*(MonoType **)(orig_BNMCustomClass + 0x88));
    std::operator+<char,_std::char_traits<char>,_std::allocator<char>_>
              (&bStack_168,(void *)info,
               (std::string *)
               "-",in_x2);
    std::std::string::
    operator=((std::string *)
              &pCVar11[1].super_NamedObject.super_Object.super_Il2CppObject.monitor,&bStack_168);
    std::std::string::
    ~basic_string((std::string *)
                  &bStack_168);
    local_170 = GameObject::GetClass();
    pIVar12 = BNM::Class::CreateNewObjectParameters<>(&local_170);
    pTVar7 = GameObject::GetTransform((GameObject *)pIVar12);
    pTVar8 = GameObject::GetTransform(*(GameObject **)orig_canvasObject);
    Transform::SetParent(pTVar7,pTVar8);
    pMVar4 = Text::GetType();
    pTVar13 = (Text *)GameObject::AddComponent((GameObject *)pIVar12,pMVar4);
    Text::SetFont(pTVar13,*(Font **)orig_currentFont);
    std::std::string::
    basic_string<0>(&bStack_188,"<");
                    /* try { // try from 00b67b80 to 00b67b8b has its CatchHandler @ 00b68390 */
    Text::SetText(pTVar13,&bStack_188);
    std::std::string::
    ~basic_string((std::string *)
                  &bStack_188);
                    /* try { // try from 00b67b9c to 00b68127 has its CatchHandler @ 00b671a4 */
    Text::SetSupportRichText(pTVar13,true);
    Text::SetFontSize(pTVar13,1);
    pvVar14 = std::
              vector<BNM::Structures::Unity::Color,_std::allocator<BNM::Structures::Unity::Color>_>
              ::operator[]((vector<BNM::Structures::Unity::Color,_std::allocator<BNM::Structures::Unity::Color>_>
                            *)orig_textColors,0);
    uStack_198._0_4_ = *(float *)((long)&(pvVar14->field_0).field_0 + 8);
    uStack_198._4_4_ = *(float *)((long)&(pvVar14->field_0).field_0 + 0xc);
    local_1a0 = *(uint64_t *)(pvVar14->field_0).data;
    color_02.field_0.data._8_8_ = in_x2;
    color_02.field_0.data[0] = (float)(int)extraout_x1_12;
    color_02.field_0.data[1] = (float)(int)((ulong)extraout_x1_12 >> 0x20);
    Graphic::SetColor((Graphic *)pTVar13,color_02);
    Text::SetAlignment(pTVar13,MiddleCenter);
    Text::SetFontStyle(pTVar13,Bold);
    Text::SetTextResizeForBestFit(pTVar13,true);
    Text::SetResizeTextMinSize(pTVar13,0);
    pMVar4 = RectTransform::GetType();
    pTVar7 = (Transform *)Component::GetComponent((Component *)pTVar13,pMVar4);
    BNM::Structures::Unity::Vector3::Vector3(&local_1ac,0.0,0.0,0.0);
    position_03.field_0._8_4_ = SUB84(in_x2,0);
    position_03.field_0.data[0] = (float)(int)extraout_x1_13;
    position_03.field_0.data[1] = (float)(int)((ulong)extraout_x1_13 >> 0x20);
    Transform::SetLocalPosition(pTVar7,position_03);
    BNM::Structures::Unity::Vector2::Vector2(&local_1b4,0.03,0.03);
    RectTransform::SetSizeDelta((RectTransform *)pTVar7,sizeDelta_00);
    BNM::Structures::Unity::Vector3::Vector3(&local_1c0,0.064,0.1035,offset / -2.6 + 0.12307692);
    position_04.field_0._8_4_ = SUB84(in_x2,0);
    position_04.field_0.data[0] = (float)(int)extraout_x1_14;
    position_04.field_0.data[1] = (float)(int)((ulong)extraout_x1_14 >> 0x20);
    Transform::SetPosition(pTVar7,position_04);
    BNM::Structures::Unity::Vector3::Vector3(&local_1cc,180.0,90.0,90.0);
    rotation_07.field_0._8_4_ = (uint32_t)extraout_x1_15;
    rotation_07.field_0.data[0] = (float)(int)extraout_x0_00;
    rotation_07.field_0.data[1] = (float)(int)((ulong)extraout_x0_00 >> 0x20);
    QVar16 = BNM::Structures::Unity::Quaternion::FromEuler(rotation_07);
    rotation_02.field_0._0_8_ = QVar16.field_0._8_8_;
    rotation_02.field_0.data._8_8_ = in_x2;
    Transform::SetRotation(pTVar7,rotation_02);
    pGVar3 = GameObject::CreatePrimitive(Cube);
    pMVar4 = Rigidbody::GetType();
    pOVar5 = (Object *)GameObject::GetComponent(pGVar3,pMVar4);
    GameObject::Destroy(pOVar5);
    pMVar4 = BoxCollider::GetType();
    pCVar6 = (Collider *)GameObject::GetComponent(pGVar3,pMVar4);
    Collider::SetIsTrigger(pCVar6,true);
    pTVar7 = GameObject::GetTransform(pGVar3);
    pTVar8 = GameObject::GetTransform(*(GameObject **)orig_menu);
    Transform::SetParent(pTVar7,pTVar8);
    uStack_1d8 = *(uint64_t *)(orig_identity + 8);
    local_1e0 = *(uint64_t *)orig_identity;
    rotation_03.field_0.data._8_8_ = in_x2;
    rotation_03.field_0.data[0] = (float)(int)extraout_x1_16;
    rotation_03.field_0.data[1] = (float)(int)((ulong)extraout_x1_16 >> 0x20);
    Transform::SetRotation(pTVar7,rotation_03);
    BNM::Structures::Unity::Vector3::Vector3(&local_1ec,0.09,0.11,0.08);
    scale_01.field_0._8_4_ = SUB84(in_x2,0);
    scale_01.field_0.data[0] = (float)(int)extraout_x1_17;
    scale_01.field_0.data[1] = (float)(int)((ulong)extraout_x1_17 >> 0x20);
    Transform::SetLocalScale(pTVar7,scale_01);
    BNM::Structures::Unity::Vector3::Vector3(&local_1f8,0.56,-0.345,0.32 - offset);
    position_05.field_0._8_4_ = SUB84(in_x2,0);
    position_05.field_0.data[0] = (float)(int)extraout_x1_18;
    position_05.field_0.data[1] = (float)(int)((ulong)extraout_x1_18 >> 0x20);
    Transform::SetLocalPosition(pTVar7,position_05);
    CreateOutline(0.011,pGVar3);
    pMVar4 = Renderer::GetType();
    pRVar9 = (Renderer *)GameObject::GetComponent(pGVar3,pMVar4);
    fixShader(pRVar9);
    pMVar10 = Renderer::GetMaterial(pRVar9);
    pvVar14 = std::
              vector<BNM::Structures::Unity::Color,_std::allocator<BNM::Structures::Unity::Color>_>
              ::operator[]((vector<BNM::Structures::Unity::Color,_std::allocator<BNM::Structures::Unity::Color>_>
                            *)orig_buttonColors,0);
    uStack_208._0_4_ = *(float *)((long)&(pvVar14->field_0).field_0 + 8);
    uStack_208._4_4_ = *(float *)((long)&(pvVar14->field_0).field_0 + 0xc);
    local_210 = *(uint64_t *)(pvVar14->field_0).data;
    color_03.field_0.data._8_8_ = in_x2;
    color_03.field_0.data[0] = (float)(int)extraout_x1_19;
    color_03.field_0.data[1] = (float)(int)((ulong)extraout_x1_19 >> 0x20);
    Material::SetColor(pMVar10,color_03);
    pCVar11 = GameObject::AddComponent(pGVar3,*(MonoType **)(orig_BNMCustomClass + 0x88));
    std::operator+<char,_std::char_traits<char>,_std::allocator<char>_>
              (&bStack_228,(void *)info,
               (std::string *)
               "+",in_x2);
    std::std::string::
    operator=((std::string *)
              &pCVar11[1].super_NamedObject.super_Object.super_Il2CppObject.monitor,&bStack_228);
    std::std::string::
    ~basic_string((std::string *)
                  &bStack_228);
    local_230 = GameObject::GetClass();
    pIVar12 = BNM::Class::CreateNewObjectParameters<>(&local_230);
    pTVar7 = GameObject::GetTransform((GameObject *)pIVar12);
    pTVar8 = GameObject::GetTransform(*(GameObject **)orig_canvasObject);
    Transform::SetParent(pTVar7,pTVar8);
    pMVar4 = Text::GetType();
    pTVar13 = (Text *)GameObject::AddComponent((GameObject *)pIVar12,pMVar4);
    Text::SetFont(pTVar13,*(Font **)orig_currentFont);
    std::std::string::
    basic_string<0>(&bStack_248,">");
                    /* try { // try from 00b6812c to 00b68137 has its CatchHandler @ 00b683a8 */
    Text::SetText(pTVar13,&bStack_248);
    std::std::string::
    ~basic_string((std::string *)
                  &bStack_248);
                    /* try { // try from 00b68148 to 00b6872f has its CatchHandler @ 00b671a4 */
    Text::SetSupportRichText(pTVar13,true);
    Text::SetFontSize(pTVar13,1);
    pvVar14 = std::
              vector<BNM::Structures::Unity::Color,_std::allocator<BNM::Structures::Unity::Color>_>
              ::operator[]((vector<BNM::Structures::Unity::Color,_std::allocator<BNM::Structures::Unity::Color>_>
                            *)orig_textColors,0);
    uStack_258._0_4_ = *(float *)((long)&(pvVar14->field_0).field_0 + 8);
    uStack_258._4_4_ = *(float *)((long)&(pvVar14->field_0).field_0 + 0xc);
    local_260 = *(uint64_t *)(pvVar14->field_0).data;
    color_04.field_0.data._8_8_ = in_x2;
    color_04.field_0.data[0] = (float)(int)extraout_x1_20;
    color_04.field_0.data[1] = (float)(int)((ulong)extraout_x1_20 >> 0x20);
    Graphic::SetColor((Graphic *)pTVar13,color_04);
    Text::SetAlignment(pTVar13,MiddleCenter);
    Text::SetFontStyle(pTVar13,Bold);
    Text::SetTextResizeForBestFit(pTVar13,true);
    Text::SetResizeTextMinSize(pTVar13,0);
    pMVar4 = RectTransform::GetType();
    pTVar7 = (Transform *)Component::GetComponent((Component *)pTVar13,pMVar4);
    BNM::Structures::Unity::Vector3::Vector3(&local_26c,0.0,0.0,0.0);
    position_06.field_0._8_4_ = SUB84(in_x2,0);
    position_06.field_0.data[0] = (float)(int)extraout_x1_21;
    position_06.field_0.data[1] = (float)(int)((ulong)extraout_x1_21 >> 0x20);
    Transform::SetLocalPosition(pTVar7,position_06);
    BNM::Structures::Unity::Vector2::Vector2(&local_274,0.03,0.03);
    RectTransform::SetSizeDelta((RectTransform *)pTVar7,sizeDelta_01);
    BNM::Structures::Unity::Vector3::Vector3(&local_280,0.064,-0.1035,offset / -2.6 + 0.12307692);
    position_07.field_0._8_4_ = SUB84(in_x2,0);
    position_07.field_0.data[0] = (float)(int)extraout_x1_22;
    position_07.field_0.data[1] = (float)(int)((ulong)extraout_x1_22 >> 0x20);
    Transform::SetPosition(pTVar7,position_07);
    BNM::Structures::Unity::Vector3::Vector3(&local_28c,180.0,90.0,90.0);
    rotation_08.field_0._8_4_ = (uint32_t)extraout_x1_23;
    rotation_08.field_0.data[0] = (float)(int)extraout_x0_01;
    rotation_08.field_0.data[1] = (float)(int)((ulong)extraout_x0_01 >> 0x20);
    QVar16 = BNM::Structures::Unity::Quaternion::FromEuler(rotation_08);
    rotation_04.field_0._0_8_ = QVar16.field_0._8_8_;
    rotation_04.field_0.data._8_8_ = in_x2;
    Transform::SetRotation(pTVar7,rotation_04);
  }
  std::std::string::
  ~basic_string((std::string *)
                &bStack_40);
  lVar1 = tpidr_el0;
  lVar1 = *(long *)(lVar1 + 0x28) - local_28;
  if (lVar1 != 0) {
    __stack_chk_fail(lVar1);
  }
}

// ---- line 254  addr 0xa62808 ----
// CreateMenu()
// mangled: _Z10CreateMenuv
// addr 0xa62808  CreateMenu
void CreateMenu(void)

{
  long lVar1;
  uint8_t *puVar2;
  uint8_t *puVar3;
  bool isSelected;
  int iVar4;
  GameObject *pGVar5;
  MonoType *pMVar6;
  Object *pOVar7;
  Transform *pTVar8;
  Transform *pTVar9;
  Renderer *pRVar10;
  Material *pMVar11;
  Il2CppObject *pIVar12;
  Canvas *this;
  Component *pCVar13;
  Text *pTVar14;
  reference pvVar15;
  uint64_t extraout_x0;
  uint64_t extraout_x0_00;
  Collider *pCVar16;
  uint64_t extraout_x0_01;
  reference this_00;
  unsigned_long *puVar17;
  __wrap_iter<ButtonInfo_*> __first;
  __wrap_iter<ButtonInfo_*> __last;
  size_type sVar18;
  reference info;
  uint64_t extraout_x1;
  uint64_t extraout_x1_00;
  uint64_t extraout_x1_01;
  uint64_t extraout_x1_02;
  uint64_t extraout_x1_03;
  uint64_t extraout_x1_04;
  uint64_t extraout_x1_05;
  Vector2 sizeDelta;
  uint64_t extraout_x1_06;
  uint64_t extraout_x1_07;
  uint64_t extraout_x1_08;
  uint64_t extraout_x1_09;
  Vector2 sizeDelta_00;
  uint64_t extraout_x1_10;
  uint64_t extraout_x1_11;
  uint64_t extraout_x1_12;
  uint64_t extraout_x1_13;
  uint64_t extraout_x1_14;
  uint64_t extraout_x1_15;
  uint64_t extraout_x1_16;
  uint64_t extraout_x1_17;
  Vector2 sizeDelta_01;
  uint64_t extraout_x1_18;
  uint64_t extraout_x1_19;
  uint64_t extraout_x1_20;
  uint64_t extraout_x1_21;
  uint64_t extraout_x1_22;
  uint64_t extraout_x1_23;
  uint64_t extraout_x1_24;
  uint64_t extraout_x1_25;
  uint64_t extraout_x1_26;
  Graphic *this_01;
  unsigned_long __n;
  unsigned_long __n_00;
  Vector3 scale;
  Vector3 scale_00;
  Vector3 position;
  Vector3 position_00;
  Vector3 position_01;
  Vector3 position_02;
  Vector3 position_03;
  Vector3 scale_01;
  Vector3 position_04;
  Vector3 position_05;
  Vector3 scale_02;
  Vector3 position_06;
  Vector3 scale_03;
  Vector3 position_07;
  Color color;
  Color color_00;
  Quaternion rotation;
  Color color_01;
  Quaternion rotation_00;
  Quaternion rotation_01;
  Color color_02;
  Color color_03;
  Quaternion rotation_02;
  Quaternion rotation_03;
  Color color_04;
  Quaternion rotation_04;
  Color color_05;
  Vector3 rotation_05;
  Vector3 rotation_06;
  Vector3 rotation_07;
  Quaternion QVar19;
  int local_41c;
  iterator local_2e0;
  iterator local_2d8;
  vector<ButtonInfo,_std::allocator<ButtonInfo>_> vStack_2d0;
  unsigned_long local_2b8;
  unsigned_long local_2b0;
  size_type local_2a8;
  uint64_t local_2a0;
  uint64_t uStack_298;
  Vector3 local_288;
  Vector3 local_27c;
  uint64_t local_270;
  uint64_t uStack_268;
  uint64_t local_260;
  uint64_t uStack_258;
  Vector3 local_248;
  Vector3 local_23c;
  uint64_t local_230;
  uint64_t uStack_228;
  Vector3 local_220;
  Vector2 local_214;
  Vector3 local_20c;
  uint64_t local_200;
  uint64_t uStack_1f8;
  std::string bStack_1f0;
  Class local_1d8;
  uint64_t local_1d0;
  uint64_t uStack_1c8;
  Vector3 local_1b8;
  Vector3 local_1ac;
  uint64_t local_1a0;
  uint64_t uStack_198;
  Vector3 local_18c;
  Vector3 local_180;
  Vector2 local_174;
  Vector3 local_16c;
  uint64_t local_160;
  uint64_t uStack_158;
  std::string bStack_150;
  Class local_138;
  Vector3 local_12c;
  Vector3 local_120;
  Vector2 local_114;
  Vector3 local_10c;
  uint64_t local_100;
  uint64_t uStack_f8;
  string sStack_f0;
  std::string abStack_d8 [24];
  std::string bStack_c0;
  std::string bStack_a8;
  Class local_90;
  Class local_88;
  uint64_t local_80;
  uint64_t uStack_78;
  Vector3 local_6c;
  uint64_t local_60;
  uint32_t local_58;
  uint64_t local_50;
  uint64_t uStack_48;
  Vector3 local_34;
  long local_28;
  
                    /* Unresolved local var: Transform * bgTr@[???]
                       Unresolved local var: Renderer * bgRend@[???]
                       Unresolved local var: Canvas * canvas@[???]
                       Unresolved local var: CanvasScaler * scaler@[???]
                       Unresolved local var: GameObject * titleObj@[???]
                       Unresolved local var: string version@[???]
                       Unresolved local var: string name@[???]
                       Unresolved local var: string titleStr@[???]
                       Unresolved local var: RectTransform * titleRect@[???]
                       Unresolved local var: int cat@[???]
                       Unresolved local var: value_type * all@[???]
                       Unresolved local var: size_t total@[???]
                       Unresolved local var: size_t perPage@[???]
                       Unresolved local var: size_t start@[???]
                       Unresolved local var: size_t end@[DW_OP_breg31(sp): +1000]
                       Unresolved local var: vector<ButtonInfo,_std::allocator<ButtonInfo>_>
                       active@[???] */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pGVar5 = GameObject::CreatePrimitive(Cube);
  puVar2 = orig_menu;
  *(GameObject **)orig_menu = pGVar5;
  pGVar5 = *(GameObject **)puVar2;
  pMVar6 = Rigidbody::GetType();
  pOVar7 = (Object *)GameObject::GetComponent(pGVar5,pMVar6);
  GameObject::Destroy(pOVar7);
  pGVar5 = *(GameObject **)puVar2;
  pMVar6 = BoxCollider::GetType();
  pOVar7 = (Object *)GameObject::GetComponent(pGVar5,pMVar6);
  GameObject::Destroy(pOVar7);
  pGVar5 = *(GameObject **)puVar2;
  pMVar6 = Renderer::GetType();
  pOVar7 = (Object *)GameObject::GetComponent(pGVar5,pMVar6);
  GameObject::Destroy(pOVar7);
  pTVar8 = GameObject::GetTransform(*(GameObject **)puVar2);
  BNM::Structures::Unity::Vector3::Vector3(&local_34,0.1,0.3,0.3825);
  scale.field_0._8_4_ = (uint32_t)in_x2;
  scale.field_0.data[0] = (float)(int)extraout_x1;
  scale.field_0.data[1] = (float)(int)((ulong)extraout_x1 >> 0x20);
  Transform::SetLocalScale(pTVar8,scale);
  pGVar5 = GameObject::CreatePrimitive(Cube);
  puVar3 = orig_menuBackground;
  *(GameObject **)orig_menuBackground = pGVar5;
  pGVar5 = *(GameObject **)puVar3;
  pMVar6 = Rigidbody::GetType();
  pOVar7 = (Object *)GameObject::GetComponent(pGVar5,pMVar6);
  GameObject::Destroy(pOVar7);
  pGVar5 = *(GameObject **)puVar3;
  pMVar6 = BoxCollider::GetType();
  pOVar7 = (Object *)GameObject::GetComponent(pGVar5,pMVar6);
  GameObject::Destroy(pOVar7);
  pTVar8 = GameObject::GetTransform(*(GameObject **)puVar3);
  pTVar9 = GameObject::GetTransform(*(GameObject **)puVar2);
  Transform::SetParent(pTVar8,pTVar9);
  uStack_48 = *(uint64_t *)(orig_identity + 8);
  local_50 = *(uint64_t *)orig_identity;
  QVar19.field_0.data[2] = (float)(int)in_x2;
  QVar19.field_0.data[3] = (float)(int)((ulong)in_x2 >> 0x20);
  QVar19.field_0.data[0] = (float)(int)extraout_x1_00;
  QVar19.field_0.data[1] = (float)(int)((ulong)extraout_x1_00 >> 0x20);
  Transform::SetRotation(pTVar8,QVar19);
  local_60 = *(uint64_t *)orig_menuSize;
  local_58 = *(uint32_t *)(orig_menuSize + 8);
  scale_00.field_0._8_4_ = (uint32_t)in_x2;
  scale_00.field_0.data[0] = (float)(int)extraout_x1_01;
  scale_00.field_0.data[1] = (float)(int)((ulong)extraout_x1_01 >> 0x20);
  Transform::SetLocalScale(pTVar8,scale_00);
  BNM::Structures::Unity::Vector3::Vector3(&local_6c,0.05,0.0,0.0);
  position.field_0._8_4_ = (uint32_t)in_x2;
  position.field_0.data[0] = (float)(int)extraout_x1_02;
  position.field_0.data[1] = (float)(int)((ulong)extraout_x1_02 >> 0x20);
  Transform::SetPosition(pTVar8,position);
  pGVar5 = *(GameObject **)puVar3;
  pMVar6 = Renderer::GetType();
  pRVar10 = (Renderer *)GameObject::GetComponent(pGVar5,pMVar6);
  fixShader(pRVar10);
  pMVar11 = Renderer::GetMaterial(pRVar10);
  uStack_78 = *(uint64_t *)(orig_backgroundColor + 8);
  local_80 = *(uint64_t *)orig_backgroundColor;
  color.field_0.data[2] = (float)(int)in_x2;
  color.field_0.data[3] = (float)(int)((ulong)in_x2 >> 0x20);
  color.field_0.data[0] = (float)(int)extraout_x1_03;
  color.field_0.data[1] = (float)(int)((ulong)extraout_x1_03 >> 0x20);
  Material::SetColor(pMVar11,color);
  CreateOutline(0.011,*(GameObject **)puVar3);
  local_88 = GameObject::GetClass();
  pIVar12 = BNM::Class::CreateNewObjectParameters<>(&local_88);
  puVar3 = orig_canvasObject;
  *(Il2CppObject **)orig_canvasObject = pIVar12;
  pTVar8 = GameObject::GetTransform(*(GameObject **)puVar3);
  pTVar9 = GameObject::GetTransform(*(GameObject **)puVar2);
  Transform::SetParent(pTVar8,pTVar9);
  pGVar5 = *(GameObject **)puVar3;
  pMVar6 = Canvas::GetType();
  this = (Canvas *)GameObject::AddComponent(pGVar5,pMVar6);
  pGVar5 = *(GameObject **)puVar3;
  pMVar6 = CanvasScaler::GetType();
  pCVar13 = GameObject::AddComponent(pGVar5,pMVar6);
  pGVar5 = *(GameObject **)puVar3;
  pMVar6 = GraphicRaycaster::GetType();
  GameObject::AddComponent(pGVar5,pMVar6);
  Canvas::SetRenderMode(this,WorldSpace);
  CanvasScaler::SetDynamicPixelsPerUnit((CanvasScaler *)pCVar13,5000.0);
  local_90 = GameObject::GetClass();
  pIVar12 = BNM::Class::CreateNewObjectParameters<>(&local_90);
  pTVar8 = GameObject::GetTransform((GameObject *)pIVar12);
  pTVar9 = GameObject::GetTransform(*(GameObject **)puVar3);
  Transform::SetParent(pTVar8,pTVar9);
  pMVar6 = Text::GetType();
  pCVar13 = GameObject::AddComponent((GameObject *)pIVar12,pMVar6);
  puVar2 = orig_titleText;
  *(Component **)orig_titleText = pCVar13;
  Text::SetFont(*(Text **)puVar2,*(Font **)orig_currentFont);
  std::std::string::
  basic_string<0>(&bStack_a8,"");
                    /* try { // try from 00b62bf4 to 00b62c03 has its CatchHandler @ 00b637b8 */
  std::std::string::
  basic_string<0>(&bStack_c0,"Acid.lol");
                    /* try { // try from 00b62c08 to 00b62c13 has its CatchHandler @ 00b637cc */
  std::std::string::
  basic_string(abStack_d8,(basic_string *)&bStack_c0);
  pTVar14 = *(Text **)orig_titleText;
                    /* try { // try from 00b62c28 to 00b62c33 has its CatchHandler @ 00b637e0 */
  std::std::string::
  basic_string((std::string *)
               &sStack_f0,(basic_string *)abStack_d8);
                    /* try { // try from 00b62c38 to 00b62c43 has its CatchHandler @ 00b637f4 */
  Text::SetText(pTVar14,&sStack_f0);
  std::std::string::
  ~basic_string((std::string *)
                &sStack_f0);
                    /* try { // try from 00b62c5c to 00b62fa7 has its CatchHandler @ 00b637e0 */
  Text::SetFontSize(*(Text **)orig_titleText,1);
  this_01 = *(Graphic **)orig_titleText;
  pvVar15 = std::
            vector<BNM::Structures::Unity::Color,_std::allocator<BNM::Structures::Unity::Color>_>
            ::operator[]((vector<BNM::Structures::Unity::Color,_std::allocator<BNM::Structures::Unity::Color>_>
                          *)orig_textColors,0);
  uStack_f8._0_4_ = *(float *)((long)&(pvVar15->field_0).field_0 + 8);
  uStack_f8._4_4_ = *(float *)((long)&(pvVar15->field_0).field_0 + 0xc);
  local_100 = *(uint64_t *)(pvVar15->field_0).data;
  color_00.field_0.data[2] = (float)(int)in_x2;
  color_00.field_0.data[3] = (float)(int)((ulong)in_x2 >> 0x20);
  color_00.field_0.data[0] = (float)(int)extraout_x1_04;
  color_00.field_0.data[1] = (float)(int)((ulong)extraout_x1_04 >> 0x20);
  Graphic::SetColor(this_01,color_00);
  Text::SetSupportRichText(*(Text **)orig_titleText,true);
  Text::SetFontStyle(*(Text **)orig_titleText,Bold);
  Text::SetAlignment(*(Text **)orig_titleText,MiddleCenter);
  Text::SetTextResizeForBestFit(*(Text **)orig_titleText,true);
  Text::SetResizeTextMinSize(*(Text **)orig_titleText,0);
  pCVar13 = *(Component **)orig_titleText;
  pMVar6 = RectTransform::GetType();
  pTVar8 = (Transform *)Component::GetComponent(pCVar13,pMVar6);
  BNM::Structures::Unity::Vector3::Vector3(&local_10c,0.0,0.0,0.0);
  position_00.field_0._8_4_ = (uint32_t)in_x2;
  position_00.field_0.data[0] = (float)(int)extraout_x1_05;
  position_00.field_0.data[1] = (float)(int)((ulong)extraout_x1_05 >> 0x20);
  Transform::SetLocalPosition(pTVar8,position_00);
  BNM::Structures::Unity::Vector2::Vector2(&local_114,0.246,0.05);
  RectTransform::SetSizeDelta((RectTransform *)pTVar8,sizeDelta);
  BNM::Structures::Unity::Vector3::Vector3(&local_120,0.06,0.0,0.16);
  position_01.field_0._8_4_ = (uint32_t)in_x2;
  position_01.field_0.data[0] = (float)(int)extraout_x1_06;
  position_01.field_0.data[1] = (float)(int)((ulong)extraout_x1_06 >> 0x20);
  Transform::SetPosition(pTVar8,position_01);
  BNM::Structures::Unity::Vector3::Vector3(&local_12c,180.0,90.0,90.0);
  rotation_05.field_0._8_4_ = (uint32_t)extraout_x1_07;
  rotation_05.field_0.data[0] = (float)(int)extraout_x0;
  rotation_05.field_0.data[1] = (float)(int)((ulong)extraout_x0 >> 0x20);
  QVar19 = BNM::Structures::Unity::Quaternion::FromEuler(rotation_05);
  rotation.field_0._0_8_ = QVar19.field_0._8_8_;
  rotation.field_0.data[2] = (float)(int)in_x2;
  rotation.field_0.data[3] = (float)(int)((ulong)in_x2 >> 0x20);
  Transform::SetRotation(pTVar8,rotation);
                    /* Unresolved local var: GameObject * infoObj@[???]
                       Unresolved local var: Text * infoText@[???]
                       Unresolved local var: RectTransform * infoRect@[???] */
  local_138 = GameObject::GetClass();
  pIVar12 = BNM::Class::CreateNewObjectParameters<>(&local_138);
  pTVar8 = GameObject::GetTransform((GameObject *)pIVar12);
  pTVar9 = GameObject::GetTransform(*(GameObject **)orig_canvasObject);
  Transform::SetParent(pTVar8,pTVar9);
  pMVar6 = Text::GetType();
  pTVar14 = (Text *)GameObject::AddComponent((GameObject *)pIVar12,pMVar6);
  Text::SetFont(pTVar14,*(Font **)orig_currentFont);
  std::std::string::
  basic_string<0>(&bStack_150,"");
                    /* try { // try from 00b62fac to 00b62fb7 has its CatchHandler @ 00b63810 */
  Text::SetText(pTVar14,&bStack_150);
  std::std::string::
  ~basic_string((std::string *)
                &bStack_150);
                    /* try { // try from 00b62fcc to 00b6357b has its CatchHandler @ 00b637e0 */
  Text::SetFontSize(pTVar14,1);
  pvVar15 = std::
            vector<BNM::Structures::Unity::Color,_std::allocator<BNM::Structures::Unity::Color>_>
            ::operator[]((vector<BNM::Structures::Unity::Color,_std::allocator<BNM::Structures::Unity::Color>_>
                          *)orig_textColors,0);
  uStack_158._0_4_ = *(float *)((long)&(pvVar15->field_0).field_0 + 8);
  uStack_158._4_4_ = *(float *)((long)&(pvVar15->field_0).field_0 + 0xc);
  local_160 = *(uint64_t *)(pvVar15->field_0).data;
  color_01.field_0.data[2] = (float)(int)in_x2;
  color_01.field_0.data[3] = (float)(int)((ulong)in_x2 >> 0x20);
  color_01.field_0.data[0] = (float)(int)extraout_x1_08;
  color_01.field_0.data[1] = (float)(int)((ulong)extraout_x1_08 >> 0x20);
  Graphic::SetColor((Graphic *)pTVar14,color_01);
  Text::SetSupportRichText(pTVar14,true);
  Text::SetFontStyle(pTVar14,Bold);
  Text::SetAlignment(pTVar14,MiddleCenter);
  Text::SetTextResizeForBestFit(pTVar14,true);
  Text::SetResizeTextMinSize(pTVar14,0);
  pMVar6 = RectTransform::GetType();
  pTVar8 = (Transform *)Component::GetComponent((Component *)pTVar14,pMVar6);
  BNM::Structures::Unity::Vector3::Vector3(&local_16c,0.0,0.0,0.0);
  position_02.field_0._8_4_ = (uint32_t)in_x2;
  position_02.field_0.data[0] = (float)(int)extraout_x1_09;
  position_02.field_0.data[1] = (float)(int)((ulong)extraout_x1_09 >> 0x20);
  Transform::SetLocalPosition(pTVar8,position_02);
  BNM::Structures::Unity::Vector2::Vector2(&local_174,0.375,0.375);
  RectTransform::SetSizeDelta((RectTransform *)pTVar8,sizeDelta_00);
  BNM::Structures::Unity::Vector3::Vector3(&local_180,0.04,0.0,0.0);
  position_03.field_0._8_4_ = (uint32_t)in_x2;
  position_03.field_0.data[0] = (float)(int)extraout_x1_10;
  position_03.field_0.data[1] = (float)(int)((ulong)extraout_x1_10 >> 0x20);
  Transform::SetPosition(pTVar8,position_03);
  BNM::Structures::Unity::Vector3::Vector3(&local_18c,180.0,90.0,-90.0);
  rotation_06.field_0._8_4_ = (uint32_t)extraout_x1_11;
  rotation_06.field_0.data[0] = (float)(int)extraout_x0_00;
  rotation_06.field_0.data[1] = (float)(int)((ulong)extraout_x0_00 >> 0x20);
  QVar19 = BNM::Structures::Unity::Quaternion::FromEuler(rotation_06);
  rotation_00.field_0._0_8_ = QVar19.field_0._8_8_;
  rotation_00.field_0.data[2] = (float)(int)in_x2;
  rotation_00.field_0.data[3] = (float)(int)((ulong)in_x2 >> 0x20);
  Transform::SetRotation(pTVar8,rotation_00);
  if ((*orig_homeButton & 1) != 0) {
                    /* Unresolved local var: GameObject * gbObj@[???]
                       Unresolved local var: Transform * gbTr@[???]
                       Unresolved local var: Renderer * gbRend@[???]
                       Unresolved local var: ButtonCollider * gbNbc@[???]
                       Unresolved local var: GameObject * gbTextObj@[???]
                       Unresolved local var: Text * gbText@[???]
                       Unresolved local var: RectTransform * gbRect@[???] */
    pGVar5 = GameObject::CreatePrimitive(Cube);
    pMVar6 = Rigidbody::GetType();
    pOVar7 = (Object *)GameObject::GetComponent(pGVar5,pMVar6);
    GameObject::Destroy(pOVar7);
    pMVar6 = BoxCollider::GetType();
    pCVar16 = (Collider *)GameObject::GetComponent(pGVar5,pMVar6);
    Collider::SetIsTrigger(pCVar16,true);
    pTVar8 = GameObject::GetTransform(pGVar5);
    pTVar9 = GameObject::GetTransform(*(GameObject **)orig_menu);
    Transform::SetParent(pTVar8,pTVar9);
    uStack_198 = *(uint64_t *)(orig_identity + 8);
    local_1a0 = *(uint64_t *)orig_identity;
    rotation_01.field_0.data[2] = (float)(int)in_x2;
    rotation_01.field_0.data[3] = (float)(int)((ulong)in_x2 >> 0x20);
    rotation_01.field_0.data[0] = (float)(int)extraout_x1_12;
    rotation_01.field_0.data[1] = (float)(int)((ulong)extraout_x1_12 >> 0x20);
    Transform::SetLocalRotation(pTVar8,rotation_01);
    BNM::Structures::Unity::Vector3::Vector3(&local_1ac,0.09,0.08,0.08);
    scale_01.field_0._8_4_ = (uint32_t)in_x2;
    scale_01.field_0.data[0] = (float)(int)extraout_x1_13;
    scale_01.field_0.data[1] = (float)(int)((ulong)extraout_x1_13 >> 0x20);
    Transform::SetLocalScale(pTVar8,scale_01);
    BNM::Structures::Unity::Vector3::Vector3(&local_1b8,0.56,-0.6,-0.57);
    position_04.field_0._8_4_ = (uint32_t)in_x2;
    position_04.field_0.data[0] = (float)(int)extraout_x1_14;
    position_04.field_0.data[1] = (float)(int)((ulong)extraout_x1_14 >> 0x20);
    Transform::SetLocalPosition(pTVar8,position_04);
    CreateOutline(0.011,pGVar5);
    pMVar6 = Renderer::GetType();
    pRVar10 = (Renderer *)GameObject::GetComponent(pGVar5,pMVar6);
    fixShader(pRVar10);
    pMVar11 = Renderer::GetMaterial(pRVar10);
    uStack_1c8 = *(uint64_t *)(orig_backgroundColor + 8);
    local_1d0 = *(uint64_t *)orig_backgroundColor;
    color_02.field_0.data[2] = (float)(int)in_x2;
    color_02.field_0.data[3] = (float)(int)((ulong)in_x2 >> 0x20);
    color_02.field_0.data[0] = (float)(int)extraout_x1_15;
    color_02.field_0.data[1] = (float)(int)((ulong)extraout_x1_15 >> 0x20);
    Material::SetColor(pMVar11,color_02);
    pCVar13 = GameObject::AddComponent(pGVar5,*(MonoType **)(orig_BNMCustomClass + 0x88));
    std::std::string::
    operator=((std::string *)
              &pCVar13[1].super_NamedObject.super_Object.super_Il2CppObject.monitor,
              (value_type *)"goback");
    local_1d8 = GameObject::GetClass();
    pIVar12 = BNM::Class::CreateNewObjectParameters<>(&local_1d8);
    pTVar8 = GameObject::GetTransform((GameObject *)pIVar12);
    pTVar9 = GameObject::GetTransform(*(GameObject **)orig_canvasObject);
    Transform::SetParent(pTVar8,pTVar9);
    pMVar6 = Text::GetType();
    pTVar14 = (Text *)GameObject::AddComponent((GameObject *)pIVar12,pMVar6);
    std::std::string::
    basic_string<0>(&bStack_1f0,"<");
                    /* try { // try from 00b63580 to 00b6358b has its CatchHandler @ 00b6382c */
    Text::SetText(pTVar14,&bStack_1f0);
    std::std::string::
    ~basic_string((std::string *)
                  &bStack_1f0);
                    /* try { // try from 00b635ac to 00b63e1f has its CatchHandler @ 00b637e0 */
    Text::SetFont(pTVar14,*(Font **)orig_currentFont);
    Text::SetFontSize(pTVar14,1);
    pvVar15 = std::
              vector<BNM::Structures::Unity::Color,_std::allocator<BNM::Structures::Unity::Color>_>
              ::operator[]((vector<BNM::Structures::Unity::Color,_std::allocator<BNM::Structures::Unity::Color>_>
                            *)orig_textColors,0);
    uStack_1f8._0_4_ = *(float *)((long)&(pvVar15->field_0).field_0 + 8);
    uStack_1f8._4_4_ = *(float *)((long)&(pvVar15->field_0).field_0 + 0xc);
    local_200 = *(uint64_t *)(pvVar15->field_0).data;
    color_03.field_0.data[2] = (float)(int)in_x2;
    color_03.field_0.data[3] = (float)(int)((ulong)in_x2 >> 0x20);
    color_03.field_0.data[0] = (float)(int)extraout_x1_16;
    color_03.field_0.data[1] = (float)(int)((ulong)extraout_x1_16 >> 0x20);
    Graphic::SetColor((Graphic *)pTVar14,color_03);
    Text::SetAlignment(pTVar14,MiddleCenter);
    Text::SetTextResizeForBestFit(pTVar14,true);
    Text::SetResizeTextMinSize(pTVar14,0);
    pMVar6 = RectTransform::GetType();
    pTVar8 = (Transform *)Component::GetComponent((Component *)pTVar14,pMVar6);
    BNM::Structures::Unity::Vector3::Vector3(&local_20c,0.064,-0.18181819,-0.21923077);
    position_05.field_0._8_4_ = (uint32_t)in_x2;
    position_05.field_0.data[0] = (float)(int)extraout_x1_17;
    position_05.field_0.data[1] = (float)(int)((ulong)extraout_x1_17 >> 0x20);
    Transform::SetLocalPosition(pTVar8,position_05);
    BNM::Structures::Unity::Vector2::Vector2(&local_214,0.2,0.03);
    RectTransform::SetSizeDelta((RectTransform *)pTVar8,sizeDelta_01);
    BNM::Structures::Unity::Vector3::Vector3(&local_220,180.0,90.0,90.0);
    rotation_07.field_0._8_4_ = (uint32_t)extraout_x1_18;
    rotation_07.field_0.data[0] = (float)(int)extraout_x0_01;
    rotation_07.field_0.data[1] = (float)(int)((ulong)extraout_x0_01 >> 0x20);
    QVar19 = BNM::Structures::Unity::Quaternion::FromEuler(rotation_07);
    rotation_02.field_0._0_8_ = QVar19.field_0._8_8_;
    rotation_02.field_0.data[2] = (float)(int)in_x2;
    rotation_02.field_0.data[3] = (float)(int)((ulong)in_x2 >> 0x20);
    Transform::SetRotation(pTVar8,rotation_02);
  }
                    /* Unresolved local var: GameObject * prevObj@[???]
                       Unresolved local var: Transform * prevTr@[???]
                       Unresolved local var: Renderer * prevRend@[???]
                       Unresolved local var: ButtonCollider * prevNbc@[???] */
  pGVar5 = GameObject::CreatePrimitive(Cube);
  pMVar6 = Rigidbody::GetType();
  pOVar7 = (Object *)GameObject::GetComponent(pGVar5,pMVar6);
  GameObject::Destroy(pOVar7);
  pMVar6 = BoxCollider::GetType();
  pCVar16 = (Collider *)GameObject::GetComponent(pGVar5,pMVar6);
  Collider::SetIsTrigger(pCVar16,true);
  pTVar8 = GameObject::GetTransform(pGVar5);
  pTVar9 = GameObject::GetTransform(*(GameObject **)orig_menu);
  Transform::SetParent(pTVar8,pTVar9);
  uStack_228 = *(uint64_t *)(orig_identity + 8);
  local_230 = *(uint64_t *)orig_identity;
  rotation_03.field_0.data[2] = (float)(int)in_x2;
  rotation_03.field_0.data[3] = (float)(int)((ulong)in_x2 >> 0x20);
  rotation_03.field_0.data[0] = (float)(int)extraout_x1_19;
  rotation_03.field_0.data[1] = (float)(int)((ulong)extraout_x1_19 >> 0x20);
  Transform::SetLocalRotation(pTVar8,rotation_03);
  BNM::Structures::Unity::Vector3::Vector3(&local_23c,0.075,0.123,0.6);
  scale_02.field_0._8_4_ = (uint32_t)in_x2;
  scale_02.field_0.data[0] = (float)(int)extraout_x1_20;
  scale_02.field_0.data[1] = (float)(int)((ulong)extraout_x1_20 >> 0x20);
  Transform::SetLocalScale(pTVar8,scale_02);
  BNM::Structures::Unity::Vector3::Vector3(&local_248,0.535,0.6,0.0);
  position_06.field_0._8_4_ = (uint32_t)in_x2;
  position_06.field_0.data[0] = (float)(int)extraout_x1_21;
  position_06.field_0.data[1] = (float)(int)((ulong)extraout_x1_21 >> 0x20);
  Transform::SetLocalPosition(pTVar8,position_06);
  CreateOutline(0.011,pGVar5);
  pMVar6 = Renderer::GetType();
  pRVar10 = (Renderer *)GameObject::GetComponent(pGVar5,pMVar6);
  fixShader(pRVar10);
  pMVar11 = Renderer::GetMaterial(pRVar10);
  uStack_258 = *(uint64_t *)(orig_backgroundColor + 8);
  local_260 = *(uint64_t *)orig_backgroundColor;
  color_04.field_0.data[2] = (float)(int)in_x2;
  color_04.field_0.data[3] = (float)(int)((ulong)in_x2 >> 0x20);
  color_04.field_0.data[0] = (float)(int)extraout_x1_22;
  color_04.field_0.data[1] = (float)(int)((ulong)extraout_x1_22 >> 0x20);
  Material::SetColor(pMVar11,color_04);
  pCVar13 = GameObject::AddComponent(pGVar5,*(MonoType **)(orig_BNMCustomClass + 0x88));
  std::std::string::
  operator=((std::string *)
            &pCVar13[1].super_NamedObject.super_Object.super_Il2CppObject.monitor,
            (value_type *)"PreviousPage");
                    /* Unresolved local var: GameObject * nextObj@[???]
                       Unresolved local var: Transform * nextTr@[???]
                       Unresolved local var: Renderer * nextRend@[???]
                       Unresolved local var: ButtonCollider * nextNbc@[???] */
  pGVar5 = GameObject::CreatePrimitive(Cube);
  pMVar6 = Rigidbody::GetType();
  pOVar7 = (Object *)GameObject::GetComponent(pGVar5,pMVar6);
  GameObject::Destroy(pOVar7);
  pMVar6 = BoxCollider::GetType();
  pCVar16 = (Collider *)GameObject::GetComponent(pGVar5,pMVar6);
  Collider::SetIsTrigger(pCVar16,true);
  pTVar8 = GameObject::GetTransform(pGVar5);
  pTVar9 = GameObject::GetTransform(*(GameObject **)orig_menu);
  Transform::SetParent(pTVar8,pTVar9);
  uStack_268 = *(uint64_t *)(orig_identity + 8);
  local_270 = *(uint64_t *)orig_identity;
  rotation_04.field_0.data[2] = (float)(int)in_x2;
  rotation_04.field_0.data[3] = (float)(int)((ulong)in_x2 >> 0x20);
  rotation_04.field_0.data[0] = (float)(int)extraout_x1_23;
  rotation_04.field_0.data[1] = (float)(int)((ulong)extraout_x1_23 >> 0x20);
  Transform::SetLocalRotation(pTVar8,rotation_04);
  BNM::Structures::Unity::Vector3::Vector3(&local_27c,0.075,0.123,0.6);
  scale_03.field_0._8_4_ = (uint32_t)in_x2;
  scale_03.field_0.data[0] = (float)(int)extraout_x1_24;
  scale_03.field_0.data[1] = (float)(int)((ulong)extraout_x1_24 >> 0x20);
  Transform::SetLocalScale(pTVar8,scale_03);
  BNM::Structures::Unity::Vector3::Vector3(&local_288,0.535,-0.6,0.0);
  position_07.field_0._8_4_ = (uint32_t)in_x2;
  position_07.field_0.data[0] = (float)(int)extraout_x1_25;
  position_07.field_0.data[1] = (float)(int)((ulong)extraout_x1_25 >> 0x20);
  Transform::SetLocalPosition(pTVar8,position_07);
  CreateOutline(0.011,pGVar5);
  pMVar6 = Renderer::GetType();
  pRVar10 = (Renderer *)GameObject::GetComponent(pGVar5,pMVar6);
  fixShader(pRVar10);
  pMVar11 = Renderer::GetMaterial(pRVar10);
  uStack_298 = *(uint64_t *)(orig_backgroundColor + 8);
  local_2a0 = *(uint64_t *)orig_backgroundColor;
  color_05.field_0.data[2] = (float)(int)in_x2;
  color_05.field_0.data[3] = (float)(int)((ulong)in_x2 >> 0x20);
  color_05.field_0.data[0] = (float)(int)extraout_x1_26;
  color_05.field_0.data[1] = (float)(int)((ulong)extraout_x1_26 >> 0x20);
  Material::SetColor(pMVar11,color_05);
  pCVar13 = GameObject::AddComponent(pGVar5,*(MonoType **)(orig_BNMCustomClass + 0x88));
  std::std::string::
  operator=((std::string *)
            &pCVar13[1].super_NamedObject.super_Object.super_Il2CppObject.monitor,
            (value_type *)"NextPage");
  iVar4 = Settings::currentCategory();
  this_00 = std::
            vector<std::vector<ButtonInfo,_std::allocator<ButtonInfo>_>,_std::allocator<std::vector<ButtonInfo,_std::allocator<ButtonInfo>_>_>_>
            ::operator[]((vector<std::vector<ButtonInfo,_std::allocator<ButtonInfo>_>,_std::allocator<std::vector<ButtonInfo,_std::allocator<ButtonInfo>_>_>_>
                          *)orig_buttons,(long)iVar4);
  local_2a8 = std::vector<ButtonInfo,_std::allocator<ButtonInfo>_>::size(this_00);
  iVar4 = *(int *)orig_buttonsPerPage;
  local_2b0 = (unsigned_long)(*(int *)orig_pageNumber * iVar4);
  puVar17 = std::min<unsigned_long>(&local_2b0,&local_2a8);
  __n = *puVar17;
  local_2b8 = __n + (long)iVar4;
  puVar17 = std::min<unsigned_long>(&local_2b8,&local_2a8);
  __n_00 = *puVar17;
  local_2d8 = std::vector<ButtonInfo,_std::allocator<ButtonInfo>_>::begin(this_00);
  __first = std::__wrap_iter<ButtonInfo_*>::operator+(&local_2d8,__n);
  local_2e0 = std::vector<ButtonInfo,_std::allocator<ButtonInfo>_>::begin(this_00);
  __last = std::__wrap_iter<ButtonInfo_*>::operator+(&local_2e0,__n_00);
  std::vector<ButtonInfo,_std::allocator<ButtonInfo>_>::
  vector<std::__wrap_iter<ButtonInfo_*>,_0>(&vStack_2d0,__first,__last);
                    /* Unresolved local var: int i@[DW_OP_breg31(sp): +980] */
  local_41c = 0;
  while( true ) {
    sVar18 = std::vector<ButtonInfo,_std::allocator<ButtonInfo>_>::size(&vStack_2d0)
    ;
    if ((int)sVar18 <= local_41c) break;
                    /* Unresolved local var: bool isSel@[DW_OP_breg31(sp): +979] */
    isSelected = false;
    if ((*orig_dockMenu & 1) != 0) {
      isSelected = local_41c == *(int *)orig_selectedDockIndex;
    }
    info = std::vector<ButtonInfo,_std::allocator<ButtonInfo>_>::operator[]
                     (&vStack_2d0,(long)local_41c);
                    /* try { // try from 00b63ecc to 00b63ed3 has its CatchHandler @ 00b63eec */
    CreateButton((float)local_41c * 0.121,info,isSelected);
    local_41c = local_41c + 1;
  }
  std::vector<ButtonInfo,_std::allocator<ButtonInfo>_>::~vector(&vStack_2d0);
  std::std::string::
  ~basic_string(abStack_d8);
  std::std::string::
  ~basic_string((std::string *)
                &bStack_c0);
  std::std::string::
  ~basic_string((std::string *)
                &bStack_a8);
  lVar1 = tpidr_el0;
  lVar1 = *(long *)(lVar1 + 0x28) - local_28;
  if (lVar1 != 0) {
    __stack_chk_fail(lVar1);
  }
}

// ---- line 400  addr 0xa62044 ----
// RecreateMenu()
// mangled: _Z12RecreateMenuv
// addr 0xa62044  RecreateMenu
void RecreateMenu(void)

{
  uint8_t *puVar1;
  
  puVar1 = orig_menu;
  if (*(long *)orig_menu != 0) {
    GameObject::Destroy(*(Object **)orig_menu);
    *(uint64_t *)puVar1 = 0;
  }
  CreateMenu();
  RecenterMenu((*orig_rightHanded & 1) != 0);
}

// ---- line 409  addr 0xa63fa4 ----
// RecenterMenu(bool)
// mangled: _Z12RecenterMenub
// addr 0xa63fa4  RecenterMenu

void RecenterMenu(bool isRightHanded)

{
  long lVar1;
  Transform *this;
  GameObject *pGVar2;
  Transform *pTVar3;
  uint32_t extraout_var;
  uint32_t extraout_var_00;
  uint32_t extraout_var_01;
  float s;
  float in_s2;
  Vector3 position;
  Vector3 position_00;
  Quaternion rotation;
  Quaternion rotation_00;
  Vector3 VVar4;
  Quaternion QVar5;
  Vector3 rhs;
  Quaternion rhs_00;
  std::string bStack_d0;
  std::string bStack_b8;
  float local_98;
  float local_8c;
  std::string bStack_88;
  std::string abStack_70 [2];
  std::string bStack_40;
  long local_28;
  
                    /* Unresolved local var: Transform * menuTr@[???] */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(long *)orig_menu != 0) {
    this = GameObject::GetTransform(*(GameObject **)orig_menu);
    if ((*orig_dockMenu & 1) == 0) {
      if (isRightHanded) {
        std::
        std::string::
        basic_string<0>(abStack_70,"RightHand Controller");
                    /* try { // try from 00b641f0 to 00b641f3 has its CatchHandler @ 00b64308 */
        pGVar2 = GameObject::Find(abStack_70);
        std::std::string
        ::~basic_string((std::string
                         *)abStack_70);
        if (pGVar2 != (GameObject *)0x0) {
                    /* Unresolved local var: Transform * rTr@[DW_OP_breg31(sp): +224]
                       Unresolved local var: Vector3 e@[???] */
          std::
          std::string::
          basic_string<0>(&bStack_88,"RightHand Controller");
                    /* try { // try from 00b64228 to 00b6423b has its CatchHandler @ 00b64324 */
          pGVar2 = GameObject::Find(&bStack_88);
          pTVar3 = GameObject::GetTransform(pGVar2);
          std::
          std::string::
          ~basic_string((std::string
                         *)&bStack_88);
          VVar4 = Transform::GetPosition(pTVar3);
          position_00.field_0._0_4_ = VVar4.field_0._8_4_;
          position_00.field_0.field_0.y = (float)extraout_var_00;
          position_00.field_0._8_4_ = (uint32_t)in_x2;
          Transform::SetPosition(this,position_00);
          VVar4 = Transform::GetEulerAngles(pTVar3);
          local_98 = in_s2 + 180.0;
          local_8c = local_98;
          QVar5 = BNM::Structures::Unity::Quaternion::FromEuler(VVar4);
          rotation_00.field_0._0_8_ = QVar5.field_0._8_8_;
          rotation_00.field_0.data[2] = (float)(int)in_x2;
          rotation_00.field_0.data[3] = (float)(int)((ulong)in_x2 >> 0x20);
          Transform::SetRotation(this,rotation_00);
        }
      }
      else {
        std::
        std::string::
        basic_string<0>(&bStack_b8,"LeftHand Controller");
                    /* try { // try from 00b6435c to 00b6435f has its CatchHandler @ 00b64434 */
        pGVar2 = GameObject::Find(&bStack_b8);
        std::std::string
        ::~basic_string((std::string
                         *)&bStack_b8);
        if (pGVar2 != (GameObject *)0x0) {
                    /* Unresolved local var: Transform * lTr@[DW_OP_breg31(sp): +184] */
          std::
          std::string::
          basic_string<0>(&bStack_d0,"LeftHand Controller");
                    /* try { // try from 00b64394 to 00b643a7 has its CatchHandler @ 00b64450 */
          pGVar2 = GameObject::Find(&bStack_d0);
          pTVar3 = GameObject::GetTransform(pGVar2);
          std::
          std::string::
          ~basic_string((std::string
                         *)&bStack_d0);
          VVar4 = Transform::GetPosition(pTVar3);
          VVar4.field_0._0_4_ = VVar4.field_0._8_4_;
          VVar4.field_0.field_0.y = (float)extraout_var_01;
          VVar4.field_0._8_4_ = (uint32_t)in_x2;
          Transform::SetPosition(this,VVar4);
          QVar5 = Transform::GetRotation(pTVar3);
          QVar5.field_0._0_8_ = QVar5.field_0._8_8_;
          QVar5.field_0.data[2] = (float)(int)in_x2;
          QVar5.field_0.data[3] = (float)(int)((ulong)in_x2 >> 0x20);
          Transform::SetRotation(this,QVar5);
        }
      }
    }
    else {
                    /* Unresolved local var: GameObject * cam@[???] */
      std::std::string
      ::basic_string<0>(&bStack_40,"Main Camera");
                    /* try { // try from 00b64028 to 00b6402b has its CatchHandler @ 00b641ac */
      pGVar2 = GameObject::Find(&bStack_40);
      std::std::string::
      ~basic_string((std::string
                     *)&bStack_40);
      if (pGVar2 != (GameObject *)0x0) {
                    /* Unresolved local var: Transform * ct@[???]
                       Unresolved local var: Vector3 pos@[???] */
        pTVar3 = GameObject::GetTransform(pGVar2);
        Transform::GetPosition(pTVar3);
        VVar4 = Transform::GetForward(pTVar3);
        VVar4 = BNM::Structures::Unity::operator*(VVar4,s);
        rhs.field_0._8_4_ = (uint32_t)in_x3;
        rhs.field_0.data[0] = (float)(int)in_x2;
        rhs.field_0.data[1] = (float)(int)((ulong)in_x2 >> 0x20);
        VVar4 = BNM::Structures::Unity::operator+(VVar4,rhs);
        position.field_0._0_4_ = VVar4.field_0._8_4_;
        position.field_0.field_0.y = (float)extraout_var;
        position.field_0._8_4_ = (uint32_t)in_x2;
        Transform::SetPosition(this,position);
        Transform::GetRotation(pTVar3);
        QVar5 = BNM::Structures::Unity::Quaternion::FromEuler(-90.0,90.0,0.0,true);
        rhs_00.field_0.data[2] = (float)(int)in_x3;
        rhs_00.field_0.data[3] = (float)(int)((ulong)in_x3 >> 0x20);
        rhs_00.field_0.data[0] = (float)(int)in_x2;
        rhs_00.field_0.data[1] = (float)(int)((ulong)in_x2 >> 0x20);
        QVar5 = BNM::Structures::Unity::operator*(QVar5,rhs_00);
        rotation.field_0._0_8_ = QVar5.field_0._8_8_;
        rotation.field_0.data[2] = (float)(int)in_x2;
        rotation.field_0.data[3] = (float)(int)((ulong)in_x2 >> 0x20);
        Transform::SetRotation(this,rotation);
      }
    }
  }
  lVar1 = tpidr_el0;
  lVar1 = *(long *)(lVar1 + 0x28) - local_28;
  if (lVar1 != 0) {
    __stack_chk_fail(lVar1);
  }
}

// ---- line 439  addr 0xe11018 ----
// CreateReference(bool)
// mangled: _Z15CreateReferenceb
// addr 0xe11018  CreateReference

void CreateReference(bool isRightHanded)

{
  long lVar1;
  uint8_t *puVar2;
  GameObject *pGVar3;
  Transform *this;
  MonoType *pMVar4;
  Renderer *rend;
  Material *this_00;
  Component *pCVar5;
  uint64_t extraout_x1;
  uint64_t extraout_x1_00;
  uint64_t extraout_x1_01;
  ulong in_x2;
  Vector3 position;
  Vector3 scale;
  Color color;
  Transform *local_e8;
  Vector3 local_88;
  Vector3 local_7c;
  uint64_t local_70;
  uint64_t uStack_68;
  std::string bStack_58;
  std::string bStack_40;
  long local_28;
  
                    /* Unresolved local var: Transform * refTr@[???]
                       Unresolved local var: Renderer * refRend@[DW_OP_breg31(sp): +120] */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pGVar3 = GameObject::CreatePrimitive(Sphere);
  puVar2 = orig_reference;
  *(GameObject **)orig_reference = pGVar3;
  this = GameObject::GetTransform(*(GameObject **)puVar2);
  if (!isRightHanded) {
    std::std::string::
    basic_string<0>(&bStack_58,"RightHand Controller");
                    /* try { // try from 00f110e0 to 00f11117 has its CatchHandler @ 00f11288 */
    pGVar3 = GameObject::Find(&bStack_58);
    local_e8 = GameObject::GetTransform(pGVar3);
  }
  else {
    std::std::string::
    basic_string<0>(&bStack_40,"LeftHand Controller");
                    /* try { // try from 00f1109c to 00f110d3 has its CatchHandler @ 00f11278 */
    pGVar3 = GameObject::Find(&bStack_40);
    local_e8 = GameObject::GetTransform(pGVar3);
  }
  Transform::SetParent(this,local_e8);
  if (!isRightHanded) {
    std::std::string::
    ~basic_string((std::string *)
                  &bStack_58);
  }
  else {
    std::std::string::
    ~basic_string((std::string *)
                  &bStack_40);
  }
  puVar2 = orig_reference;
  pGVar3 = *(GameObject **)orig_reference;
  pMVar4 = Renderer::GetType();
  rend = (Renderer *)GameObject::GetComponent(pGVar3,pMVar4);
  fixShader(rend);
  this_00 = Renderer::GetMaterial(rend);
  uStack_68 = *(uint64_t *)(orig_backgroundColor + 8);
  local_70 = *(uint64_t *)orig_backgroundColor;
  color.field_0.data[2] = (float)(int)in_x2;
  color.field_0.data[3] = (float)(int)(in_x2 >> 0x20);
  color.field_0.data[0] = (float)(int)extraout_x1;
  color.field_0.data[1] = (float)(int)((ulong)extraout_x1 >> 0x20);
  Material::SetColor(this_00,color);
  BNM::Structures::Unity::Vector3::Vector3(&local_7c,0.0,-0.05,0.11);
  position.field_0._8_4_ = (uint32_t)in_x2;
  position.field_0.data[0] = (float)(int)extraout_x1_00;
  position.field_0.data[1] = (float)(int)((ulong)extraout_x1_00 >> 0x20);
  in_x2 = in_x2 & 0xffffffff;
  Transform::SetLocalPosition(this,position);
  BNM::Structures::Unity::Vector3::Vector3(&local_88,0.01,0.01,0.01);
  scale.field_0._8_4_ = (uint32_t)in_x2;
  scale.field_0.data[0] = (float)(int)extraout_x1_01;
  scale.field_0.data[1] = (float)(int)((ulong)extraout_x1_01 >> 0x20);
  Transform::SetLocalScale(this,scale);
  pGVar3 = *(GameObject **)puVar2;
  pMVar4 = SphereCollider::GetType();
  pCVar5 = GameObject::GetComponent(pGVar3,pMVar4);
  *(Component **)orig_buttonCollider = pCVar5;
  lVar1 = tpidr_el0;
  lVar1 = *(long *)(lVar1 + 0x28) - local_28;
  if (lVar1 != 0) {
    __stack_chk_fail(lVar1);
  }
}

// ---- line 454  addr 0xa61858 ----
// Toggle(BNM::Structures::Mono::String*)
// mangled: _Z6TogglePN3BNM10Structures4Mono6StringE
// addr 0xa61858  Toggle

void Toggle(String *text)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  reference this;
  size_type sVar5;
  reference this_00;
  basic_string *in_x2;
  ulong uVar6;
  int local_160;
  string sStack_f8;
  string sStack_e0;
  string sStack_c8;
  std::string bStack_b0;
  std::string bStack_98;
  std::string bStack_80;
  std::string bStack_68;
  iterator local_50;
  iterator local_48;
  string sStack_40;
  long local_28;
  
                    /* Unresolved local var: string buttonText@[???]
                       Unresolved local var: int cat@[DW_OP_breg31(sp): +124]
                       Unresolved local var: value_type * catBtns@[DW_OP_breg31(sp): +96]
                       Unresolved local var: size_t total@[DW_OP_breg31(sp): +88]
                       Unresolved local var: size_t perPage@[DW_OP_breg31(sp): +80]
                       Unresolved local var: int pages@[DW_OP_breg31(sp): +76] */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (text != (String *)0x0) {
    BNM::Structures::Mono::String::str(&sStack_40,text);
                    /* try { // try from 00b6189c to 00b61ae7 has its CatchHandler @ 00b61968 */
    iVar4 = Settings::currentCategory();
    this = std::
           vector<std::vector<ButtonInfo,_std::allocator<ButtonInfo>_>,_std::allocator<std::vector<ButtonInfo,_std::allocator<ButtonInfo>_>_>_>
           ::operator[]((vector<std::vector<ButtonInfo,_std::allocator<ButtonInfo>_>,_std::allocator<std::vector<ButtonInfo,_std::allocator<ButtonInfo>_>_>_>
                         *)orig_buttons,(long)iVar4);
    sVar5 = std::vector<ButtonInfo,_std::allocator<ButtonInfo>_>::size(this);
    uVar6 = (ulong)*(int *)orig_buttonsPerPage;
    if (uVar6 == 0) {
      local_160 = 0;
    }
    else {
      local_160 = 0;
      if (uVar6 != 0) {
        local_160 = (int)(((sVar5 + uVar6) - 1) / uVar6);
      }
    }
    bVar2 = std::
            operator==<char,_std::char_traits<char>,_std::allocator<char>_>
                      (&sStack_40,"PreviousPage");
    if (bVar2) {
      iVar4 = *(int *)orig_pageNumber;
      *(int *)orig_pageNumber = iVar4 + -1;
      if (iVar4 + -1 < 0) {
        *(int *)orig_pageNumber = local_160 + -1;
      }
      RecreateMenu();
    }
    else {
      bVar2 = std::
              operator==<char,_std::char_traits<char>,_std::allocator<char>_>
                        (&sStack_40,"NextPage");
      if (bVar2) {
        iVar4 = *(int *)orig_pageNumber;
        *(int *)orig_pageNumber = iVar4 + 1;
        if (local_160 + -1 < iVar4 + 1) {
          *(uint32_t *)orig_pageNumber = 0;
        }
        RecreateMenu();
      }
      else {
        bVar2 = std::
                operator==<char,_std::char_traits<char>,_std::allocator<char>_>
                          (&sStack_40,"DisconnectBTN");
        if (bVar2) {
          PhotonNetwork::Disconnect();
          RecreateMenu();
        }
        else {
          bVar2 = std::
                  operator==<char,_std::char_traits<char>,_std::allocator<char>_>
                            (&sStack_40,"goback");
          if (bVar2) {
            Settings::setCurrentCategory(0);
            *(uint32_t *)orig_pageNumber = 0;
            RecreateMenu();
          }
          else {
                    /* Unresolved local var: value_type * __range1@[DW_OP_breg31(sp): +64]
                       Unresolved local var: iterator __begin1@[???]
                       Unresolved local var: iterator __end1@[???] */
            local_48 = std::vector<ButtonInfo,_std::allocator<ButtonInfo>_>::begin
                                 (this);
            local_50 = std::vector<ButtonInfo,_std::allocator<ButtonInfo>_>::end
                                 (this);
            while (bVar2 = std::operator!=<ButtonInfo_*>(&local_48,&local_50), bVar2) {
                    /* Unresolved local var: ButtonInfo * btn@[DW_OP_breg31(sp): +56] */
              this_00 = std::__wrap_iter<ButtonInfo_*>::operator*(&local_48);
              if ((this_00->isValueButton & 1U) != 0) {
                std::
                operator+<char,_std::char_traits<char>,_std::allocator<char>_>
                          (&bStack_68,(void *)this_00,
                           (std::string
                            *)"-",(value_type *)in_x2);
                bVar3 = std::operator==<std::allocator<char>_>
                                  (&sStack_40,&bStack_68);
                bVar2 = true;
                if (!bVar3) {
                    /* try { // try from 00b61b0c to 00b61b1b has its CatchHandler @ 00b61b9c */
                  std::
                  operator+<char,_std::char_traits<char>,_std::allocator<char>_>
                            (&bStack_80,(void *)this_00,
                             (std::string
                              *)"Minus",(value_type *)in_x2);
                  bVar2 = std::operator==<std::allocator<char>_>
                                    (&sStack_40,&bStack_80);
                  std::
                  std::string::
                  ~basic_string((std::string
                                 *)&bStack_80);
                }
                std::
                std::string::
                ~basic_string((std::string
                               *)&bStack_68);
                if (bVar2 != false) {
                  bVar2 = std::function<void_()>::operator_bool(&this_00->onMinus);
                  if (bVar2) {
                    /* try { // try from 00b61b90 to 00b61be3 has its CatchHandler @ 00b61968 */
                    std::function<void_()>::operator()(&this_00->onMinus);
                  }
                  RecreateMenu();
                  break;
                }
                std::
                operator+<char,_std::char_traits<char>,_std::allocator<char>_>
                          (&bStack_98,(void *)this_00,
                           (std::string
                            *)"+",(value_type *)in_x2);
                bVar3 = std::operator==<std::allocator<char>_>
                                  (&sStack_40,&bStack_98);
                bVar2 = true;
                if (!bVar3) {
                    /* try { // try from 00b61c08 to 00b61c17 has its CatchHandler @ 00b61c98 */
                  std::
                  operator+<char,_std::char_traits<char>,_std::allocator<char>_>
                            (&bStack_b0,(void *)this_00,
                             (std::string
                              *)"Plus",(value_type *)in_x2);
                  bVar2 = std::operator==<std::allocator<char>_>
                                    (&sStack_40,&bStack_b0);
                  std::
                  std::string::
                  ~basic_string((std::string
                                 *)&bStack_b0);
                }
                std::
                std::string::
                ~basic_string((std::string
                               *)&bStack_98);
                if (bVar2 != false) {
                  bVar2 = std::function<void_()>::operator_bool(&this_00->onPlus);
                  if (bVar2) {
                    /* try { // try from 00b61c8c to 00b61d1b has its CatchHandler @ 00b61968 */
                    std::function<void_()>::operator()(&this_00->onPlus);
                  }
                  RecreateMenu();
                  break;
                }
              }
              bVar2 = std::operator==<std::allocator<char>_>
                                (&this_00->buttonText,&sStack_40);
              if (bVar2) {
                if ((this_00->isTogglable & 1U) == 0) {
                  bVar2 = std::
                          std::string
                          ::empty(&this_00->toolTip);
                  if (!bVar2) {
                    std::operator+
                              ((void *)"[<color=#7d2019>ENABLE</color>] ",
                               (char *)&this_00->toolTip,in_x2);
                    /* try { // try from 00b61d20 to 00b61d27 has its CatchHandler @ 00b61d38 */
                    NotiLib::SendNotification(&sStack_c8);
                    std::
                    std::string::
                    ~basic_string((std::string
                                   *)&sStack_c8);
                  }
                  bVar2 = std::function<void_()>::operator_bool(&this_00->method);
                  if (bVar2) {
                    /* try { // try from 00b61d6c to 00b61dcb has its CatchHandler @ 00b61968 */
                    std::function<void_()>::operator()(&this_00->method);
                  }
                }
                else {
                  this_00->enabled = (bool)((this_00->enabled ^ 0xffU) & 1);
                  if ((this_00->enabled & 1U) == 0) {
                    bVar2 = std::
                            std::string
                            ::empty(&this_00->toolTip);
                    if (!bVar2) {
                      std::operator+
                                ((void *)"[<color=#7d2019>DISABLE</color>] ",
                                 (char *)&this_00->toolTip,in_x2);
                    /* try { // try from 00b61e5c to 00b61e63 has its CatchHandler @ 00b61e74 */
                      NotiLib::SendNotification(&sStack_f8);
                      std::
                      std::string
                      ::~basic_string((std::string
                                       *)&sStack_f8);
                    }
                    bVar2 = std::function<void_()>::operator_bool(&this_00->disableMethod);
                    if (bVar2) {
                    /* try { // try from 00b61ea8 to 00b61ebf has its CatchHandler @ 00b61968 */
                      std::function<void_()>::operator()(&this_00->disableMethod);
                    }
                  }
                  else {
                    bVar2 = std::
                            std::string
                            ::empty(&this_00->toolTip);
                    if (!bVar2) {
                      std::operator+
                                ((void *)"[<color=#7d2019>ENABLE</color>] ",
                                 (char *)&this_00->toolTip,in_x2);
                    /* try { // try from 00b61dd0 to 00b61dd7 has its CatchHandler @ 00b61de8 */
                      NotiLib::SendNotification(&sStack_e0);
                      std::
                      std::string
                      ::~basic_string((std::string
                                       *)&sStack_e0);
                    }
                    bVar2 = std::function<void_()>::operator_bool(&this_00->enableMethod);
                    if (bVar2) {
                    /* try { // try from 00b61e1c to 00b61e57 has its CatchHandler @ 00b61968 */
                      std::function<void_()>::operator()(&this_00->enableMethod);
                    }
                  }
                }
                RecreateMenu();
                break;
              }
              std::__wrap_iter<ButtonInfo_*>::operator++(&local_48);
            }
          }
        }
      }
    }
    std::std::string::
    ~basic_string((std::string *)
                  &sStack_40);
  }
  lVar1 = tpidr_el0;
  lVar1 = *(long *)(lVar1 + 0x28) - local_28;
  if (lVar1 != 0) {
    __stack_chk_fail(lVar1);
  }
}
