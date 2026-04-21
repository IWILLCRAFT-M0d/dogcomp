#ifndef VIRTUALDESKTOP_H
#define VIRTUALDESKTOP_H


class VirtualDesktop : public Widget_Desktop/*, public PointerMessageHandler, public InputBinding, public MenuRegisterable*/ {
    public:
        /* 0x1B4 */ bool m_cursorHidden;
        VirtualDesktop();
};


#endif
