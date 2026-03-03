#ifndef PARTICLESYSTEM_H
#define PARTICLESYSTEM_H

#include "WorldObj.h"


class ParticleSystem : public WorldObject {
    public:
        ParticleSystem(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~ParticleSystem();
};


#endif
