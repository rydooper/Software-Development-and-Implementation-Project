/********************************************************************************
** Form generated from reading UI file 'managegroupchats.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGEGROUPCHATS_H
#define UI_MANAGEGROUPCHATS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ManageGroupChats
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *MGCTitle;
    QPushButton *MGCBackButton;
    QLabel *MGCChatLabel;
    QLabel *MGCUserLabel;
    QPushButton *MGCDemoteUserButton;
    QPushButton *MGCPromoteUserButton;
    QComboBox *MGCChatCombo;
    QComboBox *MGCUserCombo;
    QPushButton *MGCConfirmGC;
    QPushButton *MGCBeginManagement;

    void setupUi(QWidget *ManageGroupChats)
    {
        if (ManageGroupChats->objectName().isEmpty())
            ManageGroupChats->setObjectName(QString::fromUtf8("ManageGroupChats"));
        ManageGroupChats->resize(500, 400);
        ManageGroupChats->setStyleSheet(QString::fromUtf8("\n"
"#GroupChatMenu{background-color: qlineargradient(spread:pad, x1:0.512, y1:1, x2:0.503, y2:0.306727, stop:0.0696517 rgba(169, 169, 169, 255), stop:0.890547 rgba(255, 255, 255, 255));}\n"
"#stackedWidget{ background-color: rgba(1,1,1,0);}"));
        stackedWidget = new QStackedWidget(ManageGroupChats);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 500, 400));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        MGCTitle = new QLabel(page);
        MGCTitle->setObjectName(QString::fromUtf8("MGCTitle"));
        MGCTitle->setGeometry(QRect(80, 20, 331, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("AnjaliOldLipi"));
        font.setPointSize(25);
        MGCTitle->setFont(font);
        MGCTitle->setAlignment(Qt::AlignCenter);
        MGCBackButton = new QPushButton(page);
        MGCBackButton->setObjectName(QString::fromUtf8("MGCBackButton"));
        MGCBackButton->setGeometry(QRect(30, 330, 89, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("AnjaliOldLipi"));
        font1.setBold(true);
        font1.setWeight(75);
        MGCBackButton->setFont(font1);
        MGCChatLabel = new QLabel(page);
        MGCChatLabel->setObjectName(QString::fromUtf8("MGCChatLabel"));
        MGCChatLabel->setGeometry(QRect(50, 120, 131, 20));
        MGCUserLabel = new QLabel(page);
        MGCUserLabel->setObjectName(QString::fromUtf8("MGCUserLabel"));
        MGCUserLabel->setGeometry(QRect(50, 240, 131, 20));
        MGCDemoteUserButton = new QPushButton(page);
        MGCDemoteUserButton->setObjectName(QString::fromUtf8("MGCDemoteUserButton"));
        MGCDemoteUserButton->setGeometry(QRect(370, 290, 89, 31));
        MGCDemoteUserButton->setFont(font1);
        MGCPromoteUserButton = new QPushButton(page);
        MGCPromoteUserButton->setObjectName(QString::fromUtf8("MGCPromoteUserButton"));
        MGCPromoteUserButton->setGeometry(QRect(270, 290, 89, 31));
        MGCPromoteUserButton->setFont(font1);
        MGCChatCombo = new QComboBox(page);
        MGCChatCombo->setObjectName(QString::fromUtf8("MGCChatCombo"));
        MGCChatCombo->setGeometry(QRect(210, 120, 241, 25));
        MGCUserCombo = new QComboBox(page);
        MGCUserCombo->setObjectName(QString::fromUtf8("MGCUserCombo"));
        MGCUserCombo->setGeometry(QRect(210, 240, 241, 25));
        MGCConfirmGC = new QPushButton(page);
        MGCConfirmGC->setObjectName(QString::fromUtf8("MGCConfirmGC"));
        MGCConfirmGC->setGeometry(QRect(298, 180, 151, 25));
        MGCBeginManagement = new QPushButton(page);
        MGCBeginManagement->setObjectName(QString::fromUtf8("MGCBeginManagement"));
        MGCBeginManagement->setGeometry(QRect(298, 70, 151, 25));
        stackedWidget->addWidget(page);

        retranslateUi(ManageGroupChats);

        QMetaObject::connectSlotsByName(ManageGroupChats);
    } // setupUi

    void retranslateUi(QWidget *ManageGroupChats)
    {
        ManageGroupChats->setWindowTitle(QApplication::translate("ManageGroupChats", "Form", nullptr));
        MGCTitle->setText(QApplication::translate("ManageGroupChats", "Manage Group Chats", nullptr));
        MGCBackButton->setText(QApplication::translate("ManageGroupChats", "Back", nullptr));
        MGCChatLabel->setText(QApplication::translate("ManageGroupChats", "Select Group Chat:", nullptr));
        MGCUserLabel->setText(QApplication::translate("ManageGroupChats", "Select User:", nullptr));
        MGCDemoteUserButton->setText(QApplication::translate("ManageGroupChats", "Demote", nullptr));
        MGCPromoteUserButton->setText(QApplication::translate("ManageGroupChats", "Promote", nullptr));
        MGCConfirmGC->setText(QApplication::translate("ManageGroupChats", "Confirm Group Chat", nullptr));
        MGCBeginManagement->setText(QApplication::translate("ManageGroupChats", "Begin Management", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ManageGroupChats: public Ui_ManageGroupChats {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEGROUPCHATS_H
