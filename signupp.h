#ifndef SIGNUPP_H
#define SIGNUPP_H

#include <QDialog>

namespace Ui {
class signUpp;
}

class signUpp : public QDialog
{
    Q_OBJECT

public:
    explicit signUpp(QWidget *parent = nullptr);
    ~signUpp();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::signUpp *ui;
};

#endif // SIGNUPP_H
