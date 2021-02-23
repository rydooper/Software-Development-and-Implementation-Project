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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ContactsWindow
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *ContactsTitle;
    QTextBrowser *ContactsDisplay;
    QScrollBar *ContactsScrollBar;
    QPushButton *ContactsBackButton;
    QPushButton *SendGMssgButton;

    void setupUi(QWidget *ContactsWindow)
    {
        if (ContactsWindow->objectName().isEmpty())
            ContactsWindow->setObjectName(QString::fromUtf8("ContactsWindow"));
        ContactsWindow->resize(500, 400);
        stackedWidget = new QStackedWidget(ContactsWindow);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 500, 400));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        ContactsTitle = new QLabel(page);
        ContactsTitle->setObjectName(QString::fromUtf8("ContactsTitle"));
        ContactsTitle->setGeometry(QRect(200, 30, 81, 20));
        ContactsTitle->setAlignment(Qt::AlignCenter);
        ContactsDisplay = new QTextBrowser(page);
        ContactsDisplay->setObjectName(QString::fromUtf8("ContactsDisplay"));
        ContactsDisplay->setGeometry(QRect(20, 60, 441, 271));
        ContactsScrollBar = new QScrollBar(page);
        ContactsScrollBar->setObjectName(QString::fromUtf8("ContactsScrollBar"));
        ContactsScrollBar->setGeometry(QRect(460, 60, 16, 271));
        ContactsScrollBar->setOrientation(Qt::Vertical);
        ContactsBackButton = new QPushButton(page);
        ContactsBackButton->setObjectName(QString::fromUtf8("ContactsBackButton"));
        ContactsBackButton->setGeometry(QRect(20, 350, 89, 25));
        SendGMssgButton = new QPushButton(page);
        SendGMssgButton->setObjectName(QString::fromUtf8("SendGMssgButton"));
        SendGMssgButton->setGeometry(QRect(318, 350, 161, 25));
        stackedWidget->addWidget(page);

        retranslateUi(ContactsWindow);

        QMetaObject::connectSlotsByName(ContactsWindow);
    } // setupUi

    void retranslateUi(QWidget *ContactsWindow)
    {
        ContactsWindow->setWindowTitle(QApplication::translate("ContactsWindow", "Form", nullptr));
        ContactsTitle->setText(QApplication::translate("ContactsWindow", "Contacts", nullptr));
        ContactsBackButton->setText(QApplication::translate("ContactsWindow", "Back", nullptr));
        SendGMssgButton->setText(QApplication::translate("ContactsWindow", "Send Group Message", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ContactsWindow: public Ui_ContactsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTACTSWINDOW_H
