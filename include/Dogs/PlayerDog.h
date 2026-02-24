#ifndef PLAYERDOG_H
#define PLAYERDOG_H

#include "Dog.h"
//#include "WorldObj.h"

class PlayerDog : public Dog {
    public:
        PlayerDog(void*, void*, int, short);
        virtual ~PlayerDog();
};

//msg AddMove

/*
class RoverSaysPuzzleGod : public WorldObject {

};
*/
#endif
