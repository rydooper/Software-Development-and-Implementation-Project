/********************************************************************************
** Form generated from reading UI file 'menuwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUWINDOW_H
#define UI_MENUWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MenuWindow
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *NewMessageButton;
    QPushButton *GroupChatButton;
    QPushButton *ViewProfileButton;
    QPushButton *ContactsButton;
    QPushButton *LogoutButton;
    QLabel *MenuTitle;

    void setupUi(QWidget *MenuWindow)
    {
        if (MenuWindow->objectName().isEmpty())
            MenuWindow->setObjectName(QString::fromUtf8("MenuWindow"));
        MenuWindow->resize(500, 400);
        MenuWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 215, 207);"));
        stackedWidget = new QStackedWidget(MenuWindow);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(30, 20, 460, 341));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        NewMessageButton = new QPushButton(page);
        NewMessageButton->setObjectName(QString::fromUtf8("NewMessageButton"));
        NewMessageButton->setGeometry(QRect(80, 70, 120, 30));
        GroupChatButton = new QPushButton(page);
        GroupChatButton->setObjectName(QString::fromUtf8("GroupChatButton"));
        GroupChatButton->setGeometry(QRect(240, 70, 120, 30));
        ViewProfileButton = new QPushButton(page);
        ViewProfileButton->setObjectName(QString::fromUtf8("ViewProfileButton"));
        ViewProfileButton->setGeometry(QRect(80, 120, 120, 30));
        ContactsButton = new QPushButton(page);
        ContactsButton->setObjectName(QString::fromUtf8("ContactsButton"));
        ContactsButton->setGeometry(QRect(240, 120, 120, 30));
        LogoutButton = new QPushButton(page);
        LogoutButton->setObjectName(QString::fromUtf8("LogoutButton"));
        LogoutButton->setGeometry(QRect(30, 250, 120, 30));
        MenuTitle = new QLabel(page);
        MenuTitle->setObjectName(QString::fromUtf8("MenuTitle"));
        MenuTitle->setGeometry(QRect(156, 30, 121, 20));
        MenuTitle->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(page);

        retranslateUi(MenuWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MenuWindow);
    } // setupUi

    void retranslateUi(QWidget *MenuWindow)
    {
        MenuWindow->setWindowTitle(QApplication::translate("MenuWindow", "Form", nullptr));
        NewMessageButton->setText(QApplication::translate("MenuWindow", "New Message", nullptr));
        GroupChatButton->setText(QApplication::translate("MenuWindow", "Group Chats", nullptr));
        ViewProfileButton->setText(QApplication::translate("MenuWindow", "View Profile", nullptr));
        ContactsButton->setText(QApplication::translate("MenuWindow", "Contacts", nullptr));
        LogoutButton->setText(QApplication::translate("MenuWindow", "Logout", nullptr));
        MenuTitle->setText(QApplication::translate("MenuWindow", "Messaging Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MenuWindow: public Ui_MenuWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUWINDOW_H
