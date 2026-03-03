#ifndef CAMERA_H
#define CAMERA_H

#include "WorldObj.h"


class Camera : public WorldObject {
    public:
        int unk5D0;
        Camera(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~Camera();
        void func_0010B990(void);
};


#endif
