#ifndef PERSON_H
#define PERSON_H

#include "WorldObj.h"


class Person : public WorldObject {
    public:
        float unk658;
        float unk65C;
        Person(void*, void*, int, short);
        virtual ~Person();
};


#endif
