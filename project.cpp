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
bool project::operator==(project pro){
    if(this->name_of_project == pro.name_of_project )
        return 1;

    else return 0;

}

project::project(QString _name){
    name_of_project = _name;
}

QString get_usrname_of_creator(){

}
