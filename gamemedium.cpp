#include "gamemedium.h"
#include "ui_gamemedium.h"

GameMedium::GameMedium(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GameMedium),
    steps(0),
    currentAmountOfMice(0),
    acceptd(false)
{
    ui->setupUi(this);
}

GameMedium::~GameMedium()
{
    delete ui;
}

void GameMedium::setField()
{
    field.set(10, 8, 8);
    field.refresh();
    currentAmountOfMice = field.getAmountOfMice();
    currentOwlHP = field.getOwlHP();
    ui->progressBar->setRange(0, currentAmountOfMice);
}

void GameMedium::buttonClicked(QPushButton* button, unsigned int x, unsigned int y)
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

bool GameMedium::isAccepted() const
{
    return acceptd;
}

void GameMedium::on_r0c0_clicked()
{
    buttonClicked(ui->r0c0, 0, 0);
}

void GameMedium::on_r0c1_clicked()
{
    buttonClicked(ui->r0c1, 0, 1);
}

void GameMedium::on_r0c2_clicked()
{
    buttonClicked(ui->r0c2, 0, 2);
}

void GameMedium::on_r0c3_clicked()
{
    buttonClicked(ui->r0c3, 0, 3);
}

void GameMedium::on_r0c4_clicked()
{
    buttonClicked(ui->r0c4, 0, 4);
}

void GameMedium::on_r0c5_clicked()
{
    buttonClicked(ui->r0c5, 0, 5);
}

void GameMedium::on_r0c6_clicked()
{
    buttonClicked(ui->r0c6, 0, 6);
}

void GameMedium::on_r0c7_clicked()
{
    buttonClicked(ui->r0c7, 0, 7);
}

void GameMedium::on_r0c8_clicked()
{
    buttonClicked(ui->r0c8, 0, 8);
}

void GameMedium::on_r0c9_clicked()
{
    buttonClicked(ui->r0c9, 0, 9);
}

void GameMedium::on_r1c0_clicked()
{
    buttonClicked(ui->r1c0, 1, 0);
}

void GameMedium::on_r1c1_clicked()
{
    buttonClicked(ui->r1c1, 1, 1);
}

void GameMedium::on_r1c2_clicked()
{
    buttonClicked(ui->r1c2, 1, 2);
}

void GameMedium::on_r1c3_clicked()
{
    buttonClicked(ui->r1c3, 1, 3);
}

void GameMedium::on_r1c4_clicked()
{
    buttonClicked(ui->r1c4, 1, 4);
}

void GameMedium::on_r1c5_clicked()
{
    buttonClicked(ui->r1c5, 1, 5);
}

void GameMedium::on_r1c6_clicked()
{
    buttonClicked(ui->r1c6, 1, 6);
}

void GameMedium::on_r1c7_clicked()
{
    buttonClicked(ui->r1c7, 1, 7);
}

void GameMedium::on_r1c8_clicked()
{
    buttonClicked(ui->r1c8, 1, 8);
}

void GameMedium::on_r1c9_clicked()
{
    buttonClicked(ui->r1c9, 1, 9);
}

void GameMedium::on_r2c0_clicked()
{
    buttonClicked(ui->r2c0, 2, 0);
}

void GameMedium::on_r2c1_clicked()
{
    buttonClicked(ui->r2c1, 2, 1);
}

void GameMedium::on_r2c2_clicked()
{
    buttonClicked(ui->r2c2, 2, 2);
}

void GameMedium::on_r2c3_clicked()
{
    buttonClicked(ui->r2c3, 2, 3);
}

void GameMedium::on_r2c4_clicked()
{
    buttonClicked(ui->r2c4, 2, 4);
}

void GameMedium::on_r2c5_clicked()
{
    buttonClicked(ui->r2c5, 2, 5);
}

void GameMedium::on_r2c6_clicked()
{
    buttonClicked(ui->r2c6, 2, 6);
}

void GameMedium::on_r2c7_clicked()
{
    buttonClicked(ui->r2c7, 2, 7);
}

void GameMedium::on_r2c8_clicked()
{
    buttonClicked(ui->r2c8, 2, 8);
}

