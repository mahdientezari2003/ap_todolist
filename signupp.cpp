#include "signupp.h"
#include "ui_signupp.h"

signUpp::signUpp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::signUpp)
{
    ui->setupUi(this);
}

signUpp::~signUpp()
{
    delete ui;
}
