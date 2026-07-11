// NOTE: This file is temporary until the proper headers and whatnot are created
#ifndef SCRIPT_UNK_H
#define SCRIPT_UNK_H

#include "WorldObj.h"

class Script {
    public:
        void* unk40;
        Script(WorldObject*, void*, int scriptId);
        virtual ~Script();
        virtual void func_0031E8C0();
        // virtual ? 0031E6D8
        virtual int func_0031E8C8();
        virtual int func_0031E8D0();
        virtual int func_0031E8D8();
        virtual int func_0031E8E0();
        virtual void func_0031E8E8();
        virtual int func_0031E8F0();
        virtual int func_0031E900();
        virtual int func_0031E910();
        virtual int func_0031E918();
        virtual int func_0031E920();
        virtual void func_0031E928();
        virtual int func_0031E930();
        virtual int func_0031E938();
        virtual float func_0031E940();
        virtual void func_0031E950();
        virtual int func_0031E958();
        virtual int func_0031E960();
        virtual int func_0031E968();
        virtual int func_0031E970();
        virtual int func_0031E978();

        // virtual ? func_0031E980

        // virtual ? func_0031E988

        // virtual ? func_0031E990

        // virtual ? func_0031E998

        // virtual ? func_0031E9A0

        // virtual ? func_0031E9A8

        // virtual ? func_0031E9B0

        // virtual ? func_0031E9B8

        // virtual ? func_0031E9C0

        // virtual ? func_0031E9C8

        // virtual ? func_0031E9D0

        // virtual ? func_0031E9D8

        // virtual ? func_0031E9E0

        // virtual ? func_0031E9E8

        // virtual ? func_0031E9F0

        // virtual ? func_0031E9F8

        // virtual ? func_0031EA00

        // virtual ? func_0031EA08

        // virtual ? func_0031EA10

        // virtual ? func_0031EA20

        // virtual ? func_0031EA18

        // virtual ? func_0031EA28

        virtual void func_0031EA30();

        // virtual ? = 0
        // virtual ? = 0

        // virtual ? = 0

        // virtual ? = 0

        // virtual ? = 0

        virtual void func_0031EA38();
        virtual int func_0031EA40();
        virtual void func_0031EA48();
        // end of script vtable




};

class DogScript : public Script {
    public:
        DogScript(WorldObject*, int scriptId);
        virtual ~DogScript();
        //virtual ? func_001ad8d0
        // virtual ? func_001af020
        //~~~~
        virtual int func_001AD5F8();
        //~~~~
        // virtual ? func_001ADAF8
        // virtual ? func_001ADBE8();
        virtual float func_001AEA78();
        // virtual ? func_001AEB38
};

#endif /* SCRIPT_UNK_H */
