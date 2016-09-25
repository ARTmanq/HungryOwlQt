#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

enum class Difficulty
{
    Easy,
    Medium,
    Hard
};

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
    bool isAccepted() const;
    Difficulty getDifficulty() const;

private slots:
    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_buttonBox_accepted();

private:
    Ui::Dialog *ui;
    Difficulty difficulty;
    bool accepted;
};

#endif // DIALOG_H
