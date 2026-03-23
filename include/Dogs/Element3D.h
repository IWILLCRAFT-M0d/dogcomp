#ifndef ELEMENT3D_H
#define ELEMENT3D_H

#include "unk.h"

class Element3D : public ShapeInstance {
    public:
        /* 0x108 */ short m_shapeId;
        Element3D(ClassInfo*, short);
        virtual ~Element3D();

};

#endif
