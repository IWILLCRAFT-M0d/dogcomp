#ifndef WIDGET_H
#define WIDGET_H

class Widget_StdNotification /*: public Action */ {

};

class Widget {
    public:
        int unk0;
        int unk4;
        int unk8;
        int unkC;
        char* unk10;
        int unk14;
        int unk18;
        //
        int unk70;
        //
        int unk88;
        //
        int unk9C;
        //
        int unkA0;
        Widget(char*, int);
        // virtual ? func_0024C7C8()
        // virtual ? func_0024C868
        virtual ~Widget();
        virtual int func_0024C7D0();
        virtual int func_0024C7D8();
        virtual int func_0024C7E0();
        virtual int func_0024C7E8();
        virtual int func_0024C7F0();
        virtual int func_0024C7F8();
        virtual int func_0024C800();
        // virtual ? func_0024C850
        virtual int func_0024C808();
        virtual void func_0024C818();
        virtual void func_0024C820();
        virtual void func_0024C828();
        // virtual ? func_0024CCF0
        virtual void func_0024C830();
        // virtual ? func_0024C9C0
        // virtual ? func_0024CA40
        // virtual ? func_0024CA90
        // virtual ? func_0024CAB8
        // virtual ? func_0024C9E8
        // virtual ? func_0024CA18
        // virtual ? func_0024CAE0
        // virtual ? func_0024CB30
        // virtual ? func_0024CA68
        // virtual ? = 0;
        virtual Widget* func_0024C8D0();
        // virtual ? func_0024D188
        // virtual ? func_0024D4B0
        // virtual ? func_0024D290
        virtual void func_0024C838();
        // virtual ? func_0024CCB8
        // virtual ? func_00255720
        // virtual ? func_002557C0
        // virtual ? func_00255860
        // virtual ? func_00255908
        // virtual ? func_002559B0
        // virtual ? func_00255A78
        // virtual ? func_0024C8E8
        virtual int func_0024C840();
        virtual int func_0024CBD0();
        // virtual ? func_0024CC58
        // virtual void func_0024CBB8(?)
        virtual void func_0024BEF0();
        virtual int func_0024C848();
};

class Widget_Text /*: public Widget */{

};

class Widget_FormattedText : public Widget_Text {

};

class Widget_LiveText : public Widget_Text {

};

class Widget_Graphic /*: public Widget */{
    public:
        virtual ~Widget_Graphic();
};

class Widget_WithChildren : public Widget {
    public:
        float unkC8;

        Widget_WithChildren(char*, int, int);
        virtual ~Widget_WithChildren();
};

class Widget_Compositor : public Widget_WithChildren {
    public:
        Widget_Compositor(float, char*, int, int);
        virtual ~Widget_Compositor();
};

class Widget_Splitter /*: public Widget_Compositor*/ {

};

class GUI_TitleBar /*: public Widget_Compositor*/ {

};


class Widget_Pane /* : public Widget_Border */ {

};

class Widget_QuestionBox : public Widget_Pane {

};

class Widget_ErrorBox : public Widget_Pane {

};

class Widget_VScrollBar /* : public Widget_WithChildren */ {

};

class Widget_ListBox : public Widget_VScrollBar {

};

class Widget_Button /* : public Widget_Border */ {

};

class Widget_MenuItem : public Widget_Button {

};

class Widget_SubMenu : public Widget_MenuItem {

};

class Widget_Bar /* : public Widget */ {

};

class Widget_Slider : public Widget_Bar {

};

class Widget_Layout /* : public Widget_WithChildren */ {

};

class Widget_TableRow /* : public Widget_Border */ {

};

#endif
