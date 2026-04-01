#include "common.h"

#include "Dogs/LevelGate.h"

extern ClassInfo* D_0044D088;

#ifdef NON_MATCHING
LevelGate::LevelGate(ClassInfo* arg1, SimObj_Universe* arg2, int arg3, short arg4) : SimObject(arg1 = 0, arg2, arg3, arg4) {
    if (arg1 != 0) {
        D_0044D088 = arg1;
    }

    //unk110
    //unk118

    this->unk134 = -1;
    this->unk130 = -1;

    if (arg1 == NULL) {
        D_0044D088->unk4 = 1;
    }
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/LevelGate", __9LevelGateP9ClassInfoP15SimObj_Universeis);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/LevelGate", _$_9LevelGate);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/LevelGate", D_003AD1C8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/LevelGate", D_003AD1F0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/LevelGate", D_003AD220);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/LevelGate", func_0013F380); // LevelGate member; called multiple times when entering new level

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/LevelGate", func_0013F420); // func_0013F420(LevelGate*) ?

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/LevelGate", func_0013F680);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/LevelGate", func_0013F808__9LevelGate);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/LevelGate", func_0013FAD0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/LevelGate", func_0013FB18);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/LevelGate", D_003AD298);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/LevelGate", D_003AD2B0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/LevelGate", D_003AD2C8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/LevelGate", func_0013FB70);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/LevelGate", __tf9LevelGate);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/LevelGate", func_0013FD08); // LevelGate member (called by func_001C8D40?)

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/LevelGate", func_0013FD10); /* return a0->unk130 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/LevelGate", func_0013FD18); /* return a0->unk134 */

ClassInfo* LevelGate::func_0013FD20() {
    return D_0044D088;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/LevelGate", func_0013FD28);
