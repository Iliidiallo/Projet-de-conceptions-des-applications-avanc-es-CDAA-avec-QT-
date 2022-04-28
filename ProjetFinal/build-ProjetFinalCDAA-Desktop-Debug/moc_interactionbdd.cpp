/****************************************************************************
** Meta object code from reading C++ file 'interactionbdd.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ProjetFinalCDAA/interactionbdd.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'interactionbdd.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_InteractionBDD_t {
    QByteArrayData data[13];
    char stringdata0[195];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InteractionBDD_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InteractionBDD_t qt_meta_stringdata_InteractionBDD = {
    {
QT_MOC_LITERAL(0, 0, 14), // "InteractionBDD"
QT_MOC_LITERAL(1, 15, 19), // "bddAjoutInteraction"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 4), // "int&"
QT_MOC_LITERAL(4, 41, 12), // "Interaction&"
QT_MOC_LITERAL(5, 54, 19), // "bddListeInteraction"
QT_MOC_LITERAL(6, 74, 23), // "std::list<Interaction>&"
QT_MOC_LITERAL(7, 98, 22), // "bddListeInteractionALL"
QT_MOC_LITERAL(8, 121, 23), // "bddRechercheInteraction"
QT_MOC_LITERAL(9, 145, 8), // "QString&"
QT_MOC_LITERAL(10, 154, 27), // "bddRechercheInteractionCont"
QT_MOC_LITERAL(11, 182, 6), // "isOpen"
QT_MOC_LITERAL(12, 189, 5) // "bool&"

    },
    "InteractionBDD\0bddAjoutInteraction\0\0"
    "int&\0Interaction&\0bddListeInteraction\0"
    "std::list<Interaction>&\0bddListeInteractionALL\0"
    "bddRechercheInteraction\0QString&\0"
    "bddRechercheInteractionCont\0isOpen\0"
    "bool&"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InteractionBDD[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x0a /* Public */,
       5,    2,   49,    2, 0x0a /* Public */,
       7,    1,   54,    2, 0x0a /* Public */,
       8,    3,   57,    2, 0x0a /* Public */,
      10,    4,   64,    2, 0x0a /* Public */,
      11,    1,   73,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4,    2,    2,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 6,    2,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 9, 0x80000000 | 6,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 9, 0x80000000 | 9, 0x80000000 | 6,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 12,    2,

       0        // eod
};

void InteractionBDD::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InteractionBDD *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->bddAjoutInteraction((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Interaction(*)>(_a[2]))); break;
        case 1: _t->bddListeInteraction((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< std::list<Interaction>(*)>(_a[2]))); break;
        case 2: _t->bddListeInteractionALL((*reinterpret_cast< std::list<Interaction>(*)>(_a[1]))); break;
        case 3: _t->bddRechercheInteraction((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< std::list<Interaction>(*)>(_a[3]))); break;
        case 4: _t->bddRechercheInteractionCont((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< std::list<Interaction>(*)>(_a[4]))); break;
        case 5: _t->isOpen((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject InteractionBDD::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_InteractionBDD.data,
    qt_meta_data_InteractionBDD,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *InteractionBDD::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InteractionBDD::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InteractionBDD.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int InteractionBDD::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
