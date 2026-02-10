#ifndef PLACEHOLDER_H
#define PLACEHOLDER_H

#include "WorldObj.h"


class PlaceHolder : public WorldObject {
    public:
        PlaceHolder(void*, void*, int, short);
        virtual ~PlaceHolder();
};


#endif
