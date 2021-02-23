/********************************************************************************
** Form generated from reading UI file 'groupchatmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUPCHATMENU_H
#define UI_GROUPCHATMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GroupChatMenu
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *GCMenuTitle;
    QTextBrowser *textBrowser;
    QPushButton *GCMenuBackButton;

    void setupUi(QWidget *GroupChatMenu)
    {
        if (GroupChatMenu->objectName().isEmpty())
            GroupChatMenu->setObjectName(QString::fromUtf8("GroupChatMenu"));
        GroupChatMenu->resize(500, 400);
        stackedWidget = new QStackedWidget(GroupChatMenu);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 500, 400));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        GCMenuTitle = new QLabel(page);
        GCMenuTitle->setObjectName(QString::fromUtf8("GCMenuTitle"));
        GCMenuTitle->setGeometry(QRect(170, 30, 141, 20));
        GCMenuTitle->setAlignment(Qt::AlignCenter);
        textBrowser = new QTextBrowser(page);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(30, 60, 441, 251));
        GCMenuBackButton = new QPushButton(page);
        GCMenuBackButton->setObjectName(QString::fromUtf8("GCMenuBackButton"));
        GCMenuBackButton->setGeometry(QRect(30, 330, 89, 25));
        stackedWidget->addWidget(page);

        retranslateUi(GroupChatMenu);

        QMetaObject::connectSlotsByName(GroupChatMenu);
    } // setupUi

    void retranslateUi(QWidget *GroupChatMenu)
    {
        GroupChatMenu->setWindowTitle(QApplication::translate("GroupChatMenu", "Form", nullptr));
        GCMenuTitle->setText(QApplication::translate("GroupChatMenu", "Group Chats Menu", nullptr));
        GCMenuBackButton->setText(QApplication::translate("GroupChatMenu", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GroupChatMenu: public Ui_GroupChatMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUPCHATMENU_H
