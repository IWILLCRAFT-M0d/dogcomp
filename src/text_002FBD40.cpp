#include "common.h"

#include "FGDK3/Playstation2/Thread.h"

#include "unk.h"

#include <libcdvd.h>
// inputCD

// static InputCD_PS2* D_00452E6C; ?

INCLUDE_ASM("asm/nonmatchings/text_002FBD40", func_002FBD40); /* InputCD_PS2::InputCD_PS2 ?*/

#ifdef NON_MATCHING
void InputCD_PS2::func_002FBD70() {
    static int D_004535A4 = sceCdStatus();
    if (D_004535A4 < SCECdStatStop) {
        static int D_004535A8 = sceCdGetError();
    }
    switch (D_004535A4) {
        // case SCECdStatStop:

        // case SCECdStatShellOpen:
        default:
            static int D_004535AC = sceCdGetDiskType();
            if (D_004535AC < SCECdPS2CD) {
                if (D_004535AC < SCECdPSCD) {
                    if (D_004535AC < 3) {
                        //if (D_004535AC > SCECdGDTFUNCFAIL)?
                        if (0 < D_004535AC) {
                            return;
                        }
                    }
                    if (D_004535AC != SCECdNODISC) {
                        //this->unk4 = 1;
                        return;
                    }
                    //uVar1 = 3;
                    break;
                }
                if (D_004535AC != SCECdUNKNOWN) {
                    //this->unk4 = 1;
                    return;
                }
            }
            //uVar1 = 4;
        case SCECdStatEmg:
            //uVar1 = 1;
            break;
        case SCECdStatRead:
            return;
        case SCECdStatSeek:
            //this->unk4 = 0;
            return;
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
