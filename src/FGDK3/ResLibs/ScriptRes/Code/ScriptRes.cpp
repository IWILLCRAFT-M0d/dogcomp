#include "common.h"
#include "ScriptRes.h"
#include "FGDK3/ThrowCat.h"

#include "unk.h"
#include "script_unk.h"

#ifdef NON_MATCHING
Status ScriptRes_InternalInitialise() {
    func_002757E8();
    func_0031CB30();
    return Status(0xFFFFFFFF, "c:/coding/fgdk3/ResLibs/ScriptRes/Code/ScriptRes.cpp", 124);
}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", ScriptRes_InternalInitialise__Fv);
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", ScriptRes_InternalFinalise__Fv);

#ifdef NON_MATCHING

StdInit_ModuleDescription ScriptRes_StdInit_Description = {
    0,
    &ScriptRes_StdInit_UsedModules
};

void * const ScriptRes_StdInit_UsedModules[] = {
    &ScriptRes_InternalInitialise,
    &ScriptRes_InternalFinalise,
    &ThrowCatch_Initialise,
    &ThrowCatch_Finalise,
    0,
    0,
};

Status ScriptRes_Initialise() {
    return StdInit_InitialisationSequence(&ScriptRes_StdInit_Description);
}

void ScriptRes_Finalise() {
    StdInit_FinalisationSequence(&ScriptRes_StdInit_Description);
}

#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", ScriptRes_Initialise__Fv);
INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", ScriptRes_Finalise__Fv);
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", func_0031CA28); /* load? */

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", func_0031CAE8);

void func_0031CB30(void) {
    return;
}

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", func_0031CB38);

int func_0031CB68(int arg0, int arg1) {
    return (arg0 >= arg1) ? arg1 : arg0;
}


INCLUDE_RODATA("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", _vt$16Script_Resources);

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", __tf16Script_Resources);

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", func_0031CBC8); /* return "Script"; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", func_0031CBD8); /* return "Script"; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", func_0031CBE8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", __tft8Resource1Z12ScriptHeader); /* Resource<ScriptHeader>  */

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", __6ScriptP11WorldObjectPvi); /* Script::Script */

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", _$_6Script);

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", func_0031CDD8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", func_0031CEA8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", func_0031CF78);

//     s32 var_7;
//     void *var_16;
//     void *temp_16;
//
//     var_16 = this->unk3C->unk4 + this->unk3C->unk58;
//     if (this->unk40 != NULL) {
//         free(this->unk40);
//     }
//     this->unk40 = malloc(this->unk3C->unk40 * 4);
//     var_7 = 0;
//     if (this->unk3C->unk40 > 0) {
// loop_4:
//         temp_16 = var_16 + 2;
//         var_16 = temp_16 + 4;
//         if ((var_16->unk2 | (temp_16->unk1 << 8) | (temp_16->unk2 << 0x10) | (temp_16->unk3 << 0x18)) & 0x01000000) {
//             *((var_7 * 4) + this->unk40) = var_16->unk0 | (var_16->unk1 << 8) | (var_16->unk2 << 0x10) | (var_16->unk3 << 0x18);
//             var_16 += 4;
//         } else {
//             *((var_7 * 4) + this->unk40) = 0;
//         }
//         var_7 += 1;
//         if (var_7 < this->unk3C->unk40) {
//             goto loop_4;
//         }
//     }
// }


INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", func_0031D0A8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", func_0031D108);

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", func_0031D168); // suspend thread?

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", func_0031D1C0); // resume thread?

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", func_0031D218);

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", func_0031D278);

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", func_0031D298);

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", func_0031D320);

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", func_0031D380);

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", func_0031D428); // kill thread?

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", func_0031D4A0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", func_0031D4E0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", func_0031D5A0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", func_0031D688);

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", func_0031D7E0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", func_0031DC78);

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", func_0031DCF8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", func_0031DD60);

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", func_0031E410);

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", func_0031E470); // get script line number?

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", func_0031E4E8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", func_0031E5A0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", func_0031E5F8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", func_0031E6D8); // Script member

