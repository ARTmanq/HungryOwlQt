#ifndef GAMEHARD_H
#define GAMEHARD_H

#include <QDialog>

namespace Ui {
class GameHard;
}

class GameHard : public QDialog
{
    Q_OBJECT

public:
    explicit GameHard(QWidget *parent = 0);
    ~GameHard();

private:
    Ui::GameHard *ui;
};

#endif // GAMEHARD_H
