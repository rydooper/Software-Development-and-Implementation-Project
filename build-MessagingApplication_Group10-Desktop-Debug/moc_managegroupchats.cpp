/****************************************************************************
** Meta object code from reading C++ file 'managegroupchats.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../MessagingApplication_Group10/managegroupchats.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'managegroupchats.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ManageGroupChats_t {
    QByteArrayData data[14];
    char stringdata0[249];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ManageGroupChats_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ManageGroupChats_t qt_meta_stringdata_ManageGroupChats = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ManageGroupChats"
QT_MOC_LITERAL(1, 17, 11), // "backClicked"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 10), // "MGCClicked"
QT_MOC_LITERAL(4, 41, 24), // "on_MGCBackButton_clicked"
QT_MOC_LITERAL(5, 66, 31), // "on_MGCPromoteUserButton_clicked"
QT_MOC_LITERAL(6, 98, 30), // "on_MGCDemoteUserButton_clicked"
QT_MOC_LITERAL(7, 129, 15), // "EmptyComboBoxes"
QT_MOC_LITERAL(8, 145, 23), // "on_MGCConfirmGC_clicked"
QT_MOC_LITERAL(9, 169, 29), // "on_MGCBeginManagement_clicked"
QT_MOC_LITERAL(10, 199, 16), // "UpdateGCTextFile"
QT_MOC_LITERAL(11, 216, 11), // "TargetTopic"
QT_MOC_LITERAL(12, 228, 10), // "TargetUser"
QT_MOC_LITERAL(13, 239, 9) // "Operation"

    },
    "ManageGroupChats\0backClicked\0\0MGCClicked\0"
    "on_MGCBackButton_clicked\0"
    "on_MGCPromoteUserButton_clicked\0"
    "on_MGCDemoteUserButton_clicked\0"
    "EmptyComboBoxes\0on_MGCConfirmGC_clicked\0"
    "on_MGCBeginManagement_clicked\0"
    "UpdateGCTextFile\0TargetTopic\0TargetUser\0"
    "Operation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ManageGroupChats[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    3,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   11,   12,   13,

       0        // eod
};

void ManageGroupChats::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ManageGroupChats *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->backClicked(); break;
        case 1: _t->MGCClicked(); break;
        case 2: _t->on_MGCBackButton_clicked(); break;
        case 3: _t->on_MGCPromoteUserButton_clicked(); break;
        case 4: _t->on_MGCDemoteUserButton_clicked(); break;
        case 5: { bool _r = _t->EmptyComboBoxes();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->on_MGCConfirmGC_clicked(); break;
        case 7: _t->on_MGCBeginManagement_clicked(); break;
        case 8: _t->UpdateGCTextFile((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ManageGroupChats::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManageGroupChats::backClicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ManageGroupChats::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManageGroupChats::MGCClicked)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ManageGroupChats::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_ManageGroupChats.data,
    qt_meta_data_ManageGroupChats,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ManageGroupChats::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ManageGroupChats::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ManageGroupChats.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ManageGroupChats::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void ManageGroupChats::backClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ManageGroupChats::MGCClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
