#include "common.h"
#include "debug.h"
#include "unk.h"

#include <libscf.h>


INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_00290F58);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_00290F70);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_00291050);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_002910C8);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_00291110);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_002912D8);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_00291438);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_00291568);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_00291638);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_00291700);

void func_00291770() {
    return;
}

void func_00291778() {
    return;
}

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_00291780);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_00291CC0);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_00291DC8);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_00292168);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_00292278);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_002922A0);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_00292338);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_00292528);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_00292940);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_00292C48);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_00292CF8);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_00292D70);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_00292E68);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_00292E78);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_00293C28);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_00293C50);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_00293C60);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_00293CE0);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_00293CF0);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_00294690);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_00294700);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_00294770);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_002947E0);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_00294878);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_00294918);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_002949B8);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_00294AF8);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_00294C90);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_00294E28);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_00294FC8);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_00295040);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_002950B8);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_00295130);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_002951A8);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_00295220);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_00295298);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_00295310); // render distance for level props?

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_002953D0);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_00295708);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_002957E8);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_00295838);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_00295918);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_00295C50);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_00295D80);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_00295DF0);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_00295E60);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_00295ED0);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_00295F68);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_00296008);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_002960A8);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_00296178);
#ifdef NON_MATCHING
int Main_RunGame() {

}
#else
INCLUDE_ASM("asm/nonmatchings/text_00290F58", Main_RunGame__Fv); /* Main_RunGame */
#endif

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_002963D0); /* Main_Terminate */
/*
void Main_Terminate() {
    Main_CloseRequest = 1;
}
*/
INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_002963E0); /* return tempR__Main_CloseRequest; */

void func_002963E8() {
    return;
}

int func_002963F0() {
    return 0;
}

INCLUDE_RODATA("asm/nonmatchings/text_00290F58", D_0043EC30);

// getPS2Lang
int func_002963F8() {

    switch (sceScfGetLanguage()) {
    case SCE_JAPANESE_LANGUAGE:
        return 0;
    case SCE_FRENCH_LANGUAGE:
        return 2;
    case SCE_SPANISH_LANGUAGE:
        return 3;
    case SCE_GERMAN_LANGUAGE:
        return 4;
    case SCE_ITALIAN_LANGUAGE:
        return 5;
    case SCE_DUTCH_LANGUAGE:
        return 6;
    case SCE_PORTUGUESE_LANGUAGE:
        return 7;
    default:
        //SCE_ENGLISH_LANGUAGE
        return 1;
    }
}

int func_00296478(void) {
    return 3;
}

int func_00296480(int arg0) {
    switch (arg0) {
        case 1:
            return 1;
        case 2:
            return 1;
        case 3:
            return 1;
        default:
            return 0;
    }
}

// isWidescreen
int func_002964C0() {
    return sceScfGetAspect() == SCE_ASPECT_169;
}

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_002964E8);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_00296548);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_00296590);

INCLUDE_ASM("asm/nonmatchings/text_00290F58", func_002965B0);
