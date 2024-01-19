
#include "task.h"
#include "team.h"
#include "user.h"
#include <QMainWindow>
#include <QString>
#include <QVector>

/*
task::task(QString _name , user _user_respon){
    name_of_task = _name;
    user_Respons_the_task = _user_respon;

}
task::task(QString _name , team _team_respon){
    name_of_task = _name;
    team_Respons_the_task = _team_respon;

}
*/
void task::set_priority_for_task(QString p){
    priority = p;

}
QString task::get_priority_for_task(){
    return priority;
}


QString task::get_name_of_task(){
    return name_of_task;

}
void task::set_name_of_task(QString _name){
    name_of_task = _name;

}
QString task::get_user_Respons_the_task(){
    return username_Respons_the_task;

}
QString task::get_team_Respons_the_task(){
    return team_Respons_the_task;

}
void task::set_user_Respons_the_task(QString _user){
    username_Respons_the_task = _user;

}
void task::set_team_Respons_the_task(QString _team){
    team_Respons_the_task = _team;
}

task::task(QString _name , QString _prio){
    name_of_task = _name;
priority = _prio;

}
