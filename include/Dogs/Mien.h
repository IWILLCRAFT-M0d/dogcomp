#ifndef MIEN_H
#define MIEN_H

class Mien {
    public:
        int unk0;
        int unk4;
        float unk8;
        float unkC;
        float unk10;
        float unk14;       // 0x14 - Missing field
        float unk18;
        float unk1C;
        float unk20;
        int unk24;       // 0x24 - Missing field

        Mien();
        virtual ~Mien();
        void func_001E6C68(unsigned int);
        void func_001E6CC8(float);
        void func_001E6C80(float);
};

#endif /* MIEN_H */
