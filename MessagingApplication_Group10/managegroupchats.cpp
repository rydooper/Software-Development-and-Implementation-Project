#include "managegroupchats.h"
#include "ui_managegroupchats.h"
#include "loginwindow.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <fstream>

bool LoggedInUserAdminOrMod = false;
ManageGroupChats::ManageGroupChats(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ManageGroupChats)
{
    ui->setupUi(this);   
}

ManageGroupChats::~ManageGroupChats()
{
    delete ui;
}

bool ManageGroupChats::EmptyComboBoxes(){ //checks whether the combo boxes contain invalid data or not
    if ((ui->MGCChatCombo->currentText() == "Select Group Chat") || (ui->MGCUserCombo->currentText() == "Select User") || (ui->MGCChatCombo->currentText() == "") || (ui->MGCUserCombo->currentText() == "")) {
        return false;
    }
    return true;
}

void ManageGroupChats::UpdateGCTextFile(QString TargetTopic, QString TargetUser, QString Operation) { //modulated function to updated the text file with the updated data
    QString path = qApp->applicationDirPath() + "/Text Files/GroupChatData.json";
    QFile FileRead(path);
    QByteArray JSONData;
    QMessageBox Message;
    if(FileRead.open(QIODevice::ReadOnly | QFile::Text)) { //opens the file and reads all of the data into a variable
        JSONData = FileRead.readAll();
        FileRead.close();
    }
    QJsonDocument Data = QJsonDocument::fromJson(JSONData);
    QJsonObject RootObject = Data.object();
    QJsonValue groupChatValue = RootObject.value(TargetTopic);
    QJsonObject newChatObject = groupChatValue.toObject();
    QStringList Users = groupChatValue["groupChatUsers"].toString().split(","); //splits the users into a list of users by the ',' delimiter
    QStringList Moderators = groupChatValue["moderators"].toString().split(","); //splits the moderators into a list of moderators by the ',' delimiter
    if (Operation == "Promote") {
        Moderators << TargetUser; //appends the target user onto the moderators list
        QString UpdatedMods = Moderators.join(","); //joins the moderators list back into one string, joining them by the ',' delimiter -> the .join function was found in the Qt documentation (https://doc.qt.io/qt-5/qstringlist.html)*/
        newChatObject["moderators"] = UpdatedMods;
    } else if (Operation == "Demote") {
        Moderators.removeOne(TargetUser); //removes the user from the moderators list -> the .removeOne funciton was found in the Qt documentation (https://doc.qt.io/qt-5/qlist.html#removeOne)
        QString UpdatedMods = Moderators.join(","); //joins the moderators list back into one string, joining them by the ',' delimiter
        newChatObject["moderators"] = UpdatedMods;
    }
    newChatObject["admin"] = groupChatValue["admin"]; //re-assigns the data to a new user object
    newChatObject["groupChatUsers"] = groupChatValue["groupChatUsers"];
    newChatObject["host"] = groupChatValue["host"];
    newChatObject["portNum"] = groupChatValue["portNum"];
    RootObject[TargetTopic] = newChatObject;
    RootObject.remove(groupChatValue.toString()); //removes the old user object from the root object
    QJsonDocument UpdatedDocument = QJsonDocument(RootObject);
    if (FileRead.open(QIODevice::WriteOnly | QIODevice::Text)) { //opens the file and writes the updated document to the file
        FileRead.write(UpdatedDocument.toJson());
        FileRead.close();
    }
}

void ManageGroupChats::on_MGCBackButton_clicked() //emits the function call to display the previous form
{
    emit backClicked();
}

