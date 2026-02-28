#ifndef SNOWBALL_H
#define SNOWBALL_H

#include "SphereObj.h"


class Snowball : public SphereObj {
    public:

        Snowball(ClassInfo*, void*, int, short);
        virtual ~Snowball();
};


#endif

