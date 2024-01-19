#ifndef FIRSTPAGE_H
#define FIRSTPAGE_H

#include <QMainWindow>

namespace Ui {
class firstpage;
}

class firstpage : public QMainWindow
{
    Q_OBJECT

public:
    explicit firstpage(QWidget *parent = nullptr);
    ~firstpage();

private slots:
    void on_pushButton_2_clicked();

    void on_task_group_clicked();

private:
    Ui::firstpage *ui;
};

#endif // FIRSTPAGE_H
