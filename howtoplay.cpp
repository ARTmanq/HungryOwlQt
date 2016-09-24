#include "howtoplay.h"
#include "ui_howtoplay.h"

HowToPlay::HowToPlay(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HowToPlay),
    accepted(false)
{
    ui->setupUi(this);
}

HowToPlay::~HowToPlay()
{
    delete ui;
}

bool HowToPlay::isAccepted() const
{
    return accepted;
}

void HowToPlay::on_buttonBox_accepted()
{
    accepted = true;
}
