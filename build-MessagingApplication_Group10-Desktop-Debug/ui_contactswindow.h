/********************************************************************************
** Form generated from reading UI file 'contactswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTACTSWINDOW_H
#define UI_CONTACTSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ContactsWindow
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *ContactsBackButton;
    QPushButton *SendGMssgButton;
    QLabel *ContactsTitle;
    QPlainTextEdit *ContactDisplay;

    void setupUi(QWidget *ContactsWindow)
    {
        if (ContactsWindow->objectName().isEmpty())
            ContactsWindow->setObjectName(QString::fromUtf8("ContactsWindow"));
        ContactsWindow->resize(500, 400);
        ContactsWindow->setStyleSheet(QString::fromUtf8("#ContactsWindow {background-color: qlineargradient(spread:pad, x1:0.512, y1:1, x2:0.503, y2:0.306727, stop:0.0696517 rgba(169, 169, 169, 255), stop:0.890547 rgba(255, 255, 255, 255));}\n"
"\n"
"#stackedWidget{ background-color: rgba(1,1,1,0);}"));
        stackedWidget = new QStackedWidget(ContactsWindow);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 500, 400));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setStyleSheet(QString::fromUtf8("#stackedWidget {background-color: rgba(1,1,1,0);}"));
        ContactsBackButton = new QPushButton(page);
        ContactsBackButton->setObjectName(QString::fromUtf8("ContactsBackButton"));
        ContactsBackButton->setGeometry(QRect(20, 350, 89, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("AnjaliOldLipi"));
        font.setBold(true);
        font.setWeight(75);
        ContactsBackButton->setFont(font);
        SendGMssgButton = new QPushButton(page);
        SendGMssgButton->setObjectName(QString::fromUtf8("SendGMssgButton"));
        SendGMssgButton->setGeometry(QRect(318, 350, 161, 31));
        SendGMssgButton->setFont(font);
        ContactsTitle = new QLabel(page);
        ContactsTitle->setObjectName(QString::fromUtf8("ContactsTitle"));
        ContactsTitle->setGeometry(QRect(170, 10, 141, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("AnjaliOldLipi"));
        font1.setItalic(false);
        ContactsTitle->setFont(font1);
        ContactsTitle->setStyleSheet(QString::fromUtf8("#label {font-size: 25px;}"));
        ContactsTitle->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        ContactDisplay = new QPlainTextEdit(page);
        ContactDisplay->setObjectName(QString::fromUtf8("ContactDisplay"));
        ContactDisplay->setGeometry(QRect(20, 50, 461, 281));
        stackedWidget->addWidget(page);

        retranslateUi(ContactsWindow);

        QMetaObject::connectSlotsByName(ContactsWindow);
    } // setupUi

    void retranslateUi(QWidget *ContactsWindow)
    {
        ContactsWindow->setWindowTitle(QApplication::translate("ContactsWindow", "Form", nullptr));
        ContactsBackButton->setText(QApplication::translate("ContactsWindow", "Back", nullptr));
        SendGMssgButton->setText(QApplication::translate("ContactsWindow", "Send Group Message", nullptr));
        ContactsTitle->setText(QApplication::translate("ContactsWindow", "Contacts", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ContactsWindow: public Ui_ContactsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTACTSWINDOW_H
