#ifndef PLATFORM_H
#define PLATFORM_H

#include "HitTri.h"


class Platform : public HitTri_Object {
    public:
        Platform(ClassInfo*, void*, int, short);
        virtual ~Platform();
};


#endif
