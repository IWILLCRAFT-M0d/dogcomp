#include "common.h"
#include <eekernel.h>
#include "debug.h"
#include "unk.h"
#include "file_unk.h"
#include "data_unk.h"
#include "ge_unk.h"

#include "FGDK3/Playstation2/IOPMem.h"
#include "FGDK3/ThrowCat.h"

#include "FGDK3/Playstation2/GE.h"
#include <libdev.h>
#include <libgraph.h>

#include "FGDK3/Playstation2/GE_RenderHardware.h"

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002ADC40);
// printf("Invalid micro-program table in GE_MicroProgMgr.cpp - Exiting\n");
// PS2_BREAK();
// Exit(1);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002ADEA8); // DMAC stuff

/*
void func_002ADEA8(void) {
    FlushCache(0);
    DPUT_D0_QWC(0);
    DPUT_D0_TADR(&D_003593C0);
    __asm__ volatile( " sync.l " );
    DPUT_D0_CHCR(0x105);
    DPUT_D1_QWC(0);
    DPUT_D1_TADR(&D_0034C300);
    __asm__ volatile( " sync.l " );
    DPUT_D1_CHCR(0x105);
};*/

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002ADF28);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002AE010);
// if (D_00452234 == 0) {
//  D_00452234 = new 002ADC40
//}

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002AE048);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002AE070);

void func_002AE320() {
    return;
}

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002AE328);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002AE400);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002AEB78);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002AECC0);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002AF010);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002AF090);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B0468);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B0488);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B0A00);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B0A28);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B0EE0);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B0F08);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B0FC8);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B1038);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B1070);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B1090);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B10B0);


#ifdef NON_MATCHING
GE_GSPageMgr::GE_GSPageMgr(int arg1, int arg2) {
  this->unk8 = 0;
  this->unk14 = 0;
  //unk0
  this->unk24 = arg2;
  this->unk28 = arg1;
  this->unk2C = arg1 + arg2;
  this->unk4 = 0;
  //unk10
  this->unkC = 0;
  this->unk18 = 0;
  this->unk1C = arg1;
  this->unk20 = arg1 + arg2;
  this->unk30 = 0;
  this->unk34 = 0;
  this->unk44 = 0;
  this->unk50 = 0;
  this->unk40 = 0;
  //this->unk3C
  this->unk48 = 0;
  //this->unk4C
  this->unk5C = 0;
  this->unk68 = 0;
  this->unk58 = 0;
  //this->unk54
  //
  this->unk60 = 0;
  //this->unk64
  //
}
#else
INCLUDE_ASM("asm/nonmatchings/text_002ADC40", __12GE_GSPageMgrii);
#endif

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", _$_12GE_GSPageMgr);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B1200);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B15D0);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B15F8);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B16E8);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B1760);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B17D8);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B1878);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B18B8); // rendering

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", _vt$12GE_GSPageMgr);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", __tf12GE_GSPageMgr);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B1B70);
INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B1B98);
INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B1BF0); /* return a0->unk28 */
INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B1BF8); /* return D_0045225C */
INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B1C00);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B1C18);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B1DB8);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B1E78);

#ifdef NON_MATCHING
void func_002B1F40(int arg0) {

}
#else
INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B1F40);
#endif

#ifdef NON_MATCHING
GE_TextureStylePkt::GE_TextureStylePkt() {
    this->unk6 = 10;
    this->unk4 = 1;
    this->unk5 = 0;
    this->unk8 = 0;
    this->unk10 = 0;
}
#else
INCLUDE_ASM("asm/nonmatchings/text_002ADC40", __18GE_TextureStylePkt);
#endif



INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B2070); // GE_TextureStylePkt?

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B20E0); // GE_TextureStylePkt?

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B21F0); // GE_TextureStylePkt?

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B2280); // texture/material function? (called by func_002C0708)

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B22C8);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B2528__18GE_TextureStylePkt);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B2548); // texture thing

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B25B8); // DGF file function

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B2630);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FA70); /* "TextureStage" */

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FA80);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FA90);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FAA0);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FAB0);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FAC0);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FAD0);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FAE0);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FAF0);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FB00);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FB10);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FB20);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FB30);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FB40);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FB50);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FB60);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FB70);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FB80);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FB90);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FBA0);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FBB0);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FBC0);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FBD0);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FBE8);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FBF8);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FC08);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FC18);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FC28);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FC38);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FC48);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FC58);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FC68);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FC78);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FC90);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FCA8);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FCC0);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FCD8);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FCF0);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FD00);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FD18);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FD30);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FD50);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FD70);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FD80);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FD98);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FDA8);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FDB8);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FDC8);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FDD8);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FDE8);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FDF8);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FE08);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FE18);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FE28);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FE38);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FE48); /* "SpecularAlpha" */

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FE58);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FE68);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FE78);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FE88);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FE98);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FEA8);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FEC0);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FED8);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FEF8);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FF08);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FF18);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FF28);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FF38);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FF48);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FF60);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FF70);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FF80);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FF90);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FFA0);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FFB0);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FFC0);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FFD0);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FFE0);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_0043FFF0);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00440010);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00440020);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00440040);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00440050);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00440060);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00440070);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00440080);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00440090);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_004400B0);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_004400C0);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_004400D0);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_004400E8);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_004400F8);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00440108);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00440128);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00440138);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00440148);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00440158);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00440168);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00440178);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00440188);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00440198);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_004401A8);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_004401B8);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_004401C8);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_004401E0);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_004401F8);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00440208);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00440218);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00440228);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00440238);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00440248);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00440258);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00440268);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00440278);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B2680);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B29D0);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B2A88);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B2C48);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B2F18);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B3120);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B31D0);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B3280);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B3330);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B33F0);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B3880);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00440310);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00440320);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00440338);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00440348);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00440370);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00440390);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_004403A8);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_004403B8);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_004403C8);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B3BF8);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B4CA8);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B59C0);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B5E80);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B6500);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B66A0);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B6A10);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B6A50);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B6A78);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B6AA0);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B6B70);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B6BD8);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B6C10);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B6E20);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B6EA0);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B6EF0);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B6FA8);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B7018);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B70E8);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B7110);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B71E8); // texture thing

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B7748);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_004406A0);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_004406B8);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B7AB8);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B8CF8);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B8D40);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B8DB0);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B9288); // apply texture?

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B9348);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B94E8);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B9688); // texture thing

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B9958); // texture thing

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B9A98);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B9B58);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00440A98);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00440AC0);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00440AE0);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002B9BE8); // vector?

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BBBC8);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BBC88);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BBEF0);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BBF38);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BBF48); // set texture?

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BC3D8);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BC400);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BC478);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BC698);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BC6A8);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BC6F0);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BCAF0);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BCBB8);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BCCE8);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BD1B8);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BD220);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BD260);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BD2A0);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BD2D8);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BD310);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BD368);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BD3E8);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BD468); // update texture thing?

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BD568);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BD588);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BD5F8);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BD6E8);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BDC68);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BDCA0);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BDCC0);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BDD20);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BDD80);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BDDE8);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BDE70);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BE470);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BE478);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BE4D8);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BE550);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BE5C8);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BE608);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BE660); // dgf function?

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BE808); // constructor for 00388918?

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BE900); // destructor for 00388918?


#ifdef NON_MATCHING
void func_002BEA88(const char* filename) {
    File file(filename, 0, 0);
    if (file.Okay() == 0) {
        DDE_FatalError("Failed to open downgrades file \'%s\'\n", filename);
    }
}
#else
INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BEA88); // ParseDGF?
#endif

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BEC50);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BEC90);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00441018);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00441024);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", jtbl_00441030);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BECB0);
// string_ascii("No texture stage name found")

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BEE08);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BEE70);
// string_ascii("No shader name found")

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BEFC8);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BF030);
// string_ascii("No texture style name found")

#ifdef NON_MATCHING
void* func_002BF198(void* arg0, string_ascii arg1) {
    if (arg1.m_cont == 0) {
        string_ascii("Default");
    }
}
#else
INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BF198);
#endif

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BF290);

