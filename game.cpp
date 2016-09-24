#include "game.h"
#include "ui_game.h"

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

void Game::on_r0c0_clicked()
{
    ui->r0c0->setDisabled(true);
    ui->r0c0->setText("3");
}
