#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog_signup.h"
#include <QMessageBox>
#include "data.h"
#include "firstpage.h"
#include "ui_firstpage.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setMinimumSize(300,300);
       setMaximumSize(300,300);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_SignUpBtn_clicked()
{
    Dialog_signUp *s = new Dialog_signUp();
    s->show();
}


void MainWindow::on_SignInBtn_clicked()
{
    if (ui->usernameInput->text().isEmpty() || ui->passwordInput->text().isEmpty()) {
        QMessageBox::warning(this, "تذکر", "نام کاربری و رمز عبور نمی تواند خالی باشد!");
        return;
    }
    for (int i = 0; i < (Data::get_players()).size(); i++)
        if (ui->usernameInput->text() == Data::get_players()[i].get_username()) {
            if (ui->passwordInput->text() == Data::get_players()[i].get_password()) {
                Data::set_iterator(Data::get_players().begin() + i);
                this->close();

                Data::get_onlineId() = ui->usernameInput->text();
                firstpage *f = new firstpage();
                f->show();



                return;
            }
            else {
                QMessageBox::warning(this, "تذکر", "رمز عبور اشتباه است!");
                return;
            }
        }
    QMessageBox::warning(this, "تذکر", "نام کاربری یافت نشد!");
}

