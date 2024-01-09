#ifndef TEAM_H
#define TEAM_H

#include "user.h"
#include <QMainWindow>
#include <QString>
#include <QVector>
class team{
private:
    QVector<user> members;
    QString name_of_team;
    user head_of_team;

public:

    void set_name_of_team(QString _new_team_name);
    void add_member(user new_member);
    void delete_member(user _member);
    QString get_name_of_team();
bool operator==(team t);
};



#endif // TEAM_H
