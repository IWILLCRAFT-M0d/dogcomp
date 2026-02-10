#ifndef DIGGABLEPATCH_H
#define DIGGABLEPATCH_H

#include "WorldObj.h"

class DiggablePatch : public WorldObject {
    public:
        DiggablePatch(void*, void*, int, short);
        virtual ~DiggablePatch();
};

#endif
