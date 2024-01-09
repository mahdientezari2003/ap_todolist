#include "user.h"
#include <QString>
#include <QVector>

QString user:: get_email(){return this->email;}
QString user::get_Name(){return this->name;}
QString user::get_username(){return this->username;}
QString user::get_password(){return this->password;}

void user::set_username(QString _username){username =_username;}
void user::set_password(QString _password){password = _password;}
void user::set_email(QString _email){email  =  _email;}
void user::set_name(QString _name){name = _name;}

bool user::operator==(user u){
    if(this->get_username() == u.get_username() && this->get_Name() == u.get_Name())
        return 1;

    else return 0;

}
user::user(QString _name, QString _username, QString _password, QString _email) {
        name = _name;
        username = _username;
        password = _password;
        email = _email;
    }