void ManageGroupChats::on_MGCPromoteUserButton_clicked() //runs checks to see if the target user can be promoted or not
{
    QMessageBox Message;
    if (EmptyComboBoxes() == false) { //if any of the the comboboxes are empty, then the user will be informed
        Message.setText("One of the Combo Boxes are empty.\nPlease choose the chat and user you wish to manage.");
        Message.exec();
    } else {
        QString SelectedTopic = ui->MGCChatCombo->currentText(); //extracts the data from the combo boxes' currently selected data item
        QString SelectedUser = ui->MGCUserCombo->currentText();
        QString path = qApp->applicationDirPath() + "/Text Files/GroupChatData.json";
        QFile FileRead(path);
        QByteArray JSONData;
        QMessageBox Message;
        bool CanPromoteUser = false;
        if(FileRead.open(QIODevice::ReadOnly | QFile::Text)) { //opens the file and reads in all the data into a variable
            JSONData = FileRead.readAll();
            FileRead.close();

            QJsonDocument Data = QJsonDocument::fromJson(JSONData);
            QJsonObject RootObject = Data.object();
            QJsonValue groupChatValue = RootObject.value(SelectedTopic);
            QStringList Users = groupChatValue["groupChatUsers"].toString().split(",");
            QStringList Moderators = groupChatValue["moderators"].toString().split(",");
            QString Admin = groupChatValue["admin"].toString();
            for (int ModElement = 0; ModElement < Moderators.length(); ModElement++) { //iterates through the moderators and checks if the user is already a moderator, the user is the admin, or if the user is the logged-in user
                if ((SelectedUser == Moderators.at(ModElement)) || (SelectedUser == Admin) || (SelectedUser == LoggedInUser)) { //if the user is already a moderator, the admin or the logged-in user, then a message will be displayed to the user explaining why they cannot be promoted
                    Message.setText(SelectedUser + " cannot be promoted as either:\n- This is your account\n- The selected user is the Admin\n- The selected user is already a Moderator");
                    Message.exec(); //displays the message to the user
                    break;
                }
                CanPromoteUser = true;
            }
            if (CanPromoteUser == true) { //if the user cna be promoted, then the process will continue to promote them
                UpdateGCTextFile(SelectedTopic, SelectedUser, "Promote");
                Message.setText(SelectedUser + " has been promoted to Moderator");
                Message.exec();
            }
        }
    }
}

void ManageGroupChats::on_MGCDemoteUserButton_clicked() //runs checks to see if the target user can be demoted or not
{
    QMessageBox Message;
    if (EmptyComboBoxes() == false) {
        Message.setText("One of the Combo Boxes are empty.\nPlease choose the chat and user you wish to manage.");
        Message.exec();
    } else {
        QString SelectedTopic = ui->MGCChatCombo->currentText();
        QString SelectedUser = ui->MGCUserCombo->currentText();
        QString path = qApp->applicationDirPath() + "/Text Files/GroupChatData.json";
        QFile FileRead(path);
        QByteArray JSONData;
        QMessageBox Message;
        bool CanDemoteUser = false;
        if(FileRead.open(QIODevice::ReadOnly | QFile::Text)) { //opens the file and reads in all the data into a variable
            JSONData = FileRead.readAll();
            FileRead.close();

            QJsonDocument Data = QJsonDocument::fromJson(JSONData);
            QJsonObject RootObject = Data.object();
            QJsonValue groupChatValue = RootObject.value(SelectedTopic);
            QStringList Users = groupChatValue["groupChatUsers"].toString().split(",");
            QStringList Moderators = groupChatValue["groupChatUsers"].toString().split(",");
            QString Admin = groupChatValue["admin"].toString();
            if ((SelectedUser == Admin) || (SelectedUser == LoggedInUser)) { //checks if the user is the admin or if the user is the logged-in user
                Message.setText(SelectedUser + " cannot be demoted as either:\n- This is your account\n- The selected user is the Admin\n- The selected user is already not a Moderator");
                Message.exec();
            } else {
                CanDemoteUser = true;
            }
        }
        if (CanDemoteUser == true) {
            UpdateGCTextFile(SelectedTopic, SelectedUser, "Demote");
            Message.setText(SelectedUser + " has been demoted to Base privileges");
            Message.exec();
        }
    }
}

