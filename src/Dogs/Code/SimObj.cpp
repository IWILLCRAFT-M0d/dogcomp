#include "common.h"
#include <stdio.h>
#include "debug.h"

#include "Dogs/WorldObj.h"
#include "unk.h"
#include <string.h>

#include "Dogs/SimObj.h"


extern ClassInfo* D_0044D7B8;
extern ClassInfo* D_0044D7D0;

// beginning of SimObj.cpp
#ifdef NON_MATCHING
Status SimObj_InternalInitialise(void) {
    return Status(0xFFFFFFFF, "c:/coding/dogs/Code/Common/SimObj.cpp", 306);
}

#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", SimObj_InternalInitialise__Fv);
#endif

void SimObj_InternalFinalise(void) {
    return;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", SimObj_Initialise__Fv);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", SimObj_Finalise__Fv);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00161108); // virtual

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00161178); // SimObj_RayHitReceiverIgnore2 virtual

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001611D0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001611E0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001612D8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00161320);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00161368);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001613B0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00161420);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001614E8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00161688); /* SimObj_HitReceiver */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001616A8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001617E8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001618F8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001619F0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00161B90);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00161BF0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00161C50);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00161CF8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00161D78);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00161DF0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00161F40);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001622D8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001623C8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001624B8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001625A8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001626A8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001627F8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00162880); /* SimObj_UniverseLandscape */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", _$_24SimObj_UniverseLandscape);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00162A20); // virtual

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00162AF0); // SimObj_UniverseLandscape virtual

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00162BB8); // SimObj_UniverseLandscape virtual

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00162C80);

void SimObj_UniverseLandscape::func_00162CE8() {
    return;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00162CF0);

#ifdef NON_MATCHING
SimObj_Universe::SimObj_Universe() {
    this->unk2C = 0;
    this->unk38 = 0;
    this->unk28 = 0;
    //this->unk24
    this->unk30 = 0;
    //this->unk34
    this->unk44 = 0;
    this->unk50 = 0;
    this->unk40 = 0;
    //this->unk3C
    this->unk48 = 0;
    //this->unk4C

    //this->unkB0
    this->unk58 = 0;
    this->unk60 = 0;
    this->unk68 = 0;
    this->unkA4 = 0;
    //this->unk6C
    //this->unk54
    this->unk5C = 254;
    this->unk64 = 1.0f;
    //this->unk90

    //this->unk70
    this->unkA8 = 64;

    //this->unk74

    //this->unk7C
    this->unk78 = 0;

}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", __15SimObj_Universe);
#endif
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", _$_15SimObj_Universe);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00163270);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SimObj", D_003BEB50); /* "c:/coding/dogs/Code/Common/SimObj.cpp" */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00163370);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001633E0); // if stubbed, actors do not animate (frozen in place)

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00163418); /* func__00163418(SimObj_Universe*) */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001634F8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00163558);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001635E8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00163618);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00163650);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00163670);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001636A0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001637D0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00163828);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001638C8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00163A80);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00163CA0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00163DB8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00163EB0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00164008);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001641C0); /* SimObj_Base? */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001643E0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001644C0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001645C0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00164628);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00164730);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00164798);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00164838);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SimObj", D_003BEC28); /* "< Y:%3.0f D:%3.0f R:%3.0f >" */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00164880); // virtual

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00164AD8); // SimObj_Base member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00164B08); // "Trying to restore persist data for an object that doesn\'t have any" // SimObj_Base virtual

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00164BC8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00164C40);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00164D58);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00164D78);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00164D98);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00164DB8); // creature/script header set??

void func_00164E40(void) { // SimObj_Base member?
    return;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00164E48); // objects update function?

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00164EB8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00164EC8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00164F18);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00164FB0); // set actor state?

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00165050);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001650D8);

#ifdef NON_MATCHING

