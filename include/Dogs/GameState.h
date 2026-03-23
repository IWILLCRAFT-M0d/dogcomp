#ifndef GAMESTATE_H
#define GAMESTATE_H

namespace GameState {
    class GameStateReq {

        public:
            //int arg0;
            void* unk8;
            void* unkC;
            GameStateReq(void*); // unknown variable
            virtual ~GameStateReq();
    };

};

class BMPageNumChangeReq : public GameState::GameStateReq {
    public:
        /* 0x14 */ int m_num;
        BMPageNumChangeReq(int num);
        virtual ~BMPageNumChangeReq();
        virtual void func_001D98A0();
};

class BMPageChangeReq : public GameState::GameStateReq {
    public:
        /* 0x14 */ int m_page;

        BMPageChangeReq (int page);
        virtual ~BMPageChangeReq();
        virtual void func_001D9748();
        //virtual ? func_001D9780
};

class BMStateChangeReq : public GameState::GameStateReq {
    public:
        /* 0x14 */ int m_state;
        BMStateChangeReq(int state);
        virtual ~BMStateChangeReq();
        virtual void func_001D9648();
        virtual void func_001D9680();
};

class LoadSavedGameReq : public GameState::GameStateReq {
    public:
        int unk0;
        LoadSavedGameReq(int);
        virtual ~LoadSavedGameReq();
        virtual void func_001D99F8();
        virtual int func_001D9A50();
};

class SwitchViewReq : public GameState::GameStateReq {
    public:
        SwitchViewReq();
        virtual ~SwitchViewReq();
        virtual void func_001D9228();
        virtual int func_001D95B0();
};

class StartNewGameReq : public GameState::GameStateReq {
    public:
        StartNewGameReq(int level, int gate, void* unk3, void* unk4);
        virtual ~StartNewGameReq();
        virtual void func_001D9BB8();
        virtual int func_001D9BF0();
};

class ChangeLevelReq : public GameState::GameStateReq {
    public:
        /* 0xC */ int m_level;
        /* 0x10 */ int m_gate;
        ChangeLevelReq(int level, int gate);
        virtual void func_001D9AE8();
        virtual int func_001D9B20();
        virtual ~ChangeLevelReq();
};

class BMHighlightMoveReq : public GameState::GameStateReq {
    public:
        /* 0x14 */ int m_move;
        BMHighlightMoveReq(int move);
        virtual ~BMHighlightMoveReq();
};

class BMPageActionReq : public GameState::GameStateReq {
    public:
        /* 0x14 */ int m_action;
        BMPageActionReq(int action);
        virtual ~BMPageActionReq();
        virtual void func_001D9E78();
        virtual int func_001D9FB0();
};

class FadeInReq : public GameState::GameStateReq {
    public:
        float unk0;
        FadeInReq(float);
        virtual ~FadeInReq();
        virtual void func_001DA138(); // do fadein
        //func_001DA160
};

class FadeOutReq : public GameState::GameStateReq {
    public:
        float unk0;
        FadeOutReq(float);
        virtual ~FadeOutReq();
        virtual void func_001DA048(); // do fadeout
        //func_001DA070
};

#ifdef __cplusplus
extern "C" {
#endif




void func_001DA1B8(void);
#ifdef __cplusplus
}
#endif

#endif
