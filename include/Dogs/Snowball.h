#ifndef SNOWBALL_H
#define SNOWBALL_H

#include "SphereObj.h"


class Snowball : public SphereObj {
    public:
        int unk600;
        Snowball(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~Snowball();
};


#endif

