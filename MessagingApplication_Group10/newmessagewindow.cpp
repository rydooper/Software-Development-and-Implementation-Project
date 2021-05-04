#include "newmessagewindow.h"
#include "ui_newmessagewindow.h"
#include "loginwindow.h"
#include <QtMqtt/QMqttClient>
#include <QtCore/QDateTime>
#include <QMessageBox>
#include <iostream>
#include <QFile>
#include <QJsonObject>
#include <QJsonDocument>
#include <string>
#include <QStringRef>
using namespace std;

NewMessageWindow::NewMessageWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NewMessageWindow)
{

    ui->setupUi(this);
    Client = new QMqttClient(this); //Lines 21-171 have been adapted from the Qt_Client repository on GitHub on the soft20091 organisation (https://olympuss.ntu.ac.uk/soft20091/Qt_client)
    Client->setHostname("127.0.0.1"); //Host name textbox needed
    Client->setPort(1883); //Port textbox needed
    Client->connectToHost(); //connect to the host (127.0.0.1)

    connect(Client, &QMqttClient::stateChanged, this, &NewMessageWindow::ConnectionState); //updates the log state inside the chat box
    connect(Client, &QMqttClient::messageReceived, this, [this](const QByteArray &message, const QMqttTopicName &topic) { //the content that will be displayed in the chat box
            const QString content = QDateTime::currentDateTime().toString()
                        + QLatin1String(" Received Topic: ")
                        + topic.name()
                        + QLatin1String(" Message: ")
                        + message
                        + QLatin1Char('\n');
            ui->NWChatBox->insertPlainText(content); //add data to chat box
            QString ChatData = ui->NWChatBox->toPlainText();
            QStringList SplitData = ChatData.split(" ");
            std::string LastMessage = SplitData[SplitData.length()-1].toStdString();
            if (LastMessage.substr(0,8) == "https://") { //check if the first 8 characters in the URl is "https://" (identifying that the message is a URl), notifying the user that they can click on the label
                QMessageBox Message;
                Message.setText("File Share received.\nClick on the new hyperlinked text above to access the link.");
                Message.exec();
            }
        });
    ConnectionState(); //updates the current state of the connection inside the chat box
}

void NewMessageWindow::updateFile(QString message, QString topic) { //updates the JSON file with the sent message data
    QString path = qApp->applicationDirPath() + "/Text Files/MessageData.json";
    QFile FileWrite(path);
    QByteArray JSONData;
    bool UserExistsInHistory = false;
    if (FileWrite.open(QIODevice::ReadOnly | QFile::Text)) { //open the file and read all the data into a variable
        JSONData = FileWrite.readAll();
        FileWrite.close();
    }
    QJsonDocument Data = QJsonDocument::fromJson(JSONData);
    QJsonObject RootObject = Data.object();
    QJsonValue ChatValue = RootObject.value(topic);
    QJsonObject ChatObject = ChatValue.toObject();
    QJsonObject newChatObject = ChatValue.toObject(); //creates a new object for the updated data
    QString UpdatedMessages, UpdatedUsers;
    QString FileMessage = QDateTime::currentDateTime().toString() + ": " + message; //creates the message to be written to the file, which is the datetime and the message parameter
    if (!ChatObject.isEmpty()) { //if the object exists, remove it from the root object
        RootObject.remove(topic);
    }
    QStringList Messages = ChatObject["messages"].toString().split(","); //split the messages by the ',' delimiter
    Messages << FileMessage; //append the message to the message history
    UpdatedMessages = Messages.join(",");
    newChatObject["messages"] = UpdatedMessages;
    QStringList Users = ChatObject["users"].toString().split(",");
    for (int UserElement = 0; UserElement != Users.length(); UserElement++) { //iterates through all the users in the JSON object
        if (LoggedInUser == Users[UserElement]) { //if the logged-in user has already sent a message on the topic and has been saved in the file
            UserExistsInHistory = true;
        }
    }
    if (UserExistsInHistory == false) { //if the user has not sent a message before on this topic, append the username on the Users list before joining the list back into a string
        Users << LoggedInUser;
        UpdatedUsers = Users.join(",");
    } else { //otherwise, write the old username data from the old object to the updated object
        UpdatedUsers = ChatObject["users"].toString();
    }
    newChatObject["users"] = UpdatedUsers;
    RootObject[topic] = newChatObject; //add the updated object to the root object under the topic parameter
    QJsonDocument UpdatedDocument = QJsonDocument(RootObject);
    if (FileWrite.open(QIODevice::WriteOnly | QIODevice::Text)) { //opens the file and writes the updated document to the file
        FileWrite.write(UpdatedDocument.toJson());
        FileWrite.close();
    }
}

