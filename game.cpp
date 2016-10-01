#include "game.h"
#include "ui_game.h"
#include <QString>

Game::Game(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Game),
    steps(0)
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
}

void Game::buttonClicked(QPushButton* button, QLCDNumber* lcd, unsigned int x, unsigned int y)
{
    button->setDisabled(true);
    button->setStyleSheet(field.styleSheet(x, y));
    button->setText(field.status(x, y));
    lcd->display(++steps);
}

void Game::on_r0c0_clicked()
{
    buttonClicked(ui->r0c0, ui->lcdNumber_2, 0, 0);
}

void Game::on_r0c1_clicked()
{
    buttonClicked(ui->r0c1, ui->lcdNumber_2, 0, 1);
}

void Game::on_r0c2_clicked()
{
    buttonClicked(ui->r0c2, ui->lcdNumber_2, 0, 2);
}

void Game::on_r0c3_clicked()
{
    buttonClicked(ui->r0c3, ui->lcdNumber_2, 0, 3);
}

void Game::on_r0c4_clicked()
{
    buttonClicked(ui->r0c4, ui->lcdNumber_2, 0, 4);
}

void Game::on_r0c5_clicked()
{
    buttonClicked(ui->r0c5, ui->lcdNumber_2, 0, 5);
}

void Game::on_r0c6_clicked()
{
    buttonClicked(ui->r0c6, ui->lcdNumber_2, 0, 6);
}

void Game::on_r1c0_clicked()
{
    buttonClicked(ui->r1c0, ui->lcdNumber_2, 1, 0);
}

void Game::on_r1c1_clicked()
{
    buttonClicked(ui->r1c1, ui->lcdNumber_2, 1, 1);
}

void Game::on_r1c2_clicked()
{
    buttonClicked(ui->r1c2, ui->lcdNumber_2, 1, 2);
}

void Game::on_r1c3_clicked()
{
    buttonClicked(ui->r1c3, ui->lcdNumber_2, 1, 3);
}

void Game::on_r1c4_clicked()
{
    buttonClicked(ui->r1c4, ui->lcdNumber_2, 1, 4);
}

void Game::on_r1c5_clicked()
{
    buttonClicked(ui->r1c5, ui->lcdNumber_2, 1, 5);
}

void Game::on_r1c6_clicked()
{
    buttonClicked(ui->r1c6, ui->lcdNumber_2, 1, 6);
}

void Game::on_r2c0_clicked()
{
    buttonClicked(ui->r2c0, ui->lcdNumber_2, 2, 0);
}

void Game::on_r2c1_clicked()
{
    buttonClicked(ui->r2c1, ui->lcdNumber_2, 2, 1);
}

void Game::on_r2c2_clicked()
{
    buttonClicked(ui->r2c2, ui->lcdNumber_2, 2, 2);
}

void Game::on_r2c3_clicked()
{
    buttonClicked(ui->r2c3, ui->lcdNumber_2, 2, 3);
}

void Game::on_r2c4_clicked()
{
    buttonClicked(ui->r2c4, ui->lcdNumber_2, 2, 4);
}

void Game::on_r2c5_clicked()
{
    buttonClicked(ui->r2c5, ui->lcdNumber_2, 2, 5);
}

void Game::on_r2c6_clicked()
{
    buttonClicked(ui->r2c6, ui->lcdNumber_2, 2, 6);
}

void Game::on_r3c0_clicked()
{
    buttonClicked(ui->r3c0, ui->lcdNumber_2, 3, 0);
}

void Game::on_r3c1_clicked()
{
   buttonClicked(ui->r3c1, ui->lcdNumber_2, 3, 1);
}

void Game::on_r3c2_clicked()
{
    buttonClicked(ui->r3c2, ui->lcdNumber_2, 3, 2);
}

void Game::on_r3c3_clicked()
{
    buttonClicked(ui->r3c3, ui->lcdNumber_2, 3, 3);
}

void Game::on_r3c4_clicked()
{
    buttonClicked(ui->r3c4, ui->lcdNumber_2, 3, 4);
}

void Game::on_r3c5_clicked()
{
    buttonClicked(ui->r3c5, ui->lcdNumber_2, 3, 5);
}

void Game::on_r3c6_clicked()
{
    buttonClicked(ui->r3c6, ui->lcdNumber_2, 3, 6);
}

void Game::on_r4c0_clicked()
{
    buttonClicked(ui->r4c0, ui->lcdNumber_2, 4, 0);
}

void Game::on_r4c1_clicked()
{
    buttonClicked(ui->r4c1, ui->lcdNumber_2, 4, 1);
}

void Game::on_r4c2_clicked()
{
    buttonClicked(ui->r4c2, ui->lcdNumber_2, 4, 2);
}

void Game::on_r4c3_clicked()
{
    buttonClicked(ui->r4c3, ui->lcdNumber_2, 4, 3);
}

void Game::on_r4c4_clicked()
{
    buttonClicked(ui->r4c4, ui->lcdNumber_2, 4, 4);
}

void Game::on_r4c5_clicked()
{
   buttonClicked(ui->r4c5, ui->lcdNumber_2, 4, 5);
}

void Game::on_r4c6_clicked()
{
    buttonClicked(ui->r4c6, ui->lcdNumber_2, 4, 6);
}

void Game::on_r5c0_clicked()
{
    buttonClicked(ui->r5c0, ui->lcdNumber_2, 5, 0);
}

void Game::on_r5c1_clicked()
{
    buttonClicked(ui->r5c1, ui->lcdNumber_2, 5, 1);
}

void Game::on_r5c2_clicked()
{
    buttonClicked(ui->r5c2, ui->lcdNumber_2, 5, 2);
}

void Game::on_r5c3_clicked()
{
    buttonClicked(ui->r5c3, ui->lcdNumber_2, 5, 3);
}

void Game::on_r5c4_clicked()
{
    buttonClicked(ui->r5c4, ui->lcdNumber_2, 5, 4);
}

void Game::on_r5c5_clicked()
{
    buttonClicked(ui->r5c5, ui->lcdNumber_2, 5, 5);
}

void Game::on_r5c6_clicked()
{
    buttonClicked(ui->r5c6, ui->lcdNumber_2, 5, 6);
}

void Game::on_r6c0_clicked()
{
    buttonClicked(ui->r6c0, ui->lcdNumber_2, 6, 0);
}

void Game::on_r6c1_clicked()
{
    buttonClicked(ui->r6c1, ui->lcdNumber_2, 6, 1);
}

void Game::on_r6c2_clicked()
{
    buttonClicked(ui->r6c2, ui->lcdNumber_2, 6, 2);
}

void Game::on_r6c3_clicked()
{
    buttonClicked(ui->r6c3, ui->lcdNumber_2, 6, 3);
}

void Game::on_r6c4_clicked()
{
    buttonClicked(ui->r6c4, ui->lcdNumber_2, 6, 4);
}

void Game::on_r6c5_clicked()
{
    buttonClicked(ui->r6c5, ui->lcdNumber_2, 6, 5);
}

void Game::on_r6c6_clicked()
{
    buttonClicked(ui->r6c6, ui->lcdNumber_2, 6, 6);
}
