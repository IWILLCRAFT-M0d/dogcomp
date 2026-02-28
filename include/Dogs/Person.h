#ifndef PERSON_H
#define PERSON_H

#include "WorldObj.h"


class Person : public WorldObject {
    public:
        float unk658;
        float unk65C;
        int unk6B8;
        float unk5C0;
        Person(ClassInfo*, void*, int, short);
        virtual ~Person();
        int func_0014C240(void);
        float func_0014CBD8(void);
};

#ifdef __cplusplus
extern "C" {
#endif
float func_0014A840(void); // belongs to person

#ifdef __cplusplus
}
#endif

#endif