NewMessageWindow::~NewMessageWindow()
{
    delete ui;
}

void NewMessageWindow::on_NWBackButton_clicked() //displays the previous form when the Back button is clicked
{
    emit backClicked();
}

void NewMessageWindow::ConnectionState() { //updates the current state of the connection inside the chat box
    const QString content = QDateTime::currentDateTime().toString()
                    + QLatin1String(": State Change ")
                    + QString::number(Client->state())
                    + QLatin1Char('\n');
    ui->NWChatBox->insertPlainText(content); //inserts the log state content into the chat box
}

void NewMessageWindow::on_NWClearButton_clicked() //clears the input boxes and sets the port number spin box back to 0
{
    ui->NWInputBox->setText("");
    ui->NWTopic->setText("");
    ui->NWFileLinkInput->setText("");
}

void NewMessageWindow::on_NWSendButton_clicked() //tries to send the data, outputting to the user a message if the system cannot send the message, if an error arises, then it is handled by being output to the user
{
    try {
        if (Client->publish(ui->NWTopic->text(), ui->NWInputBox->text().toUtf8()) == -1) {
            QMessageBox Error;
            Error.setText("Could not send message");
            Error.exec();
        } else {
            updateFile(ui->NWInputBox->text(), ui->NWTopic->text());
        }
    } catch (std::string e) {
        std::cout << "Error " << e << "\n";
    }
}

void NewMessageWindow::on_NWSubscribeButton_clicked() //subscribes to the broker with the set topic, if this cannot happen, then the system will output a message to the user
{
    auto subscription = Client->subscribe(ui->NWTopic->text());
    if (!subscription) {
        QMessageBox Box;
        Box.setText("Could not subscribe. Investigate to see if there is a valid connection.");
        Box.exec();
        return;
    }
}

void NewMessageWindow::on_NWSendURL_clicked() //sends the URL to the connected users and updates the URL label
{
    Client->publish(ui->NWTopic->text(), ui->NWFileLinkInput->text().toUtf8()); //publish the link to the topic
    connect(Client, &QMqttClient::messageReceived, this, [this](const QByteArray &message, const QMqttTopicName &topic) { //the content that will be displayed in the chat box
            const QString content = QDateTime::currentDateTime().toString()
                    + QLatin1String(" Received Topic: ")
                    + topic.name()
                    + QLatin1String(" URL Link: ")
                    + ui->NWFileLinkInput->text() + message
                    + QLatin1Char('\n');

    ui->NWURLLabel->setText("<a href="+ content +">Click URL</a>"); //change the text of the label and set the URL link of the label -> method of setting hyperlinks was adapted from Stack Overflow (https://stackoverflow.com/questions/8427446/making-qlabel-behave-like-a-hyperlink/8427958)
    ui->NWURLLabel->setTextFormat(Qt::RichText);
    ui->NWURLLabel->setTextInteractionFlags(Qt::TextBrowserInteraction);
    ui->NWURLLabel->setOpenExternalLinks(true);

    });
    updateFile(ui->NWFileLinkInput->text(), ui->NWTopic->text());
}

void NewMessageWindow::on_NWDisconnect_clicked() //disconnects the client from the host
{
    Client->disconnectFromHost();
}

void NewMessageWindow::on_NWEmoji_clicked() //sends the emoji message to the connected users and inserts the emoji in the textbox -> the character set of the emoji is "UTF-8 Bytes"
{
    //the chosen emoji to be sent when the button is clicked is the "grinning face with smiling eyes" emoji using the UTF-8 Bytes character set, which was found in the Emoji Unicode Tables on apps.timwhitlock.info (https://apps.timwhitlock.info/emoji/tables/unicode)
    Client->publish(ui->NWTopic->text(), ui->NWFileLinkInput->text().toUtf8()); //publish the link to the topic
    connect(Client, &QMqttClient::messageReceived, this, [this](const QByteArray &message, const QMqttTopicName &topic) { //the emoji data that will be displayed in the chat box
        const QString Emoji = QDateTime::currentDateTime().toString()
                + QLatin1String(" Received Topic: ")
                + topic.name()
                + "\xF0\x9F\x98\x81" //unicode for the emoji -> method to use an emoji code was adapted from qt Forum (https://forum.qt.io/topic/89997/using-colour-emojis-as-a-substitution-font-in-windows/4) and the code for the emoji was found in the Emoji Unicode Tables on apps.timwhitlock.info (https://apps.timwhitlock.info/emoji/tables/unicode)
                + message;
    ui->NWChatBox->insertPlainText(Emoji);
    });
    updateFile("\xF0\x9F\x98\x81", ui->NWTopic->text()); //updates the JSON file with the emoji
}
