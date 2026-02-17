#ifndef DIGGABLEPATCH_H
#define DIGGABLEPATCH_H

#include "WorldObj.h"

class DiggablePatch : public WorldObject {
    public:
        float unk5C0;
        float unk5C4;
        DiggablePatch(void*, void*, int, short);
        virtual ~DiggablePatch();
};

#endif
