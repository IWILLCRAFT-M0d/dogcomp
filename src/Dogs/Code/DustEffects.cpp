#include "common.h"

#include "Dogs/DustEffects.h"

#ifdef NON_MATCHING
DustEffectManager::DustEffectManager(ClassInfo* arg1, SimObj_Universe* arg2, int arg3, short arg4) : SimObject(arg1 = 0, arg2, arg3, arg4) {
    if (arg1 != 0) {
        s_classInfo = arg1;
    }
    this->unk11C = 50;

}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DustEffects", __17DustEffectManagerP9ClassInfoP15SimObj_Universeis);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DustEffects", _$_17DustEffectManager);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DustEffects", func_0013AC80__17DustEffectManager);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DustEffects", func_0013AD58__17DustEffectManagerf);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DustEffects", func_0013B030); // a0 is DustEffectManager *; create particles?

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DustEffects", func_0013B0A0); // DustEffectManager member

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/DustEffects", D_003A83D0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/DustEffects", D_003A83E8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/DustEffects", D_003A8400);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DustEffects", func_0013B0C0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DustEffects", __tf17DustEffectManager);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DustEffects", func_0013B258); /* return D_0044CF08 */

ClassInfo* DustEffectManager::func_0013B260() {
    return s_classInfo;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DustEffects", func_0013B268);
