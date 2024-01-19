#include "dialog_signup.h"
#include "ui_dialog_signup.h"
#include <QMessageBox>
#include "user.h"
#include "data.h"
Dialog_signUp::Dialog_signUp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_signUp)
{
    ui->setupUi(this);
}

Dialog_signUp::~Dialog_signUp()
{
    delete ui;
}

void Dialog_signUp::on_buttonBox_accepted()
{
    if (ui->name_input->text().isEmpty() || ui->username_input->text().isEmpty() || ui->password_input->text().isEmpty() || ui->email_input->text().isEmpty()
            ) {
        QMessageBox::warning(this, "تذکر", "همه فیلدها باید پر شوند!");
        return;
    }
   // if(ui->password_input->text().size() < 9)
   // {
      //  QMessageBox::warning(this, "تذکر", "رمز باید بیشتر از ۸ رقم باشد!");
      //  return;

    //}
    for (int i = 0; i < Data::get_players().size(); i++) {
        if (ui->username_input->text() == Data::get_players()[i].get_username()) {
            QMessageBox::warning(this, "تذکر", "این نام کاربری قبلا استفاده شده است!");
            return;
        }
    }
    user p(ui->name_input->text(),ui->username_input->text(),ui->password_input->text(),ui->email_input->text());

    Data::get_players().append(p);
    Data::set_onlineId(ui->username_input->text());



}

