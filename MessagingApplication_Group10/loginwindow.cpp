#include "loginwindow.h"
QString LoggedInUser; //stores the logged-in user's username for use throughout the application
#include "ui_loginwindow.h"
#include "messagingapplication_tests.h"
#include "menuwindow.h"
#include <iostream>
#include <QFile>
#include <QMessageBox>
#include <QTimer>
#include <QFileDialog>
#include <QDateTime>
#include <QJsonObject>
#include <QJsonValue>
#include <QJsonDocument>

using namespace std;
void LoginWindow::TimeoutOfSession() //displays a message informing the user that they will be logged out of the system
{
    QMessageBox Message;
    Message.setText("You will now be automatically logged out of the system");
    Message.exec();
    ui->stackedWidget->setCurrentIndex(0); //Displays the Login form when navigating back to the Login form
}

LoginWindow::LoginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this); //Lines 25-26, 30-31, 80, 107 and 112 were adapted from a YouTube video by CrossControl (https://www.youtube.com/watch?v=27PvtxWlV-o&t=1380s) from 23 minutes onwards, this approach has been applied throughout the program in other forms
    ui->stackedWidget->insertWidget(1,&_RegForm);
    ui->stackedWidget->insertWidget(2,&_MenuForm);
    QString path = qApp->applicationDirPath() + "/UserLoginData.txt";
    ui->PasswordInputBox->setEchoMode(QLineEdit::Password); //hides the password while the user is typing it in

    connect(&_MenuForm, SIGNAL(LogoutClicked()),this, SLOT(moveBackLogin())); //Lines 17-18 assign the signals and slots involved with navigating back to the Login form
    connect(&_RegForm, SIGNAL(BackClicked()),this, SLOT(moveBackLogin()));

}

LoginWindow::~LoginWindow()
{
    delete ui;
}
struct Login {

};

void LoginWindow::updateTextFile(QString Username, QString Password, QString Forename, QString Surname, QString Email) {
    QFile file(qApp->applicationDirPath() + "/Text Files/UserLogin.json"); //stores the file path of the JSON file (which is in the build folder)
    QByteArray JSONData;
    QMessageBox Message;
    //the method of updating a JSON file is used throughout the system and was adapted from Stack Overflow (https://stackoverflow.com/questions/63245640/how-to-remove-json-object-key-and-valyue-in-qt-c) as well as the QT Creator JSON documentation (https://doc.qt.io/qt-5/json.html)
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) { //opens the file and reads all of the data into a variable
        JSONData = file.readAll();
        file.close();
    }
    QJsonDocument Data = QJsonDocument::fromJson(JSONData);
    QJsonObject RootObject = Data.object(); //accesses the root object of the file
    QJsonValue UserValue = RootObject.value(Username); //accesses the user's object in the file
    QJsonObject UserObject = UserValue.toObject();

    RootObject.remove(UserValue.toString()); //Method of removing the user object and rewriting it to the document was adapted from Stack Overflow (https://stackoverflow.com/questions/63245640/how-to-remove-json-object-key-and-valyue-in-qt-c)
    QJsonObject userObject = UserValue.toObject(); //creates a new object
    userObject["email"] = Email; //Lines 66-72 assign key:value pairs inside the object
    userObject["password"] = Password;
    userObject["forename"] = Forename;
    userObject["surname"] = Surname;
    userObject["loggedIn"] = "1";
    userObject["lastLogin"] = QDateTime::currentDateTime().toString();
    userObject["profilePicture"] = userObject["profilePicture"];
    RootObject[Username] = userObject; //stores the updated object inside the root object
    QJsonDocument UpdatedData = QJsonDocument(RootObject); //creates a new document, containing the updated user object
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) { //opens the file to write the updated document to it
        file.write(UpdatedData.toJson());
        file.close();
    }
}

void LoginWindow::on_LoginButton_clicked() //performs checks on the entered data and checks whether they meet the saved data
{
    QFile file(qApp->applicationDirPath() + "/Text Files/UserLogin.json");
    QByteArray JSONData;
    QMessageBox Message;
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        JSONData = file.readAll();
        file.close();
    }
    QJsonDocument Data = QJsonDocument::fromJson(JSONData);
    QJsonObject RootObject = Data.object();
    QJsonValue UserValue = RootObject.value(ui->UsernameInputBox->text());
    QJsonObject UserObject = UserValue.toObject();
    if (UserObject.isEmpty()) { //if the object is empty, this means that no objects exist in the file with the entered username as the object key
        Message.setText("User details do not exist in the system");
        Message.exec();
    } else { //if the object is not empty, then the user object does exist
        QString Password = UserObject["password"].toString();
        QByteArray passwordFromHex = QByteArray::fromHex(Password.toUtf8()); //converts the password in the user object (which is in hexidecimal) to the readable word -> the method to convert hex to a QString was adapted from the Qt Forum (https://forum.qt.io/topic/100505/conversion-of-hex-data-in-unsigned-char-array-to-qstring/3)
        QString DecryptedPassword(passwordFromHex);
        QString EnteredPassword = ui->PasswordInputBox->text();
        QString EnteredUsername = ui->UsernameInputBox->text();
        if (DecryptedPassword == EnteredPassword) { //compares the passwords and checks if they match, if so, then the user will be logged in
            LoggedInUser = EnteredUsername;
            QMessageBox WelcomeMessage; //Lines 51-53 were adapted from the Qt Creator documentation (https://doc.qt.io/qt-5/qmessagebox.html)
            updateTextFile(EnteredUsername, Password, UserObject["forename"].toString(), UserObject["surname"].toString(), UserObject["email"].toString());
            WelcomeMessage.setText("Login Successful!\nWelcome " + EnteredUsername);
            WelcomeMessage.exec();
            WelcomeMessage.setText("You will be automatically logged out of this system after 10 minutes");
            WelcomeMessage.exec();
            QTimer::singleShot(600000, this, SLOT(TimeoutOfSession())); //Runs the TimeoutOfSession function after 600000ms (10 minutes)-> Adapted from QTimer Class documentation (https://doc.qt.io/qt-5/qtimer.html#singleShot)
            ui->stackedWidget->setCurrentIndex(2); //Displays the Home Page form
        } else {
            Message.setText("Password does not match registered data.\nPlease try again.");
            Message.exec();
        }
    }
}

void LoginWindow::on_RegisterButton_clicked() //Displays the Register form
{
    ui->stackedWidget->setCurrentIndex(1);
}

void LoginWindow::moveBackLogin() //Displays the Login form when navigating back to the Login form
{
    ui->stackedWidget->setCurrentIndex(0);
}


void LoginWindow::on_ExitButton_clicked() //Closes the application
{
    this->close();
}

void LoginWindow::on_ClearButton_clicked() //Clears the contents of the textboxes
{
    ui->UsernameInputBox->setText("");
    ui->PasswordInputBox->setText("");
}
