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


/**
 * @brief Used by Gem (Jake) and ControllableDog actors.
 */
class PlayerDog : public Dog {
    public:
        static ClassInfo* s_classInfo;
        int unkB34;
        int unkB38;
        long128 unkB40;
        long128 unkB50;
        int unkB60;
        int unkB64;
        int unkBB0;
        int unkBB8; // unlockedMoves
        PlayerDog(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~PlayerDog();
        void func_0014EB88(int moveId); // addMove?
        virtual ClassInfo* func_0014F518();




        // 0014DA68
        // 0014da60
        virtual void func_0014DB48();
};

//msg AddMove


class RoverSaysPuzzleGod : public WorldObject {
    public:
        RoverSaysPuzzleGod(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~RoverSaysPuzzleGod();
        virtual ClassInfo* func_0014F618();
};

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
}
#endif



#endif
