#include "form_new_acteur.h"

Form_new_acteur::Form_new_acteur(QWidget *parent) : QWidget(parent)
{
    //Placer un titre sur la fenetre
    setWindowTitle("INSERTION DE NOUVEAU ACTEUR");
    //Fixer une dimention pour la fenetre
    setFixedSize(600,500);
    // creation des champs de texte
    tcode=new QLineEdit;
    tnom=new QLineEdit;
    tprenom=new QLineEdit;
    ttelephone=new QLineEdit;
    //creation du layout QFormLayout
    //formulaire=new QFormLayout;
    //Ajouter des lignes dans le formulaire
    formulaire->addRow("Code",tcode);
    formulaire->addRow("Nom",tnom);
    formulaire->addRow("Prenom",tprenom);
    formulaire->addRow("Telephone",ttelephone);
    //creation des bouttons
    bSave=new QPushButton("Save");
    bCancel=new QPushButton("Cancel");

    layoutboutton=new QHBoxLayout;

    layoutboutton->addWidget(bSave);
    layoutboutton->addWidget(bCancel);

    layoutprincipale=new QVBoxLayout;
    layoutprincipale->addLayout(formulaire);
    layoutprincipale->addLayout(layoutboutton);

    setLayout(layoutprincipale);

}
