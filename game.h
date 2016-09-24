#ifndef GAME_H
#define GAME_H

#include <QDialog>

namespace Ui {
class Game;
}

class Game : public QDialog
{
    Q_OBJECT

public:
    explicit Game(QWidget *parent = 0);
    ~Game();

private slots:

    void on_r0c0_clicked();

private:
    Ui::Game *ui;
};

#endif // GAME_H
