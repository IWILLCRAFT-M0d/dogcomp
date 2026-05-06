#include "common.h"
#include "unk.h"

#include "FGDK3/IKComponents.h"
#include "FGDK3/BoneManager.h"

// split? (bonemanager?)
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/BoneManager", func_002E7B08);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/BoneManager", func_002E7B80);

BoneManager::BoneManager() {
    this->unk0 = 0;
    this->unk4 = 0x0;
    this->unkC = 0;
    this->unk10 = 0x0;
    this->unk14 = 0;
    this->unk18 = 0x0;
    this->unk1C = 0x0;
    this->unk24 = 0x0;
    this->unk28 = 0x0;
    InitIKStateArrays(4, 20);
}

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/BoneManager", _$_11BoneManager);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/BoneManager", func_002E7E18);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/BoneManager", func_002E8218);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/BoneManager", func_002E82C0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/BoneManager", func_002E8368);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/BoneManager", func_002E94C8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/BoneManager", func_002E9510);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/BoneManager", func_002E9558);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/BoneManager", func_002E9648);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/BoneManager", func_002E9758);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/BoneManager", GetMatrixIDFromName__11BoneManagerPc);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/BoneManager", func_002E9A20);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/BoneManager", func_002E9F08);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/BoneManager", func_002E9FD8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/BoneManager", func_002EA070); /* BoneManager::GetAnimPos ? */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/BoneManager", func_002EA2A8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/BoneManager", func_002EA310);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/BoneManager", func_002EA390);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/BoneManager", func_002EA480);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/BoneManager", func_002EAD28);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/BoneManager", func_002EB0E0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/BoneManager", InitIKStateArrays__11BoneManagerii);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/BoneManager", func_002EB508);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/BoneManager", func_002EB778);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/BoneManager", func_002EB820);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/BoneManager", func_002EB950);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/BoneManager", func_002EB958);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/BoneManager", func_002EBFC8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/BoneManager", func_002EC8C0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/BoneManager", func_002ECC78);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/BoneManager", func_002ECFF0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/BoneManager", func_002ED200);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/BoneManager", func_002ED260);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/BoneManager", func_002ED288);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/BoneManager", func_002ED2A8);
