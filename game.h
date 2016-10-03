#ifndef GAME_H
#define GAME_H

#include "Field.h"
#include "dialog.h"
#include <QDialog>
#include <QLCDNumber>
#include <QProgressBar>

namespace Ui {
class Game;
}

class Game : public QDialog
{
    Q_OBJECT

public:
    explicit Game(QWidget *parent = 0);
    ~Game();
    void setField();
    bool isAccepted() const;

private slots:

    void on_r0c0_clicked();

    void on_r0c1_clicked();

    void on_r0c2_clicked();

    void on_r0c3_clicked();

    void on_r0c4_clicked();

    void on_r0c5_clicked();

    void on_r0c6_clicked();

    void on_r1c0_clicked();

    void on_r1c1_clicked();

    void on_r1c2_clicked();

    void on_r1c3_clicked();

    void on_r1c4_clicked();

    void on_r1c5_clicked();

    void on_r1c6_clicked();

    void on_r2c0_clicked();

    void on_r2c1_clicked();

    void on_r2c2_clicked();

    void on_r2c3_clicked();

    void on_r2c4_clicked();

    void on_r2c5_clicked();

    void on_r2c6_clicked();

    void on_r3c0_clicked();

    void on_r3c1_clicked();

    void on_r3c2_clicked();

    void on_r3c3_clicked();

    void on_r3c4_clicked();

    void on_r3c5_clicked();

    void on_r3c6_clicked();

    void on_r4c0_clicked();

    void on_r4c1_clicked();

    void on_r4c2_clicked();

    void on_r4c3_clicked();

    void on_r4c4_clicked();

    void on_r4c5_clicked();

    void on_r4c6_clicked();

    void on_r5c0_clicked();

    void on_r5c1_clicked();

    void on_r5c2_clicked();

    void on_r5c3_clicked();

    void on_r5c4_clicked();

    void on_r5c5_clicked();

    void on_r5c6_clicked();

    void on_r6c0_clicked();

    void on_r6c1_clicked();

    void on_r6c2_clicked();

    void on_r6c3_clicked();

    void on_r6c4_clicked();

    void on_r6c5_clicked();

    void on_r6c6_clicked();

private:
    Ui::Game *ui;
    Field field;
    int steps, currentAmountOfMice, currentOwlHP;
    bool acceptd;

    void buttonClicked(QPushButton*, unsigned int, unsigned int);
};

#endif // GAME_H
