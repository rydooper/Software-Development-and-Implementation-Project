#include "viewprofilewindow.h"
#include "ui_viewprofilewindow.h"
#include "loginwindow.h"
#include <QFile>
#include <QMessageBox>
#include <QDateTime>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <fstream>

ViewProfileWindow::ViewProfileWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ViewProfileWindow)
{
    ui->setupUi(this);
}

ViewProfileWindow::~ViewProfileWindow()
{
    delete ui;
}

void ViewProfileWindow::on_VPBackButton_clicked()
{
    emit backClicked();
}

void ViewProfileWindow::on_ApplyButton_clicked()
{
    QMessageBox::StandardButton reply; //message box presented to the user to ensure that they are sure that they want to delete their account -> the Yes-No message box was adapted from Stack Overflow (https://stackoverflow.com/questions/13111669/yes-no-message-box-using-qmessagebox)
    reply = QMessageBox::question(this, "Update Account", "Are you sure that you want to update your account details?", QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        updateTextFile(LoggedInUser, "Update");
    }
}

void ViewProfileWindow::on_DeleteAccButton_clicked()
{
    QMessageBox::StandardButton reply; //message box presented to the user to ensure that they are sure that they want to delete their account -> the Yes-No message box was adapted from Stack Overflow (https://stackoverflow.com/questions/13111669/yes-no-message-box-using-qmessagebox)
    reply = QMessageBox::question(this, "Delete Account", "Are you sure that you want to delete your account?\nThis cannot be undone.", QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        updateTextFile(LoggedInUser, "Delete");
    }
}

void ViewProfileWindow::on_VPRevealDataButton_clicked()
{
    QString path = qApp->applicationDirPath() + "/Text Files/UserLogin.json";
    QFile FileRead(path);
    QByteArray JSONData;
    if(FileRead.open(QIODevice::ReadOnly | QFile::Text)) {
        JSONData = FileRead.readAll();
        FileRead.close();
    }
    QJsonDocument Data = QJsonDocument::fromJson(JSONData);
    QJsonObject RootObject = Data.object();
    QJsonValue UserValue = RootObject.value(LoggedInUser);
    QJsonObject UserObject = UserValue.toObject();
    ui->VPFnameInputBox->setText(UserObject["forename"].toString()); //enters the user data from the user object into the textboxes
    ui->VPSnameInputBox->setText(UserObject["surname"].toString());
    ui->VPEmailInputBox->setText(UserObject["email"].toString());
    QString Password = UserObject["password"].toString();
    QByteArray passwordFromHex = QByteArray::fromHex(Password.toUtf8()); //converts the password in the user object (which is in hexidecimal) to the readable word -> the method to convert hex to a QString was adapted from the Qt Forum (https://forum.qt.io/topic/100505/conversion-of-hex-data-in-unsigned-char-array-to-qstring/3)
    QString DecryptedPassword(passwordFromHex);
    ui->VPPasswordInputBox->setText(DecryptedPassword);

    QString UserProfilePic = UserObject["profilePicture"].toString();
    QPixmap ProfilePicture(qApp->applicationDirPath() + "/Profile Images/" + UserProfilePic); //Method of loading and displaying images was found on the qt Forum (https://forum.qt.io/topic/82845/display-image/4)
    ui->VPImageCombo->addItem("redSquare.png"); //adds the choices of images to the combobox -> reference for the red square: (https://www.iconsdb.com/red-icons/square-icon.html) - the image was found on iconsdb.com
    ui->VPImageCombo->addItem("blueSquare.png"); //reference for the blue square: (https://www.iconsdb.com/blue-icons/square-icon.html) - the image was found on iconsdb.com
    ui->ProfileImage->setPixmap(ProfilePicture); //displays the image on the form
    ui->ProfileImage->show();
}

void ViewProfileWindow::updateTextFile(QString Username, QString Operation)
{
    QString path = qApp->applicationDirPath() + "/Text Files/UserLogin.json";
    QMessageBox Message;
    QFile FileRead(path);
    QByteArray JSONData;
    if(FileRead.open(QIODevice::ReadOnly | QFile::Text)) {
        JSONData = FileRead.readAll();
        FileRead.close();
    }
    QJsonDocument Data = QJsonDocument::fromJson(JSONData);
    QJsonObject RootObject = Data.object();
    QJsonValue UserValue = RootObject.value(Username);
    QJsonObject UserObject = UserValue.toObject();
    if (Operation == "Update") { //if the operation is to update the JSON file, then the user object will be removed and added back to the document (updating the object), before being written back to the file
        QString Forename, Surname, Email, Password, lastLogin, loggedIn;
        Forename = ui->VPFnameInputBox->text();
        Surname = ui->VPSnameInputBox->text();
        Email = ui->VPEmailInputBox->text();
        Password = ui->VPPasswordInputBox->text();
        QByteArray EncryptedPassword = Password.toUtf8().toHex(); //converts the password to hex in order to encrypt it -> method to convert QString to QByteArray was found on the Qt forum (https://forum.qt.io/topic/83805/how-to-transfer-qstring-to-qbytearray/4)
        lastLogin = UserObject["lastLogin"].toString();
        loggedIn = UserObject["loggedIn"].toString();
        RootObject.remove(UserValue.toString());
        QJsonObject UserObject = UserValue.toObject();
        UserObject["forename"] = Forename;
        UserObject["surname"] = Surname;
        UserObject["email"] = Email;
        UserObject["password"] = QString(EncryptedPassword);
        UserObject["lastLogin"] = lastLogin;
        UserObject["loggedIn"] = loggedIn;
        UserObject["profilePicture"] = ui->VPImageCombo->currentText();
        RootObject[Username] = UserObject;
        QJsonDocument UpdatedDocument = QJsonDocument(RootObject);
        if (FileRead.open(QIODevice::WriteOnly | QFile::Text)) {
            FileRead.write(UpdatedDocument.toJson());
            FileRead.close();
        }
        Message.setText("Your profile has been updated."); //Message that is displayed to the user after the operation is complete
        Message.exec();
    } else if (Operation == "Delete") { //if the operation is to delete the user profile, then the system will check if the user wants to
        QJsonObject::iterator ObjectIterator;
        for (ObjectIterator = RootObject.begin(); ObjectIterator != RootObject.end(); ObjectIterator++) { //iterate over the objects in the root object
            if (ObjectIterator.key() == LoggedInUser) { //removes the user object from the root object if the object keys (the usernames) match
                RootObject.remove(LoggedInUser);
            }
        }
        QJsonDocument UpdatedDocument = QJsonDocument(RootObject);
        if (FileRead.open(QIODevice::WriteOnly | QFile::Text)) { //opens the file and writes the updated document back to the file
            FileRead.write(UpdatedDocument.toJson());
            FileRead.close();
        }
        Message.setText("Your profile has been deleted.\nThe application will now close.");
        Message.exec();
        QApplication::quit();
    }
}
