/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLineEdit *UsernameInputBox;
    QLineEdit *PasswordInputBox;
    QPushButton *ClearButton;
    QPushButton *RegisterButton;
    QPushButton *ExitButton;
    QPushButton *LoginButton;
    QLabel *UsernameLabel;
    QLabel *PasswordLabel;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName(QString::fromUtf8("LoginWindow"));
        LoginWindow->resize(500, 400);
        LoginWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 215, 207);"));
        centralwidget = new QWidget(LoginWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, -20, 500, 400));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setStyleSheet(QString::fromUtf8("background-color: rgba(211, 215, 207,0);"));
        UsernameInputBox = new QLineEdit(page);
        UsernameInputBox->setObjectName(QString::fromUtf8("UsernameInputBox"));
        UsernameInputBox->setGeometry(QRect(190, 110, 211, 25));
        UsernameInputBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        PasswordInputBox = new QLineEdit(page);
        PasswordInputBox->setObjectName(QString::fromUtf8("PasswordInputBox"));
        PasswordInputBox->setGeometry(QRect(190, 150, 211, 25));
        PasswordInputBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        ClearButton = new QPushButton(page);
        ClearButton->setObjectName(QString::fromUtf8("ClearButton"));
        ClearButton->setGeometry(QRect(120, 220, 89, 25));
        ClearButton->setStyleSheet(QString::fromUtf8(""));
        RegisterButton = new QPushButton(page);
        RegisterButton->setObjectName(QString::fromUtf8("RegisterButton"));
        RegisterButton->setGeometry(QRect(290, 220, 89, 25));
        ExitButton = new QPushButton(page);
        ExitButton->setObjectName(QString::fromUtf8("ExitButton"));
        ExitButton->setGeometry(QRect(120, 270, 89, 25));
        LoginButton = new QPushButton(page);
        LoginButton->setObjectName(QString::fromUtf8("LoginButton"));
        LoginButton->setGeometry(QRect(290, 270, 89, 25));
        UsernameLabel = new QLabel(page);
        UsernameLabel->setObjectName(QString::fromUtf8("UsernameLabel"));
        UsernameLabel->setGeometry(QRect(90, 110, 71, 17));
        PasswordLabel = new QLabel(page);
        PasswordLabel->setObjectName(QString::fromUtf8("PasswordLabel"));
        PasswordLabel->setGeometry(QRect(90, 150, 67, 17));
        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(210, 60, 67, 17));
        label->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(page);
        LoginWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LoginWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 500, 22));
        LoginWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(LoginWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        LoginWindow->setStatusBar(statusbar);

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWindow)
    {
        LoginWindow->setWindowTitle(QApplication::translate("LoginWindow", "LoginWindow", nullptr));
        ClearButton->setText(QApplication::translate("LoginWindow", "Clear", nullptr));
        RegisterButton->setText(QApplication::translate("LoginWindow", "Register", nullptr));
        ExitButton->setText(QApplication::translate("LoginWindow", "Exit", nullptr));
        LoginButton->setText(QApplication::translate("LoginWindow", "Login", nullptr));
        UsernameLabel->setText(QApplication::translate("LoginWindow", "Username:", nullptr));
        PasswordLabel->setText(QApplication::translate("LoginWindow", "Password:", nullptr));
        label->setText(QApplication::translate("LoginWindow", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
