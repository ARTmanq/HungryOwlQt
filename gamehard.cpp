#include "gamehard.h"
#include "ui_gamehard.h"

GameHard::GameHard(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GameHard)
{
    ui->setupUi(this);
}

GameHard::~GameHard()
{
    delete ui;
}

void GameHard::setField()
{
    field.set(15, 12, 12);
    field.refresh();
    currentAmountOfMice = field.getAmountOfMice();
    currentOwlHP = field.getOwlHP();
    ui->progressBar->setRange(0, currentAmountOfMice);
}

void GameHard::buttonClicked(QPushButton* button, unsigned int x, unsigned int y)
{
    button->setDisabled(true);
    button->setStyleSheet(field.styleSheet(x, y));
    QString status(field.status(x, y));
    if(status == "M")
    {
        --currentAmountOfMice;
    }
    if(status == "C")
    {
        --currentOwlHP;
    }
    button->setText(status);
    ui->lcdNumber_2->display(++steps);
    ui->lcdNumber->display(currentAmountOfMice);
    ui->lcdNumber_3->display(currentOwlHP);
    ui->progressBar->setValue(field.getAmountOfMice() - currentAmountOfMice);
    if(currentOwlHP == 0)
    {
        close();
    }
    if(currentAmountOfMice == 0)
    {
        acceptd = true;
        close();
    }
}

bool GameHard::isAccepted() const
{
    return acceptd;
}

void GameHard::on_r0c0_clicked()
{
    buttonClicked(ui->r0c0, 0, 0);
}

void GameHard::on_r0c1_clicked()
{
    buttonClicked(ui->r0c1, 0, 1);
}

void GameHard::on_r0c2_clicked()
{
    buttonClicked(ui->r0c2, 0, 2);
}

void GameHard::on_r0c3_clicked()
{
    buttonClicked(ui->r0c3, 0, 3);
}

void GameHard::on_r0c4_clicked()
{
    buttonClicked(ui->r0c4, 0, 4);
}

void GameHard::on_r0c5_clicked()
{
    buttonClicked(ui->r0c5, 0, 5);
}

void GameHard::on_r0c6_clicked()
{
    buttonClicked(ui->r0c6, 0, 6);
}

void GameHard::on_r0c7_clicked()
{
    buttonClicked(ui->r0c7, 0, 7);
}

void GameHard::on_r0c8_clicked()
{
    buttonClicked(ui->r0c8, 0, 8);
}

void GameHard::on_r0c9_clicked()
{
    buttonClicked(ui->r0c9, 0, 9);
}

void GameHard::on_r0c10_clicked()
{
    buttonClicked(ui->r0c10, 0, 10);
}

void GameHard::on_r0c11_clicked()
{
    buttonClicked(ui->r0c11, 0, 11);
}

void GameHard::on_r0c12_clicked()
{
    buttonClicked(ui->r0c12, 0, 12);
}

void GameHard::on_r0c13_clicked()
{
    buttonClicked(ui->r0c13, 0, 13);
}

void GameHard::on_r0c14_clicked()
{
    buttonClicked(ui->r0c14, 0, 14);
}

void GameHard::on_r1c0_clicked()
{
    buttonClicked(ui->r1c0, 1, 0);
}

void GameHard::on_r1c1_clicked()
{
    buttonClicked(ui->r1c1, 1, 1);
}

void GameHard::on_r1c2_clicked()
{
    buttonClicked(ui->r1c2, 1, 2);
}

void GameHard::on_r1c3_clicked()
{
    buttonClicked(ui->r1c3, 1, 3);
}

void GameHard::on_r1c4_clicked()
{
    buttonClicked(ui->r1c4, 1, 4);
}

void GameHard::on_r1c5_clicked()
{
    buttonClicked(ui->r1c5, 1, 5);
}

void GameHard::on_r1c6_clicked()
{
    buttonClicked(ui->r1c6, 1, 6);
}

void GameHard::on_r1c7_clicked()
{
    buttonClicked(ui->r1c7, 1, 7);
}

void GameHard::on_r1c8_clicked()
{
    buttonClicked(ui->r1c8, 1, 8);
}

void GameHard::on_r1c9_clicked()
{
    buttonClicked(ui->r1c9, 1, 9);
}

void GameHard::on_r1c10_clicked()
{
    buttonClicked(ui->r1c10, 1, 10);
}

void GameHard::on_r1c11_clicked()
{
    buttonClicked(ui->r1c11, 1, 11);
}

