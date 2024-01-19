#ifndef DIALOG_ADD_TASK_H
#define DIALOG_ADD_TASK_H

#include <QDialog>

namespace Ui {
class Dialog_add_task;
}

class Dialog_add_task : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_add_task(QWidget *parent = nullptr);
    ~Dialog_add_task();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::Dialog_add_task *ui;
};

#endif // DIALOG_ADD_TASK_H
