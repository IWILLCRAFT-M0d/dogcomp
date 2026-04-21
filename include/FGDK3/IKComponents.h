#ifndef IKCOMPONENTS_H
#define IKCOMPONENTS_H

#include "Animate.h"

class PositionIKAnimation : public AnimationComponent {

};

class MatrixPositionIKAnimation : public AnimationComponent {

};

class LookAtIKAnimation : public AnimationComponent {
    public:
        virtual void func_002E7960();
};



#endif
