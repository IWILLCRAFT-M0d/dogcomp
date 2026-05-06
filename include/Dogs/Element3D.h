#ifndef ELEMENT3D_H
#define ELEMENT3D_H

//#include "unk.h"
#include "shape_unk.h"
#include "SimObj.h"

class Element3D : public ShapeInstance, public GenericObject/*, public Location_IF, public BoneManagerProvider_IF, public AnimPosProvider_IF, public AnimVarProvider_IF*/  {
    public:
        // 0xD0 BoneManager?
        /* 0x108 */ short m_shapeId;
        Element3D(ClassInfo*, short);
        virtual ~Element3D();

};

#endif
