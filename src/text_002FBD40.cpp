#include "common.h"

#include "FGDK3/Playstation2/Thread.h"

#include "unk.h"

#include <libcdvd.h>
// inputCD

// static InputCD_PS2* D_00452E6C; ?

INCLUDE_ASM("asm/nonmatchings/text_002FBD40", func_002FBD40); /* InputCD_PS2::InputCD_PS2 ?*/

// https://decomp.me/scratch/NWmeR
#ifdef NON_MATCHING
extern int D_004535A4;
extern int D_004535A8;
extern int D_004535AC;

void InputCD_PS2::func_002FBD70() {

    D_004535A4 = sceCdStatus();

    if (D_004535A4 <= -1) {
        D_004535A8 = sceCdGetError();
        return;
    }
    switch (D_004535A4) {                             /* jump table: jtbl_004471A0 */
        case SCECdStatStop:
        case SCECdStatShellOpen:
            this->unk4 = 2;
            break;
        default:
            D_004535AC = sceCdGetDiskType();
            switch(D_004535AC) {
                case SCECdPSCD:
                case SCECdPSCDDA:
                case SCECdCDDA:
                case SCECdDVDV:
                case SCECdIllegalMedia:
                    goto block_23;
                case SCECdPS2CD:
                case SCECdPS2CDDA:
                case SCECdPS2DVD:
                    this->unk4 = 0;
                    break;
                case SCECdUNKNOWN:
                    goto block_23;
                case SCECdNODISC:
                    this->unk4 = 3;
                    break;
                case SCECdStatShellOpen:
                case SCECdStatSpin:
                    break;
                default:
                    this->unk4 = 1;
                    break;
            }
            break;
                case SCECdStatRead:
                case SCECdStatSeek:
                    this->unk4 = 0;
                    break;
                    block_23:
                    this->unk4 = 4;
                    break;
                case SCECdStatEmg:
                    this->unk4 = 1;
                    break;
    }
}

#else
INCLUDE_ASM("asm/nonmatchings/text_002FBD40", func_002FBD70__11InputCD_PS2);
#endif


INCLUDE_ASM("asm/nonmatchings/text_002FBD40", func_002FBE78); // InputCD_PS2 virtual

#ifdef NON_MATCHING

Status func_002FBEB0(void) { // unreferenced
    return Status(0xFFFFFFFF, 0, -1);
}

#else
INCLUDE_ASM("asm/nonmatchings/text_002FBD40", func_002FBEB0);
#endif

void func_002FBEE8(void) { // unreferenced
    return;
}

INCLUDE_ASM("asm/nonmatchings/text_002FBD40", func_002FBEF0); // unreferenced

INCLUDE_ASM("asm/nonmatchings/text_002FBD40", func_002FBF18);
// if (D_00452E6C = NULL) {
// D_00452E6C = InputCD_PS2(/**/)
//}

INCLUDE_RODATA("asm/nonmatchings/text_002FBD40", _vt$11InputCD_PS2);

INCLUDE_ASM("asm/nonmatchings/text_002FBD40", __tf11InputCD_PS2);

INCLUDE_ASM("asm/nonmatchings/text_002FBD40", func_002FBF98); // unreferenced

INCLUDE_ASM("asm/nonmatchings/text_002FBD40", __tf7InputCD);
