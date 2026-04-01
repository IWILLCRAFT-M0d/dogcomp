#include "common.h"

#include "Dogs/Containers.h"

extern ClassInfo* D_0044E568;
extern ClassInfo* D_0044E570;
extern ClassInfo* D_0044E580;

#ifdef NON_MATCHING
Container::Container(ClassInfo* arg1, SimObj_Universe* arg2, int arg3, short arg4) : WorldObject(arg1 = 0, arg2, arg3, arg4) {
	if (arg1 != 0) {
		D_0044E568 = arg1;
	}
	this->unk600 = 0;

	if (arg1 == NULL) {
		D_0044E568->unk4 = 1;
	}
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Containers", __9ContainerP9ClassInfoP15SimObj_Universeis);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Containers", _$_9Container);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Containers", func_001AB8B8__9Container);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Containers", func_001AB920);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Containers", func_001AB990__9Container);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Containers", func_001AB9D8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Containers", func_001ABA10__9Containerf);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Containers", func_001ABA78);

#ifdef NON_MATCHING
BasketballNet::BasketballNet(ClassInfo* arg1, SimObj_Universe* arg2, int arg3, short arg4) : Container(arg1 = 0, arg2, arg3, arg4) {
	if (arg1 != 0) {
		D_0044E570 = arg1;
	}
	this->unk610 = 0;
	this->unk614 = 0;
	this->unk618 = 1;
	if (arg1 == NULL) {
		D_0044E570->unk4 = 1;
	}
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Containers", __13BasketballNetP9ClassInfoP15SimObj_Universeis);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Containers", _$_13BasketballNet);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Containers", func_001ABCA8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Containers", func_001ABFB8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Containers", func_001ABFE0); // ball detection?

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Containers", func_001AC098); // rendering thing

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Containers", func_001AC0B8); // virtual BasketballNet member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Containers", func_001AC120);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Containers", func_001AC1F8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Containers", func_001AC2F0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Containers", func_001AC350);

#ifdef NON_MATCHING
Pram::Pram(ClassInfo* arg1, SimObj_Universe* arg2, int arg3, short arg4) : Container(arg1 = 0, arg2, arg3, arg4) {
	if (arg1 != 0) {
		D_0044E580 = arg1;
	}

	this->unk610 = 0;
	this->unk614 = 0;
	this->unk618 = 0;
	this->unk61C = 0;

	if (arg1 == NULL) {
		D_0044E580->unk4 = 1;
	}
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Containers", __4Pram9ClassInfoP15SimObj_Universeis);
#endif
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Containers", _$_4Pram);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Containers", D_003D6AA0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Containers", D_003D6C20); /* "Slidable: Out of memory ..." */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Containers", func_001AC560);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Containers", func_001AC870);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Containers", func_001AC898);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Containers", func_001AC8B8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Containers", func_001AC960);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Containers", func_001ACA50);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Containers", func_001ACB28);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Containers", D_003D6C70);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Containers", D_003D6C98);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Containers", D_003D6CB8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Containers", D_003D6CD0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Containers", D_003D6CE8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Containers", D_003D6D00);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Containers", D_003D6D18);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Containers", D_003D7F38);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Containers", D_003D7F78);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Containers", D_003D7F90);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Containers", D_003D7FA8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Containers", D_003D8278);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Containers", D_003D82A0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Containers", D_003D82C0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Containers", D_003D82D8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Containers", D_003D82F0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Containers", D_003D8308);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Containers", D_003D8320);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Containers", D_003D9540);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Containers", D_003D9580);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Containers", D_003D9598);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Containers", D_003D95B0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Containers", D_003D9880);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Containers", D_003D98A8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Containers", D_003D98C8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Containers", D_003D98E0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Containers", D_003D98F8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Containers", D_003D9910);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Containers", D_003D9928);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Containers", D_003DAB48);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Containers", D_003DAB88);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Containers", D_003DABA0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Containers", D_003DABB8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Containers", func_001ACC20);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Containers", __tf9Container);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Containers", func_001ACFB8);

int func_001ACFC0(void) {
	return 0;
}

void func_001ACFC8(void) { // Container member
	return;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Containers", func_001ACFD0); /* return D_0044e568; */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Containers", D_003DAEA8); /* "9Container" */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Containers", __tf13BasketballNet);

ClassInfo* BasketballNet::func_001AD070() {
	return D_0044E570;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Containers", __tf4Pram);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Containers", func_001AD110); /* return D_0044e580; */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Containers", func_001AD118);

