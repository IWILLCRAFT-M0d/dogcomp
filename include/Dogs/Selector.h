#ifndef SELECTOR_H
#define SELECTOR_H

#include "WorldObj.h"

class Selector : public WorldObject {
    public:
        int unk5C0;
        int unk5C4;
        int unk5C8;
        int unk5CC;
        Selector(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~Selector();
};

#endif
