/****************************************************************************
** Meta object code from reading C++ file 'contactswindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../MessagingApplication_Group10/contactswindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'contactswindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ContactsWindow_t {
    QByteArrayData data[8];
    char stringdata0[132];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ContactsWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ContactsWindow_t qt_meta_stringdata_ContactsWindow = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ContactsWindow"
QT_MOC_LITERAL(1, 15, 11), // "backClicked"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 10), // "MGCClicked"
QT_MOC_LITERAL(4, 39, 29), // "on_ContactsBackButton_clicked"
QT_MOC_LITERAL(5, 69, 26), // "on_SendGMssgButton_clicked"
QT_MOC_LITERAL(6, 96, 20), // "openGroupMessageForm"
QT_MOC_LITERAL(7, 117, 14) // "backToContacts"

    },
    "ContactsWindow\0backClicked\0\0MGCClicked\0"
    "on_ContactsBackButton_clicked\0"
    "on_SendGMssgButton_clicked\0"
    "openGroupMessageForm\0backToContacts"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ContactsWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ContactsWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ContactsWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->backClicked(); break;
        case 1: _t->MGCClicked(); break;
        case 2: _t->on_ContactsBackButton_clicked(); break;
        case 3: _t->on_SendGMssgButton_clicked(); break;
        case 4: _t->openGroupMessageForm(); break;
        case 5: _t->backToContacts(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ContactsWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ContactsWindow::backClicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ContactsWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ContactsWindow::MGCClicked)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ContactsWindow::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_ContactsWindow.data,
    qt_meta_data_ContactsWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ContactsWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ContactsWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ContactsWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ContactsWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void ContactsWindow::backClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ContactsWindow::MGCClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
