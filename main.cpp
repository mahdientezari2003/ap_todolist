#include "mainwindow.h"
#include "organization.h"
#include "project.h"
#include "team.h"
#include "user.h"
#include <QApplication>
#include "QVector"
#include "dialog_signup.h"
#include "data.h"

QVector<user>::iterator Data::it;
QVector<user> Data::members;
 QVector<team> Data::teams;
 QVector<organization> Data::organs;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
