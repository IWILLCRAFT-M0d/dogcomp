#include "common.h"

#include "Dogs/Title.h"
#include "unk.h"

#ifdef NON_MATCHING
TitleView::TitleView() {

}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Title", __9TitleView);
#endif

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Title", D_0042E630); /* "C:/Coding/Dogs/Code/Common/SaveGameManager.h" */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Title", D_0042E660); /* "m_mode==Mode_Inactive" */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Title", func_0022D588); // TitleView member

#ifdef NON_MATCHING
void TitleView::func_0022DCB8(int* arg1) {
    if (*arg1 == 0xA) {
        Main_Terminate();
    }
    //func_0024C850(arg0, arg1);
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Title", func_0022DCB8__9TitleViewPi); // TitleView member
#endif

#ifdef NON_MATCHING
void TitleView::func_0022DD08(int arg1) {
    // this->unkF8 = arg1;
    // this->unkF0 = 0;
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Title", func_0022DD08__9TitleViewi);
#endif
// bool D_0044E974 (isRendering?)
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Title", func_0022DD18); // TitleView member
//https://decomp.me/scratch/IjHMp
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Title", func_0022E2B0); // TitleView member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Title", func_0022E300);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Title", func_0022E340);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Title", func_0022E3D8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Title", func_0022E438);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Title", func_0022E458);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Title", func_0022E478);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Title", func_0022E510);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Title", func_0022E570);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Title", func_0022E590);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Title", func_0022E628);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Title", func_0022E688);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Title", func_0022E720);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Title", func_0022E780);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Title", func_0022E7A0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Title", func_0022E838);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Title", _$_9TitleView);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Title", D_0042E728);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Title", D_0042E748);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Title", __tf9TitleView);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Title", func_0022E980);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Title", D_0042E938);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Title", D_0042E960);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Title", D_0042E9B0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Title", func_0022E9B0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Title", D_0042EC10);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Title", func_0022EA10);