void GameMedium::on_r2c9_clicked()
{
    buttonClicked(ui->r2c9, 2, 9);
}

void GameMedium::on_r3c0_clicked()
{
    buttonClicked(ui->r3c0, 3, 0);
}

void GameMedium::on_r3c1_clicked()
{
    buttonClicked(ui->r3c1, 3, 1);
}

void GameMedium::on_r3c2_clicked()
{
    buttonClicked(ui->r3c2, 3, 2);
}

void GameMedium::on_r3c3_clicked()
{
    buttonClicked(ui->r3c3, 3, 3);
}

void GameMedium::on_r3c4_clicked()
{
    buttonClicked(ui->r3c4, 3, 4);
}

void GameMedium::on_r3c5_clicked()
{
    buttonClicked(ui->r3c5, 3, 5);
}

void GameMedium::on_r3c6_clicked()
{
    buttonClicked(ui->r3c6, 3, 6);
}

void GameMedium::on_r3c7_clicked()
{
    buttonClicked(ui->r3c7, 3, 7);
}

void GameMedium::on_r3c8_clicked()
{
    buttonClicked(ui->r3c8, 3, 8);
}

void GameMedium::on_r3c9_clicked()
{
    buttonClicked(ui->r3c9, 3, 9);
}

void GameMedium::on_r4c0_clicked()
{
    buttonClicked(ui->r4c0, 4, 0);
}

void GameMedium::on_r4c1_clicked()
{
    buttonClicked(ui->r4c1, 4, 1);
}

void GameMedium::on_r4c2_clicked()
{
    buttonClicked(ui->r4c2, 4, 2);
}

void GameMedium::on_r4c3_clicked()
{
    buttonClicked(ui->r4c3, 4, 3);
}

void GameMedium::on_r4c4_clicked()
{
    buttonClicked(ui->r4c4, 4, 4);
}

void GameMedium::on_r4c5_clicked()
{
    buttonClicked(ui->r4c5, 4, 5);
}

void GameMedium::on_r4c6_clicked()
{
    buttonClicked(ui->r4c6, 4, 6);
}

void GameMedium::on_r4c7_clicked()
{
    buttonClicked(ui->r4c7, 4, 7);
}

void GameMedium::on_r4c8_clicked()
{
    buttonClicked(ui->r4c8, 4, 8);
}

void GameMedium::on_r4c9_clicked()
{
    buttonClicked(ui->r4c9, 4, 9);
}

void GameMedium::on_r5c0_clicked()
{
    buttonClicked(ui->r5c0, 5, 0);
}

void GameMedium::on_r5c1_clicked()
{
    buttonClicked(ui->r5c1, 5, 1);
}

void GameMedium::on_r5c2_clicked()
{
    buttonClicked(ui->r5c2, 5, 2);
}

void GameMedium::on_r5c3_clicked()
{
    buttonClicked(ui->r5c3, 5, 3);
}

void GameMedium::on_r5c4_clicked()
{
    buttonClicked(ui->r5c4, 5, 4);
}

void GameMedium::on_r5c5_clicked()
{
    buttonClicked(ui->r5c5, 5, 5);
}

void GameMedium::on_r5c6_clicked()
{
    buttonClicked(ui->r5c6, 5, 6);
}

void GameMedium::on_r5c7_clicked()
{
    buttonClicked(ui->r5c7, 5, 7);
}

void GameMedium::on_r5c8_clicked()
{
    buttonClicked(ui->r5c8, 5, 8);
}

void GameMedium::on_r5c9_clicked()
{
    buttonClicked(ui->r5c9, 5, 9);
}

void GameMedium::on_r6c0_clicked()
{
    buttonClicked(ui->r6c0, 6, 0);
}

void GameMedium::on_r6c1_clicked()
{
    buttonClicked(ui->r6c1, 6, 1);
}

void GameMedium::on_r6c2_clicked()
{
    buttonClicked(ui->r6c2, 6, 2);
}

void GameMedium::on_r6c3_clicked()
{
    buttonClicked(ui->r6c3, 6, 3);
}

