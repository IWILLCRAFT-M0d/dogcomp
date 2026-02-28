#include "common.h"
#include "debug.h"

#include "Dogs/WorldObj.h"
#include "unk.h"
#include <string.h>

// Beginning of WorldObj
INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/WorldObj", D_003CFBF8); /* "C:/Coding/Dogs/Code/Common/SimObj.h" */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/WorldObj", D_003CFC20); /* "_actorID >= -1 && _actorID <= m_actorTblSize" */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/WorldObj", D_003CFC50); /* "_actorID >= -1 && _actorID < m_actorTblSize" */

#ifdef NON_MATCHING
Status WorldObj_InternalInitialise(void) {
    return Status(0xFFFFFFFF, "c:/coding/dogs/Code/Common/WorldObj.cpp", 150);
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", WorldObj_InternalInitialise__Fv);
#endif


void WorldObj_InternalFinalise() {
    return;
}

#ifdef NON_MATCHING

StdInit_ModuleDescription WorldObj_StdInit_Description = {
    0,
    &WorldObj_StdInit_UsedModules
};


void * const WorldObj_StdInit_UsedModules[] = {
    &WorldObj_InternalInitialise,
    &WorldObj_InternalFinalise,
	&SimObj_Initialise,
	&SimObj_Finalise,
    0,
    0,
};

Status WorldObj_Initialise(void) {
    return StdInit_InitialisationSequence(&WorldObj_StdInit_Description);
}

void WorldObj_Finalise(void) {
    StdInit_FinalisationSequence(&WorldObj_StdInit_Description);
}

#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", WorldObj_Initialise__Fv);
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", WorldObj_Finalise__Fv);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_001819E8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00181A10);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00181A30);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00181B60);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", __11WorldObjectP9ClassInfoPvis); /* worldobject ? */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", _$_11WorldObject);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/WorldObj", D_003CFD10);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00182380); // "Trying to activate a world object that already has a script. This usually means that the world obj has already been activated. ActorID = %d"

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_001828D8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00182A70);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00182AD0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00182AF0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00182D90);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00182EC0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00182FF8); // "SetShape called but there are still animations running!"

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_001833E8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00183428);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00183450);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00183AC8); // rendering opacity ?

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00183B68);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00184220);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00184488);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/WorldObj", D_003D00D8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00184738);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00184A90);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00184E28);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00184E48);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00184E68);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00184F58);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00185130);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00185200);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00185280);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_001853C0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00185510);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00185518);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00185550);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00185680);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_001857E8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00185878);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00185CE0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00185DD8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_001861B8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00186398);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_001866E8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00186728);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00186748);

int func_00186788() {
    return -1;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00186790);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00186798);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00186800);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00186808);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00186918);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00186998);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00186A90);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00186B90);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00186BB0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00186BD0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00186BF0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00186F80);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_001870D8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00187288);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_001872C0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_001872F8); /* return this->unkDC */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00187300);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00187338);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00187390);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_001873B8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_001873D8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00187408);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00187438);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00187468);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00187478);

// important for scripts?
void func_00187490(s_func_00187490* arg0, void* dest, int arg2, size_t count) {
    if (arg0->unk0 == 1) {
        memcpy(dest, arg0->unk8, count);
    }
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_001874C8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00187518); // "Trying to drop an object from an invalid holding point"

int func_00187628() {
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00187630); // pickup object function?

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00187828);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_001878F8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_001879A8);

int func_00187EC8(int arg0, int arg1) {
    return (arg0 >= arg1) ? arg1 : arg0;
}


INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/WorldObj", _vt$21PersistentDataUpdater);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/WorldObj", D_003D0278);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/WorldObj", D_003D02A0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/WorldObj", D_003D02C0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/WorldObj", D_003D02D8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/WorldObj", D_003D02F0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/WorldObj", D_003D0308);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/WorldObj", D_003D0320);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/WorldObj", D_003D1540);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/WorldObj", D_003D1580);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/WorldObj", D_003D1598);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/WorldObj", _vt$11WorldObject);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00187ED8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00188080);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_001880A8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_001880D0); /* __tf21SimObj_RayHitReceiver */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", __tf11WorldObject);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_001881B8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00188238);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00188270);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_001882A8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00188308);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00188340);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_001883A0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_001883A8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_001883B0); /* return a0->unk314 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_001883B8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_001883D0); /* return a0->unk338 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_001883D8); /* return a0->unk33C */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_001883E0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_001883F0);

int func_00188400(void) {
    return 0;
}

void func_00188408(void) {
    return;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00188410);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00188448);

int func_00188450(void) {
    return 0;
}

int func_00188458(void){
    return 0;
}

int func_00188460(void) {
    return 0;
}

int func_00188468(void) {
    return 0;
}

int func_00188470(void) {
    return 0;
}

int func_00188478(void) {
    return 0;
}
int func_00188480(void) {
    return 0;
}
int func_00188488(void) {
    return 0;
}

float func_00188490(void) {
    return 0.0f;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_001884A0); /* return a0->unk5A8 */

#ifdef NON_MATCHING
void WorldObject::func_001884A8() {
    this->unk5AC = this->unk5AC + 1;
}
void WorldObject::func_001884B8() {
    this->unk5AC = this->unk5AC - 1;
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_001884A8__11WorldObject); /* a0->unk5AC = a0->unk5AC + 1 */
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_001884B8__11WorldObject); /* a0-unk5AC = a0->unk5AC - 1 */
#endif


INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_001884C8); /* return a0->unk494 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_001884D0); /* return a0->unk494 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_001884D8); /* return a0->unk498 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_001884E0); /* return a0->unk544 */

int func_001884E8(void) {
     return 0;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_001884F0); /* return a0->unk48 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_001884F8); /* return a0->unk5B0 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00188500); /* return a0->unk5B8 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00188508); /* return a0->unk5BC */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00188510); /* return D_0044DCA0 */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/WorldObj", D_003D18B8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", __tf21PersistentDataUpdater);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_00188568);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", __tf18AnimPosProvider_IF);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", __tf22BoneManagerProvider_IF);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", __tf18AnimVarProvider_IF);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", __tf17WalkerProvider_IF);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", __tf20WalkingFootRayHit_IF);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", __tft16Tree34Enumerator1Z11SimObj_Base);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", __tft9Interface1Z18AnimPosProvider_IF);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", __tft9Interface1Z22BoneManagerProvider_IF);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", __tft9Interface1Z18AnimVarProvider_IF);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", __tft9Interface1Z17WalkerProvider_IF);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", __tft9Interface1Z20WalkingFootRayHit_IF);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_001888A0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WorldObj", func_001888C0);


