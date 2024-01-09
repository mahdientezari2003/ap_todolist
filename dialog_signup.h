#ifndef DIALOG_SIGNUP_H
#define DIALOG_SIGNUP_H
#include "user.h"
#include <QDialog>


namespace Ui {
class Dialog_signUp;
}

class Dialog_signUp : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_signUp(QWidget *parent = nullptr);
    ~Dialog_signUp();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::Dialog_signUp *ui;
};

#endif // DIALOG_SIGNUP_H
