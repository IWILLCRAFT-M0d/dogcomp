#include "common.h"

#include "Dogs/PlayerDog.h"


#ifdef NON_MATCHING
extern ClassInfo* D_0044D398;
extern short D_00450A10;
extern short D_00450A18;
PlayerDog::PlayerDog(ClassInfo* arg0, SimObj_Universe* arg1, int arg2, short arg3) : Dog(arg0=0, arg1, arg2, arg3) {
    if (arg0 != 0) {
        D_0044D398 = arg0;
    }
    long128 qword;
    asm(
        "pextlw $3, $2, $2\n\t"
        "pextlw $3, $2, $3\n\t"
        : "=r"(qword)
    );
    this->unkB50 = qword;
    this->unkBB0 = -1;
    this->unkB34 = 0;
    this->unkB38 = 0;
    this->unkB40 = qword;
    this->unkB60 = 0;
    this->unkB64 = 0;
    this->unkBB8 = 0;
    if (arg0 == 0) {
        D_0044D398->unk4 = 1;
    }

    if (this->unk5C == D_00450A10) { // Gem
    func_0014EB88(this,2);
    func_0014EB88(this,3);
    func_0014EB88(this,4);
    func_0014EB88(this,5);
    func_0014EB88(this,8);
    func_0014EB88(this,23);
    func_0014EB88(this,27);
    func_0014EB88(this,28);
    func_0014EB88(this,29);
    func_0014EB88(this,1);
    func_0014EB88(this,24);
    func_0014EB88(this,25);
    func_0014EB88(this,7);
    func_0014EB88(this,6);
    func_0014EB88(this,31);
    func_0014EB88(this,32);
    }
    else if (this->unk5C == D_00450A18) { // ControllableDog
        func_0014EB88(this,2);
        func_0014EB88(this,3);
        func_0014EB88(this,4);
        func_0014EB88(this,5);
        func_0014EB88(this,8);
        func_0014EB88(this,6);
    }

}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/PlayerDog", __9PlayerDogP9ClassInfoP15SimObj_Universeis);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/PlayerDog", _$_9PlayerDog);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/PlayerDog", func_0014D740);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/PlayerDog", func_0014D7C0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/PlayerDog", func_0014D830); // player animation?

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/PlayerDog", func_0014D8A8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/PlayerDog", func_0014D968);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/PlayerDog", func_0014DA60);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/PlayerDog", D_003B4E18);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/PlayerDog", D_003B4E40);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/PlayerDog", D_003B4E70);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/PlayerDog", D_003B4EE0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/PlayerDog", func_0014DA68); // "Invalid RoverSays move ID in PlayerDog:: msg AddMove"

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/PlayerDog", func_0014DB48__9PlayerDog);
/*
void PlayerDog::func_0014DB48() {
    this->unkBB0 = -1;
}
*/
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/PlayerDog", func_0014DB58);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/PlayerDog", func_0014DB80);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/PlayerDog", func_0014DBA0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/PlayerDog", func_0014DBC0); // "IsMoveAvailableInCurrentStage: Unknown stage ID"

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/PlayerDog", func_0014DCB8__9PlayerDog);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/PlayerDog", func_0014DCF0__9PlayerDog);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/PlayerDog", func_0014DD20); // "Failed to advance slidable in PlayerDog.cpp"

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/PlayerDog", func_0014EB88);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/PlayerDog", func_0014EBA0); // "Could not find a doggy do sequence! Game is likely to crash now."

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/PlayerDog", func_0014EE70);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/PlayerDog", func_0014EE80);

#ifdef NON_MATCHING
extern ClassInfo* D_0044D3B0;
RoverSaysPuzzleGod::RoverSaysPuzzleGod(ClassInfo* arg1, SimObj_Universe* arg2, int arg3, short arg4) : WorldObject(arg1 = 0, arg2, arg3, arg4) {
    if (arg1 != 0) {
        D_0044D3B0 = arg1;
    }

    if (arg1 == 0) {
        D_0044D3B0->unk4 = 1;
    }
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/PlayerDog", __18RoverSaysPuzzleGodP9ClassInfoP15SimObj_Universeis);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/PlayerDog", func_0014F188); // "Unknown extra in RoverSaysPuzzleGod::Extra!"

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/PlayerDog", func_0014F1F8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/PlayerDog", D_003B4FF0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/PlayerDog", D_003B5018);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/PlayerDog", D_003B5038);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/PlayerDog", D_003B5050);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/PlayerDog", D_003B5068);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/PlayerDog", D_003B5080);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/PlayerDog", D_003B5098);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/PlayerDog", D_003B62B8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/PlayerDog", D_003B62F8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/PlayerDog", D_003B6310);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/PlayerDog", D_003B6328);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/PlayerDog", D_003B65E0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/PlayerDog", D_003B65F8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/PlayerDog", D_003B6620);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/PlayerDog", D_003B6648);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/PlayerDog", D_003B6668);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/PlayerDog", D_003B6680);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/PlayerDog", D_003B6698);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/PlayerDog", D_003B66B0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/PlayerDog", D_003B66C8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/PlayerDog", D_003B78E8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/PlayerDog", D_003B7928);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/PlayerDog", D_003B7940);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/PlayerDog", D_003B7958);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/PlayerDog", func_0014F250);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/PlayerDog", func_0014F498);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/PlayerDog", __tf9PlayerDog);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/PlayerDog", func_0014F518); /* return D_0044D398 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/PlayerDog", _$_18RoverSaysPuzzleGod);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/PlayerDog", __tf18RoverSaysPuzzleGod);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/PlayerDog", func_0014F618);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/PlayerDog", func_0014F620);
