#ifndef SNOWBALL_H
#define SNOWBALL_H

#include "SphereObj.h"


class Snowball : public SphereObj {
    public:
        /* 0x600 */ bool m_canRoll;
        Snowball(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~Snowball();
};


#endif

