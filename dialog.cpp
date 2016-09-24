#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog),
    difficulty(Difficulty::Easy),
    accepted(false)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_radioButton_clicked()
{
    difficulty = Difficulty::Easy;
}

void Dialog::on_radioButton_2_clicked()
{
    difficulty = Difficulty::Medium;
}

void Dialog::on_radioButton_3_clicked()
{
    difficulty = Difficulty::Hard;
}

void Dialog::on_buttonBox_accepted()
{
    accepted = true;
}

bool Dialog::isAccepted() const
{
    return accepted;
}
