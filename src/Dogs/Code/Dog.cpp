#include "common.h"

#include "Dogs/Dog.h"

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_0012CD30); // called by 00136E80

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_0012CEC8); // called by 00136E80

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_0012D230); // called by 001324B0

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_0012D468); // called by 00136E80

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Dog", D_003A6660);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Dog", D_003A6688);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Dog", D_003A66B8);

#ifdef NON_MATCHING
Dog::Dog(ClassInfo* arg1, SimObj_Universe* arg2, int arg3, short arg4) : WorldObject(arg1 = 0, arg2, arg3, arg4) {
    if (arg1 != NULL) {
        s_classInfo = arg1;
    }
    asm volatile("
    vmove.xyzw $vf4, $vf0
    vmr32.xyzw $vf3, $vf4
    vmr32.xyzw $vf2, $vf3
    vmr32.xyzw $vf1, $vf2
    ");
    this->unk838 = 3.0f;
    this->unk83C = 0.03f;
    this->unk840 = 0.2f;
    this->unk844 = 2000.0f;
    this->unk848 = 0.01f;
    this->unk84C = 2.5f;
    this->unk850 = 150.0f;
    this->unk854 = 15000.0f;
    this->unk858 = 10000.0f;


    this->unk868 = 100.0f;

    if (arg1 == NULL) {
        s_classInfo->unk4 = 1;
    }
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", __3DogP9ClassInfoP15SimObj_Universeis);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", _$_3Dog);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_0012DFE8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_0012E050); // Dog virtual; footprints

float Dog::func_0012E240() {
    return 30.0f;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_0012E250); // called by 0012E270

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_0012E270); // Dog member

void Dog::func_0012E290(int arg1) {
    if (arg1 < 33) {
    func_00182AF0(arg1);
    }
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_0012E2B8__3Dog);

#ifdef NON_MATCHING
void Dog::func_0012E8E0() {
    //s32 sp10;
    //? sp20;

    if (this->unk644 == 1) {
        this->unk644 = 0;
        delete this->unk670;
        this->unk670 = 0;
        this->unk5E4 = this->unk5E0;
        //sp10 = -1;
        //func_00206C18(&sp20, sp, &sp10, this->unk58);
    }
    //func_002606D0(this + 0x710, this + 0x60, this + 0x110);
    //func_00186BD0(this);
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_0012E8E0__3Dog); // jumping function?
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_0012E960__3Dog); // called when landing from a jump?

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_0012E998__3Dog); // movement/ world position

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_0012E9C8__3Dogf); // animation function

#ifdef NON_MATCHING
void Dog::func_0012EB78(float fparg1) {
    //func_00260590
    func_001861B8();
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_0012EB78__3Dogf); // dog mesh animation?
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_0012EBC0); // "Dog has no hitcheck radius!"

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_0012ED58); /* DogPushOffHitPrimReceiver */

#ifdef NON_MATCHING
DogHitPrimReceiver::DogHitPrimReceiver(Dog* dog) : SimObj_HitReceiver(dog,1,0) {

}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", __18DogHitPrimReceiverP3Dog);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", _$_18DogHitPrimReceiver);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_001318C8); // collision pushback

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_00131970); // unreferenced

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_00131AD8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_00131B40); // DogHitPrimReceiver member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_00131B80); // DogHitPrimReceiver member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_00131C40); // collision function

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_00131C60);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_001324B0__3Dogf); // animation/movement update?

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_00134550); // handles movement/world positon

#ifdef NON_MATCHING
void Dog::func_00134650() {
    //00134550
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_00134650__3Dog); // Dog member; physics?
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_00134670);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_00134688); // Dog member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_00134788); // Dog member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_001349B8); // Dog member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_00134B10__3Dog); // dog rendering function

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_00135DB0); // Dog member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_00135DD0); // Dog::ShapeInstance virtual

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_00135DF0); // Dog virtual; used for walking animations

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_00135E08); // Dog virtual; if stubbed objects cannot be dropped or thrown
// f12 is throw strength?

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_001364A0); // unreferenced

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_001364F0__3Dog);
/*
void Dog::func_001364F0() {
    this->unkB0C = 0;
}
*/
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_001364F8); // Dog member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_00136520); // Dog member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_00136558__3Dogf);
/*
void Dog::func_00136558(float arg) {
    this->unk838 = arg;
}
*/
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_00136560); // virtual

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_00136578__3Dog);
/*
int Dog::func_00136578() {
    return this->unkB0C.i;
}
*/
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_00136580__3Dog);
/*
int Dog::func_00136580() {
    return this->unk6C0;
}
*/

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_00136588__3Dog);
/*
int Dog::func_00136588() {
    return this->unk674;
}
*/

