#include "dialog.h"
#include "howtoplay.h"
#include "game.h"
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
    Win win;
    Loss loss;
    if(how.isAccepted())
    {
        game.setField(w.getDifficulty());
        game.show();
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
