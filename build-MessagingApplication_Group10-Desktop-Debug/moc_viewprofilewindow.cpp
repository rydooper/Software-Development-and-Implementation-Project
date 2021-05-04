/****************************************************************************
** Meta object code from reading C++ file 'viewprofilewindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../MessagingApplication_Group10/viewprofilewindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'viewprofilewindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ViewProfileWindow_t {
    QByteArrayData data[10];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ViewProfileWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ViewProfileWindow_t qt_meta_stringdata_ViewProfileWindow = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ViewProfileWindow"
QT_MOC_LITERAL(1, 18, 11), // "backClicked"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 23), // "on_VPBackButton_clicked"
QT_MOC_LITERAL(4, 55, 22), // "on_ApplyButton_clicked"
QT_MOC_LITERAL(5, 78, 26), // "on_DeleteAccButton_clicked"
QT_MOC_LITERAL(6, 105, 29), // "on_VPRevealDataButton_clicked"
QT_MOC_LITERAL(7, 135, 14), // "updateTextFile"
QT_MOC_LITERAL(8, 150, 8), // "Username"
QT_MOC_LITERAL(9, 159, 9) // "Operation"

    },
    "ViewProfileWindow\0backClicked\0\0"
    "on_VPBackButton_clicked\0on_ApplyButton_clicked\0"
    "on_DeleteAccButton_clicked\0"
    "on_VPRevealDataButton_clicked\0"
    "updateTextFile\0Username\0Operation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ViewProfileWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    2,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    8,    9,

       0        // eod
};

void ViewProfileWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ViewProfileWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->backClicked(); break;
        case 1: _t->on_VPBackButton_clicked(); break;
        case 2: _t->on_ApplyButton_clicked(); break;
        case 3: _t->on_DeleteAccButton_clicked(); break;
        case 4: _t->on_VPRevealDataButton_clicked(); break;
        case 5: _t->updateTextFile((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ViewProfileWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewProfileWindow::backClicked)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ViewProfileWindow::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_ViewProfileWindow.data,
    qt_meta_data_ViewProfileWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ViewProfileWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ViewProfileWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ViewProfileWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ViewProfileWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void ViewProfileWindow::backClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