void GameHard::on_r1c12_clicked()
{
    buttonClicked(ui->r1c12, 1, 12);
}

void GameHard::on_r1c13_clicked()
{
    buttonClicked(ui->r1c13, 1, 13);
}

void GameHard::on_r1c14_clicked()
{
    buttonClicked(ui->r1c14, 1, 14);
}

void GameHard::on_r2c0_clicked()
{
    buttonClicked(ui->r2c0, 2, 0);
}

void GameHard::on_r2c1_clicked()
{
    buttonClicked(ui->r2c1, 2, 1);
}

void GameHard::on_r2c2_clicked()
{
    buttonClicked(ui->r2c2, 2, 2);
}

void GameHard::on_r2c3_clicked()
{
    buttonClicked(ui->r2c3, 2, 3);
}

void GameHard::on_r2c4_clicked()
{
    buttonClicked(ui->r2c4, 2, 4);
}

void GameHard::on_r2c5_clicked()
{
    buttonClicked(ui->r2c5, 2, 5);
}

void GameHard::on_r2c6_clicked()
{
    buttonClicked(ui->r2c6, 2, 6);
}

void GameHard::on_r2c7_clicked()
{
    buttonClicked(ui->r2c7, 2, 7);
}

void GameHard::on_r2c8_clicked()
{
    buttonClicked(ui->r2c8, 2, 8);
}

void GameHard::on_r2c9_clicked()
{
    buttonClicked(ui->r2c9, 2, 9);
}

void GameHard::on_r2c10_clicked()
{
    buttonClicked(ui->r2c10, 2, 10);
}

void GameHard::on_r2c11_clicked()
{
    buttonClicked(ui->r2c11, 2, 11);
}

void GameHard::on_r2c12_clicked()
{
    buttonClicked(ui->r2c12, 2, 12);
}

void GameHard::on_r2c13_clicked()
{
    buttonClicked(ui->r2c13, 2, 13);
}

void GameHard::on_r2c14_clicked()
{
    buttonClicked(ui->r2c14, 2, 14);
}

void GameHard::on_r3c0_clicked()
{
    buttonClicked(ui->r3c0, 3, 0);
}

void GameHard::on_r3c1_clicked()
{
    buttonClicked(ui->r3c1, 3, 1);
}

void GameHard::on_r3c2_clicked()
{
    buttonClicked(ui->r3c2, 3, 2);
}

void GameHard::on_r3c3_clicked()
{
    buttonClicked(ui->r3c3, 3, 3);
}

void GameHard::on_r3c4_clicked()
{
    buttonClicked(ui->r3c4, 3, 4);
}

void GameHard::on_r3c5_clicked()
{
    buttonClicked(ui->r3c5, 3, 5);
}

void GameHard::on_r3c6_clicked()
{
    buttonClicked(ui->r3c6, 3, 6);
}

void GameHard::on_r3c7_clicked()
{
    buttonClicked(ui->r3c7, 3, 7);
}

void GameHard::on_r3c8_clicked()
{
    buttonClicked(ui->r3c8, 3, 8);
}

void GameHard::on_r3c9_clicked()
{
    buttonClicked(ui->r3c9, 3, 9);
}

void GameHard::on_r3c10_clicked()
{
    buttonClicked(ui->r3c10, 3, 10);
}

void GameHard::on_r3c11_clicked()
{
    buttonClicked(ui->r3c11, 3, 11);
}

void GameHard::on_r3c12_clicked()
{
    buttonClicked(ui->r3c12, 3, 12);
}

void GameHard::on_r3c13_clicked()
{
    buttonClicked(ui->r3c13, 3, 13);
}

void GameHard::on_r3c14_clicked()
{
    buttonClicked(ui->r3c14, 3, 14);
}

void GameHard::on_r4c0_clicked()
{
    buttonClicked(ui->r4c0, 4, 0);
}

void GameHard::on_r4c1_clicked()
{
    buttonClicked(ui->r4c1, 4, 1);
}

void GameHard::on_r4c2_clicked()
{
    buttonClicked(ui->r4c2, 4, 2);
}

void GameHard::on_r4c3_clicked()
{
    buttonClicked(ui->r4c3, 4, 3);
}

void GameHard::on_r4c4_clicked()
{
    buttonClicked(ui->r4c4, 4, 4);
}

void GameHard::on_r4c5_clicked()
{
    buttonClicked(ui->r4c5, 4, 5);
}

void GameHard::on_r4c6_clicked()
{
    buttonClicked(ui->r4c6, 4, 6);
}

