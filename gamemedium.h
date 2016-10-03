#ifndef GAMEMEDIUM_H
#define GAMEMEDIUM_H

#include <QDialog>

namespace Ui {
class GameMedium;
}

class GameMedium : public QDialog
{
    Q_OBJECT

public:
    explicit GameMedium(QWidget *parent = 0);
    ~GameMedium();

private:
    Ui::GameMedium *ui;
};

#endif // GAMEMEDIUM_H
