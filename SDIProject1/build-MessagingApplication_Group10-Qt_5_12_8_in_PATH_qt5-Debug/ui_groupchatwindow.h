/********************************************************************************
** Form generated from reading UI file 'groupchatwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUPCHATWINDOW_H
#define UI_GROUPCHATWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GroupChatWindow
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QTextBrowser *GCMssgDisplay;
    QScrollBar *GCScrollBar;
    QLineEdit *GCMssgInputBox;
    QPushButton *GCSendButton;
    QPushButton *GCBackButton;
    QPushButton *GCClearButton;
    QLabel *GCTitle;

    void setupUi(QWidget *GroupChatWindow)
    {
        if (GroupChatWindow->objectName().isEmpty())
            GroupChatWindow->setObjectName(QString::fromUtf8("GroupChatWindow"));
        GroupChatWindow->resize(500, 400);
        stackedWidget = new QStackedWidget(GroupChatWindow);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 500, 400));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        GCMssgDisplay = new QTextBrowser(page);
        GCMssgDisplay->setObjectName(QString::fromUtf8("GCMssgDisplay"));
        GCMssgDisplay->setGeometry(QRect(30, 60, 431, 201));
        GCScrollBar = new QScrollBar(page);
        GCScrollBar->setObjectName(QString::fromUtf8("GCScrollBar"));
        GCScrollBar->setGeometry(QRect(460, 60, 16, 201));
        GCScrollBar->setOrientation(Qt::Vertical);
        GCMssgInputBox = new QLineEdit(page);
        GCMssgInputBox->setObjectName(QString::fromUtf8("GCMssgInputBox"));
        GCMssgInputBox->setGeometry(QRect(30, 280, 411, 41));
        GCSendButton = new QPushButton(page);
        GCSendButton->setObjectName(QString::fromUtf8("GCSendButton"));
        GCSendButton->setGeometry(QRect(440, 280, 41, 41));
        GCBackButton = new QPushButton(page);
        GCBackButton->setObjectName(QString::fromUtf8("GCBackButton"));
        GCBackButton->setGeometry(QRect(30, 360, 89, 25));
        GCClearButton = new QPushButton(page);
        GCClearButton->setObjectName(QString::fromUtf8("GCClearButton"));
        GCClearButton->setGeometry(QRect(390, 360, 89, 25));
        GCTitle = new QLabel(page);
        GCTitle->setObjectName(QString::fromUtf8("GCTitle"));
        GCTitle->setGeometry(QRect(216, 30, 81, 20));
        stackedWidget->addWidget(page);

        retranslateUi(GroupChatWindow);

        QMetaObject::connectSlotsByName(GroupChatWindow);
    } // setupUi

    void retranslateUi(QWidget *GroupChatWindow)
    {
        GroupChatWindow->setWindowTitle(QApplication::translate("GroupChatWindow", "Form", nullptr));
        GCSendButton->setText(QApplication::translate("GroupChatWindow", ">", nullptr));
        GCBackButton->setText(QApplication::translate("GroupChatWindow", "Back", nullptr));
        GCClearButton->setText(QApplication::translate("GroupChatWindow", "Clear", nullptr));
        GCTitle->setText(QApplication::translate("GroupChatWindow", "Group Chat", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GroupChatWindow: public Ui_GroupChatWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUPCHATWINDOW_H
