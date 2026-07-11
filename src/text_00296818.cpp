#include "common.h"
#include "debug.h"
#include "unk.h"

void InterfaceError(char* file, int line) {
    DDE_FatalError("Failed to get interface in %s (line %d).", file, line);
}

INCLUDE_ASM("asm/nonmatchings/text_00296818", func_00296840); // RCT3 InterfaceInfo::InterfaceInfo ?

INCLUDE_ASM("asm/nonmatchings/text_00296818", func_00296878); // RCT3 ClassInfo::Create?

#ifdef NON_MATCHING
extern void* D_00451CB8;
ClassInfo::ClassInfo() {
    this->unk8 = &D_00451CB8; // NameTag::s_emptyString?
    this->unk4 = 0;
    this->unk10 = 0;
    this->unkC = 0;
    this->unk14 = 0;
    this->unk18 = 0;
}
#else
INCLUDE_ASM("asm/nonmatchings/text_00296818", __9ClassInfo);
#endif

INCLUDE_ASM("asm/nonmatchings/text_00296818", _$_9ClassInfo);

INCLUDE_ASM("asm/nonmatchings/text_00296818", func_00296AF0); /* rct ClassInfo::AddInterface ? */

INCLUDE_ASM("asm/nonmatchings/text_00296818", func_00296CB8); // RCT3 /* InterfaceTag::InterfaceTag(InterfaceTag const&) */  ?

INCLUDE_ASM("asm/nonmatchings/text_00296818", func_00296D40); /* rct3 InterfaceTag::InterfaceTag(const char*, NameTag::StringType) */

// DDE_FatalError("There are more than %i interfaces (%i, in fact): the ClassInfo interface arrays should become cleverer.", 100, s_count + 1);

INCLUDE_ASM("asm/nonmatchings/text_00296818", func_00296FB0);

INCLUDE_ASM("asm/nonmatchings/text_00296818", func_002970C0); // RCT3 InterfaceTag::HardShutDown() ?

INCLUDE_ASM("asm/nonmatchings/text_00296818", func_00297158); // RCT3 ClassInfo::HardShutDown() ?

INCLUDE_ASM("asm/nonmatchings/text_00296818", func_002971D0);

INCLUDE_ASM("asm/nonmatchings/text_00296818", func_002971F8); // unreferenced

INCLUDE_ASM("asm/nonmatchings/text_00296818", func_00297228); // unreferenced

INCLUDE_RODATA("asm/nonmatchings/text_00296818", _vt$9ClassInfo);

INCLUDE_ASM("asm/nonmatchings/text_00296818", func_00297238);

INCLUDE_ASM("asm/nonmatchings/text_00296818", func_00297378); // RCT3 NameTag::Compare(const NameTag*, const NameTag*) ?

INCLUDE_ASM("asm/nonmatchings/text_00296818", func_002973C0); // unreferenced

INCLUDE_ASM("asm/nonmatchings/text_00296818", func_00297400); // unreferenced

INCLUDE_RODATA("asm/nonmatchings/text_00296818", D_0043EDC0); /* "13GenericObject" */

INCLUDE_ASM("asm/nonmatchings/text_00296818", __tf9ClassInfo);

INCLUDE_ASM("asm/nonmatchings/text_00296818", func_002974A0); // unreferenced

INCLUDE_ASM("asm/nonmatchings/text_00296818", func_002974A8); // unreferenced
/* return a0->unk18 */

INCLUDE_ASM("asm/nonmatchings/text_00296818", func_002974B0); // unreferenced

INCLUDE_ASM("asm/nonmatchings/text_00296818", func_002974E0); // virtual

INCLUDE_ASM("asm/nonmatchings/text_00296818", func_002974E8);

INCLUDE_ASM("asm/nonmatchings/text_00296818", func_00297520);

INCLUDE_ASM("asm/nonmatchings/text_00296818", func_00297558);
