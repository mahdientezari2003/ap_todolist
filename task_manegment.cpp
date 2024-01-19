#include "task_manegment.h"
#include "ui_task_manegment.h"

task_manegment::task_manegment(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::task_manegment)
{
    ui->setupUi(this);
}

task_manegment::~task_manegment()
{
    delete ui;
}

void task_manegment::on_ceat_task_btn_clicked()
{

}

