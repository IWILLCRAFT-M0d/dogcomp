#ifndef ELEMENT3D_H
#define ELEMENT3D_H

#include "unk.h"

class Element3D : public ShapeInstance {
    public:
        Element3D(ClassInfo*, short);
        virtual ~Element3D();
        /* 0x108 */ short m_shapeId;
};

#endif