void func_002BF2D0() {
    return;
}

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BF2D8);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BF3B8);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BF3E0);
INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BF8F8);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", _vt$18GE_TextureStylePkt);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", __tf18GE_TextureStylePkt);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BFAA8);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BFAB8);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BFAC8);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BFAD8);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BFAF0);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BFB10);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BFB20);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BFB58);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BFB80);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BFDE0);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BFDF8);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BFE58);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BFEA0);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002BFF30);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", __11GE_DMAPktRc1i69);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C0320);

void func_002C0340() {
    return;
}

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C0348);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C0418);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C0460);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C05C8);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C06F8);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C0708);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C0900);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C0A28);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C0DB0);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C0E20);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C0EA8);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C0FB8);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C1208);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C1278);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C1390);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C1580);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C16D0);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C2648);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C26F8);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C29F8);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C2BE0);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C2C48);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C2F68); // dma waiting

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C3050);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C3090);
INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C30A0);
INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C30B8);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_004411F0);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", __tft11GE_DMAPktRc1i69);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C3158__11GE_DMAPktRcli69); // WGRABBIT DeleteThis ?

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", __tf18GE_DMAPktRcGeneric);

s_func_002C31D0* func_002C31D0(s_func_002C31D0* arg0) {
    arg0->unk74 = 1;
    arg0->unk68 = 1.0f;
    arg0->unk44 = 0;
    arg0->unk48 = 0;
    arg0->unk4C = 0;
    arg0->unk50 = 0;
    arg0->unk54 = 0;
    arg0->unk58 = 0;
    arg0->unk5C = 0;
    arg0->unk64 = 0;
    arg0->unk6C = 0;
    arg0->unk70 = 0;
    return arg0;
}

#ifdef NON_MATCHING
GE_PS2Device::GE_PS2Device() {
    this->unk75C = new GE_PS2DisplayTarget(this);
}
#else
INCLUDE_ASM("asm/nonmatchings/text_002ADC40", __12GE_PS2Device);
#endif

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", _$_12GE_PS2Device);

void GE_PS2Device::func_002C3D80() {
	return;
}

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00441250); /* "Stall: Resource Buffer full\n" */

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_004412A0); /* "FILLMODE" */

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_004412B0);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_004412C0);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_004412D0);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_004412E0);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_004412F0);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00441300);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00441310);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00441320);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00441330);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00441340);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00441350);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00441360);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00441378);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00441388);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00441398);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_004413A8);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_004413B8);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_004413C8);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_004413D8);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_004413E8);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_004413F8);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00441408);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00441418);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00441428);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00441438);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00441448);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00441458);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00441468);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00441480);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00441490);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_004414A0);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_004414B0);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_004414C0);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_004414D0);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_004414E0);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_004414F8);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00441510);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00441528);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00441540);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00441558); /* "EMISSIVEMATERIALSOURCE" */

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00441570); /* "VERTEXBLEND" */

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00441580);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00441590);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_004415B0);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_004415C0);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_004415D0);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_004415E8);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00441600);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00441610);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00441620);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00441630);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00441648);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00441658);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00441668);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00441678);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00441690);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_004416A0);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_004416C0);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_004416D8);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_004416E8);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_004416F8);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00441708);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00441718);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00441728);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00441738);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00441748);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00441758);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00441768);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00441778);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00441788);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00441798);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_004417A8);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_004417B8);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_004417C8);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_004417D8);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_004417E8);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_004417F8);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00441808);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00441818);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00441828);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00441840);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00441850);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00441860);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00441870);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00441880);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00441890);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_004418A0);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_004418B0);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_004418C0);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_004418D0);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_004418E0);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_004418F0);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", D_00441900);

#ifdef NON_MATCHING
extern "C" void func_002C9418(void); // remove later
void GE_PS2Device::BeginScene() {
    if (this->unk458 == 0) {
        func_002C9418();
        this->unk798 = this->unk798 + 1;
    }
    else {
        scePrintf("FGDK ERROR: GE_Device::BeginScene called multiple times with no EndScene\n");
        PS2_BREAK();
    }
}
#else
INCLUDE_ASM("asm/nonmatchings/text_002ADC40",BeginScene__12GE_PS2Device);
#endif

