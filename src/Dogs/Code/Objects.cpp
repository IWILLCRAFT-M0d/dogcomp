#include "common.h"

#include "Dogs/Objects.h"
#include "unk.h"

#include "Dogs/SimObj.h"
#include "Dogs/WorldObj.h"
#include "Dogs/Dog.h"
#include "Dogs/Person.h"
#include "Dogs/Bird.h"
#include "Dogs/LevelGate.h"
#include "Dogs/Smell.h"
#include "Dogs/FootPrint.h"
#include "Dogs/PlaceHolder.h"
#include "Dogs/PlayerDog.h"
#include "Dogs/Camera.h"
#include "Dogs/ParticleSystem.h"
#include "Dogs/Car.h"
#include "Dogs/Motorbike.h"
#include "Dogs/Skidoo.h"
//
#include "Dogs/Containers.h"
#include "Dogs/Lights.h"
#include "Dogs/AnimatedObject.h"
#include "Dogs/SoundCreature.h"
#include "Dogs/Slidable.h"
#include "Dogs/SlidableBlockPuzzle.h"
#include "Dogs/Scent.h"
#include "Dogs/Basket.h"
#include "Dogs/Zone.h"
#include "Dogs/SmallThing.h"
#include "Dogs/Button.h"
//
#include "Dogs/SkiLiftSeat.h"
#include "Dogs/Snowball.h"
#include "Dogs/FlyingHat.h"
#include "Dogs/Trail.h"
#include "Dogs/SphereObj.h"
#include "Dogs/Rat.h"
#include "Dogs/Boulder.h"
#include "Dogs/SwingBridge.h"
#include "Dogs/HitTri.h"
#include "Dogs/Platform.h"
//
#include "Dogs/WaterSplash.h"
#include "Dogs/Fish.h"

// Objects_CreateOne

#ifdef NON_MATCHING

Status Objects_InternalInitialise() {
    return Status(0xFFFFFFFF, "c:/coding/dogs/Code/Common/Objects.cpp", 205);
}

#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objects", Objects_InternalInitialise__Fv);
#endif

void Objects_InternalFinalise() {
    return;
}

#ifdef NON_MATCHING

StdInit_ModuleDescription Objects_StdInit_Description = {
    0,
    &Objects_StdInit_UsedModules
};

void * const Objects_StdInit_UsedModules[] = {
    &Objects_InternalInitialise,
    &Objects_InternalFinalise,
    0,
    0,
};

Status Objects_Initialise() {
    return StdInit_InitialisationSequence(&Objects_StdInit_Description);
}

void Objects_Finalise() {
    StdInit_FinalisationSequence(&Objects_StdInit_Description);
}

#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objects", Objects_Initialise__Fv);
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objects", Objects_Finalise__Fv);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objects", func_001EA6A8); // despawn objects function

