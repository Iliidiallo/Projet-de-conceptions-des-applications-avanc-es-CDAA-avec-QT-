/****************************************************************************
** Meta object code from reading C++ file 'fenetreprincipale.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ProjetFinalCDAA/fenetreprincipale.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fenetreprincipale.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FenetrePrincipale_t {
    QByteArrayData data[65];
    char stringdata0[1168];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FenetrePrincipale_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FenetrePrincipale_t qt_meta_stringdata_FenetrePrincipale = {
    {
QT_MOC_LITERAL(0, 0, 17), // "FenetrePrincipale"
QT_MOC_LITERAL(1, 18, 17), // "sigGetContactList"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 19), // "std::list<Contact>&"
QT_MOC_LITERAL(4, 57, 9), // "sigInsert"
QT_MOC_LITERAL(5, 67, 8), // "Contact&"
QT_MOC_LITERAL(6, 76, 12), // "sigSupprimer"
QT_MOC_LITERAL(7, 89, 4), // "int&"
QT_MOC_LITERAL(8, 94, 11), // "sigModifier"
QT_MOC_LITERAL(9, 106, 21), // "sigRechercheUnContact"
QT_MOC_LITERAL(10, 128, 8), // "QString&"
QT_MOC_LITERAL(11, 137, 19), // "sigAjoutInteraction"
QT_MOC_LITERAL(12, 157, 12), // "Interaction&"
QT_MOC_LITERAL(13, 170, 19), // "sigListeInteraction"
QT_MOC_LITERAL(14, 190, 23), // "std::list<Interaction>&"
QT_MOC_LITERAL(15, 214, 22), // "sigListeInteractionALL"
QT_MOC_LITERAL(16, 237, 23), // "sigRechercheInteraction"
QT_MOC_LITERAL(17, 261, 27), // "sigRechercheInteractionCont"
QT_MOC_LITERAL(18, 289, 12), // "sigAjoutTodo"
QT_MOC_LITERAL(19, 302, 5), // "Todo&"
QT_MOC_LITERAL(20, 308, 19), // "sigListeTodoContact"
QT_MOC_LITERAL(21, 328, 16), // "std::list<Todo>&"
QT_MOC_LITERAL(22, 345, 18), // "sigListeALLContact"
QT_MOC_LITERAL(23, 364, 20), // "sigRechercheTodoCont"
QT_MOC_LITERAL(24, 385, 23), // "sigRechercheALLTodoCont"
QT_MOC_LITERAL(25, 409, 14), // "CreerUnContact"
QT_MOC_LITERAL(26, 424, 16), // "SupprimerContact"
QT_MOC_LITERAL(27, 441, 15), // "ModifierContact"
QT_MOC_LITERAL(28, 457, 15), // "chercherContact"
QT_MOC_LITERAL(29, 473, 16), // "AjoutInteraction"
QT_MOC_LITERAL(30, 490, 16), // "ListeInteraction"
QT_MOC_LITERAL(31, 507, 22), // "InteractionsEntre2Date"
QT_MOC_LITERAL(32, 530, 27), // "RechercheInteractionContact"
QT_MOC_LITERAL(33, 558, 23), // "AfficheTachesIntervalle"
QT_MOC_LITERAL(34, 582, 20), // "AfficheTachesContact"
QT_MOC_LITERAL(35, 603, 9), // "Affichage"
QT_MOC_LITERAL(36, 613, 7), // "Apropos"
QT_MOC_LITERAL(37, 621, 13), // "demarrerHeure"
QT_MOC_LITERAL(38, 635, 15), // "CreationContact"
QT_MOC_LITERAL(39, 651, 20), // "BoutonAnnulerContact"
QT_MOC_LITERAL(40, 672, 13), // "afficherPhoto"
QT_MOC_LITERAL(41, 686, 17), // "AfficheModContact"
QT_MOC_LITERAL(42, 704, 25), // "BoutonAnnulerModification"
QT_MOC_LITERAL(43, 730, 14), // "afficherPhoto1"
QT_MOC_LITERAL(44, 745, 18), // "RechercheUnContact"
QT_MOC_LITERAL(45, 764, 23), // "BoutonAnnulerRechercher"
QT_MOC_LITERAL(46, 788, 18), // "suppressionContact"
QT_MOC_LITERAL(47, 807, 22), // "BoutonAnnulerSupprimer"
QT_MOC_LITERAL(48, 830, 12), // "TotalContact"
QT_MOC_LITERAL(49, 843, 19), // "AjoutUneInteraction"
QT_MOC_LITERAL(50, 863, 18), // "AnnulerInteraction"
QT_MOC_LITERAL(51, 882, 23), // "ListeInteractionContact"
QT_MOC_LITERAL(52, 906, 23), // "AnnulerListeInteraction"
QT_MOC_LITERAL(53, 930, 28), // "AfficheToutesLesInteractions"
QT_MOC_LITERAL(54, 959, 35), // "RechercherInteractionEntreDeu..."
QT_MOC_LITERAL(55, 995, 32), // "AnnulerInteractionEntreDeuxDates"
QT_MOC_LITERAL(56, 1028, 11), // "FindContact"
QT_MOC_LITERAL(57, 1040, 13), // "CancelContact"
QT_MOC_LITERAL(58, 1054, 10), // "ListeTodos"
QT_MOC_LITERAL(59, 1065, 17), // "RechercheTodoCont"
QT_MOC_LITERAL(60, 1083, 24), // "BoutonAnnulerRechercherT"
QT_MOC_LITERAL(61, 1108, 20), // "RechercheALLTodoCont"
QT_MOC_LITERAL(62, 1129, 10), // "AnnulerALL"
QT_MOC_LITERAL(63, 1140, 11), // "JsonContact"
QT_MOC_LITERAL(64, 1152, 15) // "JsonInteraction"

    },
    "FenetrePrincipale\0sigGetContactList\0"
    "\0std::list<Contact>&\0sigInsert\0Contact&\0"
    "sigSupprimer\0int&\0sigModifier\0"
    "sigRechercheUnContact\0QString&\0"
    "sigAjoutInteraction\0Interaction&\0"
    "sigListeInteraction\0std::list<Interaction>&\0"
    "sigListeInteractionALL\0sigRechercheInteraction\0"
    "sigRechercheInteractionCont\0sigAjoutTodo\0"
    "Todo&\0sigListeTodoContact\0std::list<Todo>&\0"
    "sigListeALLContact\0sigRechercheTodoCont\0"
    "sigRechercheALLTodoCont\0CreerUnContact\0"
    "SupprimerContact\0ModifierContact\0"
    "chercherContact\0AjoutInteraction\0"
    "ListeInteraction\0InteractionsEntre2Date\0"
    "RechercheInteractionContact\0"
    "AfficheTachesIntervalle\0AfficheTachesContact\0"
    "Affichage\0Apropos\0demarrerHeure\0"
    "CreationContact\0BoutonAnnulerContact\0"
    "afficherPhoto\0AfficheModContact\0"
    "BoutonAnnulerModification\0afficherPhoto1\0"
    "RechercheUnContact\0BoutonAnnulerRechercher\0"
    "suppressionContact\0BoutonAnnulerSupprimer\0"
    "TotalContact\0AjoutUneInteraction\0"
    "AnnulerInteraction\0ListeInteractionContact\0"
    "AnnulerListeInteraction\0"
    "AfficheToutesLesInteractions\0"
    "RechercherInteractionEntreDeuxDates\0"
    "AnnulerInteractionEntreDeuxDates\0"
    "FindContact\0CancelContact\0ListeTodos\0"
    "RechercheTodoCont\0BoutonAnnulerRechercherT\0"
    "RechercheALLTodoCont\0AnnulerALL\0"
    "JsonContact\0JsonInteraction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FenetrePrincipale[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      55,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      15,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  289,    2, 0x06 /* Public */,
       4,    1,  292,    2, 0x06 /* Public */,
       6,    1,  295,    2, 0x06 /* Public */,
       8,    2,  298,    2, 0x06 /* Public */,
       9,    4,  303,    2, 0x06 /* Public */,
      11,    2,  312,    2, 0x06 /* Public */,
      13,    2,  317,    2, 0x06 /* Public */,
      15,    1,  322,    2, 0x06 /* Public */,
      16,    3,  325,    2, 0x06 /* Public */,
      17,    4,  332,    2, 0x06 /* Public */,
      18,    2,  341,    2, 0x06 /* Public */,
      20,    2,  346,    2, 0x06 /* Public */,
      22,    1,  351,    2, 0x06 /* Public */,
      23,    4,  354,    2, 0x06 /* Public */,
      24,    3,  363,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      25,    0,  370,    2, 0x08 /* Private */,
      26,    0,  371,    2, 0x08 /* Private */,
      27,    0,  372,    2, 0x08 /* Private */,
      28,    0,  373,    2, 0x08 /* Private */,
      29,    0,  374,    2, 0x08 /* Private */,
      30,    0,  375,    2, 0x08 /* Private */,
      31,    0,  376,    2, 0x08 /* Private */,
      32,    0,  377,    2, 0x08 /* Private */,
      33,    0,  378,    2, 0x08 /* Private */,
      34,    0,  379,    2, 0x08 /* Private */,
      35,    0,  380,    2, 0x0a /* Public */,
      36,    0,  381,    2, 0x0a /* Public */,
      37,    0,  382,    2, 0x0a /* Public */,
      38,    0,  383,    2, 0x0a /* Public */,
      39,    0,  384,    2, 0x0a /* Public */,
      40,    0,  385,    2, 0x0a /* Public */,
      41,    0,  386,    2, 0x0a /* Public */,
      42,    0,  387,    2, 0x0a /* Public */,
      43,    0,  388,    2, 0x0a /* Public */,
      44,    0,  389,    2, 0x0a /* Public */,
      45,    0,  390,    2, 0x0a /* Public */,
      46,    0,  391,    2, 0x0a /* Public */,
      47,    0,  392,    2, 0x0a /* Public */,
      48,    1,  393,    2, 0x0a /* Public */,
      49,    0,  396,    2, 0x0a /* Public */,
      50,    0,  397,    2, 0x0a /* Public */,
      51,    0,  398,    2, 0x0a /* Public */,
      52,    0,  399,    2, 0x0a /* Public */,
      53,    0,  400,    2, 0x0a /* Public */,
      54,    0,  401,    2, 0x0a /* Public */,
      55,    0,  402,    2, 0x0a /* Public */,
      56,    0,  403,    2, 0x0a /* Public */,
      57,    0,  404,    2, 0x0a /* Public */,
      58,    0,  405,    2, 0x0a /* Public */,
      59,    0,  406,    2, 0x0a /* Public */,
      60,    0,  407,    2, 0x0a /* Public */,
      61,    0,  408,    2, 0x0a /* Public */,
      62,    0,  409,    2, 0x0a /* Public */,
      63,    0,  410,    2, 0x0a /* Public */,
      64,    0,  411,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 5,    2,    2,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 10, 0x80000000 | 10, 0x80000000 | 3,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 12,    2,    2,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 14,    2,    2,
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 10, 0x80000000 | 14,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 10, 0x80000000 | 10, 0x80000000 | 14,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 19,    2,    2,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 21,    2,    2,
    QMetaType::Void, 0x80000000 | 21,    2,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 10, 0x80000000 | 10, 0x80000000 | 21,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 10, 0x80000000 | 21,    2,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FenetrePrincipale::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FenetrePrincipale *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sigGetContactList((*reinterpret_cast< std::list<Contact>(*)>(_a[1]))); break;
        case 1: _t->sigInsert((*reinterpret_cast< Contact(*)>(_a[1]))); break;
        case 2: _t->sigSupprimer((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->sigModifier((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Contact(*)>(_a[2]))); break;
        case 4: _t->sigRechercheUnContact((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< std::list<Contact>(*)>(_a[4]))); break;
        case 5: _t->sigAjoutInteraction((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Interaction(*)>(_a[2]))); break;
        case 6: _t->sigListeInteraction((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< std::list<Interaction>(*)>(_a[2]))); break;
        case 7: _t->sigListeInteractionALL((*reinterpret_cast< std::list<Interaction>(*)>(_a[1]))); break;
        case 8: _t->sigRechercheInteraction((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< std::list<Interaction>(*)>(_a[3]))); break;
        case 9: _t->sigRechercheInteractionCont((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< std::list<Interaction>(*)>(_a[4]))); break;
        case 10: _t->sigAjoutTodo((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Todo(*)>(_a[2]))); break;
        case 11: _t->sigListeTodoContact((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< std::list<Todo>(*)>(_a[2]))); break;
        case 12: _t->sigListeALLContact((*reinterpret_cast< std::list<Todo>(*)>(_a[1]))); break;
        case 13: _t->sigRechercheTodoCont((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< std::list<Todo>(*)>(_a[4]))); break;
        case 14: _t->sigRechercheALLTodoCont((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< std::list<Todo>(*)>(_a[3]))); break;
        case 15: _t->CreerUnContact(); break;
        case 16: _t->SupprimerContact(); break;
        case 17: _t->ModifierContact(); break;
        case 18: _t->chercherContact(); break;
        case 19: _t->AjoutInteraction(); break;
        case 20: _t->ListeInteraction(); break;
        case 21: _t->InteractionsEntre2Date(); break;
        case 22: _t->RechercheInteractionContact(); break;
        case 23: _t->AfficheTachesIntervalle(); break;
        case 24: _t->AfficheTachesContact(); break;
        case 25: _t->Affichage(); break;
        case 26: _t->Apropos(); break;
        case 27: _t->demarrerHeure(); break;
        case 28: _t->CreationContact(); break;
        case 29: _t->BoutonAnnulerContact(); break;
        case 30: _t->afficherPhoto(); break;
        case 31: _t->AfficheModContact(); break;
        case 32: _t->BoutonAnnulerModification(); break;
        case 33: _t->afficherPhoto1(); break;
        case 34: _t->RechercheUnContact(); break;
        case 35: _t->BoutonAnnulerRechercher(); break;
        case 36: _t->suppressionContact(); break;
        case 37: _t->BoutonAnnulerSupprimer(); break;
        case 38: _t->TotalContact((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 39: _t->AjoutUneInteraction(); break;
        case 40: _t->AnnulerInteraction(); break;
        case 41: _t->ListeInteractionContact(); break;
        case 42: _t->AnnulerListeInteraction(); break;
        case 43: _t->AfficheToutesLesInteractions(); break;
        case 44: _t->RechercherInteractionEntreDeuxDates(); break;
        case 45: _t->AnnulerInteractionEntreDeuxDates(); break;
        case 46: _t->FindContact(); break;
        case 47: _t->CancelContact(); break;
        case 48: _t->ListeTodos(); break;
        case 49: _t->RechercheTodoCont(); break;
        case 50: _t->BoutonAnnulerRechercherT(); break;
        case 51: _t->RechercheALLTodoCont(); break;
        case 52: _t->AnnulerALL(); break;
        case 53: _t->JsonContact(); break;
        case 54: _t->JsonInteraction(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FenetrePrincipale::*)(std::list<Contact> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FenetrePrincipale::sigGetContactList)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FenetrePrincipale::*)(Contact & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FenetrePrincipale::sigInsert)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FenetrePrincipale::*)(int & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FenetrePrincipale::sigSupprimer)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FenetrePrincipale::*)(int & , Contact & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FenetrePrincipale::sigModifier)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FenetrePrincipale::*)(QString & , QString & , QString & , std::list<Contact> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FenetrePrincipale::sigRechercheUnContact)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (FenetrePrincipale::*)(int & , Interaction & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FenetrePrincipale::sigAjoutInteraction)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (FenetrePrincipale::*)(int & , std::list<Interaction> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FenetrePrincipale::sigListeInteraction)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (FenetrePrincipale::*)(std::list<Interaction> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FenetrePrincipale::sigListeInteractionALL)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (FenetrePrincipale::*)(QString & , QString & , std::list<Interaction> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FenetrePrincipale::sigRechercheInteraction)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (FenetrePrincipale::*)(int & , QString & , QString & , std::list<Interaction> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FenetrePrincipale::sigRechercheInteractionCont)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (FenetrePrincipale::*)(int & , Todo & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FenetrePrincipale::sigAjoutTodo)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (FenetrePrincipale::*)(int & , std::list<Todo> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FenetrePrincipale::sigListeTodoContact)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (FenetrePrincipale::*)(std::list<Todo> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FenetrePrincipale::sigListeALLContact)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (FenetrePrincipale::*)(int & , QString & , QString & , std::list<Todo> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FenetrePrincipale::sigRechercheTodoCont)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (FenetrePrincipale::*)(QString & , QString & , std::list<Todo> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FenetrePrincipale::sigRechercheALLTodoCont)) {
                *result = 14;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FenetrePrincipale::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_FenetrePrincipale.data,
    qt_meta_data_FenetrePrincipale,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FenetrePrincipale::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FenetrePrincipale::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FenetrePrincipale.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int FenetrePrincipale::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 55)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 55;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 55)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 55;
    }
    return _id;
}

