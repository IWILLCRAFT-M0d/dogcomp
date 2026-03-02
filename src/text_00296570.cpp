#include "common.h"
#include "debug.h"
#include "unk.h"

#include "FGDK3/Playstation2/IOPMem.h"
#include <ee/sifdev.h>
#include "FGDK3/ThrowCat.h"

// split
#ifdef NON_MATCHING

Status IOPMem_InternalInitialise(void) {
    return Status(0xFFFFFFFF, "c:/coding/fgdk3/Code/Playstation2/IOPMem.cpp", 47);
}

#else
INCLUDE_ASM("asm/nonmatchings/text_00296570", IOPMem_InternalInitialise__Fv);
#endif

void IOPMem_InternalFinalise(void) {
    return;
}

#ifdef NON_MATCHING

StdInit_ModuleDescription IOPMem_StdInit_Description = {
    0,
    &IOPMem_StdInit_UsedModules
};

void * const IOPMem_StdInit_UsedModules[] = {
    &IOPMem_InternalInitialise,
    &IOPMem_InternalFinalise,
    &Semaphore_Initialise,
    &Semaphore_Finalise,
    0,
    0,
};

Status IOPMem_Initialise(void) {
        return StdInit_InitialisationSequence(&IOPMem_StdInit_Description);
}

void IOPMem_Finalise(void) {
    StdInit_FinalisationSequence(&IOPMem_StdInit_Description);
}

#else
INCLUDE_ASM("asm/nonmatchings/text_00296570", IOPMem_Initialise__Fv);
INCLUDE_ASM("asm/nonmatchings/text_00296570", IOPMem_Finalise__Fv);
#endif

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_00296710);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002967C8);
/*
void func_002967C8(void* arg0, int arg1) {
    sceSifFreeIopHeap(arg0);
    IOPMem_Finalise();
    if (arg1 & 1) {
        delete(arg0);
    }
}
*/

INCLUDE_RODATA("asm/nonmatchings/text_00296570", D_0043EC70); /* "c:/coding/fgdk3/Code/Playstation2/IOPMem.cpp" */

// sym name taken from rct3_mac

void InterfaceError(char* file, int line) {
    DDE_FatalError("Failed to get interface in %s (line %d).", file, line);
}

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_00296840);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_00296878);
#ifdef NON_MATCHING
extern void* D_00451CB8;
ClassInfo::ClassInfo() {
    this->unk8 = &D_00451CB8;
    this->unk4 = 0;
    this->unk10 = 0;
    this->unkC = 0;
    this->unk14 = 0;
    this->unk18 = 0;
}
#else
INCLUDE_ASM("asm/nonmatchings/text_00296570", __9ClassInfo); /* ClassInfo */
#endif



INCLUDE_ASM("asm/nonmatchings/text_00296570", _$_9ClassInfo);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_00296AF0); /* rct ClassInfo::AddInterface ? */

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_00296CB8);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_00296D40); /* rct3 InterfaceTag::InterfaceTag */

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_00296FB0);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002970C0);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_00297158);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002971D0);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002971F8);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_00297228);

INCLUDE_RODATA("asm/nonmatchings/text_00296570", _vt$9ClassInfo);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_00297238);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_00297378);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002973C0);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_00297400);

INCLUDE_RODATA("asm/nonmatchings/text_00296570", D_0043EDC0); /* "13GenericObject" */

INCLUDE_ASM("asm/nonmatchings/text_00296570", __tf9ClassInfo);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002974A0);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002974A8); /* return a0->unk18 */

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002974B0);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002974E0);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002974E8);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_00297520);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_00297558);


