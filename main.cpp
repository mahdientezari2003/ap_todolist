#include "mainwindow.h"
#include "organization.h"
#include "project.h"
#include "team.h"
#include "user.h"
#include <QApplication>
#include "QVector"
#include "dialog_signup.h"
#include "data.h"
#include "task.h"
QString::iterator Data::itonlineId;
QString Data::onlineId;


QVector<team>::iterator Data::itteam;
QVector<task>::iterator Data::ittask;
QVector<organization>::iterator Data::itorgan;
QVector<project>::iterator Data::itpro;
QVector<user>::iterator Data::ituser;
QVector<user> Data::members;
 QVector<team> Data::teams;
 QVector<organization> Data::organs;
QVector<task> Data::tasks;
QVector<project> Data::projects;


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
