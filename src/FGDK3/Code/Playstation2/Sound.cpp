#include "common.h"
#include "unk.h"

#include "FGDK3/Playstation2/Sound.h"

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", Sound_InternalInitialise__Fv);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", Sound_InternalFinalise__Fv);

#ifdef NON_MATCHING

StdInit_ModuleDescription Sound_StdInit_Description = {
    0,
    &Sound_StdInit_UsedModules
};

void * const Sound_StdInit_UsedModules[] = {
    &Sound_InternalInitialise,
    &Sound_InternalFinalise,
    &SoundManager_Initialise,
    &SoundManager_Finalise,
    &Music_Initialise,
    &Music_Finalise,
    0,
    0,
};

Status Sound_Initialise() {
    return StdInit_InitialisationSequence(&Sound_StdInit_Description);
}

void Sound_Finalise() {
    StdInit_FinalisationSequence(&Sound_StdInit_Description);
}

#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", Sound_Initialise__Fv);
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", Sound_Finalise__Fv);
#endif

#ifdef NON_MATCHING

SoundImplementation::SoundImplementation(void* arg1) {
    this->unk8 = 0;
    this->unkC = 0;
    this->unk14 = 0;
    this->unk18 = 0;
    this->unk24 = 0;
    this->unk0 = arg1;
    this->unk10 = 1;
    this->unk28 = 0xFFFFFFFF;
    this->unk4 = 0xFFFFFFFF;
    Sound_Initialise();
};

#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", __19SoundImplementationPv); /* SoundImplementation::SoundImplementation */
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", _$_19SoundImplementation);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026E3D8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026E468);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026E480); /* a0->unk8 = 0; a0->unkC = 1 */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026E490); /* return a0->unk10 */

void SoundImplementation::func_0026E498() {
    return;
}

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026E4A0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026E500);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026ED08);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026ED28);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026EE30);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026EF50);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026F048);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026F180);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026F2B0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026F330);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026F4F0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026F580);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026F5E0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026F5F0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026F638);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026F678);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026F770);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026F810);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", __tf19SoundImplementation);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026F8A0); /* a0->unk14 = 0 */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026F8A8); /* a0->unk14 = 1 */

void SoundImplementation::func_0026F8B8() {
    return;
}

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", __tf5Sound);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026F930);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026F940);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026F948);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026F9D8); /* return a0->unk40 */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026F9E0); /* a0->unk40 = a1 */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026F9E8); /* return a0->unk44 */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026F9F0); /* a0->unk44 = a1 */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026F9F8); /* return a0->unk48 */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026FA00); /* a0->unk48 = a1 */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026FA08); /* return (float) a0->unk4C */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026FA10); /* (float) a0->unk4C = f12 */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026FA18); /* return (float) a0->unk50 */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026FA20); /* (float) a0->unk50 = f12 */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026FA28); /* return (float) a0->unk54 */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026FA30); /* (float) a0->unk54 = f12 */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026FA38); /* return a0->unk60 */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026FA40); /* a0->unk60 = a1 */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026FA48); /* return a0->unk70 */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026FA50); /* a0->unk70 = a1 */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026FA58); /* return a0->unk80 */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026FA60); /* a0->unk80 = a1 */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026FA68); /* return (float) a0->unk90 */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026FA70); /* (float) a0->unk90 = f12 */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026FA78); /* return (float) a0->unk94 */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026FA80); /* (float) a0->unk94 = f12 */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026FA88); /* return (float) a0->unk98 */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026FA90); /* (float) a0->unk98 = f12 */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026FA98); /* return (float) a0-unk9C */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026FAA0); /* (float) a0->unk9C = f12 */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026FAA8); /* return (float) a0->unkA0 */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026FAB0); /* (float) a0->unkA0 = f12 */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026FAB8); /* return a0->unkAC */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026FAC0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026FAD8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026FAF8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026FB18);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026FB38); /* a0->unk14 = 1 */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026FB48); /* a0->unk14 = 0 */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026FB50);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026FB70); /* return D_00451A60 */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026FB78); /* return D_00451A64; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", func_0026FB80);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", _vt$5Sound);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", _vt$19SoundImplementation);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/Sound", D_0043BAB8); /* "19SoundImplementation" */

