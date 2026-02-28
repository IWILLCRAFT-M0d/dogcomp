#ifndef DOG_H
#define DOG_H

#include "WorldObj.h"


class Dog : public WorldObject {
    public:
        float unk838;
        float unk83C;
        float unk840;
        float unk844;
        float unk848;
        float unk84C; // turnflex?
        float unk850;
        float unk854;
        float unk858;
        float unk868; // bone height
        Dog(ClassInfo*, void*, int, short);
        virtual ~Dog();
        float func_0012E240(void);
};

// class DogPrimHitReceiver : public SimObj_HitReceiver {
//     public:
//         DogPrimHitReceiver(Dog*);
//         virtual ~DogPrimHitReceiver();
// };

#ifdef __cplusplus
extern "C" {
#endif
void func_00139048(void);
#ifdef __cplusplus
}
#endif

#endif
