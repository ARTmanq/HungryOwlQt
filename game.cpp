#include "game.h"
#include "ui_game.h"
#include <QString>

Game::Game(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Game)
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

void Game::on_r0c0_clicked()
{
    ui->r0c0->setDisabled(true);
    ui->r0c0->setStyleSheet(field.styleSheet(0, 0));
    ui->r0c0->setText(field.status(0, 0));
}

void Game::on_r0c1_clicked()
{
    ui->r0c1->setDisabled(true);
    ui->r0c1->setStyleSheet(field.styleSheet(0, 1));
    ui->r0c1->setText(field.status(0, 1));
}

void Game::on_r0c2_clicked()
{
    ui->r0c2->setDisabled(true);
    ui->r0c2->setStyleSheet(field.styleSheet(0, 2));
    ui->r0c2->setText(field.status(0, 2));
}

void Game::on_r0c3_clicked()
{
    ui->r0c3->setDisabled(true);
    ui->r0c3->setStyleSheet(field.styleSheet(0, 3));
    ui->r0c3->setText(field.status(0, 3));
}

void Game::on_r0c4_clicked()
{
    ui->r0c4->setDisabled(true);
    ui->r0c4->setStyleSheet(field.styleSheet(0, 4));
    ui->r0c4->setText(field.status(0, 4));
}

void Game::on_r0c5_clicked()
{
    ui->r0c5->setDisabled(true);
    ui->r0c5->setStyleSheet(field.styleSheet(0, 5));
    ui->r0c5->setText(field.status(0, 5));
}

void Game::on_r0c6_clicked()
{
    ui->r0c6->setDisabled(true);
    ui->r0c6->setStyleSheet(field.styleSheet(0, 6));
    ui->r0c6->setText(field.status(0, 6));
}

void Game::on_r1c0_clicked()
{
    ui->r1c0->setDisabled(true);
    ui->r1c0->setStyleSheet(field.styleSheet(1, 0));
    ui->r1c0->setText(field.status(1, 0));
}

void Game::on_r1c1_clicked()
{
    ui->r1c1->setDisabled(true);
    ui->r1c1->setStyleSheet(field.styleSheet(1, 1));
    ui->r1c1->setText(field.status(1, 1));
}

void Game::on_r1c2_clicked()
{
    ui->r1c2->setDisabled(true);
    ui->r1c2->setStyleSheet(field.styleSheet(1, 2));
    ui->r1c2->setText(field.status(1, 2));
}

void Game::on_r1c3_clicked()
{
    ui->r1c3->setDisabled(true);
    ui->r1c3->setStyleSheet(field.styleSheet(1, 3));
    ui->r1c3->setText(field.status(1, 3));
}

void Game::on_r1c4_clicked()
{
    ui->r1c4->setDisabled(true);
    ui->r1c4->setStyleSheet(field.styleSheet(1, 4));
    ui->r1c4->setText(field.status(1, 4));
}

void Game::on_r1c5_clicked()
{
    ui->r1c5->setDisabled(true);
    ui->r1c5->setStyleSheet(field.styleSheet(1, 5));
    ui->r1c5->setText(field.status(1, 5));
}

void Game::on_r1c6_clicked()
{
    ui->r1c6->setDisabled(true);
    ui->r1c6->setStyleSheet(field.styleSheet(1, 6));
    ui->r1c6->setText(field.status(1, 6));
}

void Game::on_r2c0_clicked()
{
    ui->r2c0->setDisabled(true);
    ui->r2c0->setStyleSheet(field.styleSheet(2, 0));
    ui->r2c0->setText(field.status(2, 0));
}

void Game::on_r2c1_clicked()
{
    ui->r2c1->setDisabled(true);
    ui->r2c1->setStyleSheet(field.styleSheet(2, 1));
    ui->r2c1->setText(field.status(2, 1));
}

void Game::on_r2c2_clicked()
{
    ui->r2c2->setDisabled(true);
    ui->r2c2->setStyleSheet(field.styleSheet(2, 2));
    ui->r2c2->setText(field.status(2, 2));
}

void Game::on_r2c3_clicked()
{
    ui->r2c3->setDisabled(true);
    ui->r2c3->setStyleSheet(field.styleSheet(2, 3));
    ui->r2c3->setText(field.status(2, 3));
}

void Game::on_r2c4_clicked()
{
    ui->r2c4->setDisabled(true);
    ui->r2c4->setStyleSheet(field.styleSheet(2, 4));
    ui->r2c4->setText(field.status(2, 4));
}

void Game::on_r2c5_clicked()
{
    ui->r2c5->setDisabled(true);
    ui->r2c5->setStyleSheet(field.styleSheet(2, 5));
    ui->r2c5->setText(field.status(2, 5));
}

void Game::on_r2c6_clicked()
{
    ui->r2c6->setDisabled(true);
    ui->r2c6->setStyleSheet(field.styleSheet(2, 6));
    ui->r2c6->setText(field.status(2, 6));
}

void Game::on_r3c0_clicked()
{
    ui->r3c0->setDisabled(true);
    ui->r3c0->setStyleSheet(field.styleSheet(3, 0));
    ui->r3c0->setText(field.status(3, 0));
}

void Game::on_r3c1_clicked()
{
    ui->r3c1->setDisabled(true);
    ui->r3c1->setStyleSheet(field.styleSheet(3, 1));
    ui->r3c1->setText(field.status(3, 1));
}

void Game::on_r3c2_clicked()
{
    ui->r3c2->setDisabled(true);
    ui->r3c2->setStyleSheet(field.styleSheet(3, 2));
    ui->r3c2->setText(field.status(3, 2));
}

