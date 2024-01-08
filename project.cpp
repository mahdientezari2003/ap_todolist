#include "user.h"
#include <QString>
#include <QVector>
#include "team.h"
#include "project.h"

void project::set_name_of_project(QString n){
    this->name_of_project = n;
}
QString project::get_name_of_project(){
    return name_of_project;
}
void project::add_task_to_project(task t){
    task_of_project.push_back(t);

}
