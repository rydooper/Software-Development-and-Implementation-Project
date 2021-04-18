/********************************************************************************
** Form generated from reading UI file 'newmessagewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWMESSAGEWINDOW_H
#define UI_NEWMESSAGEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewMessageWindow
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *NewMessageTitle;
    QLabel *NWTopicLabel;
    QLabel *NWLabel;
    QPushButton *NWBackButton;
    QPushButton *NWClearButton;
    QPushButton *NWSendButton;
    QLineEdit *NWTopic;
    QLineEdit *NWInputBox;
    QLabel *NWChatLabel;
    QPushButton *NWSubscribeButton;
    QPlainTextEdit *NWChatBox;
    QPushButton *NWSendURL;
    QLabel *NWURLLabel;
    QLabel *NWFileLabel;
    QLineEdit *NWFileLinkInput;
    QPushButton *NWDisconnect;
    QPushButton *NWEmoji;

    void setupUi(QWidget *NewMessageWindow)
    {
        if (NewMessageWindow->objectName().isEmpty())
            NewMessageWindow->setObjectName(QString::fromUtf8("NewMessageWindow"));
        NewMessageWindow->resize(500, 400);
        NewMessageWindow->setStyleSheet(QString::fromUtf8("\n"
"#NewMessageWindow{background-color: qlineargradient(spread:pad, x1:0.512, y1:1, x2:0.503, y2:0.306727, stop:0.0696517 rgba(169, 169, 169, 255), stop:0.890547 rgba(255, 255, 255, 255));}\n"
"#stackedWidget{ background-color: rgba(1,1,1,0);}"));
        stackedWidget = new QStackedWidget(NewMessageWindow);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 500, 400));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        NewMessageTitle = new QLabel(page);
        NewMessageTitle->setObjectName(QString::fromUtf8("NewMessageTitle"));
        NewMessageTitle->setGeometry(QRect(130, 20, 231, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("AnjaliOldLipi"));
        font.setPointSize(25);
        NewMessageTitle->setFont(font);
        NewMessageTitle->setAlignment(Qt::AlignCenter);
        NWTopicLabel = new QLabel(page);
        NWTopicLabel->setObjectName(QString::fromUtf8("NWTopicLabel"));
        NWTopicLabel->setGeometry(QRect(40, 70, 67, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("AnjaliOldLipi"));
        font1.setBold(false);
        font1.setWeight(50);
        NWTopicLabel->setFont(font1);
        NWLabel = new QLabel(page);
        NWLabel->setObjectName(QString::fromUtf8("NWLabel"));
        NWLabel->setGeometry(QRect(40, 110, 67, 31));
        NWLabel->setFont(font1);
        NWBackButton = new QPushButton(page);
        NWBackButton->setObjectName(QString::fromUtf8("NWBackButton"));
        NWBackButton->setGeometry(QRect(20, 354, 89, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("AnjaliOldLipi"));
        font2.setBold(true);
        font2.setWeight(75);
        NWBackButton->setFont(font2);
        NWClearButton = new QPushButton(page);
        NWClearButton->setObjectName(QString::fromUtf8("NWClearButton"));
        NWClearButton->setGeometry(QRect(240, 354, 89, 31));
        NWClearButton->setFont(font2);
        NWSendButton = new QPushButton(page);
        NWSendButton->setObjectName(QString::fromUtf8("NWSendButton"));
        NWSendButton->setGeometry(QRect(360, 354, 89, 31));
        QPalette palette;
        QBrush brush(QColor(138, 226, 52, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        NWSendButton->setPalette(palette);
        NWSendButton->setFont(font2);
        NWTopic = new QLineEdit(page);
        NWTopic->setObjectName(QString::fromUtf8("NWTopic"));
        NWTopic->setGeometry(QRect(130, 70, 321, 31));
        NWInputBox = new QLineEdit(page);
        NWInputBox->setObjectName(QString::fromUtf8("NWInputBox"));
        NWInputBox->setGeometry(QRect(130, 110, 321, 31));
        NWChatLabel = new QLabel(page);
        NWChatLabel->setObjectName(QString::fromUtf8("NWChatLabel"));
        NWChatLabel->setGeometry(QRect(40, 210, 67, 31));
        NWChatLabel->setFont(font1);
        NWSubscribeButton = new QPushButton(page);
        NWSubscribeButton->setObjectName(QString::fromUtf8("NWSubscribeButton"));
        NWSubscribeButton->setGeometry(QRect(130, 354, 89, 31));
        NWSubscribeButton->setFont(font2);
        NWChatBox = new QPlainTextEdit(page);
        NWChatBox->setObjectName(QString::fromUtf8("NWChatBox"));
        NWChatBox->setGeometry(QRect(130, 210, 321, 121));
        NWSendURL = new QPushButton(page);
        NWSendURL->setObjectName(QString::fromUtf8("NWSendURL"));
        NWSendURL->setGeometry(QRect(370, 150, 89, 25));
        NWURLLabel = new QLabel(page);
        NWURLLabel->setObjectName(QString::fromUtf8("NWURLLabel"));
        NWURLLabel->setGeometry(QRect(130, 177, 221, 20));
        NWFileLabel = new QLabel(page);
        NWFileLabel->setObjectName(QString::fromUtf8("NWFileLabel"));
        NWFileLabel->setGeometry(QRect(40, 150, 67, 17));
        NWFileLinkInput = new QLineEdit(page);
        NWFileLinkInput->setObjectName(QString::fromUtf8("NWFileLinkInput"));
        NWFileLinkInput->setGeometry(QRect(130, 150, 231, 25));
        NWDisconnect = new QPushButton(page);
        NWDisconnect->setObjectName(QString::fromUtf8("NWDisconnect"));
        NWDisconnect->setGeometry(QRect(20, 310, 89, 31));
        NWDisconnect->setFont(font2);
        NWEmoji = new QPushButton(page);
        NWEmoji->setObjectName(QString::fromUtf8("NWEmoji"));
        NWEmoji->setGeometry(QRect(20, 270, 89, 25));
        stackedWidget->addWidget(page);

        retranslateUi(NewMessageWindow);

        QMetaObject::connectSlotsByName(NewMessageWindow);
    } // setupUi

    void retranslateUi(QWidget *NewMessageWindow)
    {
        NewMessageWindow->setWindowTitle(QApplication::translate("NewMessageWindow", "Form", nullptr));
        NewMessageTitle->setText(QApplication::translate("NewMessageWindow", "New Message", nullptr));
        NWTopicLabel->setText(QApplication::translate("NewMessageWindow", "Topic:", nullptr));
        NWLabel->setText(QApplication::translate("NewMessageWindow", "Message:", nullptr));
        NWBackButton->setText(QApplication::translate("NewMessageWindow", "Back", nullptr));
        NWClearButton->setText(QApplication::translate("NewMessageWindow", "Clear", nullptr));
        NWSendButton->setText(QApplication::translate("NewMessageWindow", "Send", nullptr));
        NWChatLabel->setText(QApplication::translate("NewMessageWindow", "Chat:", nullptr));
        NWSubscribeButton->setText(QApplication::translate("NewMessageWindow", "Subscribe", nullptr));
        NWSendURL->setText(QApplication::translate("NewMessageWindow", "Send Link", nullptr));
        NWURLLabel->setText(QApplication::translate("NewMessageWindow", "URL will appear here when sent", nullptr));
        NWFileLabel->setText(QApplication::translate("NewMessageWindow", "File Link:", nullptr));
        NWDisconnect->setText(QApplication::translate("NewMessageWindow", "Disconnect", nullptr));
        NWEmoji->setText(QApplication::translate("NewMessageWindow", "Send Emoji", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewMessageWindow: public Ui_NewMessageWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWMESSAGEWINDOW_H
