#include "dialog_add_task.h"
#include "ui_dialog_add_task.h"
#include "task.h"
#include "data.h"
Dialog_add_task::Dialog_add_task(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_add_task)
{
    ui->setupUi(this);
}

Dialog_add_task::~Dialog_add_task()
{
    delete ui;
}

void Dialog_add_task::on_buttonBox_accepted()
{
    task u(" "," ");
    u.set_priority_for_task(ui->priority_input->text());
    u.set_name_of_task(ui->name_of_task_input->text());
    u.set_uesr_name_of_creator(Data::get_onlineId());
    Data::get_tasks().append(u);
}

