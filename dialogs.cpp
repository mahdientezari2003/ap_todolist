#include "dialogs.h"
#include "ui_dialogs.h"

Dialogs::Dialogs(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogs)
{
    ui->setupUi(this);
}

Dialogs::~Dialogs()
{
    delete ui;
}
