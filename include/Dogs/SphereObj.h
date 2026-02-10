#ifndef SPHEREOBJ_H
#define SPHEREOBJ_H

#include "WorldObj.h"


class SphereObj : public WorldObject {
    public:
        SphereObj(void*, void*, int, short);
        virtual ~SphereObj();
};


#endif
