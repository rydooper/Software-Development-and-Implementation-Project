#include "groupchatwindow.h"
#include "ui_groupchatwindow.h"

GroupChatWindow::GroupChatWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GroupChatWindow)
{
    ui->setupUi(this);
}

GroupChatWindow::~GroupChatWindow()
{
    delete ui;
}
