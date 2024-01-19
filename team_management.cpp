#include "team_management.h"
#include "ui_team_management.h"

team_management::team_management(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::team_management)
{
    ui->setupUi(this);
}

team_management::~team_management()
{
    delete ui;
}
