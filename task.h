#ifndef TASK_H
#define TASK_H

#include "team.h"
#include "user.h"
#include <QMainWindow>
#include <QString>
#include <QVector>
class task{
private:
    QString username_of_creator= "";
    QString name_of_task = "";
    QString username_Respons_the_task = "";
    QString team_Respons_the_task = "";
    QString priority = "";

public:
    task(QString _name , QString _prio);
    task();
    //task(QString _name , user _user_respon);
    //task(QString _name , team _team_respon);
    QString get_name_of_task();
    void set_name_of_task(QString _name);
    QString get_user_Respons_the_task();
    QString get_team_Respons_the_task();
    void set_user_Respons_the_task(QString _user);
    void set_team_Respons_the_task(QString _team);
    void set_priority_for_task(QString p);
    QString get_priority_for_task();
    QString get_username_of_cteator(){
        return username_of_creator;
    }
    void set_uesr_name_of_creator(QString _uname){
        username_of_creator = _uname;
    }
};

#endif // TASK_H
