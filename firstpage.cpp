#include "firstpage.h"
#include "ui_firstpage.h"
#include "team_management.h"
firstpage::firstpage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::firstpage)
{
    ui->setupUi(this);
}

firstpage::~firstpage()
{
    delete ui;
}

void firstpage::on_pushButton_2_clicked()
{
    team_management *t = new team_management();
    t->show();
}

