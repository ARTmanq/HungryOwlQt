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
