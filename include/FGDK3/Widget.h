#ifndef WIDGET_H
#define WIDGET_H

class Widget_StdNotification {

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
//
// class Widget_Splitter : public Widget_Compositor {
//
// };
//
// class GUI_TitleBar : public Widget_Compositor {
//
// };

#endif
