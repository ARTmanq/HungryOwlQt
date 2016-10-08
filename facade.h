#ifndef FACADE_H
#define FACADE_H

#include "dialog.h"
#include "howtoplay.h"
#include "game.h"
#include "gamemedium.h"
#include "gamehard.h"
#include "win.h"
#include "loss.h"


class Facade
{
public:
    Facade();
    ~Facade();
    void showDialog();
    void showHowToPlay();
    void showGame();
    void showResult();
    bool isDialogAccepted() const;
    bool isHowToPlayAccepted() const;
    bool isGameAccepted() const;
    void gameSetField();

private:
    Dialog w;
    HowToPlay how;
    Game *game;
    GameMedium *gameMedium;
    GameHard *gameHard;
    Win win;
    Loss loss;
    Difficulty difficulty;
};

#endif // FACADE_H
