#include "common.h"
#include "unk.h"
#include "ge_unk.h"

#include <eeregs.h>

// GE_Utils?

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_00297578);

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_00297608);

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_00297658); // texture function (called by GE_TextureTarget constructor?)

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_00297808);

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_00297950);

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_002979B0);

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_00297A40);

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_00297AC8);

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_00297B88);

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_00297BD8);

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_00297D60);

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_00297DD0);

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_00297F88);

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_00298688);

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_002987C0);

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_00298D50); // texture function

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_00299190); // texture function; called by GE_TextureTarget constructor?

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_002991C8);

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_002991F8); // set texture scale? used by button icons

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_00299250); /* return a0 */

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_00299258); // called by GE_TextureTarget constructor?; texture related function

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_00299270); /* return a0 */

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_00299278);

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_002992D0);

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_00299338);

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_002993A0);

void func_00299448() {
    return;
}

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_00299450); /* GE_TextureTarget */

INCLUDE_ASM("asm/nonmatchings/text_00297578", _$_16GE_TextureTarget);

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_00299690__16GE_TextureTarget); // horizontal scale/size for target?

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_002996A8__16GE_TextureTarget); // vertical scale/size for target? // RCT3 GetHeight?

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_002996C0); // GetSize

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_00299740); // GE_TextureTarget member

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_00299AE0); // GE_TextureTarget member

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_0029A008__16GE_TextureTarget);

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_0029A0C8); // GE_TextureTarget member

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_0029A188__16GE_TextureTarget); // texture thing

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_0029A198); // texturecopy (used for loading screen image?)

int func_0029A600(int arg0, int arg1) {
    return (arg1 >= arg0) ? arg1 : arg0;
}


int GE_Target::func_0029A610() {
    return 0;
}

int GE_Target::func_0029A618() {
    return 0;
}

void GE_Target::func_0029A620() {
    return;
}

void GE_Target::func_0029A628() {
    return;
}

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_0029A630); // WGRABBIT GE_DMAWriter::EndGIF

INCLUDE_RODATA("asm/nonmatchings/text_00297578", _vt$16GE_TextureTarget);

INCLUDE_ASM("asm/nonmatchings/text_00297578", __tf16GE_TextureTarget);

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_0029A700); /* return a0->unk22C */

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_0029A708);

void func_0029A738() {
    return;
}

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_0029A740); // rendering function

INCLUDE_RODATA("asm/nonmatchings/text_00297578", D_0043EF70);

INCLUDE_ASM("asm/nonmatchings/text_00297578", __tf14GE_TexturePage);
// split?
#ifdef NON_MATCHING
GE_PS2Target::GE_PS2Target(GE_PS2Device* arg1) {
    this->unk8 = arg1;
    //
    this->unk0 = 1;
}
#else
INCLUDE_ASM("asm/nonmatchings/text_00297578", __12GE_PS2TargetP12GE_PS2Device); /* GE_PS2Target */
#endif

INCLUDE_ASM("asm/nonmatchings/text_00297578", _$_12GE_PS2Target);

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_0029A8E8__12GE_PS2Target); // GetWidth? (returns screen width value?)

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_0029A928__12GE_PS2Target); // GE_PS2Target virtual; // GetHeight? (returns screen height value?)

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_0029A968__12GE_PS2Target);

void func_0029AA28() { // GE_PS2Target::func_0029AA28()
    return;
}

void func_0029AA30() { // GE_PS2Target::func_0029AA30()
    return;
}

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_0029AA38__12GE_PS2Target);
/*
void GE_PS2Target::func_0029AA38() {
    this->unkC = 1;
}
*/

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_0029AA48__12GE_PS2Target);
/*
GE_PS2Target::func_0029AA48() {
    this->unkC = 0;
}
*/

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_0029AA58); // GE_PS2Target member

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_0029B320); // Rendering function

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_0029BAA8);

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_0029BF60);

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_0029C340); // rendering function

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_0029CC50);

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_0029D728);

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_0029FEA0);

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_002A03E0); // virtual

