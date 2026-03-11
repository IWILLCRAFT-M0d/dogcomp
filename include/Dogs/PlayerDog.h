#ifndef PLAYERDOG_H
#define PLAYERDOG_H
#include <eetypes.h> // TODO: move this
#include "unk.h"

#include "Dog.h"
//#include "WorldObj.h"

typedef struct {
    void* unk0;
    int unk4;
} s_D_0044D398;

class PlayerDog : public Dog {
    public:
        int unkB34;
        int unkB38;
        long128 unkB40;
        long128 unkB50;
        int unkB60;
        int unkB64;
        int unkBB0;
        int unkBB8;
        PlayerDog(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~PlayerDog();
        ClassInfo* func_0014F518();
};

//msg AddMove


class RoverSaysPuzzleGod : public WorldObject {
    public:
        RoverSaysPuzzleGod(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~RoverSaysPuzzleGod();
};

#ifdef __cplusplus
extern "C" {
#endif
void func_0014EB88(Dog*, short);
#ifdef __cplusplus
}
#endif



#endif
