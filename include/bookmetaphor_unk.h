// NOTE: This file is temporary until the proper headers and whatnot are created
#ifndef BOOKMETAPHOR_UNK_H
#define BOOKMETAPHOR_UNK_H

#include "FGDK3/Playstation2/Thread.h"
#include "data_unk.h"
#include "file_unk.h"

// BookMetaphor classes
namespace BookMetaphor {
    class Page {
        public:
            int unk0;
            virtual ~Page();
            virtual void func_0019E378();
            // virtual ? = 0;
            // virtual ? = 0;
            // virtual ? = 0;
            // virtual ? = 0;
            // virtual ? func_0019e380
            virtual int func_0019E3A8();
            virtual int func_0019E3B0();

    };
    class CurrentPositionPageResponder {

    };

    class GamePositionPage : public Page {
        public:
            // unk8;
            int unkC;
            GamePositionPage(int);
            virtual ~GamePositionPage();
            // virtual ? func_0018CA48
            // virtual ? func_0018CBA0
            // virtual ? func_0018D438
            // virtual ? = 0;
            // virtual ? = 0;
            // virtual base function (0019e380)
            // virtual base function (0019e3a8)
            // virtual base function (0019e3b0)
            // virtual ? = 0;
            // virtual ? = 0;
            // virtual ? = 0;
            // virtual ? = 0;
            // virtual ? = 0;
            // virtual ? = 0;
            // virtual ? = 0;
    };

    class NewGamePage : public GamePositionPage {
        public:
            int unk10; // m_state?
            string_ascii unk14;
            NewGamePage();
            virtual ~NewGamePage();
            //
            short func_0018D830();
            int func_0018D840();
            int func_0018D848();
            int func_0018D850();
            int func_0018D858();
            int func_0018D860();
            //func_0018D868
    };

    class LoadGamePage : public GamePositionPage {
        public:
            int unk10;
            int unk14; // m_state
            LoadGamePage(int, int);
            virtual ~LoadGamePage();
            //func_0018E0D0
            //func_0018E0F0
            //func_0018E110
            //func_0018E138
            //func_0018E168
    };

    // class SaveGamePage : public GamePositionPage {
    //  public:
    //      //SaveGamePage
    //      virtual ~SaveGamePage();
            //func_0018E9E8
            //func_0018EA08
            //func_0018EA28
            //func_0018EA50
            //func_0018EA80
    //};

    // class CurrentPositionPage : public GamePositionPage, public CurrentPositionPageResponder {
    //     public:
    //         //CurrentPositionPage
    //         virtual ~CurrentPositionPage();
    //         //func_0018F070
    // };

    class Stats0Page : public Page, public CurrentPositionPageResponder {
        public:
            Stats0Page();
            virtual ~Stats0Page();
    };
    class Stats1Page : public Page {
        public:
            //unk8
            int unk10;
            // unk10
            // unkC
            int unk14;
            int unk18;
            Stats1Page();
            virtual ~Stats1Page();
    };

    class SettingsPage : public Page {
        public:
            int unk8; // m_cursorPos
            int unkC; // action?
            int unk10;
            /* 0x14 */ bool m_cheatsAvailable;
            SettingsPage();
            virtual ~SettingsPage();
            // virtual ? func_00192010
            // virtual ? func_00192110
            // virtual ? func_00192820
            // virtual ? func_001928A8
            // virtual ? func_00192CF0
            // virtual base function (0019e380)
            // virtual base function (0019e3a8)
            // virtual base function (0019e3b0)
    };

    class CheatsPage : public Page, public CurrentPositionPageResponder {
        public:
            // unk8
            int unk10; // m_cursorPos
            int unk14; // m_state?
            int unk1C;
            CheatsPage();
            virtual ~CheatsPage();
            // virtual ? func_00193528
            // virtual ? func_001935F0
            // virtual ? func_00193D38
            // virtual ? func_00193DC0
            // virtual ? func_00193F60
            // virtual base function (0019e380)
            // virtual base function (0019e3a8)
            // virtual base function (0019e3b0)

    };

    class BackgroundThread : public Thread {
        public:

            int unk8;
            BackgroundThread();
            virtual ~BackgroundThread();
            //virtual ? func_00194678
    };

    // class NewGameBackgroundThread : public BackgroundThread
    // class LoadGameBackgroundThread : public BackgroundThread
    // class SaveGameBackgroundThread : public BackgroundThread

    class ChangeLevelBackgroundThread : public BackgroundThread {
        public:
            /* 0xC */ int m_level;
            /* 0x10 */ int m_gate;
            ChangeLevelBackgroundThread(int level, int gate);
            virtual ~ChangeLevelBackgroundThread();
            // virtual base function
            virtual void func_001947C8();
    };


};

class BookMetaphorLayer : public GameLayer, public File::CallBack {
    public:
        BookMetaphorLayer();
        // virtual base function (0024C7C8)
        // virtual base function (0024C868)
        virtual ~BookMetaphorLayer();
};

#endif /* BOOKMETAPHOR_UNK_H */
