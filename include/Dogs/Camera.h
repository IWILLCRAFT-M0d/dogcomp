#ifndef CAMERA_H
#define CAMERA_H

#include "WorldObj.h"

class Camera : public WorldObject/**/ {
    public:
        int unk5D0; // smellovision?
        float unk620; // fov (radians)
        float unk624; // camera shake

        float unk668; // movement speed?
        Camera(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~Camera();
        virtual void func_0010B990();
};


#endif
