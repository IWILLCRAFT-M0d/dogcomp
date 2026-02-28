#ifndef CAMERA_H
#define CAMERA_H

#include "WorldObj.h"


class Camera : public WorldObject {
    public:
        int unk5D0;
        Camera(ClassInfo*, void*, int, short);
        virtual ~Camera();
        void func_0010B990(void);
};


#endif
