#ifndef BOULDER_H
#define BOULDER_H

#include "WorldObj.h"


class Boulder : public WorldObject {
    public:
        Boulder(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~Boulder();
};


#endif
