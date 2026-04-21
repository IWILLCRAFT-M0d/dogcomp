#include "common.h"

#include "Dogs/Snowball.h"

extern ClassInfo* D_0044D9C0;
#ifdef NON_MATCHING
Snowball::Snowball(ClassInfo* arg1, SimObj_Universe* arg2, int arg3, short arg4) : SphereObj(arg1 = 0, arg2, arg3, arg4) {
    if (arg1 != 0) {
        D_0044D9C0 = arg1;
    }

    this->unk5C4 = 0.2f;
    this->m_canRoll = true;

    if (arg1 == NULL) {
        D_0044D9C0->unk4 = 1;
    }
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Snowball", __8SnowballP9ClassInfoP15SimObj_Universeis);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Snowball", _$_8Snowball);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Snowball", func_00172BE8); // Snowball virtual

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Snowball", func_00172C08); // Snowball virtual

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Snowball", func_00172C30);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Snowball", func_00172C88);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Snowball", func_00172D90);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Snowball", func_00172DF0__8Snowball);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Snowball", func_00172E20);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Snowball", func_00172E78); // "Failed to get reset object in Snowball::ProcessScriptRequest"

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Snowball", func_00172FA8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Snowball", D_003C5FF0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Snowball", D_003C6018);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Snowball", D_003C6038);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Snowball", D_003C6050);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Snowball", D_003C6068);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Snowball", D_003C6080);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Snowball", D_003C6098);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Snowball", D_003C72B8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Snowball", D_003C72F8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Snowball", D_003C7310);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Snowball", D_003C7328);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Snowball", func_00173038);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Snowball", __tf8Snowball);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Snowball", func_001731D0); /* return D_0044D9C0 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Snowball", func_001731D8);


