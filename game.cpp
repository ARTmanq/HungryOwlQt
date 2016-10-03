#include "game.h"
#include "ui_game.h"
#include <QString>

Game::Game(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Game),
    steps(0),
    currentAmountOfMice(0),
    acceptd(false)
{
    ui->setupUi(this);
}

Game::~Game()
{
    delete ui;
}

void Game::setField(Difficulty difficulty)
{
    switch(difficulty)
    {
        case Difficulty::Easy:
        {
            field.set(7, 5, 5);
            break;
        }
        case Difficulty::Medium:
        {
            field.set(10, 8, 8);
            break;
        }
        case Difficulty::Hard:
        {
            field.set(15, 12, 12);
        }
        default:
        {}
    }
    field.refresh();
    currentAmountOfMice = field.getAmountOfMice();
    currentOwlHP = field.getOwlHP();
    ui->progressBar->setRange(0, currentAmountOfMice);
}

void Game::buttonClicked(QPushButton* button, unsigned int x, unsigned int y)
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

bool Game::isAccepted() const
{
    return acceptd;
}

void Game::on_r0c0_clicked()
{
    buttonClicked(ui->r0c0, 0, 0);
}

void Game::on_r0c1_clicked()
{
    buttonClicked(ui->r0c1, 0, 1);
}

void Game::on_r0c2_clicked()
{
    buttonClicked(ui->r0c2, 0, 2);
}

void Game::on_r0c3_clicked()
{
    buttonClicked(ui->r0c3, 0, 3);
}

void Game::on_r0c4_clicked()
{
    buttonClicked(ui->r0c4, 0, 4);
}

void Game::on_r0c5_clicked()
{
    buttonClicked(ui->r0c5, 0, 5);
}

void Game::on_r0c6_clicked()
{
    buttonClicked(ui->r0c6, 0, 6);
}

void Game::on_r1c0_clicked()
{
    buttonClicked(ui->r1c0, 1, 0);
}

void Game::on_r1c1_clicked()
{
    buttonClicked(ui->r1c1, 1, 1);
}

void Game::on_r1c2_clicked()
{
    buttonClicked(ui->r1c2, 1, 2);
}

void Game::on_r1c3_clicked()
{
    buttonClicked(ui->r1c3, 1, 3);
}

void Game::on_r1c4_clicked()
{
    buttonClicked(ui->r1c4, 1, 4);
}

void Game::on_r1c5_clicked()
{
    buttonClicked(ui->r1c5, 1, 5);
}

void Game::on_r1c6_clicked()
{
    buttonClicked(ui->r1c6, 1, 6);
}

void Game::on_r2c0_clicked()
{
    buttonClicked(ui->r2c0, 2, 0);
}

void Game::on_r2c1_clicked()
{
    buttonClicked(ui->r2c1, 2, 1);
}

void Game::on_r2c2_clicked()
{
    buttonClicked(ui->r2c2, 2, 2);
}

void Game::on_r2c3_clicked()
{
    buttonClicked(ui->r2c3, 2, 3);
}

void Game::on_r2c4_clicked()
{
    buttonClicked(ui->r2c4, 2, 4);
}

void Game::on_r2c5_clicked()
{
    buttonClicked(ui->r2c5, 2, 5);
}

void Game::on_r2c6_clicked()
{
    buttonClicked(ui->r2c6, 2, 6);
}

void Game::on_r3c0_clicked()
{
    buttonClicked(ui->r3c0, 3, 0);
}

void Game::on_r3c1_clicked()
{
   buttonClicked(ui->r3c1, 3, 1);
}

void Game::on_r3c2_clicked()
{
    buttonClicked(ui->r3c2, 3, 2);
}

void Game::on_r3c3_clicked()
{
    buttonClicked(ui->r3c3, 3, 3);
}

void Game::on_r3c4_clicked()
{
    buttonClicked(ui->r3c4, 3, 4);
}

void Game::on_r3c5_clicked()
{
    buttonClicked(ui->r3c5, 3, 5);
}

void Game::on_r3c6_clicked()
{
    buttonClicked(ui->r3c6, 3, 6);
}

void Game::on_r4c0_clicked()
{
    buttonClicked(ui->r4c0, 4, 0);
}

void Game::on_r4c1_clicked()
{
    buttonClicked(ui->r4c1, 4, 1);
}

void Game::on_r4c2_clicked()
{
    buttonClicked(ui->r4c2, 4, 2);
}

void Game::on_r4c3_clicked()
{
    buttonClicked(ui->r4c3, 4, 3);
}

void Game::on_r4c4_clicked()
{
    buttonClicked(ui->r4c4, 4, 4);
}

void Game::on_r4c5_clicked()
{
   buttonClicked(ui->r4c5, 4, 5);
}

void Game::on_r4c6_clicked()
{
    buttonClicked(ui->r4c6, 4, 6);
}

void Game::on_r5c0_clicked()
{
    buttonClicked(ui->r5c0, 5, 0);
}

void Game::on_r5c1_clicked()
{
    buttonClicked(ui->r5c1, 5, 1);
}

void Game::on_r5c2_clicked()
{
    buttonClicked(ui->r5c2, 5, 2);
}

void Game::on_r5c3_clicked()
{
    buttonClicked(ui->r5c3, 5, 3);
}

void Game::on_r5c4_clicked()
{
    buttonClicked(ui->r5c4, 5, 4);
}

void Game::on_r5c5_clicked()
{
    buttonClicked(ui->r5c5, 5, 5);
}

void Game::on_r5c6_clicked()
{
    buttonClicked(ui->r5c6, 5, 6);
}

void Game::on_r6c0_clicked()
{
    buttonClicked(ui->r6c0, 6, 0);
}

void Game::on_r6c1_clicked()
{
    buttonClicked(ui->r6c1, 6, 1);
}

void Game::on_r6c2_clicked()
{
    buttonClicked(ui->r6c2, 6, 2);
}

void Game::on_r6c3_clicked()
{
    buttonClicked(ui->r6c3, 6, 3);
}

void Game::on_r6c4_clicked()
{
    buttonClicked(ui->r6c4, 6, 4);
}

void Game::on_r6c5_clicked()
{
    buttonClicked(ui->r6c5, 6, 5);
}

void Game::on_r6c6_clicked()
{
    buttonClicked(ui->r6c6, 6, 6);
}
