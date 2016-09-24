#ifndef HOWTOPLAY_H
#define HOWTOPLAY_H

#include <QDialog>

namespace Ui {
class HowToPlay;
}

class HowToPlay : public QDialog
{
    Q_OBJECT

public:
    explicit HowToPlay(QWidget *parent = 0);
    ~HowToPlay();
    bool isAccepted() const;

private slots:
    void on_buttonBox_accepted();

private:
    Ui::HowToPlay *ui;
    bool accepted;
};

#endif // HOWTOPLAY_H
