#ifndef ANIMATEDOBJECT_H
#define ANIMATEDOBJECT_H

#include "HitTri.h"

class AnimatedObject : public HitTri_Object {
    public:
        static ClassInfo* s_classInfo;
        //unk630
        int unk634;
        int unk638;
        int unk63C;
        //
        int unk644;
        int unk648;
        //
        int unk680;
        //
        int unk690;
        int unk694;
        AnimatedObject(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~AnimatedObject();
        virtual ClassInfo* func_00103F50();
};

class AnimatedObject_ComplexHitReceiver /* : public SimObj_HitReceiver */ {
    public:
        virtual void func_001041C8();
};


class SlotMachine : public HitTri_Object {
    public:
        /* 0x638 */ int m_numSlots; // 0-3
        /* 0x63C */ bool m_pulled;
        SlotMachine(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~SlotMachine();
};

#endif
