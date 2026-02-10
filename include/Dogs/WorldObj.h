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


#endif
