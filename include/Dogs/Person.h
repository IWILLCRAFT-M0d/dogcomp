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

#ifdef __cplusplus
extern "C" {
#endif
float func_0014A840(void); // belongs to person

#ifdef __cplusplus
}
#endif

#endif
