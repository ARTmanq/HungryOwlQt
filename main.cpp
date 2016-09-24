#include "dialog.h"
#include "howtoplay.h"
#include "game.h"
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
    if(how.isAccepted())
    {
        game.show();
        a.exec();
    }
    return 0;
}
