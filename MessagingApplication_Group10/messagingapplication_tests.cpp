#include "messagingapplication_tests.h"
#include "loginwindow.h"
#include "registerwindow.h"
#include <QtTest/QTest>
#include <iostream>
#include <QFile>

using namespace std;
MessagingApplication_tests::MessagingApplication_tests() {} //public constructor

void MessagingApplication_tests::PasswordEncryption_Normal() { //tests that the password encryption works correctly
    QString Password = "password";
    QByteArray EncryptedPassword = Password.toUtf8().toHex();
    QByteArray CorrectPasswordEncryption = "70617373776f7264";
    QCOMPARE(EncryptedPassword, CorrectPasswordEncryption); //comapres whether the two variables are equal
}

void MessagingApplication_tests::PasswordEncryption_Erroneous() { //tests that the password encryption works correctly, but compares the value with an incorrect encrypted value
    QString Password = "password";
    QByteArray EncryptedPassword = Password.toUtf8().toHex();
    QByteArray IncorrectPasswordEncryption = "7361666550617373776f7264";
    QEXPECT_FAIL("", "Test is supposed to fail, as the test is checking for erroneous values", Continue); //instead of the test failing, the program will output the message inside this function -> this function was found on the Qt documentation (https://doc.qt.io/qt-5/qtest.html#QEXPECT_FAIL)
    QCOMPARE(EncryptedPassword, IncorrectPasswordEncryption);
}

void MessagingApplication_tests::PasswordDecryption_Normal() { //tests that the password decryption works correctly
    QString EncryptedPassword = "70617373776f7264";
    QString CorrectPassword = "password";
    QByteArray Password = EncryptedPassword.toUtf8(); //converts QString to QByteArray
    QByteArray passwordArray(QByteArray::fromHex(Password)); //converts the encrypted data from hex -> Lines 29-31 and 38-40 were adapted from the Qt Forum (https://forum.qt.io/topic/100505/conversion-of-hex-data-in-unsigned-char-array-to-qstring/3)
    QString DecryptedPassword(passwordArray); //converts the QByteArray data to a QString
    QCOMPARE(DecryptedPassword, CorrectPassword);
}

void MessagingApplication_tests::PasswordDecryption_Erroneous() { //tests that the password decryption works correctly, but compares the value with an incorrect decrypted value
    QString EncryptedPassword = "70617373776f7264";
    QString IncorrectPassword = "correctPassword";
    QByteArray Password = EncryptedPassword.toUtf8(); //converts QString to QByteArray
    QByteArray passwordArray(QByteArray::fromHex(Password)); //converts the encrypted data from hex to text
    QString DecryptedPassword(passwordArray); //converts the QByteArray data to a QString
    QEXPECT_FAIL("", "Test is supposed to fail, as the test is checking for erroneous values", Continue); //this function was found on the Qt documentation (https://doc.qt.io/qt-5/qtest.html#QEXPECT_FAIL)
    QCOMPARE(DecryptedPassword, IncorrectPassword);
}


