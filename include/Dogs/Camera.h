#ifndef CAMERA_H
#define CAMERA_H

#include "WorldObj.h"


class Camera : public WorldObject {
    public:
        Camera(void*, void*, int, short);
        virtual ~Camera();
};


#endif
