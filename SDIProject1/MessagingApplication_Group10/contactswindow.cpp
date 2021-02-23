#include "contactswindow.h"
#include "ui_contactswindow.h"

ContactsWindow::ContactsWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ContactsWindow)
{
    ui->setupUi(this);
}

ContactsWindow::~ContactsWindow()
{
    delete ui;
}
