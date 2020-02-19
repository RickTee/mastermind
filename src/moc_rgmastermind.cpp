/****************************************************************************
** Meta object code from reading C++ file 'rgmastermind.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "rgmastermind.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rgmastermind.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RgMasterMind_t {
    QByteArrayData data[7];
    char stringdata0[58];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RgMasterMind_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RgMasterMind_t qt_meta_stringdata_RgMasterMind = {
    {
QT_MOC_LITERAL(0, 0, 12), // "RgMasterMind"
QT_MOC_LITERAL(1, 13, 7), // "newGame"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 5), // "about"
QT_MOC_LITERAL(4, 28, 12), // "instructions"
QT_MOC_LITERAL(5, 41, 10), // "cycleColor"
QT_MOC_LITERAL(6, 52, 5) // "guess"

    },
    "RgMasterMind\0newGame\0\0about\0instructions\0"
    "cycleColor\0guess"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RgMasterMind[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       4,    0,   41,    2, 0x0a /* Public */,
       5,    0,   42,    2, 0x0a /* Public */,
       6,    0,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void RgMasterMind::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RgMasterMind *_t = static_cast<RgMasterMind *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newGame(); break;
        case 1: _t->about(); break;
        case 2: _t->instructions(); break;
        case 3: _t->cycleColor(); break;
        case 4: _t->guess(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject RgMasterMind::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_RgMasterMind.data,
      qt_meta_data_RgMasterMind,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RgMasterMind::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RgMasterMind::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RgMasterMind.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int RgMasterMind::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
