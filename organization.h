#ifndef ORGANIZATION_H
#define ORGANIZATION_H

#include "team.h"
#include "user.h"
#include <QMainWindow>
#include <QString>
#include <QVector>
#include "project.h"
class organization{
private:
    QString name_of_organ;
    QVector<user> member_of_organ;
    QVector<team> team_of_organ;
    QVector<project> projects_of_organ;
    user head_of_organ;
public:
    organization();
    organization(user creator_organ,QString _name_of_organ);
    void delete_project_from_organ(project pro);
void add_project_to_organ(project pro);
void add_member_to_organ(user _user);
void add_team_organ(team _team);
void set_head_of_organ(user _user);
user get_head_of_organ();
void delete_member_of_organ(user _user);
void delete_team_of_organ(team _team);

};

#endif // ORGANIZATION_H
