#ifndef PLACEHOLDER_H
#define PLACEHOLDER_H

#include "WorldObj.h"


class PlaceHolder : public WorldObject {
    public:
        PlaceHolder(ClassInfo*, void*, int, short);
        virtual ~PlaceHolder();
};


#endif
