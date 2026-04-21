#ifndef PARTICLESYSTEM_H
#define PARTICLESYSTEM_H

#include "WorldObj.h"

class EmitterSpec /* : public Widget_Editable */ {
    public:
        /* virtual */ int func_00149DB0();
};

class ParticleSystem_IF /**/ {

};

class ParticleSystem : public WorldObject, public ParticleSystem_IF {
    public:
        ParticleSystem(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~ParticleSystem();
};

class Particle_PlotObject : public ShapeInstance {
    public:

        //virtual ? func_00149F08
};


#endif
