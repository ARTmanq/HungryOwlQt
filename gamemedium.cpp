#include "gamemedium.h"
#include "ui_gamemedium.h"

GameMedium::GameMedium(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GameMedium)
{
    ui->setupUi(this);
}

GameMedium::~GameMedium()
{
    delete ui;
}