void ManageGroupChats::on_MGCConfirmGC_clicked() //confirms the group chat and inserts the group chat's users into the User combo box
{
    QString CurrentGC = ui->MGCChatCombo->currentText();
    ui->MGCUserCombo->clear(); //clears the user combobox so the usernames do not repeat themselves
    QString path = qApp->applicationDirPath() + "/Text Files/GroupChatData.json";
    QFile FileRead(path);
    if (FileRead.open(QIODevice::ReadOnly | QFile::Text)) { //opens the file and reads in all of the data into a variable
        QByteArray JSONData;
        QMessageBox Message;
        JSONData = FileRead.readAll();
        FileRead.close();

        QJsonDocument Data = QJsonDocument::fromJson(JSONData);
        QJsonObject RootObject = Data.object();
        QJsonObject::iterator ObjectIterator;
        for (ObjectIterator = RootObject.begin(); ObjectIterator != RootObject.end(); ObjectIterator++) { //itrerates through all of the objects to find the group chat in to combobox
            QJsonValue groupChatValue = RootObject.value(ObjectIterator.key());
            if (ObjectIterator.key() == CurrentGC) { //does the current group chat iteration match the group chat in the combobox
                QStringList Users = groupChatValue["groupChatUsers"].toString().split(","); //reads in the users and splits the data into an array
                for (int UserElement = 0; UserElement != Users.length(); UserElement++) { //iterates through all of the users and adds them to the users' combobox
                    ui->MGCUserCombo->addItem(Users.at(UserElement));
                }
                Message.setText("Select a user to manage in the selected group chat");
                Message.exec();
            }
        }
    }
}

void ManageGroupChats::on_MGCBeginManagement_clicked() //checks to see if the logged-in user has the appropriate permissions to manage a group chat (they must be an admin or a moderator)
{
    int LoggedInUserGroupChatCount = 0; //used to see if the user is an admin or moderator in any of the group chats
    QString path = qApp->applicationDirPath() + "/Text Files/GroupChatData.json";
    QFile FileRead(path);
    QMessageBox Message;
    if(FileRead.open(QIODevice::ReadOnly | QFile::Text)) {
        ui->MGCChatCombo->addItem("Select Group Chat"); //the addItem function was found in the Qt documentation (https://doc.qt.io/qt-5/qcombobox.html#addItem)
        ui->MGCUserCombo->addItem("Select User");
        QByteArray JSONData;
        QMessageBox Message;
        JSONData = FileRead.readAll();
        FileRead.close();

        QJsonDocument Data = QJsonDocument::fromJson(JSONData);
        QJsonObject RootObject = Data.object();
        QJsonObject::iterator ObjectIterator;
        for (ObjectIterator = RootObject.begin(); ObjectIterator != RootObject.end(); ObjectIterator++) {
            QJsonValue groupChatValue = RootObject.value(ObjectIterator.key());
            QStringList Moderators = groupChatValue["moderators"].toString().split(",");
            Message.setText(ObjectIterator.key());
            Message.exec();
            for (int ModElement = 0; ModElement < Moderators.length(); ModElement++) { //iterates through all of the moderators
                if ((Moderators[ModElement] == LoggedInUser) || (groupChatValue["admin"].toString() == LoggedInUser)) { //checks if the logged-in user is a moderator or the admin
                    LoggedInUserAdminOrMod = true;
                    LoggedInUserGroupChatCount++;
                }
            }
            if (LoggedInUserAdminOrMod == true) { //if the user has permission to manage the group chat, adds the topic to the combobox
                ui->MGCChatCombo->addItem(ObjectIterator.key());
            }
            LoggedInUserAdminOrMod = false;
        }
        if ((LoggedInUserAdminOrMod == false) && (LoggedInUserGroupChatCount == 0)) { //if LoggedInUserGroupChatCount == 0, then the logged-in user does not have permission to view any of the topics
            Message.setText("You are not an admin or moderator in any of the group chats");
            Message.exec();
        } else {
            Message.setText("Please select the group chat and user you wish to manage");
            Message.exec();
        }

    }
}
