#ifndef DIGGABLEPATCH_H
#define DIGGABLEPATCH_H

#include "WorldObj.h"

class DiggablePatch : public WorldObject {
    public:
        union {int i;float f;} unk5C0; // patch remaining to be dug? (m_depthRemaining)
        float unk5C4; // patch depth (m_initialDepth)
        //unk5C8
        //unk5CC
        //unk5D0
        int unk5D4;
        int unk5D8;
        int unk5DC;
        float unk5E0; // digging speed? (m_digRate)
        DiggablePatch(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~DiggablePatch();
        int func_00128130(void);
        int func_00128120(float);
        int func_00127F78(float);
};

#endif
