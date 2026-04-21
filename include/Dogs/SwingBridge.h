#ifndef SWINGBRIDGE_H
#define SWINGBRIDGE_H

#include "HitTri.h"


class SwingBridge : public HitTri_Object {
    public:
        int unk5F0;
        int unk5F4;
        float unk5F8;
        float unk5FC;
        float unk600; // angleLimit?
        float unk604; // strength required?
        SwingBridge(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~SwingBridge();
        virtual ClassInfo* func_00178630();
        //
        virtual void func_001779C0();
};


#endif
