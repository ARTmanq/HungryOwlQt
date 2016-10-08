#include "facade.h"
#include <QApplication>
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Facade facade;
    facade.showDialog();
    a.exec();
    if(facade.isDialogAccepted())
    {
        facade.showHowToPlay();
        a.exec();
    }
    if(facade.isHowToPlayAccepted())
    {
        facade.gameSetField();
        facade.showGame();
        a.exec();
    }
    facade.showResult();
    a.exec();
    return 0;
}