void GameMedium::on_r6c4_clicked()
{
    buttonClicked(ui->r6c4, 6, 4);
}

void GameMedium::on_r6c5_clicked()
{
    buttonClicked(ui->r6c5, 6, 5);
}

void GameMedium::on_r6c6_clicked()
{
    buttonClicked(ui->r6c6, 6, 6);
}

void GameMedium::on_r6c7_clicked()
{
    buttonClicked(ui->r6c7, 6, 7);
}

void GameMedium::on_r6c8_clicked()
{
    buttonClicked(ui->r6c8, 6, 8);
}

void GameMedium::on_r6c9_clicked()
{
    buttonClicked(ui->r6c9, 6, 9);
}

void GameMedium::on_r7c0_clicked()
{
    buttonClicked(ui->r7c0, 7, 0);
}

void GameMedium::on_r7c1_clicked()
{
    buttonClicked(ui->r7c1, 7, 1);
}

void GameMedium::on_r7c2_clicked()
{
    buttonClicked(ui->r7c2, 7, 2);
}

void GameMedium::on_r7c3_clicked()
{
    buttonClicked(ui->r7c3, 7, 3);
}

void GameMedium::on_r7c4_clicked()
{
    buttonClicked(ui->r7c4, 7, 4);
}

void GameMedium::on_r7c5_clicked()
{
    buttonClicked(ui->r7c5, 7, 5);
}

void GameMedium::on_r7c6_clicked()
{
    buttonClicked(ui->r7c6, 7, 6);
}

void GameMedium::on_r7c7_clicked()
{
    buttonClicked(ui->r7c7, 7, 7);
}

void GameMedium::on_r7c8_clicked()
{
    buttonClicked(ui->r7c8, 7, 8);
}

void GameMedium::on_r7c9_clicked()
{
    buttonClicked(ui->r7c9, 7, 9);
}

void GameMedium::on_r8c0_clicked()
{
    buttonClicked(ui->r8c0, 8, 0);
}

void GameMedium::on_r8c1_clicked()
{
    buttonClicked(ui->r8c1, 8, 1);
}

void GameMedium::on_r8c2_clicked()
{
    buttonClicked(ui->r8c2, 8, 2);
}

void GameMedium::on_r8c3_clicked()
{
    buttonClicked(ui->r8c3, 8, 3);
}

void GameMedium::on_r8c4_clicked()
{
    buttonClicked(ui->r8c4, 8, 4);
}

void GameMedium::on_r8c5_clicked()
{
    buttonClicked(ui->r8c5, 8, 5);
}

void GameMedium::on_r8c6_clicked()
{
    buttonClicked(ui->r8c6, 8, 6);
}

void GameMedium::on_r8c7_clicked()
{
    buttonClicked(ui->r8c7, 8, 7);
}

void GameMedium::on_r8c8_clicked()
{
    buttonClicked(ui->r8c8, 8, 8);
}

void GameMedium::on_r8c9_clicked()
{
    buttonClicked(ui->r8c9, 8, 9);
}

void GameMedium::on_r9c0_clicked()
{
    buttonClicked(ui->r9c0, 9, 0);
}

void GameMedium::on_r9c1_clicked()
{
    buttonClicked(ui->r9c1, 9, 1);
}

void GameMedium::on_r9c2_clicked()
{
    buttonClicked(ui->r9c2, 9, 2);
}

void GameMedium::on_r9c3_clicked()
{
    buttonClicked(ui->r9c3, 9, 3);
}

void GameMedium::on_r9c4_clicked()
{
    buttonClicked(ui->r9c4, 9, 4);
}

void GameMedium::on_r9c5_clicked()
{
    buttonClicked(ui->r9c5, 9, 5);
}

void GameMedium::on_r9c6_clicked()
{
    buttonClicked(ui->r9c6, 9, 6);
}

void GameMedium::on_r9c7_clicked()
{
    buttonClicked(ui->r9c7, 9, 7);
}

void GameMedium::on_r9c8_clicked()
{
    buttonClicked(ui->r9c8, 9, 8);
}

void GameMedium::on_r9c9_clicked()
{
    buttonClicked(ui->r9c9, 9, 9);
}
