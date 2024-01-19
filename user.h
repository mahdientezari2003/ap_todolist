#ifndef USER_H
#define USER_H


#include <QMainWindow>





#include <QVector>
#include <QString>
//#include "task.h"


class user{
private:
   QString name ="";
   QString username = "";
   QString password= "";
   QString email= "";
  //QVector<task> private_task;



public:
   user(QString _name, QString _username, QString _password, QString _email) ;
user();
   QString get_Name();
   QString get_username();
   QString get_password();
   QString get_email();
   void set_username(QString _username);
   void set_password(QString _password);
   void set_email(QString _email);
  bool operator==(user u);
   void set_name(QString _name);
};

#endif // USER_H
