#ifndef BOULDER_H
#define BOULDER_H

#include "WorldObj.h"


class Boulder : public WorldObject {
    public:
        Boulder(ClassInfo*, void*, int, short);
        virtual ~Boulder();
};


#endif
