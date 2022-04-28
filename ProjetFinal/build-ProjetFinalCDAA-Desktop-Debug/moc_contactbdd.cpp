/****************************************************************************
** Meta object code from reading C++ file 'contactbdd.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ProjetFinalCDAA/contactbdd.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'contactbdd.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ContactBDD_t {
    QByteArrayData data[12];
    char stringdata0[164];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ContactBDD_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ContactBDD_t qt_meta_stringdata_ContactBDD = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ContactBDD"
QT_MOC_LITERAL(1, 11, 18), // "nombreTotalContact"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 4), // "int&"
QT_MOC_LITERAL(4, 36, 15), // "bddListeContact"
QT_MOC_LITERAL(5, 52, 19), // "std::list<Contact>&"
QT_MOC_LITERAL(6, 72, 17), // "bbdNouveauContact"
QT_MOC_LITERAL(7, 90, 8), // "Contact&"
QT_MOC_LITERAL(8, 99, 15), // "bddModifContact"
QT_MOC_LITERAL(9, 115, 18), // "bddSupprimeContact"
QT_MOC_LITERAL(10, 134, 20), // "bddRechercherContact"
QT_MOC_LITERAL(11, 155, 8) // "QString&"

    },
    "ContactBDD\0nombreTotalContact\0\0int&\0"
    "bddListeContact\0std::list<Contact>&\0"
    "bbdNouveauContact\0Contact&\0bddModifContact\0"
    "bddSupprimeContact\0bddRechercherContact\0"
    "QString&"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ContactBDD[] = {

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
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   47,    2, 0x0a /* Public */,
       6,    1,   50,    2, 0x0a /* Public */,
       8,    2,   53,    2, 0x0a /* Public */,
       9,    1,   58,    2, 0x0a /* Public */,
      10,    4,   61,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 7,    2,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 11, 0x80000000 | 11, 0x80000000 | 5,    2,    2,    2,    2,

       0        // eod
};

void ContactBDD::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ContactBDD *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nombreTotalContact((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->bddListeContact((*reinterpret_cast< std::list<Contact>(*)>(_a[1]))); break;
        case 2: _t->bbdNouveauContact((*reinterpret_cast< Contact(*)>(_a[1]))); break;
        case 3: _t->bddModifContact((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Contact(*)>(_a[2]))); break;
        case 4: _t->bddSupprimeContact((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->bddRechercherContact((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< std::list<Contact>(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ContactBDD::*)(int & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ContactBDD::nombreTotalContact)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ContactBDD::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ContactBDD.data,
    qt_meta_data_ContactBDD,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ContactBDD::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ContactBDD::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ContactBDD.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ContactBDD::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void ContactBDD::nombreTotalContact(int & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
