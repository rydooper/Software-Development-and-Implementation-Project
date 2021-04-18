#include "groupchatwindow.h" //Lines 1-9 includes all the files and libraries needed for the page
#include "ui_groupchatwindow.h"
#include "loginwindow.h"
#include <QFile>
#include <QMessageBox>
#include <iostream>
#include <QJsonObject>
#include <QJsonDocument>
using namespace std;

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

void GroupChatWindow::on_GCClearButton_clicked() //clears the input boxes and sets the spin box back to 0
{
    ui->TopicBox->setText("");
    ui->FirstModBox->setText("");
    ui->GCAddUsersBox->setText("");
}

void GroupChatWindow::on_GCInviteUsersButton_clicked() //extracts all the data from the input boxes and writes them to a text file
{
    QString Topic = ui->TopicBox->text();
    QString path = qApp->applicationDirPath() + "/Text Files/GroupChatData.json";
    QFile FileRead(path);
    QByteArray JSONData;
    bool TopicAlreadyExists = false;
    try { //tries to read in the data and iterate through all the objects, displaying an error if one is generated

        if(FileRead.open(QIODevice::ReadOnly | QFile::Text)){ //checks if the file is open in read-only mode, if so then the data is read into a variable
            JSONData = FileRead.readAll();
            FileRead.close();
        }
        QJsonDocument Data = QJsonDocument::fromJson(JSONData);
        QJsonObject RootObject = Data.object();
        QJsonObject::iterator ObjectIterator;
        for (ObjectIterator = RootObject.begin(); ObjectIterator != RootObject.end(); ObjectIterator++) { //iterates through all the objects stored in the root object to check if the entered topic already exists
            QJsonValue GroupValue = RootObject.value(ObjectIterator.key());
            QJsonObject GroupObject = GroupValue.toObject();
            if (ObjectIterator.key() == Topic) { //if the topic already exists, then the system will inform the user of this
                QMessageBox Message;
                Message.setText("Your chosen topic "+ Topic + " already exists.\nPlease choose a different topic name");
                Message.exec();
                TopicAlreadyExists = true;
                break; //exits the for loop, as there is no reason to continue iteration if the topic alrady exists in the JSON file
            }
        }
        if (TopicAlreadyExists == false) { //if the topic does not exist, then the data will be perpared to be written to the text file
            QString Host = "127.0.0.1";
            QString PortNum = "1883";
            QString FirstMod = ui->FirstModBox->text();
            QString GroupChat_Users = ui->GCAddUsersBox->text();
            //QStringList Users = GroupChat_Users.split(",");
            if (FileRead.open(QIODevice::WriteOnly | QFile::Text)) {
                QJsonValue UserValue = RootObject.value(Topic);
                QJsonObject newGroupObject = UserValue.toObject();
                newGroupObject["admin"] = LoggedInUser;
                newGroupObject["host"] = Host;
                newGroupObject["portNum"] = PortNum;
                newGroupObject["moderators"] = FirstMod;
                newGroupObject["groupChatUsers"] = GroupChat_Users;
                RootObject[Topic] = newGroupObject;
                QJsonDocument UpdatedDocument = QJsonDocument(RootObject);

                FileRead.write(UpdatedDocument.toJson());
                FileRead.close();
                QMessageBox SuccessMessage;
                SuccessMessage.setText("Group Chat created\nThe invited users can now join the group chat"); //displayed to the user to inform them of the group chat's creation
                SuccessMessage.exec();
            }
        }
    } catch (QString error) {
        QMessageBox Error;
        Error.setText(error);
        Error.exec();
    }
}

void GroupChatWindow::on_GCBackButton_clicked() //emits the function call to display the previous form
{
    emit backClicked();
}
