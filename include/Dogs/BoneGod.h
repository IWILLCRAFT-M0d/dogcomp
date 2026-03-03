#ifndef BONEGOD_H
#define BONEGOD_H

#include "WorldObj.h"


class BoneGod : public WorldObject {
    public:
        BoneGod(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~BoneGod();
};


#endif
