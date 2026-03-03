#ifndef SWINGBRIDGE_H
#define SWINGBRIDGE_H

#include "HitTri.h"


class SwingBridge : public HitTri_Object {
    public:
        SwingBridge(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~SwingBridge();
};


#endif
