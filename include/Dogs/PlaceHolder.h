#ifndef PLACEHOLDER_H
#define PLACEHOLDER_H

#include "WorldObj.h"


class PlaceHolder : public WorldObject {
    public:
        PlaceHolder(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~PlaceHolder();

        virtual ClassInfo* func_0014D3E8();
};


#endif
