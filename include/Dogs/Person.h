#ifndef PERSON_H
#define PERSON_H

#include "WorldObj.h"


class Person : public WorldObject {
    public:
        Person(void*, void*, int, short);
        virtual ~Person();
};


#endif
