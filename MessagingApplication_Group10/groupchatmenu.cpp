#include "groupchatmenu.h" //Lines 1-7 includes all the files and libraries needed for the page
#include "ui_groupchatmenu.h"
#include "loginwindow.h"
#include "managegroupchats.h"
#include <QFile>
#include <QJsonObject>
#include <QJsonDocument>
#include <QMessageBox>

GroupChatMenu::GroupChatMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GroupChatMenu)
{
    ui->setupUi(this);
    ui->stackedWidget->insertWidget(1, &_MGCForm);
    connect(&_MGCForm, SIGNAL(MGCClicked()), this, SLOT(openMGC()));
    connect(&_MGCForm, SIGNAL(backClicked()), this, SLOT(movebackGCMenu()));
}

GroupChatMenu::~GroupChatMenu()
{
    delete ui;
}

void GroupChatMenu::on_GCMenuBackButton_clicked() //emits the function call to move back to the previous form
{
    emit backClicked();
}

void GroupChatMenu::on_GCMenu_ViewGCData_clicked() //displays all the group chat information relevant to the logged-in user
{
    QFile file(qApp->applicationDirPath() + "/Text Files/GroupChatData.json"); //stores the file path to the JSON file (which directs to the build folder) -> method of finding the file path was adapted from the Qt Forum (https://forum.qt.io/topic/74806/open-file-path/3)
    QByteArray JSONData;
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) { //open the file and read all the data into a byte array -> method to utilise QFile was adapted from Qt Creator documentation (https://doc.qt.io/qt-5/qfile.html)
        JSONData = file.readAll();
        file.close();
    }
    QJsonDocument Data = QJsonDocument::fromJson(JSONData);
    QJsonObject RootObject = Data.object(); //access the root object of the file (in which all the objects are inside)
    QJsonObject::iterator ObjectIterator; //object variable for iterating through all the objects inside the root object
    bool UserCanViewGroup;
    for (ObjectIterator = RootObject.begin(); ObjectIterator != RootObject.end(); ObjectIterator++) { //iterate through all objects to output the group chat data
        UserCanViewGroup = false;
        QJsonValue UserValue = RootObject.value(ObjectIterator.key());
        QJsonObject UserObject = UserValue.toObject(); //store the object in a value variable and convert it back into an object
        QStringList Users = UserObject["groupChatUsers"].toString().split(",");
        for (int UserElement = 0; UserElement < Users.size(); UserElement++) { //iterate through the users in the current group chat
            if ((UserObject["admin"] == LoggedInUser) || (Users[UserElement] == LoggedInUser)) { //check whether either the logged in user is the user in the current iteration or if the logged in user is the admin for the gorup chat
                UserCanViewGroup = true; //checks wehther the user has the permissions to view the group chat data
                break;
            }
        }
        if (UserCanViewGroup == true) { //if the user has the permissions to view the gorup chat, then the group chat data will be displayed in the PlainTextBox
            ui->GCMenuDisplay->insertPlainText("Topic: " + ObjectIterator.key() + "\n");
            ui->GCMenuDisplay->insertPlainText("Admin User: " + UserObject["admin"].toString() + "\n");
            ui->GCMenuDisplay->insertPlainText("Group Members: " + UserObject["groupChatUsers"].toString() + "\n");
            ui->GCMenuDisplay->insertPlainText("Moderators: " + UserObject["moderators"].toString() + "\n");
            ui->GCMenuDisplay->insertPlainText("\n\n");
        }
    }
}

void GroupChatMenu::on_GCMenu_ManageGC_clicked() //displays the Manage Group Chats form
{
    ui->stackedWidget->setCurrentIndex(1);
}

void GroupChatMenu::movebackGCMenu() //emits the function call to display the previous form
{
    ui->stackedWidget->setCurrentIndex(0);
}

void GroupChatMenu::openMGC()
{
    ui->stackedWidget->setCurrentIndex(1);
}
