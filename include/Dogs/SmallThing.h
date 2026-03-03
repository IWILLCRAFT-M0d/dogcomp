#ifndef SMALLTHING_H
#define SMALLTHING_H

#include "HitTri.h"


class SmallThing : public HitTri_Object {
    public:
        int unk690;
        int unk694;
        int unk698;
        int unk69C;
        int unk6A0;
        int unk6A4;
        int unk6A8;
        int unk6AC;
        int unk6B0;
        int unk6B4;
        int unk6B8;
        int unk6BC;
        int unk6C0;
        int unk6C4;
        int unk6F0;
        int unk6F4;
        int unk6F8;
        SmallThing(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~SmallThing();
};


#endif
