/****************************************************************************
** Meta object code from reading C++ file 'SelfBody.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../touhou/SelfBody.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SelfBody.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSSelfBodyENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSSelfBodyENDCLASS = QtMocHelpers::stringData(
    "SelfBody",
    "moveup",
    "",
    "movedown",
    "moveleft",
    "moveright"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSSelfBodyENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[9];
    char stringdata1[7];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[9];
    char stringdata5[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSSelfBodyENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSSelfBodyENDCLASS_t qt_meta_stringdata_CLASSSelfBodyENDCLASS = {
    {
        QT_MOC_LITERAL(0, 8),  // "SelfBody"
        QT_MOC_LITERAL(9, 6),  // "moveup"
        QT_MOC_LITERAL(16, 0),  // ""
        QT_MOC_LITERAL(17, 8),  // "movedown"
        QT_MOC_LITERAL(26, 8),  // "moveleft"
        QT_MOC_LITERAL(35, 9)   // "moveright"
    },
    "SelfBody",
    "moveup",
    "",
    "movedown",
    "moveleft",
    "moveright"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSelfBodyENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x08,    1 /* Private */,
       3,    0,   39,    2, 0x08,    2 /* Private */,
       4,    0,   40,    2, 0x08,    3 /* Private */,
       5,    0,   41,    2, 0x08,    4 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject SelfBody::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSSelfBodyENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSelfBodyENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSelfBodyENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SelfBody, std::true_type>,
        // method 'moveup'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'movedown'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'moveleft'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'moveright'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void SelfBody::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SelfBody *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->moveup(); break;
        case 1: _t->movedown(); break;
        case 2: _t->moveleft(); break;
        case 3: _t->moveright(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *SelfBody::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SelfBody::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSelfBodyENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QGraphicsEllipseItem"))
        return static_cast< QGraphicsEllipseItem*>(this);
    return QObject::qt_metacast(_clname);
}

int SelfBody::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
