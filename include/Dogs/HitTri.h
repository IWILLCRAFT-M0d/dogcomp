#ifndef HITTRI_H
#define HITTRI_H

#include "WorldObj.h"


class HitTri_Object : public WorldObject {
    public:
        HitTri_Object(void*, void*, int, short);
        virtual ~HitTri_Object();
};


#endif
