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
        // virtual ? = 0;
        // virtual ? = 0;
        // virtual ? = 0;
        // virtual ? = 0;


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
        // virtual ? = 0;
        // virtual ? = 0;
        // virtual ? 002CE118
        // virtual ? 002CE2B0
        virtual void func_002CE870();
        virtual ~GE_Device();
        // virtual ? = 0;
        // virtual ? 002D1D20
        virtual int func_002D1D58();
        virtual void func_002D1D60();
        // virtual ? = 0;
        // virtual ? = 0;
        // virtual ? = 0;
        // virtual ? = 0;
        // virtual ? = 0;
        // virtual ? = 0;
        // virtual ? = 0;
        virtual void func_002D1D68();
        // virtual ? = 0;
        // virtual ? = 0;
        // virtual ? func_002CEC18
        // virtual ? func_002D0218
        virtual void func_002D2250();
        virtual void func_002D2258();
        //
        virtual void func_002D2328();

        virtual int func_002D2348();
        virtual float func_002D2350();
};

// 0x00452660 is s_theDevice? (this)
class GE_PS2Device : public GE_Device {
    public:
        bool unk458;
        //GE_PS2DisplayTarget* unk75C;
        GE_PS2Device();
        virtual void* func_002C7520(int); // override
        // virtual ? 002C75A0
        //
        //
        //
        virtual ~GE_PS2Device();
        // virtual ? 002c8ff8
        //
        //
        //~~~~~
        virtual void func_002C3D88(); // pure override; BeginScene?
        // virtual ? 002C3F08 // pure override; Clear?
        // virtual ? 002C4C80
        // virtual ? func_002C9070(); // pure override
        virtual void func_002C5478(); // pure override; EndScene?
        virtual void func_002C9048();
        // func_002cec18 // GE_Device
        // virtual ? func_002C7A50
        // virtual ? func_002C82A8 // Suspend?
        // virtual ? func_002C8318
        virtual int func_002C9FC0();
        // virtual ? func_002C5910
        // virtual ? func_002C5B28
        // virtual ? func_002C5DA8
        // virtual ? func_002C5E90
        virtual void func_002C6488();
        virtual void func_002C6490();
        virtual int func_002C6498();
        // virtual ? func_002C9210
        // virtual ? func_002C9F38();
        // virtual ? func_002C64A0
        // virtual ? func_002C66A8
        // virtual ? func_002C6C28();
        // virtual ? func_002C6C30
        // virtual ? func_002C6C60
        // virtual ? func_002C6C98
        // virtual ? func_002C6CD0
        // virtual ? func_002C6D10
        // virtual ? func_002C6D50
        // virtual ? func_002C6D98
        // virtual ? func_002C6E68
        // virtual ? func_002C6EF0
        // virtual ? func_002C6F88
        // virtual ? func_002C7030
        // virtual ? func_002C70E8
        // virtual ? func_002C71B0
        // virtual ? func_002C7288
        // virtual ? func_002C7370
        // virtual ? func_002C7468
        // virtual ? func_002C8838
        // virtual void func_002C7A48(?);
        // virtual ? func_002C7CF8
        // virtual ? func_002C7D30
        // virtual ? func_002C8218(?); // SetTarget?
        virtual void* func_002C8358();
        // virtual ? func_002C9098
        // virtual ? func_002C9898
        // virtual ? func_002C9970
        // virtual ? func_002C9790
        // virtual ? func_002C9860
        // virtual ? func_002C99E0
        virtual void func_002C3D80();
        virtual void func_002C9FB0();
        virtual void func_002C9FB8();
        // virtual ? func_002C57F0

};

class GE_PrimCache {
    public:
        char m_unk0;
        unsigned char m_unk1;
        short m_unk2;
        int m_unk4;
        int m_unk8;
        int m_unkC;
        int m_unk10;
        int m_unk14;
    GE_PrimCache(char, short, int, int, int, void*, int);
    virtual ~GE_PrimCache();
    virtual void func_002CABF0();
    // virtual ? = 0;
    // virtual ? = 0;
    // virtual ? = 0;
    virtual int func_002D1C78();
    // virtual ? = 0;
    // virtual ? = 0;
    // virtual ? = 0;
};

class GE_PS2PrimCache  /*: public GE_PrimCache */ {
    public:
        void* unk24;
        void* unk28;
        GE_PS2PrimCache(/**/);
        virtual ~GE_PS2PrimCache();
        //
        // virtual ? func_002A7018
        // virtual ? func_002A70A8
        // virtual ? func_002A70E0
        //
        // virtual ? func_002A7008();
        // virtual ? func_002A7010();
        // virtual ? func_002ABF00
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
        // virtual ? = 0;
        // virtual ? = 0;
        // virtual ? = 0;
        virtual int func_002A65C0();
        virtual int func_002A65C8();
        virtual void func_002A65D0();
        // virtual ? = 0;
        // virtual ? = 0;
        // virtual ? = 0;
        // virtual ? = 0;
        // virtual ? func_002A65D8
        // virtual ? = 0;
        // virtual ? = 0;
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
        //virtual ? func_002A57C0
        virtual int func_002A5868(int, int);
        virtual void func_002A5880();
        //base
        //base
        //base
        // virtual ? func_002A5890
        // virtual ? func_002A5970
        // virtual ? func_002A59E0
        virtual void func_002A5A50();
        //base
        // virtual func_002A6728
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
        // virtual ? = 0;
        // virtual ? = 0;
        // virtual ? = 0;
        // virtual ? = 0;
        // virtual ? = 0;
        // virtual ? = 0;
        void func_002A62D0();
};

class GE_PS2PrimIndices /* : public GE_PrimIndices */ {

};

class I_GE_DMARc {

};

class GE_PS2PrimCacheDMABuffer : public I_GE_DMARc {
    public:
        virtual ~GE_PS2PrimCacheDMABuffer(); // 002ac1b0?
        virtual void func_002AC1A0();
        virtual void func_002AC220();
};

class GE_DMARc : public I_GE_DMARc {
    public:
        // virtual ? func_002DE730
        // virtual ? func_002DE720
        // virtual ? func_002C3158
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
        // base
        // base
        // virtual ? func_002B2528
};

class GE_Target {
    public:
        virtual ~GE_Target();
        // virtual ? = 0;
        // virtual ? = 0;
        // virtual ? = 0;
        // virtual ? = 0;
        // virtual ? = 0;
        // virtual ? = 0;
        virtual int func_0029A610();
        virtual int func_0029A618();
        virtual void func_0029A620();
        virtual void func_0029A628();
};

class GE_PS2Target : public GE_Target {
    public:
        int unk0;
        short unk12;
        // void*
        // void*
        GE_PS2Device* unk8;
        GE_PS2Target(GE_PS2Device*);
        //
        virtual int func_0029A8E8();
        virtual int func_0029A928();
        // virtual ? func_0029A968
        virtual int func_002A1B80();
        virtual int func_002A1B88();
        //~~~~~
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
        // virtual
        // virtual ? func_00299690
        // virtual ? func_002996A8
        // virtual ? func_002996C0

};

class ClipVolume {
    public:
        //
        // virtual ? = 0;
        // virtual ? = 0;
        // virtual ? = 0;
        // virtual ? = 0;
        // virtual ? = 0;
        // virtual ? = 0;
        // virtual ? = 0;
};

class PlaneClipVolume : public ClipVolume {

};

class SixPlaneClipVolume : public PlaneClipVolume {

};


#endif /* GE_UNK_H */