void Game::on_r3c3_clicked()
{
    ui->r3c3->setDisabled(true);
    ui->r3c3->setStyleSheet(field.styleSheet(3, 3));
    ui->r3c3->setText(field.status(3, 3));
}

void Game::on_r3c4_clicked()
{
    ui->r3c4->setDisabled(true);
    ui->r3c4->setStyleSheet(field.styleSheet(3, 4));
    ui->r3c4->setText(field.status(3, 4));
}

void Game::on_r3c5_clicked()
{
    ui->r3c5->setDisabled(true);
    ui->r3c5->setStyleSheet(field.styleSheet(3, 5));
    ui->r3c5->setText(field.status(3, 5));
}

void Game::on_r3c6_clicked()
{
    ui->r3c6->setDisabled(true);
    ui->r3c6->setStyleSheet(field.styleSheet(3, 6));
    ui->r3c6->setText(field.status(3, 6));
}

void Game::on_r4c0_clicked()
{
    ui->r4c0->setDisabled(true);
    ui->r4c0->setStyleSheet(field.styleSheet(4, 0));
    ui->r4c0->setText(field.status(4, 0));
}

void Game::on_r4c1_clicked()
{
    ui->r4c1->setDisabled(true);
    ui->r4c1->setStyleSheet(field.styleSheet(4, 1));
    ui->r4c1->setText(field.status(4, 1));
}

void Game::on_r4c2_clicked()
{
    ui->r4c2->setDisabled(true);
    ui->r4c2->setStyleSheet(field.styleSheet(4, 2));
    ui->r4c2->setText(field.status(4, 2));
}

void Game::on_r4c3_clicked()
{
    ui->r4c3->setDisabled(true);
    ui->r4c3->setStyleSheet(field.styleSheet(4, 3));
    ui->r4c3->setText(field.status(4, 3));
}

void Game::on_r4c4_clicked()
{
    ui->r4c4->setDisabled(true);
    ui->r4c4->setStyleSheet(field.styleSheet(4, 4));
    ui->r4c4->setText(field.status(4, 4));
}

void Game::on_r4c5_clicked()
{
    ui->r4c5->setDisabled(true);
    ui->r4c5->setStyleSheet(field.styleSheet(4, 5));
    ui->r4c5->setText(field.status(4, 5));
}

void Game::on_r4c6_clicked()
{
    ui->r4c6->setDisabled(true);
    ui->r4c6->setStyleSheet(field.styleSheet(4, 6));
    ui->r4c6->setText(field.status(4, 6));
}

void Game::on_r5c0_clicked()
{
    ui->r5c0->setDisabled(true);
    ui->r5c0->setStyleSheet(field.styleSheet(5, 0));
    ui->r5c0->setText(field.status(5, 0));
}

void Game::on_r5c1_clicked()
{
    ui->r5c1->setDisabled(true);
    ui->r5c1->setStyleSheet(field.styleSheet(5, 1));
    ui->r5c1->setText(field.status(5, 1));
}

void Game::on_r5c2_clicked()
{
    ui->r5c2->setDisabled(true);
    ui->r5c2->setStyleSheet(field.styleSheet(5, 2));
    ui->r5c2->setText(field.status(5, 2));
}

void Game::on_r5c3_clicked()
{
    ui->r5c3->setDisabled(true);
    ui->r5c3->setStyleSheet(field.styleSheet(5, 3));
    ui->r5c3->setText(field.status(5, 3));
}

void Game::on_r5c4_clicked()
{
    ui->r5c4->setDisabled(true);
    ui->r5c4->setStyleSheet(field.styleSheet(5, 4));
    ui->r5c4->setText(field.status(5, 4));
}

void Game::on_r5c5_clicked()
{
    ui->r5c5->setDisabled(true);
    ui->r5c5->setStyleSheet(field.styleSheet(5, 5));
    ui->r5c5->setText(field.status(5, 5));
}

void Game::on_r5c6_clicked()
{
    ui->r5c6->setDisabled(true);
    ui->r5c6->setStyleSheet(field.styleSheet(5, 6));
    ui->r5c6->setText(field.status(5, 6));
}

void Game::on_r6c0_clicked()
{
    ui->r6c0->setDisabled(true);
    ui->r6c0->setStyleSheet(field.styleSheet(6, 0));
    ui->r6c0->setText(field.status(6, 0));
}

void Game::on_r6c1_clicked()
{
    ui->r6c1->setDisabled(true);
    ui->r6c1->setStyleSheet(field.styleSheet(6, 1));
    ui->r6c1->setText(field.status(6, 1));
}

void Game::on_r6c2_clicked()
{
    ui->r6c2->setDisabled(true);
    ui->r6c2->setStyleSheet(field.styleSheet(6, 2));
    ui->r6c2->setText(field.status(6, 2));
}

void Game::on_r6c3_clicked()
{
    ui->r6c3->setDisabled(true);
    ui->r6c3->setStyleSheet(field.styleSheet(6, 3));
    ui->r6c3->setText(field.status(6, 3));
}

void Game::on_r6c4_clicked()
{
    ui->r6c4->setDisabled(true);
    ui->r6c4->setStyleSheet(field.styleSheet(6, 4));
    ui->r6c4->setText(field.status(6, 4));
}

void Game::on_r6c5_clicked()
{
    ui->r6c5->setDisabled(true);
    ui->r6c5->setStyleSheet(field.styleSheet(6, 5));
    ui->r6c5->setText(field.status(6, 5));
}

void Game::on_r6c6_clicked()
{
    ui->r6c6->setDisabled(true);
    ui->r6c6->setStyleSheet(field.styleSheet(6, 6));
    ui->r6c6->setText(field.status(6, 6));
}
