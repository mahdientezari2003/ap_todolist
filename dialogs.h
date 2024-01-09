#ifndef DIALOGS_H
#define DIALOGS_H

#include <QDialog>

namespace Ui {
class Dialogs;
}

class Dialogs : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogs(QWidget *parent = nullptr);
    ~Dialogs();

private:
    Ui::Dialogs *ui;
};

#endif // DIALOGS_H