void GameHard::on_r4c7_clicked()
{
    buttonClicked(ui->r4c7, 4, 7);
}

void GameHard::on_r4c8_clicked()
{
    buttonClicked(ui->r4c8, 4, 8);
}

void GameHard::on_r4c9_clicked()
{
    buttonClicked(ui->r4c9, 4, 9);
}

void GameHard::on_r4c10_clicked()
{
    buttonClicked(ui->r4c10, 4, 10);
}

void GameHard::on_r4c11_clicked()
{
    buttonClicked(ui->r4c11, 4, 11);
}

void GameHard::on_r4c12_clicked()
{
    buttonClicked(ui->r4c12, 4, 12);
}

void GameHard::on_r4c13_clicked()
{
    buttonClicked(ui->r4c13, 4, 13);
}

void GameHard::on_r4c14_clicked()
{
    buttonClicked(ui->r4c14, 4, 14);
}

void GameHard::on_r5c0_clicked()
{
    buttonClicked(ui->r5c0, 5, 0);
}

void GameHard::on_r5c1_clicked()
{
    buttonClicked(ui->r5c1, 5, 1);
}

void GameHard::on_r5c2_clicked()
{
    buttonClicked(ui->r5c2, 5, 2);
}

void GameHard::on_r5c3_clicked()
{
    buttonClicked(ui->r5c3, 5, 3);
}

void GameHard::on_r5c4_clicked()
{
    buttonClicked(ui->r5c4, 5, 4);
}

void GameHard::on_r5c5_clicked()
{
    buttonClicked(ui->r5c5, 5, 5);
}

void GameHard::on_r5c6_clicked()
{
    buttonClicked(ui->r5c6, 5, 6);
}

void GameHard::on_r5c7_clicked()
{
    buttonClicked(ui->r5c7, 5, 7);
}

void GameHard::on_r5c8_clicked()
{
    buttonClicked(ui->r5c8, 5, 8);
}

void GameHard::on_r5c9_clicked()
{
    buttonClicked(ui->r5c9, 5, 9);
}

void GameHard::on_r5c10_clicked()
{
    buttonClicked(ui->r5c10, 5, 10);
}

void GameHard::on_r5c11_clicked()
{
    buttonClicked(ui->r5c11, 5, 11);
}

void GameHard::on_r5c12_clicked()
{
    buttonClicked(ui->r5c12, 5, 12);
}

void GameHard::on_r5c13_clicked()
{
    buttonClicked(ui->r5c13, 5, 13);
}

void GameHard::on_r5c14_clicked()
{
    buttonClicked(ui->r5c14, 5, 14);
}

void GameHard::on_r6c0_clicked()
{
    buttonClicked(ui->r6c0, 6, 0);
}

void GameHard::on_r6c1_clicked()
{
    buttonClicked(ui->r6c1, 6, 1);
}

void GameHard::on_r6c2_clicked()
{
    buttonClicked(ui->r6c2, 6, 2);
}

void GameHard::on_r6c3_clicked()
{
    buttonClicked(ui->r6c3, 6, 3);
}

void GameHard::on_r6c4_clicked()
{
    buttonClicked(ui->r6c4, 6, 4);
}

void GameHard::on_r6c5_clicked()
{
    buttonClicked(ui->r6c5, 6, 5);
}

void GameHard::on_r6c6_clicked()
{
    buttonClicked(ui->r6c6, 6, 6);
}

void GameHard::on_r6c7_clicked()
{
    buttonClicked(ui->r6c7, 6, 7);
}

void GameHard::on_r6c8_clicked()
{
    buttonClicked(ui->r6c8, 6, 8);
}

void GameHard::on_r6c9_clicked()
{
    buttonClicked(ui->r6c9, 6, 9);
}

void GameHard::on_r6c10_clicked()
{
    buttonClicked(ui->r6c10, 6, 10);
}

void GameHard::on_r6c11_clicked()
{
    buttonClicked(ui->r6c11, 6, 11);
}

void GameHard::on_r6c12_clicked()
{
    buttonClicked(ui->r6c12, 6, 12);
}

void GameHard::on_r6c13_clicked()
{
    buttonClicked(ui->r6c13, 6, 13);
}

void GameHard::on_r6c14_clicked()
{
    buttonClicked(ui->r6c14, 6, 14);
}

void GameHard::on_r7c0_clicked()
{
    buttonClicked(ui->r7c0, 7, 0);
}

