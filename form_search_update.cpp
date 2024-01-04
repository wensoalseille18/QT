#include "form_search_update.h"
#include"acteur.h"
#include<QMessageBox>

Form_Search_Update::Form_Search_Update(QWidget *parent) : QWidget(parent)
{
    setWindowTitle("Rec");
    setFixedSize(600,400);
    lcode=new QLabel("Saisir Code");
    lnom=new QLabel("Saisir Nom");
    lprenom=new QLabel("Saisir Prenom");
    ltelephone=new QLabel("Saisir Telephone");

    tcode=new QLineEdit;
    tnom=new QLineEdit();
    tprenom=new QLineEdit();
    ttelephone=new QLineEdit();

    brechercher=new QPushButton("RECHERCHER");
    brechercher->setFixedSize(150,100);
    bmodifier=new QPushButton("MODIFIER");
    bmodifier->setFixedSize(150,100);

    gridform=new QGridLayout;
    gridform->addWidget(lcode,0,0);
    gridform->addWidget(tcode,0,1);
    gridform->addWidget(brechercher,0,2,2,2);
    gridform->addWidget(lnom,1,0);
    gridform->addWidget(tnom,1,1);
    gridform->addWidget(lprenom,2,0);
    gridform->addWidget(tprenom,2,1);
    gridform->addWidget(ltelephone,3,0);
    gridform->addWidget(ttelephone,3,1);
    gridform->addWidget(bmodifier,2,2,2,2);
    setLayout(gridform);

connect(brechercher,SIGNAL(clicked(bool)),this,SLOT(Rechercher()));
connect(bmodifier,SIGNAL(clicked(bool)),this,SLOT(Modifier()));

}
void Form_Search_Update::Rechercher()
{
    QSqlQuery result=Acteur::Rechercher(tcode->text());
    if(result.next())
    {
        tnom->setText(result.value(1).toString());
        tprenom->setText(result.value(2).toString());
        ttelephone->setText(result.value(3).toString());
    }
    else
        QMessageBox::information(this,"Information","Acteur n'existe pas");
}
void Form_Search_Update::Modifier()
{
    Acteur acteur(tcode->text(),tnom->text(),tprenom->text(),ttelephone->text());
    if(Acteur::Modifier(acteur)==true)
        QMessageBox::information(NULL,"Information","Acteur d'identifiant"+tcode->text()+"Modifie");
                else
                QMessageBox::information(NULL,"Information","Modification non effectuee");
}
