#include "common.h"
#include "unk.h"
#include "debug.h"

#include "Dogs/Landscape.h"


INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001DE378);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001DE3E0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001DE608); // ground collision?

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001DEDF0);

void func_001DEF10(void) { // called by func_001DF858
	return;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001DEF18);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001DF4B8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001DF590);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001DF810); // gravity function?

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001DF828);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001DF858);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001DF940);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001DFA30);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001DFAF0); // first arg is landscape_land* ?; water color/texture?

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001DFB80);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001DFB90);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001DFBA0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Landscape", D_003E5218);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Landscape", D_003E5240);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Landscape", D_003E5270);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001DFBB0); /* landscape_land::render(Resource<Landscape_Land>, GE_DEvice address?) */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001E14F8); // landscape/ik collision ?

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001E16B0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001E1850);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001E18E0); // slidable collision?

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001E1D30);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001E2188);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001E25C8); // "Creature type not found, DTL may define a creature of a type which is not in this overlay"

#ifdef NON_MATCHING

Status Landscape_InternalInitialise(void) {
    return Status(0xFFFFFFFF, "c:/coding/dogs/Code/Common/Landscape.cpp", 3132);
}

#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", Landscape_InternalInitialise__Fv);
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
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", Landscape_Initialise__Fv);
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", Landscape_Finalise__Fv);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001E3230);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001E32F8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001E3370);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001E3408);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001E35D8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001E3650);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001E3688);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001E36F8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001E3768);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001E3790);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001E37C8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001E3848);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001E3940);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001E3B38);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001E3C88);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001E3CB0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001E3CF0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001E3D70);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001E3DE8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001E3EF8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001E3FB0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001E4090);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001E4138);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001E41C8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001E4218);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001E4288);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001E4318);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001E4368);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001E45F8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001E46C8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001E4748);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001E47F0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001E4828);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001E4858); // called by loading function?

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001E4878);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001E4898);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001E48B8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001E48E8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001E48F8); /* return a0->unk4 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001E4900); // render collision mesh

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001E4F10);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001E4F20);

void func_001E5008(void) {
    return;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001E5010);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001E5038);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Landscape", _vt$16ObjectNewMessage);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", __tf16ObjectNewMessage);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001E50B8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001E50E8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", __tft7Message1Z14ObjectActionRx);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Landscape", func_001E5178);

