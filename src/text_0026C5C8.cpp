#include "common.h"
#include "FGDK3/Playstation2/Thread.h"

#include "mem.h"
#include "FGDK3/Playstation2/RunPath.h"
#include "FGDK3/Playstation2/SoundManager.h"
#include "FGDK3/Playstation2/Sound.h"
#include "FGDK3/Playstation2/sifManager.h"
#include "FGDK3/NavGraphRes.h"
#include "unk.h"
#include "FGDK3/RelRecv.h"
#include "FGDK3/ResLibs/TextureRes/Code/TextureRes.h"

#ifdef NON_MATCHING
char D_0043B8E0[] = "c:/coding/fgdk3/Code/Common/StdMem.cpp";

Status StdMem_InternalInitialise(void) {
    return Status(0xFFFFFFFF, D_0043B8E0, 0x3DA);
}

#else
INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", StdMem_InternalInitialise__Fv);
#endif

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026C610);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", StdMem_Initialise__Fv);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", StdMem_Finalise__Fv);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026C668);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026C698);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026C708);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026C728);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026C780);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026C818);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026C900);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026C9C8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", StdInit_InitialisationSequence__FP25StdInit_ModuleDescription);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", StdInit_FinalisationSequence__FP25StdInit_ModuleDescription);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", CheckError__18StdInit_ClientBaseG6Status);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026CE60); /* Status::PrepareReport */

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026CED0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", __tf6Status);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026CF60);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026CF98);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026CFD0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026CFF8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026D068);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026D108);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026D110);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026D120); /* return 0; */

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026D128);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026D138);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026D148);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026D158);

INCLUDE_RODATA("asm/nonmatchings/text_0026C5C8", _vt$6Status);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", SoundManager_InternalInitialise__Fv);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", SoundManager_InternalFinalise__Fv);

#ifdef NON_MATCHING

StdInit_ModuleDescription SoundManager_StdInit_Description = {
    0,
    &SoundManager_StdInit_UsedModules
};

void * const SoundManager_StdInit_UsedModules[] = {
    &SoundManager_InternalInitialise,
    &SoundManager_InternalFinalise,
    &ThrowCatch_Initialise,
    &ThrowCatch_Finalise,
    &Semaphore_Initialise,
    &Semaphore_Finalise,
    &RunPath_Initialise,
    &RunPath_Finalise,
    &Thread_Initialise,
    &Thread_Finalise,
    0,
    0,
};

Status SoundManager_Initialise(void) {
        return StdInit_InitialisationSequence(&SoundManager_StdInit_Description);
}

void SoundManager_Finalise(void) {
    StdInit_FinalisationSequence(&SoundManager_StdInit_Description);
}

#else
INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", SoundManager_Initialise__Fv);
INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", SoundManager_Finalise__Fv);
#endif

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026D328);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026D538);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026D7D8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026DEB0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026DF28);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026DF48);

// Sound.cpp
INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", Sound_InternalInitialise__Fv);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", Sound_InternalFinalise__Fv);

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

Status Sound_Initialise(void) {
    return StdInit_InitialisationSequence(&Sound_StdInit_Description);
}

void Sound_Finalise(void) {
    StdInit_FinalisationSequence(&Sound_StdInit_Description);
}

#else
INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", Sound_Initialise__Fv);
INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", Sound_Finalise__Fv);
#endif

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026E318); /* SoundImplementation::SoundImplementation */

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026E380);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026E3D8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026E468);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026E480);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026E490);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026E498);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026E4A0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026E500);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026ED08);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026ED28);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026EE30);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026EF50);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026F048);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026F180);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026F2B0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026F330);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026F4F0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026F580);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026F5E0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026F5F0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026F638);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026F678);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026F770);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026F810);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", __tf19SoundImplementation);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026F8A0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026F8A8);

