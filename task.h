#ifndef TASK_H
#define TASK_H

#include "team.h"
#include "user.h"
#include <QMainWindow>
#include <QString>
#include <QVector>
class task{
private:
    QString name_of_task;
    user user_Respons_the_task;
    team team_Respons_the_task;

public:
    task(QString _name , user _user_respon);
    task(QString _name , team _team_respon);
    QString get_name_of_task();
    void set_name_of_task(QString _name);
    user get_uer_Respons_the_task();
    team get_team_Respons_the_task();
    void set_uer_Respons_the_task(user _user);
    void set_team_Respons_the_task(team _team);
};

#endif // TASK_H
