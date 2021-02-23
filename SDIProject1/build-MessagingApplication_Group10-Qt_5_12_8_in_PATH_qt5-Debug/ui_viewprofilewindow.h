/********************************************************************************
** Form generated from reading UI file 'viewprofilewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWPROFILEWINDOW_H
#define UI_VIEWPROFILEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewProfileWindow
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *ViewProfileTitle;
    QLabel *VPFnameLabel;
    QLabel *VPEmailLabel;
    QLabel *VPPasswordLabel;
    QLabel *VPSnameLabel;
    QLineEdit *VPFnameInputBox;
    QLineEdit *VPSnameInputBox;
    QLineEdit *VPEmailInputBox;
    QLineEdit *VPPasswordInputBox;
    QPushButton *VPBackButton;
    QPushButton *DeleteAccButton;
    QPushButton *ApplyButton;

    void setupUi(QWidget *ViewProfileWindow)
    {
        if (ViewProfileWindow->objectName().isEmpty())
            ViewProfileWindow->setObjectName(QString::fromUtf8("ViewProfileWindow"));
        ViewProfileWindow->resize(500, 400);
        stackedWidget = new QStackedWidget(ViewProfileWindow);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 500, 400));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        ViewProfileTitle = new QLabel(page);
        ViewProfileTitle->setObjectName(QString::fromUtf8("ViewProfileTitle"));
        ViewProfileTitle->setGeometry(QRect(196, 30, 91, 20));
        ViewProfileTitle->setAlignment(Qt::AlignCenter);
        VPFnameLabel = new QLabel(page);
        VPFnameLabel->setObjectName(QString::fromUtf8("VPFnameLabel"));
        VPFnameLabel->setGeometry(QRect(50, 90, 81, 17));
        VPEmailLabel = new QLabel(page);
        VPEmailLabel->setObjectName(QString::fromUtf8("VPEmailLabel"));
        VPEmailLabel->setGeometry(QRect(50, 190, 67, 17));
        VPPasswordLabel = new QLabel(page);
        VPPasswordLabel->setObjectName(QString::fromUtf8("VPPasswordLabel"));
        VPPasswordLabel->setGeometry(QRect(50, 240, 91, 17));
        VPSnameLabel = new QLabel(page);
        VPSnameLabel->setObjectName(QString::fromUtf8("VPSnameLabel"));
        VPSnameLabel->setGeometry(QRect(50, 140, 67, 17));
        VPFnameInputBox = new QLineEdit(page);
        VPFnameInputBox->setObjectName(QString::fromUtf8("VPFnameInputBox"));
        VPFnameInputBox->setGeometry(QRect(160, 90, 231, 25));
        VPSnameInputBox = new QLineEdit(page);
        VPSnameInputBox->setObjectName(QString::fromUtf8("VPSnameInputBox"));
        VPSnameInputBox->setGeometry(QRect(160, 140, 231, 25));
        VPEmailInputBox = new QLineEdit(page);
        VPEmailInputBox->setObjectName(QString::fromUtf8("VPEmailInputBox"));
        VPEmailInputBox->setGeometry(QRect(160, 190, 231, 25));
        VPPasswordInputBox = new QLineEdit(page);
        VPPasswordInputBox->setObjectName(QString::fromUtf8("VPPasswordInputBox"));
        VPPasswordInputBox->setGeometry(QRect(160, 240, 231, 25));
        VPBackButton = new QPushButton(page);
        VPBackButton->setObjectName(QString::fromUtf8("VPBackButton"));
        VPBackButton->setGeometry(QRect(40, 330, 89, 25));
        DeleteAccButton = new QPushButton(page);
        DeleteAccButton->setObjectName(QString::fromUtf8("DeleteAccButton"));
        DeleteAccButton->setGeometry(QRect(350, 330, 111, 25));
        ApplyButton = new QPushButton(page);
        ApplyButton->setObjectName(QString::fromUtf8("ApplyButton"));
        ApplyButton->setGeometry(QRect(190, 330, 111, 25));
        stackedWidget->addWidget(page);

        retranslateUi(ViewProfileWindow);

        QMetaObject::connectSlotsByName(ViewProfileWindow);
    } // setupUi

    void retranslateUi(QWidget *ViewProfileWindow)
    {
        ViewProfileWindow->setWindowTitle(QApplication::translate("ViewProfileWindow", "Form", nullptr));
        ViewProfileTitle->setText(QApplication::translate("ViewProfileWindow", "View Profile", nullptr));
        VPFnameLabel->setText(QApplication::translate("ViewProfileWindow", "Forename:", nullptr));
        VPEmailLabel->setText(QApplication::translate("ViewProfileWindow", "Email:", nullptr));
        VPPasswordLabel->setText(QApplication::translate("ViewProfileWindow", "Password:", nullptr));
        VPSnameLabel->setText(QApplication::translate("ViewProfileWindow", "Surname:", nullptr));
        VPBackButton->setText(QApplication::translate("ViewProfileWindow", "Back", nullptr));
        DeleteAccButton->setText(QApplication::translate("ViewProfileWindow", "Delete Account", nullptr));
        ApplyButton->setText(QApplication::translate("ViewProfileWindow", "Apply Changes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewProfileWindow: public Ui_ViewProfileWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWPROFILEWINDOW_H
