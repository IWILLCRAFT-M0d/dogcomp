#ifndef WORLDOBJ_H
#define WORLDOBJ_H

#include "FGDK3/Playstation2/Thread.h"

#include "SimObj.h"
#include "shape_unk.h"
#include "ge_unk.h"

typedef struct {
    int unk0;
    char unk4[4];
    void* unk8;
} s_func_00187490;


extern void * const WorldObj_StdInit_UsedModules[];

Status WorldObj_InternalInitialise();
void WorldObj_InternalFinalise();
Status WorldObj_Initialise();
void WorldObj_Finalise();


class WorldObject : public SimObj_ObjectWithMomentum, public ShapeInstance, public ScriptMessageAndRequestReceiver/*, public AnimPosProvider_IF, public AnimVarProvider_IF, BoneManagerProvider_IF, public WalkerProvider_IF, public WalkingFootRayHit_IF, public AnimationResourceProvider_IF*/ {
    public:
        int unk2E0;
        //unk314
        //unk318
        int unk328;
        int unk32C;
        int unk330;
        //unk334 bool m_positionfrozen?
        int unk340;
        int unk344;
        int unk348;
        int unk34C;
        int unk350;
        /* 0x498 */ int m_scriptId;
        int unk544;
        int unk554;
        int unk558;
        int unk55C;
        int unk5A8;
        int unk5AC;
        int unk5B0;
        float unk5B4; // scale in smellovision/NUD while held
        int unk5B8;
        int unk5BC;

        WorldObject(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~WorldObject();
        //00188510
        virtual void func_001884A8();
        virtual void func_001884B8();
        //
        void func_00182AF0(int);

        //?
        virtual void func_001861B8();
        // WorldObject::ShapeInstance vtable
        virtual void func_00182FF8(ShapeData* shape); // override SetShape?
        // ShapeInstance base
        // virtual ? func_00184E68
        // virtual ? func_00185130
        // virtual ? func_00182D90
        // virtual ? func_00182EC0 // override GetShapeName?




        virtual void func_00184A90();

};

#ifdef __cplusplus
extern "C" {
#endif
void func_00184A90(WorldObject*);
int func_00186788(void);
void func_00187490(s_func_00187490* arg0, void* dest, int arg2, size_t arg3);
int func_00187628(void);
int func_00187EC8(int, int);
int func_00188400(void);
void func_00188408(void);
int func_00188450(void);
int func_00188458(void);
int func_00188460(void);
int func_00188468(void);
int func_00188470(void);
int func_00188478(void);
int func_00188480(void);
int func_00188488(void);
float func_00188490(void);
int func_001884E8(void);
#ifdef __cplusplus
}
#endif

#endif
