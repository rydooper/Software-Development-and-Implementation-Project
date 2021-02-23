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
    QLabel *NWToLabel;
    QLabel *NWLabel;
    QPushButton *NWBackButton;
    QPushButton *NWClearButton;
    QPushButton *NWSendButton;
    QLineEdit *NWContactInputBox;
    QLineEdit *NWInputBox;

    void setupUi(QWidget *NewMessageWindow)
    {
        if (NewMessageWindow->objectName().isEmpty())
            NewMessageWindow->setObjectName(QString::fromUtf8("NewMessageWindow"));
        NewMessageWindow->resize(500, 400);
        stackedWidget = new QStackedWidget(NewMessageWindow);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 500, 400));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        NewMessageTitle = new QLabel(page);
        NewMessageTitle->setObjectName(QString::fromUtf8("NewMessageTitle"));
        NewMessageTitle->setGeometry(QRect(186, 30, 111, 20));
        NewMessageTitle->setAlignment(Qt::AlignCenter);
        NWToLabel = new QLabel(page);
        NWToLabel->setObjectName(QString::fromUtf8("NWToLabel"));
        NWToLabel->setGeometry(QRect(40, 90, 67, 17));
        NWLabel = new QLabel(page);
        NWLabel->setObjectName(QString::fromUtf8("NWLabel"));
        NWLabel->setGeometry(QRect(40, 150, 67, 17));
        NWBackButton = new QPushButton(page);
        NWBackButton->setObjectName(QString::fromUtf8("NWBackButton"));
        NWBackButton->setGeometry(QRect(20, 360, 89, 25));
        NWClearButton = new QPushButton(page);
        NWClearButton->setObjectName(QString::fromUtf8("NWClearButton"));
        NWClearButton->setGeometry(QRect(240, 360, 89, 25));
        NWSendButton = new QPushButton(page);
        NWSendButton->setObjectName(QString::fromUtf8("NWSendButton"));
        NWSendButton->setGeometry(QRect(360, 360, 89, 25));
        NWContactInputBox = new QLineEdit(page);
        NWContactInputBox->setObjectName(QString::fromUtf8("NWContactInputBox"));
        NWContactInputBox->setGeometry(QRect(130, 80, 321, 41));
        NWInputBox = new QLineEdit(page);
        NWInputBox->setObjectName(QString::fromUtf8("NWInputBox"));
        NWInputBox->setGeometry(QRect(130, 150, 321, 181));
        stackedWidget->addWidget(page);

        retranslateUi(NewMessageWindow);

        QMetaObject::connectSlotsByName(NewMessageWindow);
    } // setupUi

    void retranslateUi(QWidget *NewMessageWindow)
    {
        NewMessageWindow->setWindowTitle(QApplication::translate("NewMessageWindow", "Form", nullptr));
        NewMessageTitle->setText(QApplication::translate("NewMessageWindow", "New Message", nullptr));
        NWToLabel->setText(QApplication::translate("NewMessageWindow", "To:", nullptr));
        NWLabel->setText(QApplication::translate("NewMessageWindow", "Message:", nullptr));
        NWBackButton->setText(QApplication::translate("NewMessageWindow", "Back", nullptr));
        NWClearButton->setText(QApplication::translate("NewMessageWindow", "Clear", nullptr));
        NWSendButton->setText(QApplication::translate("NewMessageWindow", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewMessageWindow: public Ui_NewMessageWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWMESSAGEWINDOW_H
