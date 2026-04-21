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
        int unk10;
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
        virtual ~Widget();
};

class Widget_Text /*: public Widget */{

};

class Widget_FormattedText : public Widget_Text {

};

class Widget_LiveText : public Widget_Text {

};

class Widget_Graphic /*: public Widget */{

};

class Widget_WithChildren : public Widget {
    public:
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