#ifdef NON_MATCHING
void GE_PS2Device::Clear(/**/) {
    if (this->unk458 == 1) {

    }
    else {
        scePrintf("FGDK ERROR: GE_Device::Clear called outside of a BeginScene / EndScene pair\n");
    }
}
#else
INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C3F08);
#endif

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C3F98); // affects camera // GE_PS2Device*,

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C4BC0);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C4BF8);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C4C80); // render ui overlay?

#ifdef NON_MATCHING
void GE_PS2Device::EndScene() {
    if (this->unk458 == true) {
        this->unk458 == false;
        //
    }
    else {
        scePrintf("FGDK ERROR: GE_Device::EndScene called with no BeginScene\n");
        PS2_BREAK();
    }
}
#else
INCLUDE_ASM("asm/nonmatchings/text_002ADC40", EndScene__12GE_PS2Device);
// jalr called by 001CADD8
#endif

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C5500);
// D_0045277C blur?

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C5550); // fog rendering?

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C5790);
INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C57A0);

void func_002C57E8(void) {
	return;
}

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C57F0); // GE_PS2Device virtual
// get bookmetaphor image?

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C5910); // GE_PS2Device virtual

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C5B28); // GE_PS2Device virtual

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C5B60); // render bones?

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C5DA8); // texture thing



// s32* func_002C5B60();                               /* extern */
//
#ifdef NON_MATCHING
void GE_PS2Device::func_002C5E90(/*s32 arg2*/) {
//     *func_002C5B60() = arg2;
    this->unk77C = true;
}
#else
INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C5E90); // GE_PS2Device virtual
// lighting?
#endif


INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C5ED0); // shading thing?

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C6358); // texture thing

void func_002C6480(void) {
	return;
}

void GE_PS2Device::func_002C6488() {
	return;
}

void GE_PS2Device::func_002C6490() {
	return;
}

int GE_PS2Device::func_002C6498() {
    return 0;
}

#ifdef NON_MATCHING
void* GE_PS2Device::func_002C64A0(int arg1) {
    switch (arg1) {
        default:
            return 0;
    }
}
#else
INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C64A0__12GE_PS2Devicei); // ui element stuff, shadows?; RCT3 GetRenderState?
// called by landscape_land::render
#endif

//https://decomp.me/scratch/4M25a
INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C66A8); // texture thing; GE_PS2Device virtual; RCT3 SetRenderState?


INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C6AC8);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C6C28__12GE_PS2Device); /* return a0->unk764 */

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C6C30); // set Landscape texture (GE_PS2Device, texture*)

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C6C60); // font rendering/texture (GE_PS2Device*, texture*)

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C6C98); // landscape texture thing?; GE_PS2Device virtual

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C6CD0); // virtual

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C6D10); // GE_PS2Device virtual

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C6D50); // GE_PS2Device virtual

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C6D98); // GE_PS2Device virtual

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C6DE0);

#ifdef NON_MATCHING
void GE_PS2Device::func_002C6E68(/**/) {

}
#else
INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C6E68); //GE_PS2Device virtual; texture thing
#endif

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C6EF0__12GE_PS2Devices); // GE_PS2Device virtual; texture thing
// (short textureID)

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C6F88); // texture thing

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C7030); // GE_PS2Device virtual

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C70E8); // GE_PS2Device virtual

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C71B0); // GE_PS2Device virtual

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C7288); // virtual

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C7370); // virtual

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C7468); //GE_PS2Device virtual

#ifdef NON_MATCHING
void* GE_PS2Device::func_002C7520(int arg1) {
    switch (arg1) {
    // case 1:
    //     return this + 0x830;
    // case 2:
    //     return this + 0x7B0;
    // case 3:
    //     return this + 0x7F0;
    // case 4:
    //     return this + 0x870;
    // case 5:
    //     return this + 0x8B0;
    // case 6:
    //     return this + 0x8F0;
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    // case 23:
    //     return this + ((arg1 << 6) + 0x570);
    // case 24:
    //     return this + 0x930;
    default:
        return 0;
    }
}
#else
INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C7520__12GE_PS2Devicei);// culling function?
#endif


INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C75A0); // camera rendering?

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C7A48); /* a0->unkD70 = a1 */

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C7A50); // texture/font related, GE_PS2Device virtual
// RCT3 GE_Device::DrawSetScreenMatrix?

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C7CF8); // actor rendering?

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C7D30); // (GE_PS2Device*,) ; render scale in book?

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C8218); /* GE_Device::SetTarget(GE_Target*) ? */

#ifdef NON_MATCHING
void GE_PS2Device::Suspend() {
    if (this->unk458 == 1) {
        scePrintf("FGDK ERROR: Suspend called between a BeginScene and EndScene\n");
        PS2_BREAK();
    }
}
#else
INCLUDE_ASM("asm/nonmatchings/text_002ADC40", Suspend__12GE_PS2Device);
#endif

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C8318); // GE_PS2Device::Restart?

#ifdef NON_MATCHING
void* GE_PS2Device::func_002C8358() {
    //return this->unk75C
}
#else
INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C8358__12GE_PS2Device);
#endif

void func_002C8360(void) {
	return;
}

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C8368);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C8838); // virtual

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C8EB0); // virtual
// jalr called from main

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C8F20); // virtual

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C8F58);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C8F88);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C8FC0); // virtual

int GE_PS2Device::func_002C8FF8(int arg1) {
    switch (arg1) {
        case 0:
            return 0;
        case 1:
            return 4;
        case 2:
            return 256;
        default:
            return 0;
    }
}


#ifdef NON_MATCHING
void GE_PS2Device::func_002C9048() {

}
#else
INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C9048__12GE_PS2Device);
#endif

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C9070__12GE_PS2Device);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C9098); // virtual

void func_002C90B0() {
    return;
}

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C90B8);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C9210);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C92B8);

void func_002C9408() {
    return;
}

void func_002C9410() {
    return;
}

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C9418);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C9790); // GE_PS2Device virtual

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C9860); // GE_PS2Device virtual

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C9898); // GE_PS2Device virtual

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C9970); // GE_PS2Device virtual

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C99E0); // GE_PS2Device virtual

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C9A20); // (*, )

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C9AD0);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C9BB8);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C9C50);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C9C60);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C9CB8);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C9D38);
INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C9D58);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C9D78);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C9E38);
INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C9E60);

INCLUDE_RODATA("asm/nonmatchings/text_002ADC40", _vt$12GE_PS2Device);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", __tf12GE_PS2Device);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C9F00); /* return D_00452660 */

int func_002C9F08() {
    return 1;
}

int func_002C9F10() {
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C9F18); /* return a0->unk770 */
INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C9F20); /* return a0->unk780 */
INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C9F28); /* return a0->unk75C */
INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C9F30); /* return a0->unk778 */

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C9F38__12GE_PS2Device); /* return a0->unk1E0 */

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C9F40); /* return a0->unk760 */
INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C9F48);
INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C9F58); /* return a0->unk784 */
INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C9F60); /* return a0->unk20C */
INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C9F68); /* return a0->unk794 */
INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C9F70); /* a0->unk210 = a1 */
INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C9F78); /* return a0->unk210 */
INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C9F80); /* return D_00452668 */
INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C9F88); /* return D_00452670 */
INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C9F90);
INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C9F98);

void GE_PS2Device::func_002C9FB0() {
    return;
}

void GE_PS2Device::func_002C9FB8() {
    return;
}

int GE_PS2Device::func_002C9FC0() {
    return 0x100;
}

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C9FC8);
INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002C9FE0);
INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002CA080);
INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002CA088);
INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002CA090);
INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002CA1B0);
INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002CA1F8);
INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002CA240);
INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002CA298);
INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002CA320);
INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002CA4E0);
INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002CA4F8);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002CA520);

INCLUDE_ASM("asm/nonmatchings/text_002ADC40", func_002CA540);