#ifdef NON_MATCHING
void func_001EB100(SimObj_Universe* arg0, short* arg1, void* arg2, void* arg3, void* arg4, short arg5, void* arg6, short arg7) {
    switch(*arg1) { // TODO: create enum?
        case 0:
            new SimObj_Base(NULL, arg0, arg7, arg5);
            break;
        case 1:
            new SimObject(NULL, arg0, arg7, arg5);
            break;
        case 2:
            new SimObj_ObjectWithMomentum(NULL, arg0, arg7, arg5);
            break;
        case 3:
            new WorldObject(NULL, arg0, arg7, arg5);
            break;
        case 4:
            new Dog(NULL, arg0, arg7, arg5);
            break;
        case 5:
            new Person(NULL, arg0, arg7, arg5);
            break;
        case 6:
            new Bird(NULL, arg0, arg7, arg5);
            break;
        case 7:
            new LevelGate(NULL, arg0, arg7, arg5);
            break;
        case 8:
            new Smell(NULL, arg0, arg7, arg5);
            break;
        case 9:
            new FootPrints(NULL, arg0, arg7, arg5);
            break;
        // case 10:
        //  new StaticFootPrint(NULL, arg0, arg7, arg5);
        // break;
        case 11:
            new PlaceHolder(NULL, arg0, arg7, arg5);
            break;
        case 12:
            new PlayerDog(NULL, arg0, arg7, arg5);
            break;
        // case 13:
        //  new Camera(NULL, arg0, arg7, arg5);
        case 14:
            new ParticleSystem(NULL, arg0, arg7, arg5);
            break;
        case 15:
            new Car(NULL, arg0, arg7, arg5);
            break;
        case 16:
            new Motorbike(NULL, arg0, arg7, arg5);
            break;
        case 17:
            new Skidoo(NULL, arg0, arg7, arg5);
            break;
        // case 18:
        //  new CameraMount(NULL, arg0, arg7, arg5);
        // break;
        case 19:
            new Container(NULL, arg0, arg7, arg5);
            break;
        case 20:
            new BasketballNet(NULL, arg0, arg7, arg5);
            break;
        case 21:
            new Light(NULL, arg0, arg7, arg5);
            break;
        case 22:
            new AnimatedObject(NULL, arg0, arg7, arg5);
            break;
        //case 23:
        // new AnimatedObject_Complex(NULL, arg0, arg7, arg5);
        // break;
        case 24:
        // new AnimatedObject_ComplexPlatfomr(NULL, arg0, arg7, arg5);
        // break;
        case 25:
            new SoundCreature(NULL, arg0, arg7, arg5);
            break;
        case 26:
            new Slidable(NULL, arg0, arg7, arg5);
            break;
        case 27:
            new SlidableBlockPuzzle(NULL, arg0, arg7, arg5);
            break;
        case 28:
            new Scent(NULL, arg0, arg7, arg5);
            break;
        case 29:
            new Basket(NULL, arg0, arg7, arg5);
            break;
        case 30:
            new ZoneRadius(NULL, arg0, arg7, arg5);
            break;
        case 31:
            new ZoneFromNavGraph(NULL, arg0, arg7, arg5);
            break;
        case 32:
            new SmallThing(NULL, arg0, arg7, arg5);
            break;
        case 33:
            new Pram(NULL, arg0, arg7, arg5);
            break;
        case 34:
            new Button(NULL, arg0, arg7, arg5);
            break;
        case 35:
            new RoverSaysPuzzleGod(NULL, arg0, arg7, arg5);
            break;
        case 36:
            new SkiLiftSeat(NULL, arg0, arg7, arg5);
            break;
        case 37:
            new Snowball(NULL, arg0, arg7, arg5);
            break;
        case 38:
            new FlyingHat(NULL, arg0, arg7, arg5);
            break;
        case 39:
        //    new Trail(NULL, arg0, arg7, arg5);
        //    break;
        case 40:
            new SphereObj(NULL, arg0, arg7, arg5);
            break;
        case 41:
            new Rat(NULL, arg0, arg7, arg5);
            break;
        case 42:
            new Boulder(NULL, arg0, arg7, arg5);
            break;
        case 43:
            new SwingBridge(NULL, arg0, arg7, arg5);
            break;

    }
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objects", func_001EB100); // spawn objects function (SimObj_Universe*/WorldObject_Universe*, short*, Creature_TypeDescription*?, )
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objects", func_001EBBE8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objects", func_001EBC30); // calls spawning function

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objects", func_001EBD10);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objects", func_001EBE10);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objects", func_001EBF20);
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objects", func_001EBF30);
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objects", func_001EBFC8);
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objects", func_001EC028);
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objects", func_001EC048);
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objects", func_001EC068);
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objects", func_001EC100);
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objects", func_001EC160);
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objects", func_001EC180);
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objects", func_001EC218);
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objects", func_001EC278);
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objects", func_001EC310);
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objects", func_001EC370);
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objects", func_001EC390);
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objects", func_001EC428);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objects", func_001EC488);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objects", func_001EC4E8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objects", func_001EC598);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objects", func_001EC5F0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objects", func_001EC610);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Objects", D_003E6440);