#ifdef NON_MATCHING
GE_PS2DisplayTarget::GE_PS2DisplayTarget(GE_PS2Device* arg1) : GE_PS2Target(arg1) {
    DPUT_GS_PMODE(0x66);
    DPUT_GS_SMODE2(1);
    DPUT_GS_PMODE(0x8087);

    //
    DPUT_GS_BGCOLOR(0);
}
#else
INCLUDE_ASM("asm/nonmatchings/text_00297578", __19GE_PS2DisplayTargetP12GE_PS2Device); /* GE_PS2DisplayTarget */
#endif

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_002A09C0); // GE_PS2DisplayTarget virtual

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_002A09E0); // GE_PS2DisplayTarget virtual

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_002A0AC0); // GE_PS2DisplayTarget virtual

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_002A0C18); // GE_PS2DisplayTarget virtual

INCLUDE_ASM("asm/nonmatchings/text_00297578", _$_19GE_PS2DisplayTarget);

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_002A0CB0); // set gs display regs for game resolution?

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_002A0D80__19GE_PS2DisplayTarget);
/*
int GE_PS2DisplayTarget::func_002A0D80() {
    return this->unk1B4;
}
*/
INCLUDE_ASM("asm/nonmatchings/text_00297578", func_002A0D88__19GE_PS2DisplayTarget); /* return this->unk1B8 */

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_002A0D90); // GE_PS2DisplayTarget member

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_002A0DD0); // GE_PS2DisplayTarget member

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_002A0E10); // GE_PS2DisplayTarget member

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_002A1218__19GE_PS2DisplayTarget);

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_002A1500__19GE_PS2DisplayTarget);

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_002A1520);

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_002A1678);
/*
void func_002A1678() {
    D_004520EC = 1;
}
*/
INCLUDE_ASM("asm/nonmatchings/text_00297578", func_002A1688);

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_002A17E0);

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_002A1938);

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_002A1990);

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_002A19A0);

INCLUDE_ASM("asm/nonmatchings/text_00297578", __tf9GE_Target);

INCLUDE_ASM("asm/nonmatchings/text_00297578", _$_9GE_Target);

int func_002A1A58() {
    return 0;
}

int func_002A1A60() {
    return 0;
}

void func_002A1A68() {
    return;
}

void func_002A1A70() {
    return;
}

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_002A1A78);

INCLUDE_ASM("asm/nonmatchings/text_00297578", __tf12GE_PS2Target);

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_002A1B58);

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_002A1B68); /* return a0->unk14 */

float func_002A1B70() { // GE_PS2Target::SquarePixelYScale?
    return 1.0f;
}

int GE_PS2Target::func_002A1B80() {
    return 1;
}

int GE_PS2Target::func_002A1B88() {
    return 0;
}

void func_002A1B90() { // GE_PS2Target::func_002A1B90
    return;
}

void func_002A1B98() { // GE_PS2Target::func_002A1B98
    PS2_BREAK();
    return;
}

void func_002A1BA8() { // GE_PS2Target::func_002A1BA8
    PS2_BREAK();
    return;
}

void func_002A1BB8() { // GE_PS2Target::func_002A1BB8
    PS2_BREAK();
    return;
}

void func_002A1BC8() { // GE_PS2Target::func_002A1BB8
    PS2_BREAK();
    return;
}


INCLUDE_RODATA("asm/nonmatchings/text_00297578", _vt$19GE_PS2DisplayTarget);

INCLUDE_RODATA("asm/nonmatchings/text_00297578", _vt$12GE_PS2Target);

INCLUDE_RODATA("asm/nonmatchings/text_00297578", _vt$9GE_Target);

INCLUDE_RODATA("asm/nonmatchings/text_00297578", D_0043F1F0); /* "9GE_Target" */

INCLUDE_RODATA("asm/nonmatchings/text_00297578", D_0043F200); /* "12GE_PS2Target" */

INCLUDE_ASM("asm/nonmatchings/text_00297578", __tf19GE_PS2DisplayTarget);

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_002A1C70__19GE_PS2DisplayTarget); // resolution?

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_002A1CB8__19GE_PS2DisplayTarget); // widescreen function?

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_002A1D00);

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_002A1D18); /* return D_004520EC */

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_002A1D28); /* return D_004520E8 */

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_002A1D30);

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_002A1D48);

INCLUDE_ASM("asm/nonmatchings/text_00297578", func_002A1D68);