void Script::func_0031E8C0() {
    return;
}

int Script::func_0031E8C8() {
    return 0;
}

int Script::func_0031E8D0() {
    return -1;
}

int Script::func_0031E8D8() {
    return 1;
}

int Script::func_0031E8E0() {
    return 0;
}

void Script::func_0031E8E8() {
    return;
}

int Script::func_0031E8F0() {
    return 0xFFFFFF;
}

int Script::func_0031E900() {
    return 0xFFFFFF;
}

int Script::func_0031E910() {
    return 0;
}

int Script::func_0031E918() {
    return 0;
}

int Script::func_0031E920() {
    return 0;
}

void Script::func_0031E928() {
    return;
}

int Script::func_0031E930() {
    return 0;
}

int Script::func_0031E938() {
    return 0;
}

float Script::func_0031E940() {
    return 0.0f;
}

void Script::func_0031E950() {
    return;
}

int Script::func_0031E958() {
    return 0;
}

int Script::func_0031E960() {
    return 0;
}

int Script::func_0031E968() {
    return 0;
}

int Script::func_0031E970() {
    return 0;
}

int Script::func_0031E978() {
    return 0;
}

int func_0031E980(void) {
    return 0;
}

int func_0031E988(void) {
    return 0;
}

int func_0031E990(void) {
    return 0;
}

int func_0031E998(void) {
    return 0;
}

int func_0031E9A0(void) {
    return 0;
}

void func_0031E9A8(void) {
    return;
}

void func_0031E9B0(void) {
    return;
}

void func_0031E9B8(void) {
    return;
}

void func_0031E9C0(void) {
    return;
}

void func_0031E9C8(void) {
    return;
}

int func_0031E9D0(void) {
    return 0;
}

int func_0031E9D8(void) {
    return 0;
}

int func_0031E9E0(void) {
    return 0;
}

int func_0031E9E8(void) {
    return 0;
}

int func_0031E9F0(void) {
    return 0;
}

int func_0031E9F8(void) {
    return 0;
}

void func_0031EA00(void) {
    return;
}

int func_0031EA08(void) {
    return 0;
}

void func_0031EA10(void) {
    return;
}

void func_0031EA18(void) {
    return;
}

void func_0031EA20(void) {
    return;
}
void func_0031EA28(void) {
    return;
}

void Script::func_0031EA30() {
    return;
}

void Script::func_0031EA38() {
    return;
}

int Script::func_0031EA40() {
    return 1;
}

void Script::func_0031EA48() {
    return;
}

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", __tf6Script);

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", func_0031EA90); // unreferenced
/* return a0->unk3C */

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", func_0031EA98); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", func_0031EAD8); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", func_0031EAE8); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", func_0031EB78); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", func_0031EB90); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", func_0031EBA0); // unreferenced
/* return a0->unk30 */

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", func_0031EBA8); // unreferenced
/* return a0->unk34 */

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", func_0031EBB0); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", func_0031EBC0); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", func_0031EBE0); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", func_0031EC18); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", func_0031EC50); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", func_0031EC60); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", func_0031EC78); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", func_0031EC90); // unreferenced
/* return a0->unk40 */

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", func_0031EC98); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", func_0031ECA8);
// int func_0031ECA8(void) {
//     static int D_00453194 = 0;
//
//     return D_00453194 += 1;
// }

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", func_0031ECC0);
// new ScriptThread(/**/)

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", func_0031ED58); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", func_0031EDD0); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", func_0031EE40); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", func_0031EE48); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", func_0031EE60); // unreferenced

INCLUDE_RODATA("asm/nonmatchings/FGDK3/ResLibs/ScriptRes/Code/ScriptRes", _vt$6Script);
