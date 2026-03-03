#ifndef PLATFORM_H
#define PLATFORM_H

#include "HitTri.h"


class Platform : public HitTri_Object {
    public:
        Platform(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~Platform();
};


#endif
