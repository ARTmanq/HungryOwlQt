#include "dialog.h"
#include "howtoplay.h"
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
    if(how.isAccepted())
    {
        std::cout << "OK" << std::endl;
    }
    return 0;
}
