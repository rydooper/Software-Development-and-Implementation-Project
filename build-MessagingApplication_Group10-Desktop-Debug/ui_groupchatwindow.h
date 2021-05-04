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
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GroupChatWindow
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLineEdit *GCAddUsersBox;
    QPushButton *GCInviteUsersButton;
    QPushButton *GCBackButton;
    QPushButton *GCClearButton;
    QLabel *GCTitle;
    QLabel *TopicLabel;
    QLineEdit *TopicBox;
    QLabel *AddUsersLabel;
    QLineEdit *FirstModBox;
    QLabel *FirstModLabel;

    void setupUi(QWidget *GroupChatWindow)
    {
        if (GroupChatWindow->objectName().isEmpty())
            GroupChatWindow->setObjectName(QString::fromUtf8("GroupChatWindow"));
        GroupChatWindow->resize(500, 400);
        GroupChatWindow->setStyleSheet(QString::fromUtf8("\n"
"#GroupChatWindow{background-color: qlineargradient(spread:pad, x1:0.512, y1:1, x2:0.503, y2:0.306727, stop:0.0696517 rgba(169, 169, 169, 255), stop:0.890547 rgba(255, 255, 255, 255));}\n"
"#stackedWidget{ background-color: rgba(1,1,1,0);}"));
        stackedWidget = new QStackedWidget(GroupChatWindow);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 500, 400));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        GCAddUsersBox = new QLineEdit(page);
        GCAddUsersBox->setObjectName(QString::fromUtf8("GCAddUsersBox"));
        GCAddUsersBox->setGeometry(QRect(130, 260, 321, 41));
        GCInviteUsersButton = new QPushButton(page);
        GCInviteUsersButton->setObjectName(QString::fromUtf8("GCInviteUsersButton"));
        GCInviteUsersButton->setGeometry(QRect(450, 260, 41, 41));
        QPalette palette;
        QBrush brush(QColor(138, 226, 52, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        GCInviteUsersButton->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("AnjaliOldLipi"));
        font.setBold(true);
        font.setWeight(75);
        GCInviteUsersButton->setFont(font);
        GCBackButton = new QPushButton(page);
        GCBackButton->setObjectName(QString::fromUtf8("GCBackButton"));
        GCBackButton->setGeometry(QRect(30, 354, 89, 31));
        GCBackButton->setFont(font);
        GCClearButton = new QPushButton(page);
        GCClearButton->setObjectName(QString::fromUtf8("GCClearButton"));
        GCClearButton->setGeometry(QRect(390, 354, 89, 31));
        GCClearButton->setFont(font);
        GCTitle = new QLabel(page);
        GCTitle->setObjectName(QString::fromUtf8("GCTitle"));
        GCTitle->setGeometry(QRect(170, 20, 171, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("AnjaliOldLipi"));
        font1.setPointSize(25);
        GCTitle->setFont(font1);
        TopicLabel = new QLabel(page);
        TopicLabel->setObjectName(QString::fromUtf8("TopicLabel"));
        TopicLabel->setGeometry(QRect(40, 90, 67, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("AnjaliOldLipi"));
        font2.setBold(false);
        font2.setWeight(50);
        TopicLabel->setFont(font2);
        TopicBox = new QLineEdit(page);
        TopicBox->setObjectName(QString::fromUtf8("TopicBox"));
        TopicBox->setGeometry(QRect(130, 80, 321, 41));
        AddUsersLabel = new QLabel(page);
        AddUsersLabel->setObjectName(QString::fromUtf8("AddUsersLabel"));
        AddUsersLabel->setGeometry(QRect(40, 270, 81, 31));
        AddUsersLabel->setFont(font2);
        FirstModBox = new QLineEdit(page);
        FirstModBox->setObjectName(QString::fromUtf8("FirstModBox"));
        FirstModBox->setGeometry(QRect(130, 180, 321, 25));
        FirstModLabel = new QLabel(page);
        FirstModLabel->setObjectName(QString::fromUtf8("FirstModLabel"));
        FirstModLabel->setGeometry(QRect(40, 160, 81, 61));
        QFont font3;
        font3.setFamily(QString::fromUtf8("AnjaliOldLipi"));
        FirstModLabel->setFont(font3);
        FirstModLabel->setMouseTracking(false);
        stackedWidget->addWidget(page);

        retranslateUi(GroupChatWindow);

        QMetaObject::connectSlotsByName(GroupChatWindow);
    } // setupUi

    void retranslateUi(QWidget *GroupChatWindow)
    {
        GroupChatWindow->setWindowTitle(QApplication::translate("GroupChatWindow", "Form", nullptr));
        GCInviteUsersButton->setText(QApplication::translate("GroupChatWindow", ">", nullptr));
        GCBackButton->setText(QApplication::translate("GroupChatWindow", "Back", nullptr));
        GCClearButton->setText(QApplication::translate("GroupChatWindow", "Clear", nullptr));
        GCTitle->setText(QApplication::translate("GroupChatWindow", "Group Chat", nullptr));
        TopicLabel->setText(QApplication::translate("GroupChatWindow", "Topic:", nullptr));
        AddUsersLabel->setText(QApplication::translate("GroupChatWindow", "Add Users:", nullptr));
        FirstModLabel->setText(QApplication::translate("GroupChatWindow", "<html><head/><body><p>First <br/>Moderator:</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GroupChatWindow: public Ui_GroupChatWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUPCHATWINDOW_H
