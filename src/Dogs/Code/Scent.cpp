#include "common.h"

#include "Dogs/Scent.h"

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
extern ClassInfo* D_0044D4E8;
Scent::Scent(ClassInfo* arg1, SimObj_Universe* arg2, int arg3, short arg4) : SimObject(arg1 = 0, arg2, arg3, arg4) {

    this->unk118 = -1.0f;
    this->unk120 = -1;
    this->unk114 = -1.0f;
    this->unk11C = 0;

    if (arg1 == 0) {
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

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015A2D0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015A2D8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015A2E0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015A2E8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015A2F0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015A2F8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015A300);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015A310);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015A330);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015A380);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015A3C0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015A420);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015A508);

// split? (ScentMarkingGame.cpp?)

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015A528); /* ScentMarkingGameNode::ScentMarkingGameNode */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Scent", D_003BB728);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Scent", D_003BB750);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Scent", D_003BB780);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Scent", D_003BB7C0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015A5B8); // "ScentMarkingGameNode (actorID %d) failed to rayhit ground"

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015A8D8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015A970); /* ScentMarkingGameGod::ScentMarkingGameGod */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015AB78);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015ACD0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015AD30);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Scent", D_003BB840); /* "ScentMarkingGameGod" */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015AEE8); // "Excessive links to node %d (from node %d)"

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015B090);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015B2D8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015B6D8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015CCE0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015CD30);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015CE38);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015D188);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015D228);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015D508); // "Attempting to clean up scent marking game whilst in progress. Not so smart."

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015D670);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015EF90);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015F140);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015F180);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015F1C8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015F210);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015F2C0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015F370);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015F4D0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015F508);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015F5A0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015F600);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015F670);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015F828);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015F838);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015F8A8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015FA18);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015FAB0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015FB10);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015FB30);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015FB50);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015FBE8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015FC48);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015FC68);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015FD00);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015FD60);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015FDF8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015FE58);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015FE78);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015FF10);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Scent", D_003BB988);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Scent", D_003BB9A0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Scent", D_003BB9C8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Scent", D_003BB9E8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Scent", D_003BBA00);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Scent", D_003BBA18);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Scent", D_003BBA30);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Scent", D_003BBA48);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Scent", D_003BCC68);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Scent", D_003BCCA8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Scent", D_003BCCC0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Scent", D_003BCCD8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Scent", D_003BCF90);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Scent", D_003BCFA8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Scent", D_003BCFC0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_0015FF70);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_001601F8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", __tf20ScentMarkingGameNode);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_00160290);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", __tf19ScentMarkingGameGod);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_001602F8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Scent", D_003BD1D0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", __tf28ScentMarkingGameGodInterface);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", __tft9Interface1Z28ScentMarkingGameGodInterface);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_00160390);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Scent", func_001603B0);

