#include "common.h"

#include "Dogs/TugOfWar.h"

extern ClassInfo* D_0044DB00;

#ifdef NON_MATCHING
TugOfWarGod::TugOfWarGod(ClassInfo* arg1, SimObj_Universe* arg2, int arg3, short arg4) : WorldObject(arg1 = 0, arg2, arg3, arg4) {
    if (arg1 != 0) {
        D_0044DB00 = arg1;
    }

    this->unk5F0 = 5;
    this->unk604 = 13.5f;
    this->unk654 = 0.025f;
    this->unk5F4 = 0.0f;
    this->unk5F8 = 0.0f;
    this->unk5FC = 0.0f;
    this->unk600 = 0;
    this->unk608 = 0;
    this->unk60C = 0;
    this->unk610 = 0;
    this->unk618 = 0;
    this->unk61C = 0;
    this->unk620 = 0;
    this->unk624 = 0;
    this->unk628 = 0;
    this->unk62C = 0;
    this->unk630 = 0;
    this->unk634 = 0;
    this->unk63C = 0;
    this->unk640 = 0;
    this->unk644 = 0;
    this->unk64C = 0;
    this->unk658 = 10;
    this->unk65C = 1;
    this->unk660 = 0;
    this->unk664 = 0;
    this->unk668 = 0;
    //
    this->unk66C = 0;

}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/TugOfWar", __11TugOfWarGodP9ClassInfoP15SimObj_Universeis);
#endif
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/TugOfWar", _$_11TugOfWarGod);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/TugOfWar", func_001789D0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/TugOfWar", func_00178D38);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/TugOfWar", func_00178D58);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/TugOfWar", func_00178DA0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/TugOfWar", func_00179310);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/TugOfWar", func_001794A0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/TugOfWar", D_003CAC48); /* "C:/Coding/Dogs/Code/Common/SimObj.h" */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/TugOfWar", D_003CAC70); /* "_actorID >= -1 && _actorID <= m_actorTblSize" */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/TugOfWar", D_003CACA0); /* "_actorID >= -1 && _actorID < m_actorTblSize" */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/TugOfWar", D_003CACF0); /* "NavGraph" */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/TugOfWar", func_001798B8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/TugOfWar", func_00179AE0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/TugOfWar", func_0017A110);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/TugOfWar", func_0017AE20);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/TugOfWar", func_0017AF88);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/TugOfWar", func_0017BDE8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/TugOfWar", func_0017BE28); // "Failed to get Gem and/or controllable dog in TugOfWarReset!"

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/TugOfWar", func_0017C188); // "TugOfWarRopeEnd (actorID %d) failed to rayhit ground"

#ifdef NON_MATCHING

void TugOfWarGod::func_0017C218() {
    if (this->unk5F0 == 2) {
        this->unk5F0 = 3;
    }
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/TugOfWar", func_0017C218__11TugOfWarGod);
#endif

#ifdef NON_MATCHING

void TugOfWarGod::func_0017C238() {
    this->unk5F0 = 4;
}

#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/TugOfWar", func_0017C238__11TugOfWarGod);
#endif

#ifdef NON_MATCHING

void TugOfWarGod::func_0017C248() {
    this->unk5F0 = 4;
}

#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/TugOfWar", func_0017C248__11TugOfWarGod);
#endif


INCLUDE_ASM("asm/nonmatchings/Dogs/Code/TugOfWar", func_0017C258);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/TugOfWar", func_0017C2C8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/TugOfWar", func_0017C398);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/TugOfWar", func_0017C538); // "TugOfWarGod rope particle failed to rayhit ground"

extern ClassInfo* D_0044DB08;
#ifdef NON_MATCHING
TugOfWarRopeEnd::TugOfWarRopeEnd(ClassInfo* arg1, SimObj_Universe* arg2, int arg3, short arg4) : WorldObject(arg1 = 0, arg2, arg3, arg4) {
    if (arg1 != 0) {
        D_0044DB08 = arg1;
    }

    //unk5C4
    //
    this->unk5C0 = 0;
    this->unk5C8 = 0;
    this->unk5E0 = 0;

    if (arg1 == NULL) {
        D_0044DB08->unk4 = 1;
    }
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/TugOfWar", __15TugOfWarRopeEndP9ClassInfoP15SimObj_Universeis);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/TugOfWar", func_0017C7F8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/TugOfWar", D_003CAF90); /* "TugOfWarGod" */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/TugOfWar", func_0017C818); // "TugOfWarRopeEnd (actorID %d) failed to rayhit ground"

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/TugOfWar", func_0017CC98);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/TugOfWar", func_0017CCB8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/TugOfWar", D_003CAFD8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/TugOfWar", D_003CB000);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/TugOfWar", D_003CB020);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/TugOfWar", D_003CB038);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/TugOfWar", D_003CB050);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/TugOfWar", D_003CB068);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/TugOfWar", D_003CB080);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/TugOfWar", D_003CC2A0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/TugOfWar", D_003CC2E0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/TugOfWar", D_003CC2F8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/TugOfWar", D_003CC310);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/TugOfWar", D_003CC5C8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/TugOfWar", D_003CC5F0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/TugOfWar", D_003CC610);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/TugOfWar", D_003CC628);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/TugOfWar", D_003CC640);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/TugOfWar", D_003CC658);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/TugOfWar", D_003CC670);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/TugOfWar", D_003CD890);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/TugOfWar", D_003CD8D0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/TugOfWar", D_003CD8E8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/TugOfWar", D_003CD900);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/TugOfWar", func_0017CCD8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/TugOfWar", func_0017D0D8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/TugOfWar", func_0017D0E0); /* (float) a0->unk4 = f12 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/TugOfWar", func_0017D0E8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/TugOfWar", __tf11TugOfWarGod);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/TugOfWar", func_0017D168); /* return a0->unk634 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/TugOfWar", func_0017D170); /* return (float) a0->unk604 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/TugOfWar", func_0017D178);

ClassInfo* TugOfWarGod::func_0017D1F8(){
    return D_0044DB00;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/TugOfWar", _$_15TugOfWarRopeEnd);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/TugOfWar", __tf15TugOfWarRopeEnd);

ClassInfo* TugOfWarRopeEnd::func_0017D2F8() {
    return D_0044DB08;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/TugOfWar", func_0017D300);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/TugOfWar", func_0017D320);
