#ifndef GAMEMEDIUM_H
#define GAMEMEDIUM_H

#include "Field.h"
#include "dialog.h"
#include <QDialog>
#include <QLCDNumber>
#include <QProgressBar>

namespace Ui {
class GameMedium;
}

class GameMedium : public QDialog
{
    Q_OBJECT

public:
    explicit GameMedium(QWidget *parent = 0);
    ~GameMedium();
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

    void on_r0c7_clicked();

    void on_r0c8_clicked();

    void on_r0c9_clicked();

    void on_r1c0_clicked();

    void on_r1c1_clicked();

    void on_r1c2_clicked();

    void on_r1c3_clicked();

    void on_r1c4_clicked();

    void on_r1c5_clicked();

    void on_r1c6_clicked();

    void on_r1c7_clicked();

    void on_r1c8_clicked();

    void on_r1c9_clicked();

    void on_r2c0_clicked();

    void on_r2c1_clicked();

    void on_r2c2_clicked();

    void on_r2c3_clicked();

    void on_r2c4_clicked();

    void on_r2c5_clicked();

    void on_r2c6_clicked();

    void on_r2c7_clicked();

    void on_r2c8_clicked();

    void on_r2c9_clicked();

    void on_r3c0_clicked();

    void on_r3c1_clicked();

    void on_r3c2_clicked();

    void on_r3c3_clicked();

    void on_r3c4_clicked();

    void on_r3c5_clicked();

    void on_r3c6_clicked();

    void on_r3c7_clicked();

    void on_r3c8_clicked();

    void on_r3c9_clicked();

    void on_r4c0_clicked();

    void on_r4c1_clicked();

    void on_r4c2_clicked();

    void on_r4c3_clicked();

    void on_r4c4_clicked();

    void on_r4c5_clicked();

    void on_r4c6_clicked();

    void on_r4c7_clicked();

    void on_r4c8_clicked();

    void on_r4c9_clicked();

    void on_r5c0_clicked();

    void on_r5c1_clicked();

    void on_r5c2_clicked();

    void on_r5c3_clicked();

    void on_r5c4_clicked();

    void on_r5c5_clicked();

    void on_r5c6_clicked();

    void on_r5c7_clicked();

    void on_r5c8_clicked();

    void on_r5c9_clicked();

    void on_r6c0_clicked();

    void on_r6c1_clicked();

    void on_r6c2_clicked();

    void on_r6c3_clicked();

    void on_r6c4_clicked();

    void on_r6c5_clicked();

    void on_r6c6_clicked();

    void on_r6c7_clicked();

    void on_r6c8_clicked();

    void on_r6c9_clicked();

    void on_r7c0_clicked();

    void on_r7c1_clicked();

    void on_r7c2_clicked();

    void on_r7c3_clicked();

    void on_r7c4_clicked();

    void on_r7c5_clicked();

    void on_r7c6_clicked();

    void on_r7c7_clicked();

    void on_r7c8_clicked();

    void on_r7c9_clicked();

    void on_r8c0_clicked();

    void on_r8c1_clicked();

    void on_r8c2_clicked();

    void on_r8c3_clicked();

    void on_r8c4_clicked();

    void on_r8c5_clicked();

    void on_r8c6_clicked();

    void on_r8c7_clicked();

    void on_r8c8_clicked();

    void on_r8c9_clicked();

    void on_r9c0_clicked();

    void on_r9c1_clicked();

    void on_r9c2_clicked();

    void on_r9c3_clicked();

    void on_r9c4_clicked();

    void on_r9c5_clicked();

    void on_r9c6_clicked();

    void on_r9c7_clicked();

    void on_r9c8_clicked();

    void on_r9c9_clicked();

private:
    Ui::GameMedium *ui;
    Field field;
    int steps, currentAmountOfMice, currentOwlHP;
    bool acceptd;

    void buttonClicked(QPushButton*, unsigned int, unsigned int);
};

#endif // GAMEMEDIUM_H
