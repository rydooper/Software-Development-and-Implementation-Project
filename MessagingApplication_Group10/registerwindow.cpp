#include "registerwindow.h"
#include "ui_registerwindow.h"
#include <QFile>
#include <QTextStream>
#include <QtCore/QDateTime>
#include <QMessageBox>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <fstream>

RegisterWindow::RegisterWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RegisterWindow)
{
    ui->setupUi(this);
}

RegisterWindow::~RegisterWindow()
{
    delete ui;
}

void RegisterWindow::on_RegisterBackButton_clicked()
{
    emit BackClicked();
}

void RegisterWindow::on_RegisterButton_clicked() //checks if the username entered into this form already exists, registering the user account if it does not already exist
{
    QString Password, ReEnterPassword;

    Password = ui->RegisterPassword->text();
    ReEnterPassword = ui->ReEnterPassword->text();
    if (Password == ReEnterPassword) { //checks if the passwords entered into this form match
        QString Forename, Surname, Email, Username, CurrentLogin;
        QByteArray EncryptedPassword = Password.toUtf8().toHex(); //converts the password to hex in order to encrypt it -> method to convert QString to QByteArray was found on the Qt forum (https://forum.qt.io/topic/83805/how-to-transfer-qstring-to-qbytearray/4)

        Forename = ui->RegisterForename->text();
        Surname = ui->RegisterSurname->text();
        Email = ui->RegisterEmail->text();
        Username = ui->RegisterUsername->text();
        CurrentLogin = "0";

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
        QJsonObject newUserObject = UserValue.toObject();
        newUserObject["email"] = Email;
        newUserObject["password"] = QString(EncryptedPassword);
        newUserObject["forename"] = Forename;
        newUserObject["surname"] = Surname;
        newUserObject["loggedIn"] = CurrentLogin;
        newUserObject["profilePicture"] = "redSquare.png";
        RootObject[Username] = newUserObject;
        QJsonDocument UpdatedDocument = QJsonDocument(RootObject);
        if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
            file.write(UpdatedDocument.toJson());
            file.close();
            QMessageBox SuccessMessage;
            SuccessMessage.setText("Registration successful!\nWelcome " + Username); //the success of the registration is displayed to the user
            SuccessMessage.exec();
            emit BackClicked();
        }

        /*QString path = qApp->applicationDirPath() + "/UserLoginData.txt";
        QFile UserFile(path);
        if (UserFile.open(QIODevice::ReadOnly | QIODevice::Append | QFile::Text)) { //opens the user login file to check if the username already exists
            bool UsernameExists = false;
            QTextStream stream(&UserFile);
            while (!UserFile.atEnd()) {
                //read in data
                QString Line = stream.readLine();
                QStringList Data = Line.split(","); //splits the read data by the ',' delimiter
                QString FileUsername = Data.at(0);
                if (Username == FileUsername) {
                    UsernameExists = true;
                    QMessageBox Message;
                    Message.setText("Username already exists");
                    Message.exec();
                }
            }
            if (UsernameExists == false) { //if the username does not already exist, then the data will be added to the text file
                stream << Username << "," << EncryptedPassword << "," << Forename << "," << Surname << "," << Email << "," << QDateTime::currentDateTime().toString() << "," << CurrentLogin << "\n";
            }
        }
        QMessageBox SuccessMessage;
        SuccessMessage.setText("Registration successful!\nWelcome " + Username); //the success of the registration is displayed to the user
        SuccessMessage.exec();
        emit BackClicked();*/
    } else { //if the passwords entered do not match, then the following message is displayed to the user
        QMessageBox ErrorMessage;
        ErrorMessage.setText("Please ensure that both passwords match");
        ErrorMessage.exec();
    }
}
