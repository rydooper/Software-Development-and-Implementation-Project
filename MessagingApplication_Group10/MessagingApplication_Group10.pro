QT       += core gui network mqtt testlib

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    contactswindow.cpp \
    groupchatmenu.cpp \
    groupchatwindow.cpp \
    main.cpp \
    loginwindow.cpp \
    managegroupchats.cpp \
    menuwindow.cpp \
    messagingapplication_tests.cpp \
    newmessagewindow.cpp \
    registerwindow.cpp \
    viewprofilewindow.cpp

HEADERS += \
    contactswindow.h \
    groupchatmenu.h \
    groupchatwindow.h \
    loginwindow.h \
    managegroupchats.h \
    menuwindow.h \
    messagingapplication_tests.h \
    newmessagewindow.h \
    registerwindow.h \
    viewprofilewindow.h

FORMS += \
    contactswindow.ui \
    groupchatmenu.ui \
    groupchatwindow.ui \
    loginwindow.ui \
    managegroupchats.ui \
    menuwindow.ui \
    newmessagewindow.ui \
    registerwindow.ui \
    viewprofilewindow.ui

TRANSLATIONS += \
    MessagingApplication_Group10_es_ES.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
