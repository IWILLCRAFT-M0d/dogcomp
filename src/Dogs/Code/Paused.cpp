#include "common.h"

#include "Dogs/Paused.h"

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Paused", func_001ED1D8);

#ifdef NON_MATCHING
PausedLayer::PausedLayer() /* : WidgetWithChildren(0,0x180,0) */ {
    this->unkD0 = 0;
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Paused", __11PausedLayer);
#endif

void PausedLayer::func_001ED248() {
    return;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Paused", func_001ED250); // PausedLayer member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Paused", func_001ED2A0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Paused", _$_11PausedLayer);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Paused", D_003E6708);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Paused", D_003E6728);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Paused", __tf11PausedLayer);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Paused", func_001ED370);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Paused", D_003E6918);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Paused", D_003E6958);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Paused", func_001ED3A0); /* __tf9GameLayer */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Paused", D_003E6B90);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Paused", func_001ED400); /* __tf12InputBinding */

