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
    QTextBrowser *GCMenuDisplay;
    QPushButton *GCMenuBackButton;
    QPushButton *GCMenu_ViewGCData;
    QPushButton *GCMenu_ManageGC;

    void setupUi(QWidget *GroupChatMenu)
    {
        if (GroupChatMenu->objectName().isEmpty())
            GroupChatMenu->setObjectName(QString::fromUtf8("GroupChatMenu"));
        GroupChatMenu->resize(500, 400);
        GroupChatMenu->setStyleSheet(QString::fromUtf8("\n"
"#GroupChatMenu{background-color: qlineargradient(spread:pad, x1:0.512, y1:1, x2:0.503, y2:0.306727, stop:0.0696517 rgba(169, 169, 169, 255), stop:0.890547 rgba(255, 255, 255, 255));}\n"
"#stackedWidget{ background-color: rgba(1,1,1,0);}"));
        stackedWidget = new QStackedWidget(GroupChatMenu);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 500, 400));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        GCMenuTitle = new QLabel(page);
        GCMenuTitle->setObjectName(QString::fromUtf8("GCMenuTitle"));
        GCMenuTitle->setGeometry(QRect(150, 20, 191, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("AnjaliOldLipi"));
        font.setPointSize(25);
        GCMenuTitle->setFont(font);
        GCMenuTitle->setAlignment(Qt::AlignCenter);
        GCMenuDisplay = new QTextBrowser(page);
        GCMenuDisplay->setObjectName(QString::fromUtf8("GCMenuDisplay"));
        GCMenuDisplay->setGeometry(QRect(30, 70, 441, 251));
        GCMenuBackButton = new QPushButton(page);
        GCMenuBackButton->setObjectName(QString::fromUtf8("GCMenuBackButton"));
        GCMenuBackButton->setGeometry(QRect(30, 330, 89, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("AnjaliOldLipi"));
        font1.setBold(true);
        font1.setWeight(75);
        GCMenuBackButton->setFont(font1);
        GCMenu_ViewGCData = new QPushButton(page);
        GCMenu_ViewGCData->setObjectName(QString::fromUtf8("GCMenu_ViewGCData"));
        GCMenu_ViewGCData->setGeometry(QRect(338, 330, 131, 31));
        GCMenu_ViewGCData->setFont(font1);
        GCMenu_ManageGC = new QPushButton(page);
        GCMenu_ManageGC->setObjectName(QString::fromUtf8("GCMenu_ManageGC"));
        GCMenu_ManageGC->setGeometry(QRect(150, 330, 151, 31));
        GCMenu_ManageGC->setFont(font1);
        stackedWidget->addWidget(page);

        retranslateUi(GroupChatMenu);

        QMetaObject::connectSlotsByName(GroupChatMenu);
    } // setupUi

    void retranslateUi(QWidget *GroupChatMenu)
    {
        GroupChatMenu->setWindowTitle(QApplication::translate("GroupChatMenu", "Form", nullptr));
        GCMenuTitle->setText(QApplication::translate("GroupChatMenu", "Group Chats", nullptr));
        GCMenuBackButton->setText(QApplication::translate("GroupChatMenu", "Back", nullptr));
        GCMenu_ViewGCData->setText(QApplication::translate("GroupChatMenu", "View Group Chats", nullptr));
        GCMenu_ManageGC->setText(QApplication::translate("GroupChatMenu", "Manage Group Chats", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GroupChatMenu: public Ui_GroupChatMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUPCHATMENU_H
