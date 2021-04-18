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
#include <QtWidgets/QComboBox>
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
    QPushButton *VPRevealDataButton;
    QLabel *ProfileImage;
    QLabel *VPImageLabel;
    QComboBox *VPImageCombo;

    void setupUi(QWidget *ViewProfileWindow)
    {
        if (ViewProfileWindow->objectName().isEmpty())
            ViewProfileWindow->setObjectName(QString::fromUtf8("ViewProfileWindow"));
        ViewProfileWindow->resize(500, 400);
        ViewProfileWindow->setStyleSheet(QString::fromUtf8("\n"
"#ViewProfileWindow{background-color: qlineargradient(spread:pad, x1:0.512, y1:1, x2:0.503, y2:0.306727, stop:0.0696517 rgba(169, 169, 169, 255), stop:0.890547 rgba(255, 255, 255, 255));}\n"
"#stackedWidget{ background-color: rgba(1,1,1,0);}"));
        stackedWidget = new QStackedWidget(ViewProfileWindow);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 500, 400));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        ViewProfileTitle = new QLabel(page);
        ViewProfileTitle->setObjectName(QString::fromUtf8("ViewProfileTitle"));
        ViewProfileTitle->setGeometry(QRect(166, 20, 191, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("AnjaliOldLipi"));
        font.setPointSize(25);
        ViewProfileTitle->setFont(font);
        ViewProfileTitle->setAlignment(Qt::AlignCenter);
        VPFnameLabel = new QLabel(page);
        VPFnameLabel->setObjectName(QString::fromUtf8("VPFnameLabel"));
        VPFnameLabel->setGeometry(QRect(50, 90, 81, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("AnjaliOldLipi"));
        VPFnameLabel->setFont(font1);
        VPFnameLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        VPEmailLabel = new QLabel(page);
        VPEmailLabel->setObjectName(QString::fromUtf8("VPEmailLabel"));
        VPEmailLabel->setGeometry(QRect(70, 190, 67, 21));
        VPEmailLabel->setFont(font1);
        VPEmailLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        VPPasswordLabel = new QLabel(page);
        VPPasswordLabel->setObjectName(QString::fromUtf8("VPPasswordLabel"));
        VPPasswordLabel->setGeometry(QRect(50, 240, 91, 21));
        VPPasswordLabel->setFont(font1);
        VPPasswordLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        VPSnameLabel = new QLabel(page);
        VPSnameLabel->setObjectName(QString::fromUtf8("VPSnameLabel"));
        VPSnameLabel->setGeometry(QRect(70, 140, 67, 21));
        VPSnameLabel->setFont(font1);
        VPSnameLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        VPFnameInputBox = new QLineEdit(page);
        VPFnameInputBox->setObjectName(QString::fromUtf8("VPFnameInputBox"));
        VPFnameInputBox->setGeometry(QRect(160, 90, 231, 25));
        VPFnameInputBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        VPSnameInputBox = new QLineEdit(page);
        VPSnameInputBox->setObjectName(QString::fromUtf8("VPSnameInputBox"));
        VPSnameInputBox->setGeometry(QRect(160, 140, 231, 25));
        VPSnameInputBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        VPEmailInputBox = new QLineEdit(page);
        VPEmailInputBox->setObjectName(QString::fromUtf8("VPEmailInputBox"));
        VPEmailInputBox->setGeometry(QRect(160, 190, 231, 25));
        VPEmailInputBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        VPPasswordInputBox = new QLineEdit(page);
        VPPasswordInputBox->setObjectName(QString::fromUtf8("VPPasswordInputBox"));
        VPPasswordInputBox->setGeometry(QRect(160, 240, 231, 25));
        VPPasswordInputBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        VPBackButton = new QPushButton(page);
        VPBackButton->setObjectName(QString::fromUtf8("VPBackButton"));
        VPBackButton->setGeometry(QRect(30, 330, 89, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("AnjaliOldLipi"));
        font2.setBold(true);
        font2.setWeight(75);
        VPBackButton->setFont(font2);
        DeleteAccButton = new QPushButton(page);
        DeleteAccButton->setObjectName(QString::fromUtf8("DeleteAccButton"));
        DeleteAccButton->setGeometry(QRect(270, 330, 111, 31));
        QPalette palette;
        QBrush brush(QColor(239, 41, 41, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        DeleteAccButton->setPalette(palette);
        DeleteAccButton->setFont(font2);
        ApplyButton = new QPushButton(page);
        ApplyButton->setObjectName(QString::fromUtf8("ApplyButton"));
        ApplyButton->setGeometry(QRect(140, 330, 111, 31));
        QPalette palette1;
        QBrush brush1(QColor(138, 226, 52, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        ApplyButton->setPalette(palette1);
        ApplyButton->setFont(font2);
        VPRevealDataButton = new QPushButton(page);
        VPRevealDataButton->setObjectName(QString::fromUtf8("VPRevealDataButton"));
        VPRevealDataButton->setGeometry(QRect(400, 330, 89, 31));
        VPRevealDataButton->setFont(font2);
        ProfileImage = new QLabel(page);
        ProfileImage->setObjectName(QString::fromUtf8("ProfileImage"));
        ProfileImage->setGeometry(QRect(400, 20, 67, 51));
        VPImageLabel = new QLabel(page);
        VPImageLabel->setObjectName(QString::fromUtf8("VPImageLabel"));
        VPImageLabel->setGeometry(QRect(50, 280, 91, 21));
        VPImageLabel->setFont(font1);
        VPImageLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        VPImageCombo = new QComboBox(page);
        VPImageCombo->setObjectName(QString::fromUtf8("VPImageCombo"));
        VPImageCombo->setGeometry(QRect(160, 280, 241, 25));
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
        VPRevealDataButton->setText(QApplication::translate("ViewProfileWindow", "Show Data", nullptr));
        ProfileImage->setText(QString());
        VPImageLabel->setText(QApplication::translate("ViewProfileWindow", "Profile Image:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewProfileWindow: public Ui_ViewProfileWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWPROFILEWINDOW_H