SimObject::SimObject(ClassInfo* arg1, SimObj_Universe* arg2, int arg3, short arg4) : SimObj_Base(arg1 = 0, arg2, arg3, arg4) {
    if (arg1 != 0) {
        D_0044D7B8 = arg1;
    }

    //
    this->unkB0 = 0;
    //
    this->unkC0 = -1;
    //
    this->unkD4 = 2e+06f;
    //unkC4
    this->unkDC = 0xFFFF;
    //
    this->unkF8 = 0.0f;
    this->unkFC = 1.0f;
    this->unkC8 = 0;
    this->unkCC = 0;
    this->unkD0 = 2e+06f;
    this->unkD8 = 0;
    this->unkF0 = 0;
    //
    this->unkF4 = false;
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", __9SimObjectP9ClassInfoP15SimObj_Universeis);
#endif
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", _$_9SimObject);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001653A8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001653C8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00165448);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00165520); // "Expanding collidables table will cause memory fragmentation!\n"

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001656A8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00165748);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001657B8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001657C0); // camera thing?

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00165830); /* return; */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00165838);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00165988); /* return; */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00165990);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00165A20); // texture thing (jake collar/render fade out of distance?)

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00165B20);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00165B50);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00165B80);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00165BB0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00165BD8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00165C68);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00165D30);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00165DC0); // "Objects whose hit check radius is FLT_MAX should override this method!"

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00165EB0); // "Objects whose hit check radius is FLT_MAX should override this method!"

#ifdef NON_MATCHING

SimObj_ObjectWithMomentum::SimObj_ObjectWithMomentum(ClassInfo* arg1, SimObj_Universe* arg2, int arg3, short arg4) : SimObject(arg1 = 0, arg2, arg3, arg4) {
    if (arg1 != 0) {
        D_0044D7D0 = arg1;
    }

    //
    this->unk154 = 3700.0f;
    this->unk144 = 300.0f;
    this->unk148 = 600.0f;
    this->unk14C = 1500.0f;
    this->unk150 = 2500.0f;
    this->unk158 = 4700.0f;
    this->unk140 = 0.0f;
    this->unk15C = 0.0f;
    this->unk164 = -1.0f;
    this->unk160 = 0;
    //
    this->unk1D4 = 1.0f;
    //
    this->unk1D0 = 1.0f;

}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", __25SimObj_ObjectWithMomentumP9ClassInfoP15SimObj_Universeis);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001661E0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00166200);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SimObj", D_003BED08); /* "Objects whose hit check radius is FLT_MAX should override this method!" */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00166458);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001666D8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00166828);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00166910);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00166938);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00166DE8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001673D8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00167900);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001679C0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00167A50);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00167AC8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00167B30);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SimObj", _vt$32SimObj_ObjectTestHitPrimReceiver);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SimObj", _vt$11YDRRenderer);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SimObj", D_003BEDE0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SimObj", D_003BEDF8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SimObj", D_003BEE10);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SimObj", D_003BEE28);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SimObj", D_003BF010);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SimObj", D_003BF028);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SimObj", D_003BF040);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SimObj", D_003BF228);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SimObj", D_003BF240);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SimObj", D_003BF258);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SimObj", D_003BF400);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SimObj", D_003BF418);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SimObj", D_003BF430);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SimObj", D_003BF448);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SimObj", _vt$18SimObj_HitReceiver);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SimObj", _vt$28SimObj_RayHitReceiverIgnore2);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SimObj", D_003BF560);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SimObj", _vt$10DebugID_IF);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00167B78);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SimObj", D_003BF610); /* "13GenericObject" */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SimObj", D_003BF620); /* "10DebugID_IF" */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SimObj", D_003BF630); /* "16SimObj_HitFilter" */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SimObj", D_003BF648); /* "28SimObj_RayHitReceiverIgnore2" */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SimObj", D_003BF668); /* "18SimObj_HitReceiver" */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SimObj", D_003BF680); /* "11SimObj_Base" */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SimObj", D_003BF690);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SimObj", D_003BF6A8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", __tf9SimObject);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001680A0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001680C8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168108);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168138);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", __tf10DebugID_IF);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001681B0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001681F0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168210);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168260);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168290);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", __tf11SimObj_Base);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001683B0); /* a0->unk3C = a1 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001683B8); /* return 0; */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001683C0); /* return a0->unk4C */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001683C8); /* return a0->unk48 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001683D0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168410); /* return; */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168418); /* a0->unk38 = a1 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168420);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168428); /* return; */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168430);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168440); /* return (short) a0->unk5C */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168448); /* return a0->unk54 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168450); /* return 0; */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168458); /* return 0; */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168460); /* return 0; */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168468); /* return 0; */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168470); /* return 0; */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168478); /* return 0; */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168480); /* return 0; */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168488); /* return 0; */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168490); /* return 0; */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168498); /* return 0; */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001684A0); /* return 0; */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001684A8); /* return 0; */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001684B0); /* return 0; */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001684B8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001684D0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001684E0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001684F8); /* return; */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168500); /* return; */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168508);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168538); // SimObj_Base virtual

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168558); // SimObj_Base virtual

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", __tf15SimObj_Universe);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001685B0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001685B8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001685C0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001685C8); /* return (float) a0->unkD4 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001685D0); /* return a0->unkC8 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001685D8); /* a0->unkC8 = a1 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001685E0); /* return a0->unkCC */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001685E8); /* a0->unkCC = a1 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001685F0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168600);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168610); /* return; */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168618);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168620); /* return; */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168628); /* return; */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168630);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168648); /* return; */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168650);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168658); /* return 0.0f */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168668);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168670); /* return 0.0f */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168680); // virtual

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168688);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168690); /* return 0; */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168698); /* return 0; */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001686A0); /* return (float) a0->unkF4 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001686A8); /* return (float) a0->unkFC */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001686B0); // SimObj member
/* return D_0044D7B8; */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", _$_25SimObj_ObjectWithMomentum);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", __tf25SimObj_ObjectWithMomentum);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168758);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168760);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168768); /* a0->unk160 = f12 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168770); /* a0->unk164 = f12 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168778);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168780);
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168788);
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168790);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168798);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001687A0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001687A8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001687D0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001687F8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168820);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168828);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168840);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168858);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168870);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168898);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001688C0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001688E8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168908);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168948);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168968);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168970);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168978);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168980);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001689A8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001689D0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_001689F8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168A00);
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168A18);
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168A30);
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168A48);
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168A70);
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168A98);
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168AC0);
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168AE0);
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168B20);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168B40);

int func_00168B60(void) { // virtual
    return 1;
}

void func_00168B68(void) {
    return;
}

void func_00168B70(void) {
    return;
}

void func_00168B78(void) {
    return;
}

void func_00168B80(void) {
    return;
}

ClassInfo* SimObj_ObjectWithMomentum::func_00168B88() {
    return D_0044D7D0;
}

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SimObj", D_003BF6D0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SimObj", D_003BF6E0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SimObj", D_003BF700);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", __tf24SimObj_UniverseLandscape);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168C38); // SimObj_UniverseLandscape virtual

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168C40);  // floor collision?
/* return D_0044D7D4 */

