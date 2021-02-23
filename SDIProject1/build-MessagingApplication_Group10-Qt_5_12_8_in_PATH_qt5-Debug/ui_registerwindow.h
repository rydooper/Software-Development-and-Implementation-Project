/********************************************************************************
** Form generated from reading UI file 'registerwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERWINDOW_H
#define UI_REGISTERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterWindow
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *RegisterTitle;
    QLabel *ForenameRegisterLabel;
    QLabel *SurnameRegisterLabe;
    QLabel *PasswordRegisterLabel;
    QLabel *PasswordRegisterLabel_2;
    QLabel *UsernameRegisterLabel;
    QLabel *EmailRegisterLabel;
    QLineEdit *ReEnterPassword;
    QLineEdit *RegisterPassword;
    QLineEdit *RegisterUsername;
    QLineEdit *RegisterEmail;
    QLineEdit *RegisterSurname;
    QLineEdit *RegisterForename;
    QPushButton *RegisterButton;
    QPushButton *RegisterBackButton;

    void setupUi(QWidget *RegisterWindow)
    {
        if (RegisterWindow->objectName().isEmpty())
            RegisterWindow->setObjectName(QString::fromUtf8("RegisterWindow"));
        RegisterWindow->resize(500, 400);
        RegisterWindow->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(211, 215, 207);"));
        stackedWidget = new QStackedWidget(RegisterWindow);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 10, 481, 371));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        RegisterTitle = new QLabel(page);
        RegisterTitle->setObjectName(QString::fromUtf8("RegisterTitle"));
        RegisterTitle->setGeometry(QRect(200, 30, 67, 17));
        ForenameRegisterLabel = new QLabel(page);
        ForenameRegisterLabel->setObjectName(QString::fromUtf8("ForenameRegisterLabel"));
        ForenameRegisterLabel->setEnabled(true);
        ForenameRegisterLabel->setGeometry(QRect(50, 80, 81, 17));
        SurnameRegisterLabe = new QLabel(page);
        SurnameRegisterLabe->setObjectName(QString::fromUtf8("SurnameRegisterLabe"));
        SurnameRegisterLabe->setEnabled(true);
        SurnameRegisterLabe->setGeometry(QRect(50, 120, 67, 17));
        PasswordRegisterLabel = new QLabel(page);
        PasswordRegisterLabel->setObjectName(QString::fromUtf8("PasswordRegisterLabel"));
        PasswordRegisterLabel->setEnabled(true);
        PasswordRegisterLabel->setGeometry(QRect(50, 255, 67, 17));
        PasswordRegisterLabel_2 = new QLabel(page);
        PasswordRegisterLabel_2->setObjectName(QString::fromUtf8("PasswordRegisterLabel_2"));
        PasswordRegisterLabel_2->setEnabled(true);
        PasswordRegisterLabel_2->setGeometry(QRect(50, 300, 131, 17));
        UsernameRegisterLabel = new QLabel(page);
        UsernameRegisterLabel->setObjectName(QString::fromUtf8("UsernameRegisterLabel"));
        UsernameRegisterLabel->setEnabled(true);
        UsernameRegisterLabel->setGeometry(QRect(50, 210, 81, 17));
        EmailRegisterLabel = new QLabel(page);
        EmailRegisterLabel->setObjectName(QString::fromUtf8("EmailRegisterLabel"));
        EmailRegisterLabel->setEnabled(true);
        EmailRegisterLabel->setGeometry(QRect(50, 160, 67, 17));
        ReEnterPassword = new QLineEdit(page);
        ReEnterPassword->setObjectName(QString::fromUtf8("ReEnterPassword"));
        ReEnterPassword->setGeometry(QRect(200, 290, 221, 25));
        ReEnterPassword->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        RegisterPassword = new QLineEdit(page);
        RegisterPassword->setObjectName(QString::fromUtf8("RegisterPassword"));
        RegisterPassword->setGeometry(QRect(200, 250, 221, 25));
        RegisterPassword->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        RegisterUsername = new QLineEdit(page);
        RegisterUsername->setObjectName(QString::fromUtf8("RegisterUsername"));
        RegisterUsername->setGeometry(QRect(200, 210, 221, 25));
        RegisterUsername->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        RegisterEmail = new QLineEdit(page);
        RegisterEmail->setObjectName(QString::fromUtf8("RegisterEmail"));
        RegisterEmail->setGeometry(QRect(200, 160, 221, 25));
        RegisterEmail->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        RegisterSurname = new QLineEdit(page);
        RegisterSurname->setObjectName(QString::fromUtf8("RegisterSurname"));
        RegisterSurname->setGeometry(QRect(200, 120, 221, 25));
        RegisterSurname->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        RegisterForename = new QLineEdit(page);
        RegisterForename->setObjectName(QString::fromUtf8("RegisterForename"));
        RegisterForename->setGeometry(QRect(200, 80, 221, 25));
        RegisterForename->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        RegisterButton = new QPushButton(page);
        RegisterButton->setObjectName(QString::fromUtf8("RegisterButton"));
        RegisterButton->setGeometry(QRect(260, 330, 89, 25));
        RegisterBackButton = new QPushButton(page);
        RegisterBackButton->setObjectName(QString::fromUtf8("RegisterBackButton"));
        RegisterBackButton->setGeometry(QRect(120, 330, 89, 25));
        stackedWidget->addWidget(page);

        retranslateUi(RegisterWindow);

        QMetaObject::connectSlotsByName(RegisterWindow);
    } // setupUi

    void retranslateUi(QWidget *RegisterWindow)
    {
        RegisterWindow->setWindowTitle(QApplication::translate("RegisterWindow", "Form", nullptr));
        RegisterTitle->setText(QApplication::translate("RegisterWindow", "Register", nullptr));
        ForenameRegisterLabel->setText(QApplication::translate("RegisterWindow", "Forename:", nullptr));
        SurnameRegisterLabe->setText(QApplication::translate("RegisterWindow", "Surname:", nullptr));
        PasswordRegisterLabel->setText(QApplication::translate("RegisterWindow", "Password:", nullptr));
        PasswordRegisterLabel_2->setText(QApplication::translate("RegisterWindow", "Re-enter Password:", nullptr));
        UsernameRegisterLabel->setText(QApplication::translate("RegisterWindow", "Username:", nullptr));
        EmailRegisterLabel->setText(QApplication::translate("RegisterWindow", "Email:", nullptr));
        RegisterButton->setText(QApplication::translate("RegisterWindow", "Register", nullptr));
        RegisterBackButton->setText(QApplication::translate("RegisterWindow", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterWindow: public Ui_RegisterWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWINDOW_H
