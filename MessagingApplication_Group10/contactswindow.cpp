#include "contactswindow.h" //Lines 1-6 includes all the files and libraries needed for the page
#include "ui_contactswindow.h"
#include "groupchatwindow.h"
#include <QFile>
#include <QJsonObject>
#include <QJsonDocument>

ContactsWindow::ContactsWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ContactsWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->insertWidget(1, &_GCForm);
    connect(&_GCForm, SIGNAL(sendGCClicked()), this, SLOT(openGroupMessageForm())); //when the button is clicked, the function to display the group chat widget is called
    connect(&_GCForm, SIGNAL(backClicked()), this, SLOT(backToContacts()));
    QFile file(qApp->applicationDirPath() + "/Text Files/UserLogin.json"); //stores the file path to the JSON file (which directs to the build folder) -> method of finding the file path was adapted from the Qt Forum (https://forum.qt.io/topic/74806/open-file-path/3)
    QByteArray JSONData;
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) { //open the file and read all the data into a byte array -> method to utilise QFile was adapted from Qt Creator documentation (https://doc.qt.io/qt-5/qfile.html)
        JSONData = file.readAll();
        file.close();
    }
    QJsonDocument Data = QJsonDocument::fromJson(JSONData);
    QJsonObject RootObject = Data.object(); //access the root object of the file (which all the user objects are inside)
    QJsonObject::iterator ObjectIterator; //object variable for iterating through all the objects inside the root object -> method to iterate through the objects was adapted from the qt Creator documentation (https://doc.qt.io/qt-5/qjsonobject-iterator.html), which was found in the qt Creator QJsonObject documentation (https://doc.qt.io/qt-5/qjsonobject.html)
    for (ObjectIterator = RootObject.begin(); ObjectIterator != RootObject.end(); ObjectIterator++) { //iterate through all objects to analyse if a user is online or offline
        QJsonValue UserValue = RootObject.value(ObjectIterator.key());
        QJsonObject UserObject = UserValue.toObject(); //store the object in a value variable and convert it back into an object
        if (UserObject["loggedIn"] == "0") { //if the user is not logged in, then the appropriate data will be inserted into the PlainTextBox
            ui->ContactDisplay->insertPlainText(ObjectIterator.key() + "- Offline - Last Online " + UserObject["lastLogin"].toString() + "\n\n"); //method to insert text into the PlainTextEdit was found on the Qt documentation (https://doc.qt.io/qt-5/qplaintextedit.html#insertPlainText)
        } else if (UserObject["loggedIn"] == "1") { //else if the user is currently logged in, then the appropriate data will be inserted into the PlainTextBox
            ui->ContactDisplay->insertPlainText(ObjectIterator.key() + "- Online\n\n");
        }
    }
}

ContactsWindow::~ContactsWindow()
{
    delete ui;
}

void ContactsWindow::on_ContactsBackButton_clicked() //emits the funciton call to open the previous form
{
    emit backClicked();
}

void ContactsWindow::on_SendGMssgButton_clicked() //emits the function call to open the Group Message form
{
    //open the group chat window
    emit openGroupMessageForm();
}

void ContactsWindow::openGroupMessageForm()
{
    ui->stackedWidget->setCurrentIndex(1); //opens the Group Message form
}

void ContactsWindow::backToContacts() {
    ui->stackedWidget->setCurrentIndex(0);
}
