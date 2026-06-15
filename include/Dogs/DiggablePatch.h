#ifndef DIGGABLEPATCH_H
#define DIGGABLEPATCH_H

#include "WorldObj.h"

class DiggablePatch : public WorldObject {
    public:
        static ClassInfo* s_classInfo;
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
        virtual ClassInfo* func_001292A0();
        // virtual base function (00168410)
        // virtual ? func_001285B0
        // virtual base function (001857E8)
        // virtual ? func_00128498
        // virtual base function (00182AD0)
        // virtual base function (00182A70)
        // virtual base function (00168688)
        // virtual base function (00168778)
        // virtual base function (00188460)
        // virtual base function (00188448)
        // virtual base function (00168478)
        // virtual base function (00168480)
        // virtual base function (00168488)
        // virtual base function (00168490)
        // virtual base function (00168498)
        // virtual base function (001684A0)
        // virtual ? func_00128138
        // virtual base function (00165DC0)
        // virtual base function (00165EB0)
        // virtual base function (00184E28)
        // virtual base function (00184E48)
        // virtual base function (001833E8)
        // virtual base function (00184A90)
        // virtual ? func_001286D8
        // virtual base function (00168610)
        // virtual base function (00167900)
        // virtual base function (001679C0)
        //~~~~

        // virtual base function (001884E8)
        // end of vtable


        virtual int func_00128130();
        virtual int func_00128120(float);
        // virtual ? 00127F88
        virtual int func_00127F78(float);
};

#endif
