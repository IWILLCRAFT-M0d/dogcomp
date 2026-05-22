#include "common.h"
#include "unk.h"
#include "debug.h"

#include "FGDK3/Playstation2/Thread.h"

#include "FGDK3/Widget.h"
#include <string.h>

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024BED8);

void Widget::func_0024BEF0() {
    return;
}

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024BEF8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024BF18);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024BF40);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024BF58);
#ifdef NON_MATCHING
Widget_Desktop::Widget_Desktop() {

}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", __14Widget_Desktop);
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024C198); /* return 0; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024C1A0); /* return 0; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024C1A8); /* return; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024C1B0); /* return; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", _$_14Widget_Desktop);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024C280);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024C388);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024C3F0);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_00433058); /* "Framework" */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024C420);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024C510);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024C660);

#ifdef NON_MATCHING
Widget::Widget(char* arg1, int arg2) {
    this->unk18 = arg2;
    this->unk0 = 0;
    this->unk4 = 0;
    this->unk8 = 0;
    this->unkC = 0;
    this->unk10 = NULL;
    this->unk14 = 0;
    this->unk70 = 0;
    //this->unk7C
    this->unk88 = 0;
    this->unk9C = 0;
    this->unkA0 = 0;
    //
    if (arg1 != NULL) {
        this->func_0024C868(arg1);
    }
}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", __6WidgetPci); /* Widget::Widget(char*, int) */
#endif
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", _$_6Widget);

char* Widget::func_0024C7C8() {
    return this->unk10;
}

int Widget::func_0024C7D0() {
    return 0;
}

int Widget::func_0024C7D8() {
    return 0;
}

int Widget::func_0024C7E0() {
    return 0;
}

int Widget::func_0024C7E8() {
    return 0;
}

int Widget::func_0024C7F0() {
    return 0;
}

int Widget::func_0024C7F8() {
    return 0;
}

int Widget::func_0024C800() {
    return 0;
}

int Widget::func_0024C808() {
    this->unk4 = 1;
    return 0;
}

void Widget::func_0024C818() {
    return;
}

void Widget::func_0024C820() {
    return;
}

void Widget::func_0024C828() {
    return;
}

void Widget::func_0024C830() {
    return;
}

void Widget::func_0024C838() {
    return;
}

int Widget::func_0024C840() {
    return 0;
}

int Widget::func_0024C848() {
    return 176;
}

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024C850); // Widget virtual

void Widget::func_0024C868(const char* arg1) {
    if (this->unk10 != NULL) {
        delete[] this->unk10;
    }
    this->unk10 = new char[strlen(arg1) + 1];
    strcpy(this->unk10, arg1);
}

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024C8C8);

Widget* Widget::func_0024C8D0() {
    this->unk0 = 0;
    this->unk4 = 0;
    this->unk8 = 0;
    this->unkC = 0;
    return this;
}

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024C8E8); // Widget virtual

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024C9C0); // Widget virtual

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024C9E8); // Widget virtual

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024CA18); // Widget virtual

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024CA40); // Widget virtual

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024CA68); // Widget virtual

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024CA90); // Widget virtual

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024CAB8); // Widget virtual

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024CAE0); // Widget virtual

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024CB30); // Widget virtual

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024CB58);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024CBB8); // Widget virtual

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024CBC0);

int Widget::func_0024CBD0() {
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024CBD8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024CC08);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024CC58); // Widget virtual

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024CCB8); // Widget virtual

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024CCF0); // Widget virtual

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024CDA0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024CE30); /* Widget_Text */

int Widget_Text::func_0024CEA0() {
    return 208;
}

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024CEA8); // Widget_Text virtual

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024CED0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024CEE0); // Widget_Text virtual

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024D188); // Widget virtual

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024D290); // Widget virtual

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024D398);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024D4B0); // Widget virtual

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024D500);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024D7D0); // Widget_Text virtual

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024D998);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024DB00); /* Widget_FormattedText */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024DB40); /* return 0xe0; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024DB48);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024DC78);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024DF30);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024DFA8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024E308); /* Widget_LiveText */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024E360);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024E3B0); /* return 0xe0; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024E3B8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024E620);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024E760); /* Widget_Graphic */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", _$_14Widget_Graphic);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024E868); /* return 0xe0; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024E870); // Widget_Graphic virtual

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024E928);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024FCA8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024FD70); // virtual