void GameHard::on_r7c1_clicked()
{
    buttonClicked(ui->r7c1, 7, 1);
}

void GameHard::on_r7c2_clicked()
{
    buttonClicked(ui->r7c2, 7, 2);
}

void GameHard::on_r7c3_clicked()
{
    buttonClicked(ui->r7c3, 7, 3);
}

void GameHard::on_r7c4_clicked()
{
    buttonClicked(ui->r7c4, 7, 4);
}

void GameHard::on_r7c5_clicked()
{
    buttonClicked(ui->r7c5, 7, 5);
}

void GameHard::on_r7c6_clicked()
{
    buttonClicked(ui->r7c6, 7, 6);
}

void GameHard::on_r7c7_clicked()
{
    buttonClicked(ui->r7c7, 7, 7);
}

void GameHard::on_r7c8_clicked()
{
    buttonClicked(ui->r7c8, 7, 8);
}

void GameHard::on_r7c9_clicked()
{
    buttonClicked(ui->r7c9, 7, 9);
}

void GameHard::on_r7c10_clicked()
{
    buttonClicked(ui->r7c10, 7, 10);
}

void GameHard::on_r7c11_clicked()
{
    buttonClicked(ui->r7c11, 7, 11);
}

void GameHard::on_r7c12_clicked()
{
    buttonClicked(ui->r7c12, 7, 12);
}

void GameHard::on_r7c13_clicked()
{
    buttonClicked(ui->r7c13, 7, 13);
}

void GameHard::on_r7c14_clicked()
{
    buttonClicked(ui->r7c14, 7, 14);
}

void GameHard::on_r8c0_clicked()
{
    buttonClicked(ui->r8c0, 8, 0);
}

void GameHard::on_r8c1_clicked()
{
    buttonClicked(ui->r8c1, 8, 1);
}

void GameHard::on_r8c2_clicked()
{
    buttonClicked(ui->r8c2, 8, 2);
}

void GameHard::on_r8c3_clicked()
{
    buttonClicked(ui->r8c3, 8, 3);
}

void GameHard::on_r8c4_clicked()
{
    buttonClicked(ui->r8c4, 8, 4);
}

void GameHard::on_r8c5_clicked()
{
    buttonClicked(ui->r8c5, 8, 5);
}

void GameHard::on_r8c6_clicked()
{
    buttonClicked(ui->r8c6, 8, 6);
}

void GameHard::on_r8c7_clicked()
{
    buttonClicked(ui->r8c7, 8, 7);
}

void GameHard::on_r8c8_clicked()
{
    buttonClicked(ui->r8c8, 8, 8);
}

void GameHard::on_r8c9_clicked()
{
    buttonClicked(ui->r8c9, 8, 9);
}

void GameHard::on_r8c10_clicked()
{
    buttonClicked(ui->r8c10, 8, 10);
}

void GameHard::on_r8c11_clicked()
{
    buttonClicked(ui->r8c11, 8, 11);
}

void GameHard::on_r8c12_clicked()
{
    buttonClicked(ui->r8c12, 8, 12);
}

void GameHard::on_r8c13_clicked()
{
    buttonClicked(ui->r8c13, 8, 13);
}

void GameHard::on_r8c14_clicked()
{
    buttonClicked(ui->r8c14, 8, 14);
}

void GameHard::on_r9c0_clicked()
{
    buttonClicked(ui->r9c0, 9, 0);
}

void GameHard::on_r9c1_clicked()
{
    buttonClicked(ui->r9c1, 9, 1);
}

void GameHard::on_r9c2_clicked()
{
    buttonClicked(ui->r9c2, 9, 2);
}

void GameHard::on_r9c3_clicked()
{
    buttonClicked(ui->r9c3, 9, 3);
}

void GameHard::on_r9c4_clicked()
{
    buttonClicked(ui->r9c4, 9, 4);
}

void GameHard::on_r9c5_clicked()
{
    buttonClicked(ui->r9c5, 9, 5);
}

void GameHard::on_r9c6_clicked()
{
    buttonClicked(ui->r9c6, 9, 6);
}

void GameHard::on_r9c7_clicked()
{
    buttonClicked(ui->r9c7, 9, 7);
}

void GameHard::on_r9c8_clicked()
{
    buttonClicked(ui->r9c8, 9, 8);
}

void GameHard::on_r9c9_clicked()
{
    buttonClicked(ui->r9c9, 9, 9);
}

void GameHard::on_r9c10_clicked()
{
    buttonClicked(ui->r9c10, 9, 10);
}