void func_0026F8B8(void) {
    return;
}

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", __tf5Sound);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026F930);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026F940);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026F948);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026F9D8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026F9E0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026F9E8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026F9F0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026F9F8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026FA00);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026FA08);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026FA10);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026FA18);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026FA20);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026FA28);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026FA30);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026FA38);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026FA40);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026FA48);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026FA50);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026FA58);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026FA60);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026FA68);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026FA70);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026FA78);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026FA80);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026FA88);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026FA90);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026FA98);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026FAA0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026FAA8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026FAB0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026FAB8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026FAC0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026FAD8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026FAF8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026FB18);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026FB38);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026FB48);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026FB50);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026FB70);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026FB78);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026FB80);

INCLUDE_RODATA("asm/nonmatchings/text_0026C5C8", D_0043BA58);

INCLUDE_RODATA("asm/nonmatchings/text_0026C5C8", _vt$19SoundImplementation);

INCLUDE_RODATA("asm/nonmatchings/text_0026C5C8", D_0043BAB8); /* "19SoundImplementation" */

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026FBA0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", sifManager_InternalInitialise__Fv);

void sifManager_InternalFinalise() {
    return;
}

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", Semaphore_Initialise__Fv);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", Semaphore_Finalise__Fv);



INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026FFB8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00270018);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00270080);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00270190);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002703B8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00270408);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00270468);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00270498);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002704D8);

float func_002704F8(void) {
    return 0.0f;
}

INCLUDE_RODATA("asm/nonmatchings/text_0026C5C8", D_0043BBC0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00270508);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00271790);

void func_002717B8(void) {
    return;
}

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002717C0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002717E8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00271808);

INCLUDE_RODATA("asm/nonmatchings/text_0026C5C8", _vt$13ShapeInstance);

INCLUDE_RODATA("asm/nonmatchings/text_0026C5C8", _vt$11ShapeParams);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", __tf11ShapeParams);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00271860); /* ShapeParams::~ShapeParams */

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", __tf13Shape_Instance);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002718D0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002718F8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00271900);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00271908);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00271938);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00271970);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002719A8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002719E0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00271A18);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00271A20);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00271AD8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00271B30);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00271BB8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00271C58);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00271D10);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00271D98);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00271EE0);

void func_00271EF8(void) {
    return;
}

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00271F00);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00272130);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00272440);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00272508);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00272530);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00272558);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00272580);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002725A8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002725D0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00272640);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00272690);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002726C8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00272748);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00272798);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002727C0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002727E8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00272810);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00272838);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00272860);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002728C8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00272938);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002729A0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00272A78);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00272A98);

INCLUDE_RODATA("asm/nonmatchings/text_0026C5C8", _vt$9SavedGame);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", __tf9SavedGame);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00272B00);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00272B08);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00272B30);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00272B58);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00272B88);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00272BB8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00272BE0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00272C08);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00272C30);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00272C58);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00272C80);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00272CB8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00272CF0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00272D28);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00272D60);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00272D98);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00272DD0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00272E28);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00272E88);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", RunPath_InternalInitialise__Fv);

void RunPath_InternalFinalise() {
    return;
}

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", RunPath_Initialise__Fv);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", RunPath_Finalise__Fv);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00272FF0); /* return "cdrom0:\\" */

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00273000);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00273158);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002731E8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00273240);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002732B8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00273318);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002733D8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00273420);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002735C8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002736A8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002736E8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00273778);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002737A8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00273900);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00273968);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00273998);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002739B8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00273A80);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00273B10);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00273C38);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00273CB0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00273D08);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00273D28);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00273D58);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00273DA0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00273DE8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00273E20);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00273E58);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00273E90);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00273F68);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00274020);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00274200);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002742B0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00274400);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002744B0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002744F8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00274540);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00274588);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002745D0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00274628);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00274680);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00274730);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00274790);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002747F0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00274850);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002748B0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002748E8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00274918);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002749C8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00274A00);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00274A60);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00274B00);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00274C10);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00274CB0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00274D40);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00274DD0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00274EB8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00274F78);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00275038);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002750E0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00275288);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", __16ResourceGeneric);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", _$_16Resource_Generic);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00275448);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002754E8);

