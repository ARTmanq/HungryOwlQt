#ifndef GAMEHARD_H
#define GAMEHARD_H

#include "Field.h"
#include "dialog.h"
#include <QDialog>
#include <QLCDNumber>
#include <QDialog>

namespace Ui {
class GameHard;
}

class GameHard : public QDialog
{
    Q_OBJECT

public:
    explicit GameHard(QWidget *parent = 0);
    ~GameHard();
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

    void on_r0c10_clicked();

    void on_r0c11_clicked();

    void on_r0c12_clicked();

    void on_r0c13_clicked();

    void on_r0c14_clicked();

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

    void on_r1c10_clicked();

    void on_r1c11_clicked();

    void on_r1c12_clicked();

    void on_r1c13_clicked();

    void on_r1c14_clicked();

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

    void on_r2c10_clicked();

    void on_r2c11_clicked();

    void on_r2c12_clicked();

    void on_r2c13_clicked();

    void on_r2c14_clicked();

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

    void on_r3c10_clicked();

    void on_r3c11_clicked();

    void on_r3c12_clicked();

    void on_r3c13_clicked();

    void on_r3c14_clicked();

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

    void on_r4c10_clicked();

    void on_r4c11_clicked();

    void on_r4c12_clicked();

    void on_r4c13_clicked();

    void on_r4c14_clicked();

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

    void on_r5c10_clicked();

    void on_r5c11_clicked();

    void on_r5c12_clicked();

    void on_r5c13_clicked();

    void on_r5c14_clicked();

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

    void on_r6c10_clicked();

    void on_r6c11_clicked();

    void on_r6c12_clicked();

    void on_r6c13_clicked();

    void on_r6c14_clicked();

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

    void on_r7c10_clicked();

    void on_r7c11_clicked();

    void on_r7c12_clicked();

    void on_r7c13_clicked();

    void on_r7c14_clicked();

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

    void on_r8c10_clicked();

    void on_r8c11_clicked();

    void on_r8c12_clicked();

    void on_r8c13_clicked();

    void on_r8c14_clicked();

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

    void on_r9c10_clicked();

    void on_r9c11_clicked();

    void on_r9c12_clicked();

    void on_r9c13_clicked();

    void on_r9c14_clicked();

    void on_r10c0_clicked();

    void on_r10c1_clicked();

    void on_r10c2_clicked();

    void on_r10c3_clicked();

    void on_r10c4_clicked();

    void on_r10c5_clicked();

    void on_r10c6_clicked();

    void on_r10c7_clicked();

    void on_r10c8_clicked();

    void on_r10c9_clicked();

    void on_r10c10_clicked();

    void on_r10c11_clicked();

    void on_r10c12_clicked();

    void on_r10c13_clicked();

    void on_r10c14_clicked();

    void on_r11c0_clicked();

    void on_r11c1_clicked();

    void on_r11c2_clicked();

    void on_r11c3_clicked();

    void on_r11c4_clicked();

    void on_r11c5_clicked();

    void on_r11c6_clicked();

    void on_r11c7_clicked();

    void on_r11c8_clicked();

    void on_r11c9_clicked();

    void on_r11c10_clicked();

    void on_r11c11_clicked();

    void on_r11c12_clicked();

    void on_r11c13_clicked();

    void on_r11c14_clicked();

    void on_r12c0_clicked();

    void on_r12c1_clicked();

    void on_r12c2_clicked();

    void on_r12c3_clicked();

    void on_r12c4_clicked();

    void on_r12c5_clicked();

    void on_r12c6_clicked();

    void on_r12c7_clicked();

    void on_r12c8_clicked();

    void on_r12c9_clicked();

    void on_r12c10_clicked();

    void on_r12c11_clicked();

    void on_r12c12_clicked();

    void on_r12c13_clicked();

    void on_r12c14_clicked();

    void on_r13c0_clicked();

    void on_r13c1_clicked();

    void on_r13c2_clicked();

    void on_r13c3_clicked();

    void on_r13c4_clicked();

    void on_r13c5_clicked();

    void on_r13c6_clicked();

    void on_r13c7_clicked();

    void on_r13c8_clicked();

    void on_r13c9_clicked();

    void on_r13c10_clicked();

    void on_r13c11_clicked();

    void on_r13c12_clicked();

    void on_r13c13_clicked();

    void on_r13c14_clicked();

    void on_r14c0_clicked();

    void on_r14c1_clicked();

    void on_r14c2_clicked();

    void on_r14c3_clicked();

    void on_r14c4_clicked();

    void on_r14c5_clicked();

    void on_r14c6_clicked();

    void on_r14c7_clicked();

    void on_r14c8_clicked();

    void on_r14c9_clicked();

    void on_r14c10_clicked();

    void on_r14c11_clicked();

    void on_r14c12_clicked();

    void on_r14c13_clicked();

    void on_r14c14_clicked();

private:
    Ui::GameHard *ui;
    Field field;
    int steps, currentAmountOfMice, currentOwlHP;
    bool acceptd;

    void buttonClicked(QPushButton*, unsigned int, unsigned int);
};

#endif // GAMEHARD_H
