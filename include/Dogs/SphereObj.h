#ifndef SPHEREOBJ_H
#define SPHEREOBJ_H

#include "WorldObj.h"


class SphereObj : public WorldObject {
    public:
        int unk5C0;
        float unk5C4;
        int unk5C8;
        int unk5CC;
        int unk5D0;
        int unk5D4;
        int unk5D8;
        int unk5DC;
        int unk5E0;
        int unk5E4;
        int unk5E8;
        int unk5EC;
        float unk5F0;
        float unk5F4;
        float unk5F8;


        SphereObj(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~SphereObj();
};


#endif
