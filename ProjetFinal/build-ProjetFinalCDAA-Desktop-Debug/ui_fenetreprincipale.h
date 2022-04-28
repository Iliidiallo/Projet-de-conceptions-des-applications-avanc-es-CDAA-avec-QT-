/********************************************************************************
** Form generated from reading UI file 'fenetreprincipale.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FENETREPRINCIPALE_H
#define UI_FENETREPRINCIPALE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FenetrePrincipale
{
public:
    QAction *actionCr_er_un_contact;
    QAction *actionModifier_un_contact;
    QAction *actionSupprimer_un_contact;
    QAction *actionAjouter_une_int_raction;
    QAction *actionListes_d_int_raction;
    QAction *actionAjouter_des_taches;
    QAction *actionchercher_un_contact;
    QAction *actionInteraction_entre_deux_dates;
    QAction *actionCollecteDesTaches;
    QAction *actionTaches_pour_tous_les_contacts;
    QAction *actionNombre_de_contact;
    QAction *actionInteraction_d_un_contact_entre_deux_dates;
    QAction *actionApropos;
    QWidget *centralwidget;
    QTextEdit *afficherTexte;
    QPushButton *BAfficher;
    QLabel *BNombrecontact;
    QPushButton *BAffichetousInteraction;
    QPushButton *boutontodo;
    QTextEdit *textEditIntraction;
    QTextEdit *textEditTodo;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *Lheure;
    QPushButton *Bjson;
    QPushButton *BJsonInteraction;
    QMenuBar *menubar;
    QMenu *menuContact;
    QMenu *menuInteraction;
    QMenu *menuRechercher;
    QMenu *menuRequetes;
    QMenu *menuApropos;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *FenetrePrincipale)
    {
        if (FenetrePrincipale->objectName().isEmpty())
            FenetrePrincipale->setObjectName(QString::fromUtf8("FenetrePrincipale"));
        FenetrePrincipale->resize(1214, 788);
        actionCr_er_un_contact = new QAction(FenetrePrincipale);
        actionCr_er_un_contact->setObjectName(QString::fromUtf8("actionCr_er_un_contact"));
        actionModifier_un_contact = new QAction(FenetrePrincipale);
        actionModifier_un_contact->setObjectName(QString::fromUtf8("actionModifier_un_contact"));
        actionSupprimer_un_contact = new QAction(FenetrePrincipale);
        actionSupprimer_un_contact->setObjectName(QString::fromUtf8("actionSupprimer_un_contact"));
        actionAjouter_une_int_raction = new QAction(FenetrePrincipale);
        actionAjouter_une_int_raction->setObjectName(QString::fromUtf8("actionAjouter_une_int_raction"));
        actionListes_d_int_raction = new QAction(FenetrePrincipale);
        actionListes_d_int_raction->setObjectName(QString::fromUtf8("actionListes_d_int_raction"));
        actionAjouter_des_taches = new QAction(FenetrePrincipale);
        actionAjouter_des_taches->setObjectName(QString::fromUtf8("actionAjouter_des_taches"));
        actionchercher_un_contact = new QAction(FenetrePrincipale);
        actionchercher_un_contact->setObjectName(QString::fromUtf8("actionchercher_un_contact"));
        actionInteraction_entre_deux_dates = new QAction(FenetrePrincipale);
        actionInteraction_entre_deux_dates->setObjectName(QString::fromUtf8("actionInteraction_entre_deux_dates"));
        actionCollecteDesTaches = new QAction(FenetrePrincipale);
        actionCollecteDesTaches->setObjectName(QString::fromUtf8("actionCollecteDesTaches"));
        actionTaches_pour_tous_les_contacts = new QAction(FenetrePrincipale);
        actionTaches_pour_tous_les_contacts->setObjectName(QString::fromUtf8("actionTaches_pour_tous_les_contacts"));
        actionNombre_de_contact = new QAction(FenetrePrincipale);
        actionNombre_de_contact->setObjectName(QString::fromUtf8("actionNombre_de_contact"));
        actionInteraction_d_un_contact_entre_deux_dates = new QAction(FenetrePrincipale);
        actionInteraction_d_un_contact_entre_deux_dates->setObjectName(QString::fromUtf8("actionInteraction_d_un_contact_entre_deux_dates"));
        actionApropos = new QAction(FenetrePrincipale);
        actionApropos->setObjectName(QString::fromUtf8("actionApropos"));
        centralwidget = new QWidget(FenetrePrincipale);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        afficherTexte = new QTextEdit(centralwidget);
        afficherTexte->setObjectName(QString::fromUtf8("afficherTexte"));
        afficherTexte->setGeometry(QRect(10, 50, 991, 351));
        BAfficher = new QPushButton(centralwidget);
        BAfficher->setObjectName(QString::fromUtf8("BAfficher"));
        BAfficher->setGeometry(QRect(1010, 50, 151, 81));
        BNombrecontact = new QLabel(centralwidget);
        BNombrecontact->setObjectName(QString::fromUtf8("BNombrecontact"));
        BNombrecontact->setGeometry(QRect(650, 10, 511, 31));
        BAffichetousInteraction = new QPushButton(centralwidget);
        BAffichetousInteraction->setObjectName(QString::fromUtf8("BAffichetousInteraction"));
        BAffichetousInteraction->setGeometry(QRect(440, 460, 161, 101));
        boutontodo = new QPushButton(centralwidget);
        boutontodo->setObjectName(QString::fromUtf8("boutontodo"));
        boutontodo->setGeometry(QRect(1090, 460, 121, 81));
        textEditIntraction = new QTextEdit(centralwidget);
        textEditIntraction->setObjectName(QString::fromUtf8("textEditIntraction"));
        textEditIntraction->setGeometry(QRect(10, 450, 421, 251));
        textEditTodo = new QTextEdit(centralwidget);
        textEditTodo->setObjectName(QString::fromUtf8("textEditTodo"));
        textEditTodo->setGeometry(QRect(630, 460, 441, 251));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 401, 17));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 420, 421, 17));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(670, 420, 381, 20));
        Lheure = new QLabel(centralwidget);
        Lheure->setObjectName(QString::fromUtf8("Lheure"));
        Lheure->setGeometry(QRect(20, 716, 81, 21));
        Bjson = new QPushButton(centralwidget);
        Bjson->setObjectName(QString::fromUtf8("Bjson"));
        Bjson->setGeometry(QRect(1010, 140, 141, 51));
        BJsonInteraction = new QPushButton(centralwidget);
        BJsonInteraction->setObjectName(QString::fromUtf8("BJsonInteraction"));
        BJsonInteraction->setGeometry(QRect(450, 570, 151, 51));
        FenetrePrincipale->setCentralWidget(centralwidget);
        menubar = new QMenuBar(FenetrePrincipale);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1214, 22));
        menuContact = new QMenu(menubar);
        menuContact->setObjectName(QString::fromUtf8("menuContact"));
        menuInteraction = new QMenu(menubar);
        menuInteraction->setObjectName(QString::fromUtf8("menuInteraction"));
        menuRechercher = new QMenu(menubar);
        menuRechercher->setObjectName(QString::fromUtf8("menuRechercher"));
        menuRequetes = new QMenu(menubar);
        menuRequetes->setObjectName(QString::fromUtf8("menuRequetes"));
        menuApropos = new QMenu(menubar);
        menuApropos->setObjectName(QString::fromUtf8("menuApropos"));
        FenetrePrincipale->setMenuBar(menubar);
        statusbar = new QStatusBar(FenetrePrincipale);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        FenetrePrincipale->setStatusBar(statusbar);

        menubar->addAction(menuContact->menuAction());
        menubar->addAction(menuInteraction->menuAction());
        menubar->addAction(menuRechercher->menuAction());
        menubar->addAction(menuRequetes->menuAction());
        menubar->addAction(menuApropos->menuAction());
        menuContact->addSeparator();
        menuContact->addAction(actionCr_er_un_contact);
        menuContact->addAction(actionModifier_un_contact);
        menuContact->addAction(actionSupprimer_un_contact);
        menuInteraction->addSeparator();
        menuInteraction->addAction(actionAjouter_une_int_raction);
        menuInteraction->addAction(actionListes_d_int_raction);
        menuRechercher->addAction(actionchercher_un_contact);
        menuRequetes->addAction(actionInteraction_entre_deux_dates);
        menuRequetes->addAction(actionInteraction_d_un_contact_entre_deux_dates);
        menuRequetes->addAction(actionCollecteDesTaches);
        menuRequetes->addAction(actionTaches_pour_tous_les_contacts);
        menuApropos->addSeparator();
        menuApropos->addAction(actionApropos);

        retranslateUi(FenetrePrincipale);

        QMetaObject::connectSlotsByName(FenetrePrincipale);
    } // setupUi

    void retranslateUi(QMainWindow *FenetrePrincipale)
    {
        FenetrePrincipale->setWindowTitle(QApplication::translate("FenetrePrincipale", "FenetrePrincipale", nullptr));
        actionCr_er_un_contact->setText(QApplication::translate("FenetrePrincipale", "Cr\303\251er un contact", nullptr));
        actionModifier_un_contact->setText(QApplication::translate("FenetrePrincipale", "Modifier un contact", nullptr));
        actionSupprimer_un_contact->setText(QApplication::translate("FenetrePrincipale", "Supprimer un contact", nullptr));
        actionAjouter_une_int_raction->setText(QApplication::translate("FenetrePrincipale", "Ajouter une int\303\251raction", nullptr));
        actionListes_d_int_raction->setText(QApplication::translate("FenetrePrincipale", "Listes d'int\303\251raction", nullptr));
        actionAjouter_des_taches->setText(QApplication::translate("FenetrePrincipale", "Ajouter des taches", nullptr));
        actionchercher_un_contact->setText(QApplication::translate("FenetrePrincipale", "chercher un contact", nullptr));
        actionInteraction_entre_deux_dates->setText(QApplication::translate("FenetrePrincipale", "Interaction entre deux dates", nullptr));
        actionCollecteDesTaches->setText(QApplication::translate("FenetrePrincipale", "Collect des taches pour un contact", nullptr));
        actionTaches_pour_tous_les_contacts->setText(QApplication::translate("FenetrePrincipale", "Taches pour tous les contacts", nullptr));
        actionNombre_de_contact->setText(QApplication::translate("FenetrePrincipale", "Nombre de contact", nullptr));
        actionInteraction_d_un_contact_entre_deux_dates->setText(QApplication::translate("FenetrePrincipale", "Interaction d'un contact entre deux dates", nullptr));
        actionApropos->setText(QApplication::translate("FenetrePrincipale", "Apropos", nullptr));
        BAfficher->setText(QApplication::translate("FenetrePrincipale", "Listes des contacts", nullptr));
        BNombrecontact->setText(QString());
        BAffichetousInteraction->setText(QApplication::translate("FenetrePrincipale", "Listes des int\303\251ractions", nullptr));
        boutontodo->setText(QApplication::translate("FenetrePrincipale", "Listes des taches", nullptr));
        label->setText(QApplication::translate("FenetrePrincipale", "Panneau d'affichage sur tout ce qui concerne   contact :", nullptr));
        label_2->setText(QApplication::translate("FenetrePrincipale", "Panneau d'affichage sur tout ce qui concerne l'int\303\251raction :", nullptr));
        label_3->setText(QApplication::translate("FenetrePrincipale", "Panneau d'affichage sur  tout ce qui concerne le TODO :", nullptr));
        Lheure->setText(QApplication::translate("FenetrePrincipale", "hh:mm:ss", nullptr));
        Bjson->setText(QApplication::translate("FenetrePrincipale", "JSon pour contact", nullptr));
        BJsonInteraction->setText(QApplication::translate("FenetrePrincipale", "JSon Int\303\251raction", nullptr));
        menuContact->setTitle(QApplication::translate("FenetrePrincipale", "Contact", nullptr));
        menuInteraction->setTitle(QApplication::translate("FenetrePrincipale", "Interaction", nullptr));
        menuRechercher->setTitle(QApplication::translate("FenetrePrincipale", "Rechercher", nullptr));
        menuRequetes->setTitle(QApplication::translate("FenetrePrincipale", "Requetes", nullptr));
        menuApropos->setTitle(QApplication::translate("FenetrePrincipale", "Apropos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FenetrePrincipale: public Ui_FenetrePrincipale {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FENETREPRINCIPALE_H