int func_00275520(void) {
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00275528);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00275600);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002756E0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00275718); /* resource loading? */

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002757B0);

void func_002757E8(void) {
    return;
}

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002757F0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002758F8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00275908);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00275990);

void func_00275AF8(void) {
    return;
}

int func_00275B00(void) {
    return 0;
}

void func_00275B08(void) {
    return;
}

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00275B10);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", __tf19Resource_LayoutUnit);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00275BE8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00275BF0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", __tf20Resource_LayoutGroup);

INCLUDE_RODATA("asm/nonmatchings/text_0026C5C8", _vt$16Resource_Generic);

INCLUDE_RODATA("asm/nonmatchings/text_0026C5C8", _vt$29Resource_LayoutInclusiveGroup);

INCLUDE_RODATA("asm/nonmatchings/text_0026C5C8", _vt$29Resource_LayoutExclusiveGroup);

INCLUDE_RODATA("asm/nonmatchings/text_0026C5C8", _vt$22Resource_LayoutOverlay);

INCLUDE_RODATA("asm/nonmatchings/text_0026C5C8", _vt$20Resource_LayoutGroup);

INCLUDE_RODATA("asm/nonmatchings/text_0026C5C8", _vt$19Resource_LayoutUnit);

INCLUDE_RODATA("asm/nonmatchings/text_0026C5C8", D_0043C188); /* "19Resource_LayoutUnit" */

INCLUDE_RODATA("asm/nonmatchings/text_0026C5C8", D_0043C1A0); /* "20Resource_LayoutGroup" */

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", __tf22Resource_LayoutOverlay);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00275CD8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", __tf29Resource_LayoutExclusiveGroup);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00275D90); /* Resource_LayoutInclusiveGroup::~Resource_LayoutInclusiveGroup */

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", __tf29Resource_LayoutInclusiveGroup);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", __tf16Resource_Generic);

void func_00275E88(void) {
    return;
}

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00275E90);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00275EE8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00275F20);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00275F88);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00275F90);

int func_00275F98(void) {
    return 0;
}

int func_00275FA0(void) {
    return 1;
}

void func_00275FA8(void) {
    return;
}

void func_00275FB0(void) {
    return;
}

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00275FB8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00275FD8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00275FF8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00276090);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00276110);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00276190);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00276650);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002766C0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00276A40);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00276AC0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00276AE8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00276B70);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00276CD8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00276E70);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00276FA0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00276FA8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00277040);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002770A0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002770C0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002770E0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00277178);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002771D8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002771F8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00277290);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002772F0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00277388);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002773E8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00277408);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002774A0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00277500);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00277520);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00277540);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00277590);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002775B0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002775D0);

void RelRecv_InternalFinalise(void) {
    return;
}


INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", RelRecv_Initialise__Fv);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", RelRecv_Finalise__Fv);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00277670);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002776C0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00277720);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00277848);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002779E0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00278018);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00278098);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00278118);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00278190);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002781E0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00278278);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002782A8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002782C8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002782E8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00278308);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00278350);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00278358);

INCLUDE_RODATA("asm/nonmatchings/text_0026C5C8", _vt$12StdAllocator);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", __tf12StdAllocator);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002783A8); /* StdAllocator::Alloc */

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002784C8); /* StdAllocator::Free */
/* void StdAllocator::Free(void* ptr)

{
  free(ptr);
  return;
}
*/
INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00278568); /* StdAllocator::MemAlign */

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00278608);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00278668);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002786A0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002786B8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002786D8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002786F8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002788D8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00278CA0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00278D10);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00278D30);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00278D88);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00279000);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002791C8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00279238);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00279258);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00279408);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002795C8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00279618);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00279630);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00279638);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00279640);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00279648);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00279650);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00279658);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00279660);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00279680);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00279688);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00279690);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002796B0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002796D0);

