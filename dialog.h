#ifndef DIALOG_H
#define DIALOG_H

#include "Field.h"
#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

    enum class Difficulty
    {
        Easy,
        Medium,
        Hard
    };

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
    bool isAccepted() const;

private slots:
    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_buttonBox_accepted();

private:
    Ui::Dialog *ui;
    Field field;
    Difficulty difficulty;
    bool accepted;
};

#endif // DIALOG_H
