#include "common.h"
#include "debug.h"

#include "Dogs/Landscape.h"
#include "Dogs/Levelres.h"
#include "Dogs/Objects.h"
#include "unk.h"

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E14F8);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E16B0);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E1850);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E18E0);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E1D30);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E2188);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E25C8);

#ifdef NON_MATCHING

Status Landscape_InternalInitialise(void) {
    return Status(0xFFFFFFFF, "c:/coding/dogs/Code/Common/Landscape.cpp", 0xc3c);
}

#else
INCLUDE_ASM("asm/nonmatchings/text_001E14F8", Landscape_InternalInitialise__Fv);
#endif

void Landscape_InternalFinalise() {
    return;
}

#ifdef NON_MATCHING

StdInit_ModuleDescription Landscape_StdInit_Description = {
    0,
    &Landscape_StdInit_UsedModules
};

void * const Landscape_StdInit_UsedModules[] = {
    &Landscape_InternalInitialise,
    &Landscape_InternalFinalise,
    0,
    0,
};

Status Landscape_Initialise(void) {
    return StdInit_InitialisationSequence(&Landscape_StdInit_Description);
}

void Landscape_Finalise(void) {
    StdInit_FinalisationSequence(&Landscape_StdInit_Description);
}

#else
INCLUDE_ASM("asm/nonmatchings/text_001E14F8", Landscape_Initialise__Fv);
INCLUDE_ASM("asm/nonmatchings/text_001E14F8", Landscape_Finalise__Fv);
#endif

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E3230);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E32F8);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E3370);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E3408);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E35D8);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E3650);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E3688);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E36F8);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E3768);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E3790);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E37C8);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E3848);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E3940);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E3B38);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E3C88);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E3CB0);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E3CF0);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E3D70);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E3DE8);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E3EF8);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E3FB0);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E4090);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E4138);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E41C8);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E4218);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E4288);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E4318);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E4368);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E45F8);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E46C8);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E4748);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E47F0);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E4828);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E4858);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E4878);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E4898);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E48B8);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E48E8);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E48F8);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E4900);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E4F10);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E4F20);

void func_001E5008(void) {
    return;
}

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E5010);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E5038);

INCLUDE_RODATA("asm/nonmatchings/text_001E14F8", _vt$16ObjectNewMessage);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", __tf16ObjectNewMessage);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E50B8);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E50E8);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E5138);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E5178);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E5198);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E51D0);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E5208);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E5480);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E54D0);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E5520);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E5550);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E5580);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E55B0);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E55E0);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E5608);

#ifdef NON_MATCHING

Status LevelRes_InternalInitialise(void) {
    return Status(0xFFFFFFFF, "c:/coding/dogs/Code/Common/Levelres.cpp", 0x2C);
}

#else
INCLUDE_ASM("asm/nonmatchings/text_001E14F8", LevelRes_InternalInitialise__Fv);
#endif

void LevelRes_InternalFinalise() {
    return;
}

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", LevelRes_Initialise__Fv);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", LevelRes_Finalise__Fv);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E56E8);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E57A0);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", __tf15Level_Resources);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E5810); /* return "Level" */

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", __tft8Resource1Z17Level_Description);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", main);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E5C98);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E5D68);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E5EB8);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E60C8);

//INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E6428); /* Mien::Mien */
Mien::Mien(){
    this->unk0 = 3;
    this->unk4 = -1;
    this->unk8 = 0;
    this->unkC = 0.5f;
    this->unk10 = 0;
    this->unk18 = 0;
    this->unk1C = 0;
    this->unk20 = 5.0f;

}

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", _$_4Mien); /* Mien::~Mien */

INCLUDE_RODATA("asm/nonmatchings/text_001E14F8", D_003E5900);

INCLUDE_RODATA("asm/nonmatchings/text_001E14F8", D_003E5910);

INCLUDE_RODATA("asm/nonmatchings/text_001E14F8", D_003E59E8);

INCLUDE_RODATA("asm/nonmatchings/text_001E14F8", D_003E5A10);

INCLUDE_RODATA("asm/nonmatchings/text_001E14F8", D_003E5AA0);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E64A8);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E6958);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E6C68);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E6C80);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E6CC8);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E6CD0);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E6CF8);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E6EC0);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", __tf4Mien);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E6FD0);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E6FD8);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E6FE0);

INCLUDE_ASM("asm/nonmatchings/text_001E14F8", func_001E6FE8);

INCLUDE_RODATA("asm/nonmatchings/text_001E14F8", _vt$4Mien);

