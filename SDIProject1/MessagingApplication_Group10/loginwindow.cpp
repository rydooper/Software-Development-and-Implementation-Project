#include "loginwindow.h"
#include "ui_loginwindow.h"

LoginWindow::LoginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->insertWidget(1,&_RegForm);
    ui->stackedWidget->insertWidget(2,&_MenuForm);

    connect(&_MenuForm, SIGNAL(LogoutClicked()),this, SLOT(moveBackLogin()));
    connect(&_RegForm, SIGNAL(BackClicked()),this, SLOT(moveBackLogin()));

}

LoginWindow::~LoginWindow()
{
    delete ui;
}


void LoginWindow::on_LoginButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void LoginWindow::on_RegisterButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void LoginWindow::moveBackLogin()
{
    ui->stackedWidget->setCurrentIndex(0);
}



void LoginWindow::on_ExitButton_clicked()
{
    this->close();
}

void LoginWindow::on_ClearButton_clicked()
{
    ui->UsernameInputBox->setText(""); //Clears the contents of the textboxes
    ui->PasswordInputBox->setText("");
}
