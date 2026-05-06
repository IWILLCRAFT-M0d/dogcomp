// NOTE: This file is temporary until the proper headers and whatnot are created
#ifndef GE_UNK_H
#define GE_UNK_H

#include "data_unk.h"

class GE_RenderHardware {
    public:
        float m_unk0;
        int m_unk4;
        GE_RenderHardware();
        virtual ~GE_RenderHardware();

};

class GE_TransformState {

};

class MeshTransforms : public GE_TransformState {
    public:
        // virtual 00310438
        // virtual 00310448
};

// RCT3 "GE_Device::s_theDevice"
// 0x78 - texture resources address
class GE_Device : public GE_TransformState {
    public:
        float unk50;
        float unk54;
        //
        float unk80;
        float unk90;
        GE_Device();
        virtual ~GE_Device();
        int func_002D1D58();
        //
        void func_002D1D60();
        void func_002D1D68();
        //
        virtual void func_002D2250();
        virtual void func_002D2258();
        //
        void func_002D2328();
};

// 0x00452660 is s_theDevice? (this)
class GE_PS2Device : public GE_Device {
    public:
        //GE_PS2DisplayTarget* unk75C;
        GE_PS2Device();
        virtual ~GE_PS2Device();
};

class GE_PrimCache {
    public:
        char m_unk0;
        char m_unk1;
        short m_unk2;
        int m_unk4;
        int m_unk8;
        int m_unkC;
        int m_unk10;
        int m_unk14;
    GE_PrimCache(char, short, int, int, int, void*, int);
    virtual ~GE_PrimCache();
    virtual int func_002D1C78();
};

class GE_PS2PrimCache /* : public GE_PrimCache */ {
    public:
        virtual ~GE_PS2PrimCache();

        virtual int func_002AC4A8();
};

class GE_PrimVertices {
    public:
        int unk0;
        int unk4;
        short unk8;
        short unkA;
        int unkC;

        GE_PrimVertices(int, int, int);
        virtual ~GE_PrimVertices();
        virtual int func_002A65C0();
        virtual int func_002A65C8();
        virtual void func_002A65D0();
};

class GE_PS2PrimVertices : public GE_PrimVertices {
    public:
        int unk14;
        int unk18;
        //
        int unk20;
        int unk24;
        //
        int unk34;
        GE_PS2PrimVertices();
        virtual ~GE_PS2PrimVertices();
        //002a57c0
        virtual int func_002A5868(int, int);
        virtual void func_002A5880();
        //
        virtual void func_002A5A50();

        virtual short func_002A6748();
};


class GE_PrimIndices {
    public:
        short unk0;
        char unk2;
        char unk3;
        int unk4;
        int unk8;
        GE_PrimIndices(int, char, int);
        virtual ~GE_PrimIndices();
        void func_002A62D0();
};

class I_GE_DMARc {

};

class GE_PS2PrimCacheDMABuffer : public I_GE_DMARc {
    public:
        virtual ~GE_PS2PrimCacheDMABuffer();

        virtual void func_002AC220();
};

class GE_DMARc : public I_GE_DMARc {

};

class GE_DMAPktRcGeneric : public GE_DMARc {

};

class GE_DMAPktRc1i69 : public GE_DMAPktRcGeneric {
    public:
        GE_DMAPktRc1i69();
        virtual ~GE_DMAPktRc1i69();
};

class GE_TextureStylePkt : public GE_DMARc {
    public:
        int unk4;
        char unk5;
        short unk6;
        int unk8;
        int unk10;
        GE_TextureStylePkt();
        virtual ~GE_TextureStylePkt();
};

class GE_Target {

};

class GE_PS2Target : public GE_Target {
    public:
        int unk0;
        short unk12;
        // void*
        // void*
        GE_PS2Device* unk8;
        GE_PS2Target(GE_PS2Device*);
};

class GE_PS2DisplayTarget : public GE_PS2Target {
    public:
        GE_PS2DisplayTarget(GE_PS2Device*);
};

class GE_GSPageMgr {
    public:
        //unk0
        int unk4;
        int unk8;
        int unkC;
        //unk10
        int unk14;
        int unk18;
        int unk1C;
        int unk20;
        int unk24;
        int unk28;
        int unk2C;
        int unk30;
        int unk34;
        //
        int unk40;
        int unk44;
        int unk48;
        //unk4C
        int unk50;
        //unk54
        int unk58;
        int unk5C;
        int unk60;
        //unk64
        int unk68;
        GE_GSPageMgr(int, int);
        virtual ~GE_GSPageMgr();
};

class GE_TexturePage {

};

class GE_TextureTarget : /*public GE_PS2Target,*/ public GE_TexturePage {
    public:

};

class ClipVolume {

};

class PlaneClipVolume : public ClipVolume {

};

class SixPlaneClipVolume : public PlaneClipVolume {

};


#endif /* GE_UNK_H */
