#include "menuwindow.h"
#include "ui_menuwindow.h"

MenuWindow::MenuWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MenuWindow)
{
    ui->setupUi(this);
}

MenuWindow::~MenuWindow()
{
    delete ui;
}

void MenuWindow::on_LogoutButton_clicked()
{
    emit LogoutClicked();
}
