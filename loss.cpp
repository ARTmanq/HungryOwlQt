#include "loss.h"
#include "ui_loss.h"

Loss::Loss(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Loss)
{
    ui->setupUi(this);
}

Loss::~Loss()
{
    delete ui;
}
