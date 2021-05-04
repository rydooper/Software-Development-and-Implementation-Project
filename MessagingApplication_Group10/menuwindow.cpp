#include "menuwindow.h"
#include "ui_menuwindow.h"
#include "loginwindow.h"
//QString LoggedInUser;
#include <QMessageBox>
#include <QTimer>
#include <QFile>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>

MenuWindow::MenuWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MenuWindow)
{
    ui->setupUi(this);
    //navigation to other forms
    ui->stackedWidget->insertWidget(1,&_VPForm); //sets index 1 to profile form
    ui->stackedWidget->insertWidget(2,&_GCForm);  //sets index 2 to group chat form
    ui->stackedWidget->insertWidget(3,&_ConForm);  //sets index 3 to contacts form
    ui->stackedWidget->insertWidget(4,&_NMForm);  //sets index 4 to new message form

    //navigation from other forms to homepage
    connect(&_VPForm, SIGNAL(backClicked()), this, SLOT(moveBackMenu()));
    connect(&_GCForm, SIGNAL(backClicked()), this, SLOT(moveBackMenu()));
    connect(&_ConForm, SIGNAL(backClicked()), this, SLOT(moveBackMenu()));
    connect(&_NMForm, SIGNAL(backClicked()), this, SLOT(moveBackMenu()));

    //when signal backClicked is sent from any form, moveBackMenu is run
}

MenuWindow::~MenuWindow()
{
    delete ui;
}

/*void MenuWindow::SetProfileData(QString Username) {
    QFile file(qApp->applicationDirPath() + "/Text Files/UserLogin.json");
    QByteArray JSONData;
    QMessageBox Message;
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        JSONData = file.readAll();
        file.close();
    }
    QJsonDocument Data = QJsonDocument::fromJson(JSONData);
    QJsonObject RootObject = Data.object();
    QJsonValue UserValue = RootObject.value(Username);
    QJsonObject UserObject = UserValue.toObject();
    QString UserProfilePic = UserObject["profilePicture"].toString();
    QPixmap ProfilePicture(qApp->applicationDirPath() + "/Profile Pictures/" + UserProfilePic);
    ui->ProfileImage->setPixmap(ProfilePicture);
    ui->ProfileImage->show();
}*/

void MenuWindow::on_LogoutButton_clicked()
{
    //log out
    updateTextFile(LoggedInUser);
    emit LogoutClicked();
}


void MenuWindow::on_ViewProfileButton_clicked()
{
    //open profile
    ui->stackedWidget->setCurrentIndex(1);
}

void MenuWindow::on_GroupChatButton_clicked()
{
    //open group chat
    ui->stackedWidget->setCurrentIndex(2);
}

void MenuWindow::on_ContactsButton_clicked()
{
    //open contacts
    ui->stackedWidget->setCurrentIndex(3);
}

void MenuWindow::on_NewMessageButton_clicked()
{
    //open new message
    ui->stackedWidget->setCurrentIndex(4);
}

void MenuWindow::moveBackMenu()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MenuWindow::updateTextFile(QString Username) {
    QFile file(qApp->applicationDirPath() + "/Text Files/UserLogin.json");
    QByteArray JSONData;
    QMessageBox Message;
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        JSONData = file.readAll();
        file.close();
    }
    QJsonDocument Data = QJsonDocument::fromJson(JSONData);
    QJsonObject RootObject = Data.object();
    QJsonValue UserValue = RootObject.value(Username);
    QJsonObject UserObject = UserValue.toObject();

    RootObject.remove(UserValue.toString()); //Method of removing the user object and rewriting it to the document was adapted from Stack Overflow (https://stackoverflow.com/questions/63245640/how-to-remove-json-object-key-and-valyue-in-qt-c)
    QJsonObject userObject = UserValue.toObject();
    userObject["email"] = userObject["email"];
    userObject["password"] = userObject["password"];
    userObject["forename"] = userObject["forename"];
    userObject["surname"] = userObject["surname"];
    userObject["loggedIn"] = "0";
    userObject["lastLogin"] = userObject["lastLogin"];
    RootObject.remove(UserValue.toString()); //Method of removing the user object and rewriting it to the document was adapted from Stack Overflow (https://stackoverflow.com/questions/63245640/how-to-remove-json-object-key-and-valyue-in-qt-c)
    RootObject[Username] = userObject;
    QJsonDocument UpdatedData = QJsonDocument(RootObject);
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        file.write(UpdatedData.toJson());
        file.close();
    }
    /*QString path = qApp->applicationDirPath() + "/UserLoginData.txt";
    QFile FileRead(path);
    QStringList userFileLines; //stores a list of all the text file lines to be written back into the text file
    if(FileRead.open(QIODevice::ReadOnly | QFile::Text)) {
        QTextStream stream(&FileRead);
        while (!stream.atEnd()) {
            QString Line = stream.readLine();
            QStringList Data = Line.split(",");
            QString FileUsername = Data.at(0);
            if (FileUsername == Username) {
                QString LoginState = "0";
                QString Password = Data.at(1);
                QString Forename = Data.at(2);
                QString Surname = Data.at(3);
                QString Email = Data.at(4);
                QString currentTime = Data.at(5);
                QString UpdatedLine = Username + "," + Password + "," + Forename + "," + Surname + "," + Email + "," + currentTime + "," + LoginState;
                userFileLines << UpdatedLine;
                continue;
            } else {
                userFileLines << Line;
                continue;
            }
        }
        QFile OpenFile(path);
        if (OpenFile.open(QIODevice::WriteOnly | QFile::Text)) {
            QTextStream stream(&OpenFile);
            stream << userFileLines.join("\n"); //opens the file to write data back into, joining the list by adding line breaks (to ensure that each user's data is stores on a new line in the text file
        } //The .join function was found in the Qt documentation (https://doc.qt.io/qt-5/qstringlist.html)*/
}
