#include "common.h"
#include <libscf.h>

#include "FGDK3/Playstation2/Thread.h"
#include "Dogs/Gameutil.h"




#ifdef NON_MATCHING
Status Gameutil_InternalInitialise(void) {
	return Status(0xFFFFFFFF, "c:/coding/dogs/Code/Common/Gameutil.cpp", 69);
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Gameutil", Gameutil_InternalInitialise__Fv);
#endif

void Gameutil_InternalFinalise() {
	return;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Gameutil", Gameutil_Initialise__Fv);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Gameutil", Gameutil_Finalise__Fv);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Gameutil", func_001DA440);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Gameutil", func_001DA588);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Gameutil", func_001DA8F8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Gameutil", func_001DAC68);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Gameutil", func_001DB190);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Gameutil", func_001DB388);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Gameutil", func_001DB518);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Gameutil", func_001DB8B0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Gameutil", func_001DB998);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Gameutil", func_001DB9E8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Gameutil", func_001DBC90);

#ifdef NON_MATCHING
int func_001DBD50(int arg0) {
	switch (arg0) {

	case 0:
		return 0;
	case SCE_ENGLISH_LANGUAGE:
		return 0;
	case SCE_FRENCH_LANGUAGE:
		return 2;
	case SCE_SPANISH_LANGUAGE:
		return 5;
	case SCE_GERMAN_LANGUAGE:
		return 4;
	case SCE_ITALIAN_LANGUAGE:
		return 3;
	case SCE_DUTCH_LANGUAGE:
		return 1;
	case SCE_PORTUGUESE_LANGUAGE:
		return 6;
	default:
		return 0;
  }
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Gameutil", func_001DBD50);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Gameutil", func_001DBDB8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Gameutil", func_001DBFE0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Gameutil", func_001DC070);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Gameutil", func_001DC0D0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Gameutil", func_001DC1F0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Gameutil", func_001DC588);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Gameutil", func_001DC620);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Gameutil", func_001DC698);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Gameutil", func_001DCA88);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Gameutil", func_001DCAF8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Gameutil", func_001DCB60);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Gameutil", func_001DCD08);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Gameutil", func_001DCD40);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Gameutil", func_001DCD48);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Gameutil", func_001DCD50);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Gameutil", func_001DCDC8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Gameutil", func_001DCE18);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Gameutil", func_001DD0B8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Gameutil", func_001DD128);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Gameutil", func_001DD220);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Gameutil", func_001DD2A0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Gameutil", func_001DD2D8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Gameutil", func_001DD310);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Gameutil", func_001DD348);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Gameutil", func_001DD368);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Gameutil", func_001DD3A0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Gameutil", func_001DD400);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Gameutil", func_001DD460);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Gameutil", func_001DD4A0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Gameutil", func_001DD4C8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Gameutil", func_001DD4F0);

void func_001DD518(void) {
	return;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Gameutil", func_001DD520);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Gameutil", func_001DD570);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Gameutil", func_001DD578);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Gameutil", func_001DD580);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Gameutil", func_001DD5B0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Gameutil", func_001DD5D0);
