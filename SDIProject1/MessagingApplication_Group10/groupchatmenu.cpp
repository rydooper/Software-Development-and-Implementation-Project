#include "groupchatmenu.h"
#include "ui_groupchatmenu.h"

GroupChatMenu::GroupChatMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GroupChatMenu)
{
    ui->setupUi(this);
}

GroupChatMenu::~GroupChatMenu()
{
    delete ui;
}
