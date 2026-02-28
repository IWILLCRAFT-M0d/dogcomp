#ifndef DIGGABLEPATCH_H
#define DIGGABLEPATCH_H

#include "WorldObj.h"

class DiggablePatch : public WorldObject {
    public:
        float unk5C0; // patch remaining to be dug? (m_depthRemaining)
        float unk5C4; // patch depth (m_initialDepth)
        float unk5E0; // digging speed? (m_digRate)
        DiggablePatch(ClassInfo*, void*, int, short);
        virtual ~DiggablePatch();

        int func_00128120(float);
        int func_00127F78(float);
};

#endif
