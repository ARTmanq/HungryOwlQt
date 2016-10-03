#include "dialog.h"
#include "howtoplay.h"
#include "game.h"
#include "gamemedium.h"
#include "gamehard.h"
#include "win.h"
#include "loss.h"
#include <QApplication>
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;
    HowToPlay how;
    w.show();
    a.exec();
    if(w.isAccepted())
    {
        how.show();
        a.exec();
    }
    Game game;
    GameMedium gameMedium;
    GameHard gameHard;
    Win win;
    Loss loss;
    if(how.isAccepted())
    {
        if(w.getDifficulty() == Difficulty::Easy)
        {
            game.setField();
            game.show();
        }
        if(w.getDifficulty() == Difficulty::Medium)
        {
            gameMedium.setField();
            gameMedium.show();
        }
        if(w.getDifficulty() == Difficulty::Hard)
        {
            gameHard.setField();
            gameHard.show();
        }
        a.exec();
    }
    if(game.isAccepted())
    {
        win.show();
    }
    else
    {
        loss.show();
    }
    a.exec();
    return 0;
}
