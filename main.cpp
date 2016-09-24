#include "dialog.h"
#include "howtoplay.h"
#include <QApplication>
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;
    w.show();
    a.exec();
    if(w.isAccepted())
    {
        HowToPlay how;
        how.show();
        a.exec();
    }
    return 0;
}
