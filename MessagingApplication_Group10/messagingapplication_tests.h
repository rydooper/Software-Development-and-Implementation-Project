#ifndef MESSAGINGAPPLICATION_TESTS_H
#define MESSAGINGAPPLICATION_TESTS_H
#include <iostream>
#include <QObject>
#include <QtTest/QTest>

class MessagingApplication_tests : public QObject //Lines 7-19 were adapted form the Qt documentation (https://doc.qt.io/qt-5/qtest-overview.html#creating-a-test)
{
    Q_OBJECT
public:
    MessagingApplication_tests(); //public class constructor

private slots: //the following functions contain the automated tests, which are defined in messagingapplication_tests.cpp
    void PasswordEncryption_Normal();
    void PasswordEncryption_Erroneous();

    void PasswordDecryption_Normal();
    void PasswordDecryption_Erroneous();
};

#endif // MESSAGINGAPPLICATION_TESTS_H