INCLUDE_RODATA("asm/nonmatchings/text_0026C5C8", D_0043C3A0);

INCLUDE_RODATA("asm/nonmatchings/text_0026C5C8", D_0043C3E0);

INCLUDE_RODATA("asm/nonmatchings/text_0026C5C8", D_0043C420);

INCLUDE_RODATA("asm/nonmatchings/text_0026C5C8", D_0043C460);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", __tf15StandardPointer);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002797B8);

INCLUDE_RODATA("asm/nonmatchings/text_0026C5C8", D_0043C4A0);

INCLUDE_RODATA("asm/nonmatchings/text_0026C5C8", D_0043C4E0);

INCLUDE_RODATA("asm/nonmatchings/text_0026C5C8", D_0043C4F0);

INCLUDE_RODATA("asm/nonmatchings/text_0026C5C8", D_0043C5A8);

INCLUDE_RODATA("asm/nonmatchings/text_0026C5C8", D_0043C610);

INCLUDE_RODATA("asm/nonmatchings/text_0026C5C8", D_0043C678);

INCLUDE_RODATA("asm/nonmatchings/text_0026C5C8", D_0043C690);

INCLUDE_RODATA("asm/nonmatchings/text_0026C5C8", D_0043C6E0);

INCLUDE_RODATA("asm/nonmatchings/text_0026C5C8", D_0043C730);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00279840);

// start of /Common/NavGraphRes.cpp ???
INCLUDE_RODATA("asm/nonmatchings/text_0026C5C8", D_0043C7A8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", NavGraphRes_InternalInitialise__Fv);

void NavGraphRes_InternalFinalise() {
    return;
}

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", NavGraphRes_Initialise__Fv);
/*
Status NavGraphRes_Initialise(void) {
    return StdInit_InitialisationSequence(&NavGraphRes_StdInit_Description);
}
*/
INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", NavGraphRes_Finalise__Fv);
/*
void NavGraphRes_Finalise(void) {
    StdInit_FinalisationSequence(&NavGraphRes_StdInit_Description);
}
*/
INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00279920); /* load? */

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_002799E0); /* unload? */

INCLUDE_RODATA("asm/nonmatchings/text_0026C5C8", _vt$18NavGraph_Resources);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", __tf18NavGraph_Resources);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00279A50); /* return "NavGraph"; */

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00279A60);  /* return "NavGraph"; */

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", __tft8Resource1Z8NavGraph);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00279AC0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00279C78);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00279CF8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00279D58);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_00279EA0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027A270);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027A2F8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027A348);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027A538);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027A550);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027A5A0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027A618);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027A670);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027A9C8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027AA50);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027AAF8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027AC78);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027AE88);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027AEF8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027B560);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027BA78);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027C098);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027C0B0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027C0C8);

void func_0027C4E8(void) {
    return;
}

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027C4F0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027C578);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027C5A8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027C640);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027C770);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027C7B0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027C7F8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027CA20);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027CB38);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027CD48);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027CDE0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027D0F8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027D130);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027D240);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027D4E0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027D4F8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027D500);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027DB30);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027DC70);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027DD60);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027DD80);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027DE18);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027DE78);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027DE98);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027DEB8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027DF50);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027DFB0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027DFD0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027E068);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027E0C8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027E160);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027E1C0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027E1E0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027E278);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027E2D8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027E2F8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027E478);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027E5C0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027E610);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027E808);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027E828);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027E940);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027E970);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027E998);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027E9A0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027E9A8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027E9B0);

INCLUDE_RODATA("asm/nonmatchings/text_0026C5C8", _vt$28NavGraphCellFromPosSphereHit);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", __tf28NavGraphCellFromPosSphereHit);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027EA08);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0027EA58);


