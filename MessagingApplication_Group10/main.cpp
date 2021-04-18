#include "loginwindow.h"
#include "messagingapplication_tests.h"
#include <QApplication>
#include <QtTest/QtTest>

int main(int argc, char *argv[]) {
    MessagingApplication_tests tests; //public constructor for the test class -> Lines 7 and 8 were adapted from the QT Test Tutorial video in Week 21 on NOW (https://now.ntu.ac.uk/d2l/le/content/711579/viewContent/4572089/View)
    QTest::qExec(&tests); //executes all the test functions in the test class
    QApplication a(argc, argv);
    LoginWindow w;
    w.setWindowTitle("Messaging Application"); //sets the window title of the Login form (the first form to be displayed to the user)
    w.show();
    return a.exec();
}
