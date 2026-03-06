#ifndef GAMESTATE_H
#define GAMESTATE_H

namespace GameState {
    class GameStateReq {

        public:
            int arg0;
            GameStateReq(void*); // unknown variable

            virtual ~GameStateReq();
    };

};

/*
class BMPageChangeReq : GameState::GameStateReq {
    public:
        int m_page;

        BMPageChangeReq (int page);

        virtual ~BMPageChangeReq();
};
*/

// class LoadSavedGameReq : public GameState::GameStateReq {
//
// };
//
// class SwitchViewReq : public GameState::GameStateReq {
// };

// class ChangeLevelReq : public GameState::GameStateReq {
//     public:
//         int m_level;
//         int m_gate;
//         ChangeLevelReq(int level, int gate): GameStateReq(void* this);
//         void func_001D9AE8();
//         int func_001D9B20();
//         virtual ~ChangeLevelReq();
// };

// class BMHighlightMoveReq : public GameState::GameStateReq {
//     public:
//         int m_move;
//         BMHighlightMoveReq(int move);
// };
//
class BMPageActionReq : public GameState::GameStateReq {
    public:
        BMPageActionReq(int);
        int func_001D9FB0();
};

// class FadeInReq : public GameState::GameStateReq {
//     public:
//         FadeInReq(float);
// };
//
class FadeOutReq : public GameState::GameStateReq {
    public:
        FadeOutReq(float);
        void func_001DA048(); // do fadeout
};

#ifdef __cplusplus
extern "C" {
#endif
int func_001D95B0(void);
int func_001D9A50(void);
int func_001D9B20(void);
int func_001D9BF0(void);

void func_001DA1B8(void);
#ifdef __cplusplus
}
#endif

#endif
