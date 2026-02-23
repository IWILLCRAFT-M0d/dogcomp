#ifndef DOG_H
#define DOG_H

#include "WorldObj.h"


class Dog : public WorldObject {
    public:
        Dog(void*, void*, int, short);
        virtual ~Dog();
        float func_0012E240(void);
};


#ifdef __cplusplus
extern "C" {
#endif
void func_00139048(void);
#ifdef __cplusplus
}
#endif

#endif