#ifdef NON_MATCHING
bool Dog::GetSwimmingState() {
    return this->m_isSwimming;
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", GetSwimmingState__3Dog);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_00136598__3Dog);
/*
int Dog::func_00136598() {
    return this->unk85C;
}
*/
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_001365A0__3Dogf);
/*
int Dog::func_001365A0(float arg) {
    this->unk83C = arg;
    return 0;
}
*/
#ifdef NON_MATCHING
// How many secs to show sniff bone status
int Dog::func_001365B0() {
    this->unk684 = 5.0f;
    return 0;
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_001365B0__3Dog);
#endif

#ifdef NON_MATCHING
void Dog::func_001365C8(float arg) {
    this->unk844 = arg;
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_001365C8__3Dogf);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_001365D0__3Dogf); // Dog virtual; set dog mien?

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_001365F8); // Dog member; mien function

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_00136628__3Dogf);
/*
int Dog::func_00136628(float arg) {
    this->unk848 = arg;
    return 0;
}
*/
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_00136638__3Dogf);
/*
// set Turnflex rate?
int Dog::func_00136638(float arg) {
    this->unk84C = arg;
    return 0;
}
*/
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_00136648__3Dogf);
/*
int Dog::func_00136648(float arg) {
    this->unk850 = arg;
    return 0;
}
*/
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_00136658__3Dogf);
/*
int Dog::func_00136658(float arg) {
    this->unk854 = arg;
    return 0;
}
*/
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_00136668__3Dogf);
/*
int Dog::func_00136668(float arg) {
    this->unk858 = arg;
    return 0;
}
*/
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_00136678__3Dog);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_00136780__3Dogf); // virtual
/*
int Dog::func_00136780(float arg) {
    func_00134670
    return 0;
}
*/
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_001367A0); // virtual
/*
int Dog::func_001367A0(void*, int arg2) {
    if (arg2 != 0) {
        this->unkAF0 = 2.0f;
    }
    else {
        this->unkAF0 = -2.0f;
    }
    return 0;
}
*/
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_001367C8); // virtual

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_00136838__3Dog);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_00136878); // called when jumping

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_00136D60);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_00136E80); // jump function

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_00138FB8); // called when jumping

void func_00139048(void) { // Dog member
    return;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_00139050__3Dog); // return qword unk5F0

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_00139058); // Dog virtual

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_001390F8); // Dog member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_00139190);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_001397E0);

int Dog::func_00139858() {
    return 0x64;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_00139860);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_001398B8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_00139928);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_00139B60);

// vtables
INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Dog", D_003A6820); /* _vt$16HitPrimDisplayer */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Dog", D_003A6838);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Dog", D_003A6850);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Dog", D_003A6870);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Dog", D_003A6888);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Dog", D_003A68A8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Dog", D_003A68C8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Dog", D_003A68E8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Dog", D_003A6918);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Dog", D_003A6930);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Dog", D_003A6958);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Dog", D_003A6980);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Dog", D_003A69A0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Dog", D_003A69B8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Dog", D_003A69D0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Dog", D_003A69E8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Dog", D_003A6A00);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Dog", D_003A7C20);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Dog", D_003A7C60);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Dog", D_003A7C78);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Dog", D_003A7C90);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Dog", D_003A7F48);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Dog", D_003A7F60);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_00139DE8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_00139E28);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_00139E58);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_00139E80);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_00139ED0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_00139F20);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_00139F78);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_00139FC8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", __tf7Jump_IF);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", __tf23AnimationMovedObject_IF);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", __tf3Dog);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_0013A168); // unreferenced

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_0013A1E8); // Dog virtual

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_0013A1F0); /* return &a0->unk6D0 */

#ifdef NON_MATCHING
float Dog::func_0013A1F8() {
    return this->unk5E4;
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_0013A1F8__3Dog); /* return (float) a0->unk5E4 */
#endif

ClassInfo* Dog::func_0013A200() {
    return s_classInfo;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_0013A208); // virtual

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Dog", D_003A8058); /* "7Jump_IF" */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Dog", D_003A8068); /* "23AnimationMovedObject_IF" */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Dog", D_003A8088);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", __tf14TransientSound);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_0013A278);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", __tf23DogSphereObjHitReceiver);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_0013A308);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", __tf22DogAntiSnagHitReceiver);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_0013A398);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", __tf25DogPushOffHitPrimReceiver);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_0013A4C0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_0013A528);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Dog", D_003A8118);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", __tf18DogHitPrimReceiver);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_0013A718); /* return a0->unk14 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", __tf16HitPrimDisplayer);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_0013A770);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Dog", D_003A8158);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Dog", D_003A8170);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_0013A7A8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_0013A7F8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", __tft9Interface1Z7Jump_IF);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", __tft9Interface1Z23AnimationMovedObject_IF);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_0013A8B8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Dog", func_0013A8D8);
