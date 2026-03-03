#ifndef PERSON_H
#define PERSON_H

#include "WorldObj.h"


class Person : public WorldObject {
    public:
        float unk5C0;
        float unk5C4;
        float unk5C8;

        float unk658;
        float unk65C;
        int unk6B0;
        int unk6B4;
        int unk6B8;
        int unk6BC; // person accesories
        int unk6C0;
        int unk6C4;
        int unk6C8;

        Person(ClassInfo*, SimObj_Universe*, int, short);
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
