#ifndef PROJECT_H
#define PROJECT_H

#include "team.h"
#include "user.h"
#include <QMainWindow>
#include <QString>
#include <QVector>
#include "task.h"
class project {
private:
    QString name_of_project;
    QVector<task> task_of_project;

public:
    project(QString _name);
    void set_name_of_project(QString n);
    QString get_name_of_project();
    void add_task_to_project(task t);
    bool operator==(project pro);

};

#endif // PROJECT_H
