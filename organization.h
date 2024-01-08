#ifndef ORGANIZATION_H
#define ORGANIZATION_H

#include "team.h"
#include "user.h"
#include <QMainWindow>
#include <QString>
#include <QVector>

class organization{
private:
    QVector<user> member_of_organ;
    QVector<team> team_of_organ;
    user head_of_organ;
public:

void add_member_to_organ(user _user);
void add_team_organ(team _team);
void set_head_of_organ(user _user);
user get_head_of_organ();
void delete_member_of_organ(user _user);
void delete_team_of_organ(team _team);
};

#endif // ORGANIZATION_H
