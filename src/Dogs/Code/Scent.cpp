#include "common.h"

#include "Dogs/Scent.h"

extern ClassInfo* D_0044D4E8;

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_00152DD0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_00152E98);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_00153200);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_00153290);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_001532E0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_00153310);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_001533D0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Scent", D_003BADB8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Scent", D_003BADE0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Scent", D_003BAE10);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_00153540); // "Too many scents in close proximity to camera - relayout level!"

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_00153D30); // "Too many scents registered"

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_00153DD0);


#ifdef NON_MATCHING
Scent::Scent(ClassInfo* arg1, SimObj_Universe* arg2, int arg3, short arg4) : SimObject(arg1 = 0, arg2, arg3, arg4) {

    this->unk118 = -1.0f;
    this->unk120 = -1;
    this->unk114 = -1.0f;
    this->unk11C = 0;

    if (arg1 == NULL) {
        D_0044D4E8->unk4 = 1;
    }
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", __5ScentP9ClassInfoP15SimObj_Universeis);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", _$_5Scent);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_00153EA8); // "Scent (actorID %d) failed to rayhit ground"

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_00154048);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_00154080);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_00154120);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_00154FC8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_001551D0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_00155240);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_00155248);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_00155550);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_00156B90);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_00156E48);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_00157078);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_00157110);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_00157130); // scent handler?

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_00157558);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_001575C0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_00157BC8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_00157C08);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_00157EC8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_00157EF0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_00158148);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_00158168);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_00158590);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_00158700);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_00158748);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_00158768);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_00158778);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_00158788);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_001587A8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_00158820);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_00158898); // explore challenge ?

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_00158AF0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_00158B88);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_00158BE8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_00158C08);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_00158C28);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_00158CC0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_00158D20);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_00158D40);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_00158DD8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_00158E38);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_00158ED0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_00158F30);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_00158F50);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_00158FE8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_00159048);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_001591E8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_00159208);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_001593A8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_001593C8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_001594A0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_00159548);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_00159620);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_001596C8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_00159980);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_001599D8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_00159DE0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Scent", D_003BB410);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Scent", D_003BB428);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Scent", D_003BB440);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_00159E38);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", __tf5Scent);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015A238);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015A258);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015A270);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015A290);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015A2B0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015A2D0); /* return a0->unk110 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015A2D8); /* return (float) a0->unk114 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015A2E0); /* return (float) a0->unk118 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015A2E8); /* return a0->unk120 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015A2F0); /* a0->unk120 = a1 */

ClassInfo* Scent::func_0015A2F8() {
    return D_0044D4E8;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015A300);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015A310);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015A330);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015A380);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015A3C0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015A420);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015A508);