int func_00168C50(void) { // SimObj_UniverseLandscape virtual
    return 1;
}

int func_00168C58(void) { // SimObj_UniverseLandscape  virtual
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168C60); // SimObj_UniverseLandscape virtual

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SimObj", D_003BF730);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", __tf11YDRRenderer);

#ifdef NON_MATCHING
void YDRRenderer::func_00168CB8(char* str) {
    sprintf(str, "< Y:%3.0f D:%3.0f R:%3.0f >");
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168CB8__11YDRRendererPc);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", __tf32SimObj_ObjectTestHitPrimReceiver);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168E20); // SimObj_ObjectTesthitPrimReceiver virtual

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", __tft9Interface1Z10DebugID_IF);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SimObj", D_003BF798); /* "18SimObj_ChildHolder" */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", __tf11Location_IF);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SimObj", D_003BF7C0); /* "11Movement_IF" */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SimObj", D_003BF7D0); /* "t9Interface1Z11Location_IF" */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SimObj", D_003BF7F0); /* "t9Interface1Z11Movement_IF" */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", __tf12TextRenderer);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168F28); /* __tf12LiveEditable */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00168F68); /* __tf21SimObj_RayHitReceiver */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", __tf22SimObj_HitPrimReceiver);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", __tf19CameraSpecialHit_IF);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", __tf18SimObj_ChildHolder);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", __tf11Movement_IF);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", __tft9Interface1Z11Location_IF);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", __tft9Interface1Z11Movement_IF);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", __tft9Interface1Z19CameraSpecialHit_IF);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SimObj", func_00169198);
