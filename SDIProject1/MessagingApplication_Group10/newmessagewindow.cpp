#include "newmessagewindow.h"
#include "ui_newmessagewindow.h"

NewMessageWindow::NewMessageWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NewMessageWindow)
{
    ui->setupUi(this);
}

NewMessageWindow::~NewMessageWindow()
{
    delete ui;
}