void GameHard::on_r9c11_clicked()
{
    buttonClicked(ui->r9c11, 9, 11);
}

void GameHard::on_r9c12_clicked()
{
    buttonClicked(ui->r9c12, 9, 12);
}

void GameHard::on_r9c13_clicked()
{
    buttonClicked(ui->r9c13, 9, 13);
}

void GameHard::on_r9c14_clicked()
{
    buttonClicked(ui->r9c14, 9, 14);
}

void GameHard::on_r10c0_clicked()
{
    buttonClicked(ui->r10c0, 10, 0);
}

void GameHard::on_r10c1_clicked()
{
    buttonClicked(ui->r10c1, 10, 1);
}

void GameHard::on_r10c2_clicked()
{
    buttonClicked(ui->r10c2, 10, 2);
}

void GameHard::on_r10c3_clicked()
{
    buttonClicked(ui->r10c3, 10, 3);
}

void GameHard::on_r10c4_clicked()
{
    buttonClicked(ui->r10c4, 10, 4);
}

void GameHard::on_r10c5_clicked()
{
    buttonClicked(ui->r10c5, 10, 5);
}

void GameHard::on_r10c6_clicked()
{
    buttonClicked(ui->r10c6, 10, 6);
}

void GameHard::on_r10c7_clicked()
{
    buttonClicked(ui->r10c7, 10, 7);
}

void GameHard::on_r10c8_clicked()
{
    buttonClicked(ui->r10c8, 10, 8);
}

void GameHard::on_r10c9_clicked()
{
    buttonClicked(ui->r10c9, 10, 9);
}

void GameHard::on_r10c10_clicked()
{
    buttonClicked(ui->r10c10, 10, 10);
}

void GameHard::on_r10c11_clicked()
{
    buttonClicked(ui->r10c11, 10, 11);
}

void GameHard::on_r10c12_clicked()
{
    buttonClicked(ui->r10c12, 10, 12);
}

void GameHard::on_r10c13_clicked()
{
    buttonClicked(ui->r10c13, 10, 13);
}

void GameHard::on_r10c14_clicked()
{
    buttonClicked(ui->r10c14, 10, 14);
}

void GameHard::on_r11c0_clicked()
{
    buttonClicked(ui->r11c0, 11, 0);
}

void GameHard::on_r11c1_clicked()
{
    buttonClicked(ui->r11c1, 11, 1);
}

void GameHard::on_r11c2_clicked()
{
    buttonClicked(ui->r11c2, 11, 2);
}

void GameHard::on_r11c3_clicked()
{
    buttonClicked(ui->r11c3, 11, 3);
}

void GameHard::on_r11c4_clicked()
{
    buttonClicked(ui->r11c4, 11, 4);
}

void GameHard::on_r11c5_clicked()
{
    buttonClicked(ui->r11c5, 11, 5);
}

void GameHard::on_r11c6_clicked()
{
    buttonClicked(ui->r11c6, 11, 6);
}

void GameHard::on_r11c7_clicked()
{
    buttonClicked(ui->r11c7, 11, 7);
}

void GameHard::on_r11c8_clicked()
{
    buttonClicked(ui->r11c8, 11, 8);
}

void GameHard::on_r11c9_clicked()
{
    buttonClicked(ui->r11c9, 11, 9);
}

void GameHard::on_r11c10_clicked()
{
    buttonClicked(ui->r11c10, 11, 10);
}

void GameHard::on_r11c11_clicked()
{
    buttonClicked(ui->r11c11, 11, 11);
}

void GameHard::on_r11c12_clicked()
{
     buttonClicked(ui->r11c12, 11, 12);
}

void GameHard::on_r11c13_clicked()
{
     buttonClicked(ui->r11c13, 11, 13);
}

void GameHard::on_r11c14_clicked()
{
     buttonClicked(ui->r11c14, 11, 14);
}

void GameHard::on_r12c0_clicked()
{
     buttonClicked(ui->r12c0, 12, 0);
}

void GameHard::on_r12c1_clicked()
{
    buttonClicked(ui->r12c1, 12, 1);
}

void GameHard::on_r12c2_clicked()
{
    buttonClicked(ui->r12c2, 12, 2);
}

void GameHard::on_r12c3_clicked()
{
    buttonClicked(ui->r12c3, 12, 3);
}

void GameHard::on_r12c4_clicked()
{
    buttonClicked(ui->r12c4, 12, 4);
}

