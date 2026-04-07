#ifndef WORLDOBJ_H
#define WORLDOBJ_H

#include "FGDK3/Playstation2/Thread.h"

#include "SimObj.h"

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


class WorldObject : public SimObj_ObjectWithMomentum {
    public:
        /* 0x240 */ ShapeInstance m_shapeInstance;
        int unk2E0;
        //unk314
        //unk318
        int unk328;
        int unk32C;
        int unk330;
        //unk334
        int unk340;
        int unk344;
        int unk348;
        int unk34C;
        int unk350;

        int unk544;
        int unk554;
        int unk558;
        int unk55C;
        int unk5A8;
        int unk5AC;
        int unk5B0;
        float unk5B4;
        int unk5B8;
        int unk5BC;

        WorldObject(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~WorldObject();
        virtual void func_001884A8();
        virtual void func_001884B8();
        //
        void func_00182AF0(int);

        //?
        virtual void func_001861B8();

        virtual void func_00182FF8(void* shape);
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
