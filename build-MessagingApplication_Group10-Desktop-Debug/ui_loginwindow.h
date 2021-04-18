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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
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

    void setupUi(QMainWindow *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName(QString::fromUtf8("LoginWindow"));
        LoginWindow->resize(500, 400);
        LoginWindow->setStyleSheet(QString::fromUtf8("\n"
"#LoginWindow{background-color: qlineargradient(spread:pad, x1:0.512, y1:1, x2:0.508, y2:0, stop:0.0696517 rgba(70, 125, 120, 255), stop:0.890547 rgba(255, 255, 255, 255));}\n"
"#stackedWidget{ background-color: rgba(1,1,1,0);}\n"
"\n"
"#LoginButton{ background-color: qlineargradient(spread:pad, x1:0.512, y1:1, x2:0.503, y2:0.306727, stop:0.0696517 rgba(158, 246, 169, 255), stop:0.890547 rgba(255, 255, 255, 255));}\n"
""));
        centralwidget = new QWidget(LoginWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 500, 400));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setStyleSheet(QString::fromUtf8(""));
        UsernameInputBox = new QLineEdit(page);
        UsernameInputBox->setObjectName(QString::fromUtf8("UsernameInputBox"));
        UsernameInputBox->setGeometry(QRect(140, 140, 211, 25));
        UsernameInputBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        PasswordInputBox = new QLineEdit(page);
        PasswordInputBox->setObjectName(QString::fromUtf8("PasswordInputBox"));
        PasswordInputBox->setGeometry(QRect(140, 200, 211, 25));
        PasswordInputBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        ClearButton = new QPushButton(page);
        ClearButton->setObjectName(QString::fromUtf8("ClearButton"));
        ClearButton->setGeometry(QRect(140, 254, 89, 31));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ClearButton->sizePolicy().hasHeightForWidth());
        ClearButton->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("AnjaliOldLipi"));
        font.setBold(true);
        font.setWeight(75);
        ClearButton->setFont(font);
        ClearButton->setCursor(QCursor(Qt::ArrowCursor));
        ClearButton->setStyleSheet(QString::fromUtf8("/*border-top-color: rgb(85, 87, 83);*/"));
        RegisterButton = new QPushButton(page);
        RegisterButton->setObjectName(QString::fromUtf8("RegisterButton"));
        RegisterButton->setGeometry(QRect(260, 254, 89, 31));
        sizePolicy.setHeightForWidth(RegisterButton->sizePolicy().hasHeightForWidth());
        RegisterButton->setSizePolicy(sizePolicy);
        RegisterButton->setFont(font);
        RegisterButton->setCursor(QCursor(Qt::ArrowCursor));
        ExitButton = new QPushButton(page);
        ExitButton->setObjectName(QString::fromUtf8("ExitButton"));
        ExitButton->setGeometry(QRect(140, 310, 89, 31));
        sizePolicy.setHeightForWidth(ExitButton->sizePolicy().hasHeightForWidth());
        ExitButton->setSizePolicy(sizePolicy);
        ExitButton->setFont(font);
        ExitButton->setCursor(QCursor(Qt::ArrowCursor));
        LoginButton = new QPushButton(page);
        LoginButton->setObjectName(QString::fromUtf8("LoginButton"));
        LoginButton->setGeometry(QRect(260, 310, 89, 31));
        sizePolicy.setHeightForWidth(LoginButton->sizePolicy().hasHeightForWidth());
        LoginButton->setSizePolicy(sizePolicy);
        QPalette palette;
        QLinearGradient gradient(0.512, 1, 0.503, 0.306727);
        gradient.setSpread(QGradient::PadSpread);
        gradient.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient.setColorAt(0.0696517, QColor(158, 246, 169, 255));
        gradient.setColorAt(0.890547, QColor(255, 255, 255, 255));
        QBrush brush(gradient);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QLinearGradient gradient1(0.512, 1, 0.503, 0.306727);
        gradient1.setSpread(QGradient::PadSpread);
        gradient1.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient1.setColorAt(0.0696517, QColor(158, 246, 169, 255));
        gradient1.setColorAt(0.890547, QColor(255, 255, 255, 255));
        QBrush brush1(gradient1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        QLinearGradient gradient2(0.512, 1, 0.503, 0.306727);
        gradient2.setSpread(QGradient::PadSpread);
        gradient2.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient2.setColorAt(0.0696517, QColor(158, 246, 169, 255));
        gradient2.setColorAt(0.890547, QColor(255, 255, 255, 255));
        QBrush brush2(gradient2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush2);
        QLinearGradient gradient3(0.512, 1, 0.503, 0.306727);
        gradient3.setSpread(QGradient::PadSpread);
        gradient3.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient3.setColorAt(0.0696517, QColor(158, 246, 169, 255));
        gradient3.setColorAt(0.890547, QColor(255, 255, 255, 255));
        QBrush brush3(gradient3);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        QLinearGradient gradient4(0.512, 1, 0.503, 0.306727);
        gradient4.setSpread(QGradient::PadSpread);
        gradient4.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient4.setColorAt(0.0696517, QColor(158, 246, 169, 255));
        gradient4.setColorAt(0.890547, QColor(255, 255, 255, 255));
        QBrush brush4(gradient4);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        QLinearGradient gradient5(0.512, 1, 0.503, 0.306727);
        gradient5.setSpread(QGradient::PadSpread);
        gradient5.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient5.setColorAt(0.0696517, QColor(158, 246, 169, 255));
        gradient5.setColorAt(0.890547, QColor(255, 255, 255, 255));
        QBrush brush5(gradient5);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        QLinearGradient gradient6(0.512, 1, 0.503, 0.306727);
        gradient6.setSpread(QGradient::PadSpread);
        gradient6.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient6.setColorAt(0.0696517, QColor(158, 246, 169, 255));
        gradient6.setColorAt(0.890547, QColor(255, 255, 255, 255));
        QBrush brush6(gradient6);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        QLinearGradient gradient7(0.512, 1, 0.503, 0.306727);
        gradient7.setSpread(QGradient::PadSpread);
        gradient7.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient7.setColorAt(0.0696517, QColor(158, 246, 169, 255));
        gradient7.setColorAt(0.890547, QColor(255, 255, 255, 255));
        QBrush brush7(gradient7);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        QLinearGradient gradient8(0.512, 1, 0.503, 0.306727);
        gradient8.setSpread(QGradient::PadSpread);
        gradient8.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient8.setColorAt(0.0696517, QColor(158, 246, 169, 255));
        gradient8.setColorAt(0.890547, QColor(255, 255, 255, 255));
        QBrush brush8(gradient8);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        LoginButton->setPalette(palette);
        LoginButton->setFont(font);
        LoginButton->setCursor(QCursor(Qt::ArrowCursor));
        UsernameLabel = new QLabel(page);
        UsernameLabel->setObjectName(QString::fromUtf8("UsernameLabel"));
        UsernameLabel->setGeometry(QRect(210, 120, 81, 17));
        QFont font1;
        font1.setFamily(QString::fromUtf8("AnjaliOldLipi"));
        UsernameLabel->setFont(font1);
        PasswordLabel = new QLabel(page);
        PasswordLabel->setObjectName(QString::fromUtf8("PasswordLabel"));
        PasswordLabel->setGeometry(QRect(210, 180, 81, 21));
        PasswordLabel->setFont(font1);
        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(180, 40, 131, 51));
        QFont font2;
        font2.setFamily(QString::fromUtf8("AnjaliOldLipi"));
        font2.setPointSize(25);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setUnderline(false);
        font2.setWeight(50);
        font2.setStrikeOut(false);
        font2.setKerning(true);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("/*#label {font-size: 25px;}*/"));
        label->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(page);
        LoginWindow->setCentralWidget(centralwidget);

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
