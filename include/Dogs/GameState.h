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
        int m_num;
        BMPageNumChangeReq(int num);
        virtual ~BMPageNumChangeReq();
        void func_001D98A0();
};

class BMPageChangeReq : public GameState::GameStateReq {
    public:
        int m_page;

        BMPageChangeReq (int page);
        virtual ~BMPageChangeReq();
        void func_001D9748();
        //func_001D9780
};

class BMStateChangeReq : public GameState::GameStateReq {
    public:
        int m_state;
        BMStateChangeReq(int state);
        virtual ~BMStateChangeReq();
        void func_001D9648();
        void func_001D9680();
};

class LoadSavedGameReq : public GameState::GameStateReq {
    public:
        int unk0;
        LoadSavedGameReq(int);
        virtual ~LoadSavedGameReq();
        void func_001D99F8();
        int func_001D9A50();
};

class SwitchViewReq : public GameState::GameStateReq {
    public:
        SwitchViewReq();
        virtual ~SwitchViewReq();
        void func_001D9228();
        int func_001D95B0();
};

class StartNewGameReq : public GameState::GameStateReq {
    public:
        StartNewGameReq(int level, int gate, void* unk3, void* unk4);
        virtual ~StartNewGameReq();
        void func_001D9BB8();
        int func_001D9BF0();
};

class ChangeLevelReq : public GameState::GameStateReq {
    public:
        int m_level;
        int m_gate;
        ChangeLevelReq(int level, int gate);
        void func_001D9AE8();
        int func_001D9B20();
        virtual ~ChangeLevelReq();
};

class BMHighlightMoveReq : public GameState::GameStateReq {
    public:
        int m_move;
        BMHighlightMoveReq(int move);
        virtual ~BMHighlightMoveReq();
};

class BMPageActionReq : public GameState::GameStateReq {
    public:
        int m_action;
        BMPageActionReq(int action);
        virtual ~BMPageActionReq();
        void func_001D9E78();
        int func_001D9FB0();
};

class FadeInReq : public GameState::GameStateReq {
    public:
        float unk0;
        FadeInReq(float);
        virtual ~FadeInReq();
        void func_001DA138(); // do fadein
        //func_001DA160
};

class FadeOutReq : public GameState::GameStateReq {
    public:
        float unk0;
        FadeOutReq(float);
        virtual ~FadeOutReq();
        void func_001DA048(); // do fadeout
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
