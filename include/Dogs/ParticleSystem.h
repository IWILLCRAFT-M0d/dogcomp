#ifndef PARTICLESYSTEM_H
#define PARTICLESYSTEM_H

#include "WorldObj.h"


class ParticleSystem : public WorldObject {
    public:
        ParticleSystem(ClassInfo*, void*, int, short);
        virtual ~ParticleSystem();
};


#endif
