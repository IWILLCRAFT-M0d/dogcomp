#ifndef BONEMANAGER_H
#define BONEMANAGER_H

/**
 * @note Name taken from RCT3 symbols.
*/
class BoneManager {
    public:
        int unk0;
        void* unk4;
        char unk8[4];
        int unkC;
        void* unk10;
        int unk14;
        void* unk18;
        void* unk1C;
        int unk20;
        void* unk24;
        void* unk28;
        BoneManager();
        ~BoneManager();

        /**
         * @note Name taken from RCT3 symbols.
         */
        static void InitIKStateArrays(int, int);
};

#endif /* BONEMANAGER_H */