// SIGNAL 0
void FenetrePrincipale::sigGetContactList(std::list<Contact> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FenetrePrincipale::sigInsert(Contact & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FenetrePrincipale::sigSupprimer(int & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FenetrePrincipale::sigModifier(int & _t1, Contact & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void FenetrePrincipale::sigRechercheUnContact(QString & _t1, QString & _t2, QString & _t3, std::list<Contact> & _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void FenetrePrincipale::sigAjoutInteraction(int & _t1, Interaction & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void FenetrePrincipale::sigListeInteraction(int & _t1, std::list<Interaction> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void FenetrePrincipale::sigListeInteractionALL(std::list<Interaction> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void FenetrePrincipale::sigRechercheInteraction(QString & _t1, QString & _t2, std::list<Interaction> & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void FenetrePrincipale::sigRechercheInteractionCont(int & _t1, QString & _t2, QString & _t3, std::list<Interaction> & _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void FenetrePrincipale::sigAjoutTodo(int & _t1, Todo & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void FenetrePrincipale::sigListeTodoContact(int & _t1, std::list<Todo> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void FenetrePrincipale::sigListeALLContact(std::list<Todo> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void FenetrePrincipale::sigRechercheTodoCont(int & _t1, QString & _t2, QString & _t3, std::list<Todo> & _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void FenetrePrincipale::sigRechercheALLTodoCont(QString & _t1, QString & _t2, std::list<Todo> & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
