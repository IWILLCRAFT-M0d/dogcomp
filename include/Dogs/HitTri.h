#ifndef HITTRI_H
#define HITTRI_H

#include "WorldObj.h"


class HitTri_Object : public WorldObject {
    public:
        int unk5D0;
        int unk5D4;
        int unk5DC;
        int unk5E0;
        HitTri_Object(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~HitTri_Object();
};


#endif
