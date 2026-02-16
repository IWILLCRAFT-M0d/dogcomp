#ifndef WORLDOBJ_H
#define WORLDOBJ_H

#include "FGDK3/Playstation2/Thread.h"

#include "SimObj.h"

extern void * const WorldObj_StdInit_UsedModules[];

Status WorldObj_InternalInitialise(void);
void WorldObj_InternalFinalise(void);
Status WorldObj_Initialise(void);
void WorldObj_Finalise(void);


class WorldObject : public SimObj_ObjectWithMomentum {
    public:
        WorldObject(void*, void*, int, short);
        virtual ~WorldObject();
};

#ifdef __cplusplus
extern "C" {
#endif
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
