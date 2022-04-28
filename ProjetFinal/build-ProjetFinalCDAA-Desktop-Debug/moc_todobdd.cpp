/****************************************************************************
** Meta object code from reading C++ file 'todobdd.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ProjetFinalCDAA/todobdd.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'todobdd.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TodoBDD_t {
    QByteArrayData data[13];
    char stringdata0[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TodoBDD_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TodoBDD_t qt_meta_stringdata_TodoBDD = {
    {
QT_MOC_LITERAL(0, 0, 7), // "TodoBDD"
QT_MOC_LITERAL(1, 8, 12), // "bddAjoutTodo"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 4), // "int&"
QT_MOC_LITERAL(4, 27, 5), // "Todo&"
QT_MOC_LITERAL(5, 33, 19), // "bddListeTodoContact"
QT_MOC_LITERAL(6, 53, 16), // "std::list<Todo>&"
QT_MOC_LITERAL(7, 70, 18), // "bddListeALLContact"
QT_MOC_LITERAL(8, 89, 20), // "bddRechercheTodoCont"
QT_MOC_LITERAL(9, 110, 8), // "QString&"
QT_MOC_LITERAL(10, 119, 23), // "bddRechercheALLTodoCont"
QT_MOC_LITERAL(11, 143, 6), // "isOpen"
QT_MOC_LITERAL(12, 150, 5) // "bool&"

    },
    "TodoBDD\0bddAjoutTodo\0\0int&\0Todo&\0"
    "bddListeTodoContact\0std::list<Todo>&\0"
    "bddListeALLContact\0bddRechercheTodoCont\0"
    "QString&\0bddRechercheALLTodoCont\0"
    "isOpen\0bool&"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TodoBDD[] = {

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
       8,    4,   57,    2, 0x0a /* Public */,
      10,    3,   66,    2, 0x0a /* Public */,
      11,    1,   73,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4,    2,    2,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 6,    2,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 9, 0x80000000 | 9, 0x80000000 | 6,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 9, 0x80000000 | 6,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 12,    2,

       0        // eod
};

void TodoBDD::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TodoBDD *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->bddAjoutTodo((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Todo(*)>(_a[2]))); break;
        case 1: _t->bddListeTodoContact((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< std::list<Todo>(*)>(_a[2]))); break;
        case 2: _t->bddListeALLContact((*reinterpret_cast< std::list<Todo>(*)>(_a[1]))); break;
        case 3: _t->bddRechercheTodoCont((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< std::list<Todo>(*)>(_a[4]))); break;
        case 4: _t->bddRechercheALLTodoCont((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< std::list<Todo>(*)>(_a[3]))); break;
        case 5: _t->isOpen((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TodoBDD::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_TodoBDD.data,
    qt_meta_data_TodoBDD,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TodoBDD::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TodoBDD::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TodoBDD.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TodoBDD::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