#ifdef NON_MATCHING
Widget_WithChildren::Widget_WithChildren(char* arg1, int arg2, int arg3) : Widget(arg1, arg2) {
    this->unkC8 = 0.04f;

    if (arg3 != 0) {
        //002555C8
    }
}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024FF08); /* Widget_WithChildren */
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024FF88); /* return 0xd0; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024FF90); /* return 0; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024FF98); /* return 0; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024FFA0); /* return 0; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024FFA8); /* return 0; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024FFB0); /* return 0; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024FFB8); /* return 1; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024FFC0); /* return 0; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024FFC8); /* return 0; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024FFD0); /* return; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0024FFD8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00250038);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00250080);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00250190);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_002501A8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00250210);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00250300);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_002503D8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00250478);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_002504D8); /* return 0xf0; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_002504E0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00250640);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00250B80);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00250C30);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00250CC0); /* return 0xc0; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00250CC8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00250D50); /* return; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00250D58);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00250D90);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00250DF0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00250E18);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00250F98);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00250FB8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00251018);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00251180);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_002511C8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00251390);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_002514E0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_002515E0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00251740);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00251858); /* return 0xf0; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00251860);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_002518A0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00251A68);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00251B90);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00251C68);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00251CF0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00251D40);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00251E30);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00251E58);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_002520D8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_002523B8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_002528D8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00252908); /* return; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00252910);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_002529B0); /* return 0x100; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_002529B8);  /* return 1; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_002529C0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00252A30);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00252AA8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00252AE0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00252B58);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00252BC0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00252E88);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00252EF0); /* return 0x100; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00252EF8); /* return 1; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00252F00);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00252FB8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00253010);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00253288); /* return 0x130; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00253290); /* return 1; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00253298); /* return 1; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_002532A0); /* return 1; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_002532A8); /* return 1; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_002532B0); /* return 1; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_002532B8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00253508); // Widget_Window virtual

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00253558);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00253580);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00253590);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00253598);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00253708);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_002537D8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00253850);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00253950);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_002539E0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00253A30);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00253A38);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00253A80);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00253AC8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00253AF8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00253B40);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00253B60);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00253BC8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00253D48);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00253D90);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00253E20);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00253FA0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00254110);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00254278);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00254408);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00254598);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00254740);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00254908);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00254AB0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00254B20);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00254B28);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00254BF0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00254CA0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00254DD8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00254E60);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00255138);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00255300);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00255308);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_002553E8); // "Widget \'%s\' is already attached elsewhere. Did you really mean this?\n"

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00255490);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_002555C8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00255638);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_002556A8); // "Attempt to remove non-child window\n"

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00255720); // Widget virtual
// "Bring to front request on widget with no parent\n"

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_002557C0); // Widget virtual
// "Send to back request on widget with no parent\n"

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00255860); // Widget virtual
// "Attempt to demote widget with no parent\n"

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00255908); // Widget virtual
// "Attempt to promote widget with no parent\n"

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_002559B0); // Widget virtual

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00255A78); // Widget virtual

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00255B40);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00255BA8); /* Widget_Compositor */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00255BF0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00255BF8);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_004332F8); /* "Attempt to place widget above non-hierarchical widget (not allowed)" */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00255C40); // "Attempt to get position of non-child widget \'%s\'\n"

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00255D18);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00255E50);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00255E88);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00255E90);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00255EC8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00255F30);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00255F68);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00256258);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00256368);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00256570);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00256640);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00256778);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00256930);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00256A60);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00256A88);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00256CB8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00256DE8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00256DF0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00256E70);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00256ED8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00256FE0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_002570D0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_002570F8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00257168);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00257200);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00257230);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00257260);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00257298);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_002572D0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_002572F8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00257350); /* return 0x100; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00257358);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_002573E0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00257578);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_002575A8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_002575E0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00257608);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_002576A0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_002576E8); /* return 0xe0; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_002576F0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00257960);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00257A70);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00257CA8); /* GUI_TitleBar */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00257F58);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00257F88);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00258098);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00258320);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00258380);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_002583E8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00258450);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00258590);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_002585B0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_002585D0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00258600); /* return 0xe0; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00258608);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00258610);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_002588E8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00258978);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_002589B8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00258DE8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00258EE8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00258F50);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00259368);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00259480); /* return; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00259488);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00259BB8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00259BF8); /* return 1; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00259C00);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00259C78);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025A2C0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025A300); /* return 1; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025A308);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025A3E8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025A418);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025A490);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025A500);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025A5A8); /* return; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025A5B0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025A608);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025A730);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025A828);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025A958); /* return; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025A960);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025AB78);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025AC20);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025AC40);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025AC78);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025ACD8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025AD70);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025ADB8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025ADD8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025AE68);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025AEE0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025B038); /* return 1; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025B040);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025B098);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025B0C0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025B300);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025B5D0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025B660);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025B7B8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025B960);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025BAE8); /* return 1; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025BAF0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025BB88);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025BD20);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025BE68);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025BEB0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025BEE0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025BFC0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025C060);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025C0E8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025C160);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025C1D8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025C480);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025C490);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025C4D8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025C530);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025C648);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025C680);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025C6C0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025C8A0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025C8E0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025C928);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025C978);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025CA60);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025CC20);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025CC98);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025CD58);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025CE30); /* return; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025CE38); /* return; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025CE40); /* return; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025CE48); /* return; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025CE50);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025CE60); /* return; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025CE68);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025CFE0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025D028);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025D0A8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025D100);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025D120);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025D140);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025D150);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025D160);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025D170);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_004334E0);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_00433500);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_00433520);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_00433538);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_00433550);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_00433568);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_00433748);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_00433928);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_00433B08);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_00433B28);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_00433B50);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_00433BA0);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_00433D88);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_00433F08);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_00434088);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_00434268);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_00434448);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_00434468);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_00434648);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_00434828);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_00434A38);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_00434BF8);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_00434DD8);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_00434FB8);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_00434FD8);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_004351C8);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_004353B0);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_004355A0);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_00435780);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_00435960);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_00435B40);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_00435D20);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_00435F08);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_004360F0);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", _vt$6Action);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_00436130);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_00436310);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_004364F0);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_004366D0);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_00436850);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", _vt$14Widget_Graphic);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", _vt$15Widget_LiveText);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", _vt$20Widget_FormattedText);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", _vt$11Widget_Text);

#ifndef NON_MATCHING
INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", _vt$6Widget);
#endif

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_00437150); /* "11Widget_Text" */

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_00437160); /* "20Widget_FormattedText" */

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_00437178); /* "15Widget_LiveText" */

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_00437190); /* "14Widget_Graphic" */

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_004371A8); /* "16Widget_Animation" */

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_004371C0); /* "11Widget_Fill" */

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_004371D0); /* "19Widget_WithChildren" */

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_004371E8); /* "13Widget_Border" */

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_004371F8); /* "17Widget_VScrollbar" */

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_00437210); /* "10NullAction" */

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_00437220); /* "13Widget_Button" */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025D1B0);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_00437248); /* "17Widget_Compositor" */

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_00437260); /* "15Widget_Splitter" */

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_00437278); /* "11Widget_Pane" */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", __tf13Widget_Window);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", __tf11Widget_Menu);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", __tf15Widget_MenuItem);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_004372C0); /* "14Widget_SubMenu" */

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_004372D8); /* "22Widget_StdNotification" */

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_004372F8); /* "12GUI_TitleBar" */

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_00437308); /* "13Widget_Layout" */

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_00437318); /* "11ValueEditor" */

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_00437328); /* "19Widget_EditableText" */

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_00437340); /* "14Widget_Desktop" */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", __tf15Widget_ErrorBox);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", __tf18Widget_QuestionBox);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_00437388); /* "18Widget_StdQuestion" */

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_004373A0); /* "15Widget_TableRow" */

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_004373B8); /* "12Widget_Table" */

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_004373C8); /* "10Widget_Bar" */

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_004373D8); /* "13Widget_Slider" */

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_004373E8); /* "14Widget_ListBox" */

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_00437400); /* "14DropDownUpdate" */

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_00437418); /* "19DefaultIndexUpdater" */

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_00437430); /* "18LookupIndexUpdater" */

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Widget", D_00437448); /* "Q215Widget_DropDown14DropDownAction" */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025D750);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", __tf6Widget);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025D880);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025D888);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025D8E8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025D8F0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025D8F8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025D928);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025D930);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025D940);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025D948);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025D950);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025D978);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025D988);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025D9A0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025D9B0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025D9D0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025D9F0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025D9F8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", _$_11Widget_Text);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", __tf11Widget_Text);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025DA90); /* return D_004512f8; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025DA98);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025DAA0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025DAB8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", __tf20Widget_FormattedText);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", __tf15Widget_LiveText);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", __tf14Widget_Graphic);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025DC78);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025DC80);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025DC88);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025DCA0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025DCF8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", __tf16Widget_Animation);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025DDB0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", __tf11Widget_Fill);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025DE40);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025DE60);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025DEB8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", __tf19Widget_WithChildren);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025DF40);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", __tf13Widget_Border);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025DFE0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025DFE8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025DFF0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025E008);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025E020);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", __tf17Widget_VScrollbar);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025E0D8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", __tf6Action);

Action::Action(){
    this->unk0 = 0;
}

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025E138);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", __tf10NullAction);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025E1C8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", __tf13Widget_Button);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025E300);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025E370);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", __tf17Widget_Compositor);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025E428);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", __tf15Widget_Splitter);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025E510);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", __tf11Widget_Pane);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025E5F8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025E610);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025E618);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025E638);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025E648);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025E668);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025E670);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025E6E0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", __tf14Widget_SubMenu);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025E7A0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025E7B0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", __tf22Widget_StdNotification);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025E840);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", __tf12GUI_TitleBar);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025E928);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", __tf13Widget_Layout);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", __tf11ValueEditor);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", __tf19Widget_EditableText);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025EAC8); /* return 1; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", __tf14Widget_Desktop);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025EB98);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025EBA0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025EBA8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025EBB0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025EBB8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025EBF0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025EBF8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025EC00);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025EC10);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025EC18);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025EC20);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025EC40);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", __tf18Widget_StdQuestion);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025ED20);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", __tf15Widget_TableRow);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025EE08);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025EE10);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", __tf12Widget_Table);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025EEF8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", __tf10Widget_Bar);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025F000);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", __tf13Widget_Slider);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025F0B8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", __tf14Widget_ListBox);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025F1A0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025F1A8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025F1C8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", __tf14DropDownUpdate);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025F258);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", __tf19DefaultIndexUpdater);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025F310);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", __tf18LookupIndexUpdater);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025F3C8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", __tfQ215Widget_DropDown14DropDownAction);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025F458);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025F478);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", __tf15Widget_DropDown);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025F5B0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025F5D0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025F5F0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025F610);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025F650);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025F658);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025F660);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025F698);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025F6B8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025F6E0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025F710);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025F730);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", __tf15Widget_Expander);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025F818);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", __tf11ChildAtEnum);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025F870);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", __tf14TrueExtentEnum);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025FA20);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", __tf10RenderEnum);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025FC18);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025FE30);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", __tf13SubMenuAction);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025FEC0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025FED8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", __tf15Expander_Action);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025FF68);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_0025FF88);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", __tf32WidgetCompositor_ChildEnumerator);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Widget", func_00260008);

