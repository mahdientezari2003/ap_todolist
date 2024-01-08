#ifndef USER_H
#define USER_H


#include <QMainWindow>
#include <QString>
class user{
private:
   QString name;
   QString username;
   QString password;
   QString email;


public:
   user(QString _name, QString _username, QString _password, QString _email) ;

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