void GameHard::on_r12c5_clicked()
{
    buttonClicked(ui->r12c5, 12, 5);
}

void GameHard::on_r12c6_clicked()
{
    buttonClicked(ui->r12c6, 12, 6);
}

void GameHard::on_r12c7_clicked()
{
    buttonClicked(ui->r12c7, 12, 7);
}

void GameHard::on_r12c8_clicked()
{
    buttonClicked(ui->r12c8, 12, 8);
}

void GameHard::on_r12c9_clicked()
{
    buttonClicked(ui->r12c9, 12, 9);
}

void GameHard::on_r12c10_clicked()
{
    buttonClicked(ui->r12c10, 12, 10);
}

void GameHard::on_r12c11_clicked()
{
    buttonClicked(ui->r12c11, 12, 11);
}

void GameHard::on_r12c12_clicked()
{
    buttonClicked(ui->r12c12, 12, 12);
}

void GameHard::on_r12c13_clicked()
{
    buttonClicked(ui->r12c13, 12, 13);
}

void GameHard::on_r12c14_clicked()
{
    buttonClicked(ui->r12c14, 12, 14);
}

void GameHard::on_r13c0_clicked()
{
    buttonClicked(ui->r13c0, 13, 0);
}

void GameHard::on_r13c1_clicked()
{
    buttonClicked(ui->r13c1, 13, 1);
}

void GameHard::on_r13c2_clicked()
{
    buttonClicked(ui->r13c2, 13, 2);
}

void GameHard::on_r13c3_clicked()
{
    buttonClicked(ui->r13c3, 13, 3);
}

void GameHard::on_r13c4_clicked()
{
    buttonClicked(ui->r13c4, 13, 4);
}

void GameHard::on_r13c5_clicked()
{
    buttonClicked(ui->r13c5, 13, 5);
}

void GameHard::on_r13c6_clicked()
{
    buttonClicked(ui->r13c6, 13, 6);
}

void GameHard::on_r13c7_clicked()
{
    buttonClicked(ui->r13c7, 13, 7);
}

void GameHard::on_r13c8_clicked()
{
    buttonClicked(ui->r13c8, 13, 8);
}

void GameHard::on_r13c9_clicked()
{
    buttonClicked(ui->r13c9, 13, 9);
}

void GameHard::on_r13c10_clicked()
{
    buttonClicked(ui->r13c10, 13, 10);
}

void GameHard::on_r13c11_clicked()
{
    buttonClicked(ui->r13c11, 13, 11);
}

void GameHard::on_r13c12_clicked()
{
    buttonClicked(ui->r13c12, 13, 12);
}

void GameHard::on_r13c13_clicked()
{
    buttonClicked(ui->r13c13, 13, 13);
}

void GameHard::on_r13c14_clicked()
{
    buttonClicked(ui->r13c14, 13, 14);
}

void GameHard::on_r14c0_clicked()
{
    buttonClicked(ui->r14c0, 14, 0);
}

void GameHard::on_r14c1_clicked()
{
    buttonClicked(ui->r14c1, 14, 1);
}

void GameHard::on_r14c2_clicked()
{
    buttonClicked(ui->r14c2, 14, 2);
}

void GameHard::on_r14c3_clicked()
{
    buttonClicked(ui->r14c3, 14, 3);
}

void GameHard::on_r14c4_clicked()
{
    buttonClicked(ui->r14c4, 14, 4);
}

void GameHard::on_r14c5_clicked()
{
    buttonClicked(ui->r14c5, 14, 5);
}

void GameHard::on_r14c6_clicked()
{
    buttonClicked(ui->r14c6, 14, 6);
}

void GameHard::on_r14c7_clicked()
{
    buttonClicked(ui->r14c7, 14, 7);
}

void GameHard::on_r14c8_clicked()
{
    buttonClicked(ui->r14c8, 14, 8);
}

void GameHard::on_r14c9_clicked()
{
    buttonClicked(ui->r14c9, 14, 9);
}

void GameHard::on_r14c10_clicked()
{
    buttonClicked(ui->r14c10, 14, 10);
}

void GameHard::on_r14c11_clicked()
{
    buttonClicked(ui->r14c11, 14, 11);
}

void GameHard::on_r14c12_clicked()
{
    buttonClicked(ui->r14c12, 14, 12);
}

void GameHard::on_r14c13_clicked()
{
    buttonClicked(ui->r14c13, 14, 13);
}

void GameHard::on_r14c14_clicked()
{
    buttonClicked(ui->r14c14, 14, 14);
}
