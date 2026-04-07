#include "common.h"
#include "TextureRes.h"

#ifdef NON_MATCHING
Status TextureRes_InternalInitialise() {
    func_002757E8();
    return Status(0xFFFFFFFF, "c:/coding/fgdk3/ResLibs/TextureRes/Code/TextureRes.cpp", 66);
}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/TextureRes/Code/TextureRes", TextureRes_InternalInitialise__Fv);
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/TextureRes/Code/TextureRes", TextureRes_InternalFinalise__Fv);

#ifdef NON_MATCHING

StdInit_ModuleDescription TextureRes_StdInit_Description = {
    0,
    &TextureRes_StdInit_UsedModules
};

void * const TextureRes_StdInit_UsedModules[] = {
    &TextureRes_InternalInitialise,
    &TextureRes_InternalFinalise,
    &ThrowCatch_Initialise,
    &ThrowCatch_Finalise,
    &RelRecv_Initialise,
    &RelRecv_Finalise,
    0,
    0,
};

Status TextureRes_Initialise() {
    return StdInit_InitialisationSequence(&TextureRes_StdInit_Description);
}

void TextureRes_Finalise() {
    StdInit_FinalisationSequence(&TextureRes_StdInit_Description);
}

#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/TextureRes/Code/TextureRes", TextureRes_Initialise__Fv);
INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/TextureRes/Code/TextureRes", TextureRes_Finalise__Fv);
#endif

Texture_Resources::Texture_Resources(){
    this->unk14 = 0;
}


INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/TextureRes/Code/TextureRes", _$_17Texture_Resources); /* Texture_Resources::~Texture_Resources */

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/TextureRes/Code/TextureRes", func_0031F5E0); /* load */

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/TextureRes/Code/TextureRes", func_0031FAB8); /* unload */

INCLUDE_RODATA("asm/nonmatchings/FGDK3/ResLibs/TextureRes/Code/TextureRes", _vt$17Texture_Resources);

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/TextureRes/Code/TextureRes", __tf17Texture_Resources);

#ifdef NON_MATCHING
char* func_0031FBE0() {
    return "Texture"; // D_00453200
}

char* func_0031FBF0() {
    return "Texture"; // D_00453200
}

#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/TextureRes/Code/TextureRes", func_0031FBE0);
INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/TextureRes/Code/TextureRes", func_0031FBF0);
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/TextureRes/Code/TextureRes", __tft8Resource1Z10GE_Texture);
