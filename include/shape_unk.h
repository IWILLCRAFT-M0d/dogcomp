// NOTE: This file is temporary until the proper headers and whatnot are created
#ifndef SHAPE_UNK_H
#define SHAPE_UNK_H

#include "ge_unk.h"


class ShapeData {

};

class ShapeParams {
    public:
        void* unk0;
        int unk4;
        ShapeParams() {
            unk0 = 0;
            unk4 = 1;
        }
};
class ShapeParams_Dynamic : public ShapeParams {
    public:
        ShapeParams_Dynamic();
        ShapeParams_Dynamic(int);
        virtual ~ShapeParams_Dynamic();
        void SetSize(int);
};



class MeshData {

};

class MeshInstance {
    public:
        int unk0;
        const MeshData* unk4; // m_meshData?
        MeshInstance(const MeshData*);
        ~MeshInstance();
        void Render(GE_Device*);
};

class ShapeInstance {
    public:
        void* unk0; // shading data/parameters?
        /* 0x4 */ void* m_shapeData; // shapeData pointer?
        ShapeParams_Dynamic unk8;
        ShapeParams_Dynamic unk14;
        MeshInstance* unk20; // MeshInstance?
        void* unk24;
        void* unk28; // animations?
        ShapeInstance();
        virtual ~ShapeInstance();
        void Empty();
        void Fill();
        virtual void SetShape(void*); // SetShape(ShapeData* const)
        int func_00270408(int, int);
        //virtual ? func_00270468
        // virtual ? func_00270498
        // virtual ? func_002704D8
        virtual float func_002704F8();
        virtual const string_ascii func_00271908();
        void Execute();
        void Render(GE_Device*);
};

class DrawShape {

};

class DrawShape_TexturedQuad : public DrawShape {

};

class CustomParameterBlockWriter {

};

class ShapeDataNamedBoneWriter : public CustomParameterBlockWriter {
    public:
        // virtual ? func_0030CF98
};

#endif /* SHAPE_UNK_H */
