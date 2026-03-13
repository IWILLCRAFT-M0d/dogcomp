#ifndef ANIMATEDOBJECT_H
#define ANIMATEDOBJECT_H

#include "HitTri.h"

class AnimatedObject : public HitTri_Object {
    public:
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
        ClassInfo* func_00103F50();
};

#endif
