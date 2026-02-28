#ifndef ZONE_H
#define ZONE_H


#include "SimObj.h"

class Zone : public SimObject {
    public:
        Zone(ClassInfo*, void*, int, short);
        virtual ~Zone();
};

#endif
