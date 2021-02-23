#include "menuwindow.h"
#include "ui_menuwindow.h"

MenuWindow::MenuWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MenuWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->insertWidget(1,&_VPForm);
}

MenuWindow::~MenuWindow()
{
    delete ui;
}

void MenuWindow::on_LogoutButton_clicked()
{
    emit LogoutClicked();
}


void MenuWindow::on_ViewProfileButton_clicked()
{
     ui->stackedWidget->setCurrentIndex(1);
}
