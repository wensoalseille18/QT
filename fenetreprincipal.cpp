#include "fenetreprincipal.h"
#include "ui_fenetreprincipal.h"
#include"form_new_acteur.h"
#include"form_test.h"
#include"form_search_update.h"
#include<QStatusBar>
#include<QToolBar>
#include<QPixmap>
#include<QLabel>
#include<QMenu>
#include<QColor>
#include<QStatusBar>

FenetrePrincipal::FenetrePrincipal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FenetrePrincipal)
{
    ui->setupUi(this);
    QPixmap fo("C:/Users/50946/Documents/Projet_QT/OIP.jpg");
    ui->image_Bva->setPixmap(fo);
    setWindowTitle("Mon projet");

//    QLabel *label=new QLabel(this);
    //label->setPixmap("C:/Users/50946/Documents/Projet_QT/OIP.jpg");

//    setWindowState(Qt::WindowMaximized);
    setWindowState(Qt::WindowMaximized);
//Add les menu bar
    acteur=menuBar()->addMenu("Acteur");
    help=menuBar()->addMenu("Help");
    setting=menuBar()->addMenu("setting");

    // creation dun sous menu
    ajouter_acteur=new QAction("New",this);
    recherche=new QAction("Search",this);
    affichage=new QAction("Affichage",this);
    test=new QAction("Test",this);
    connect(test,SIGNAL(triggered(bool)),new Form_Test,SLOT(show()));
    acteur->addAction(test);
            //Attacher le sous menu new au menu file
    acteur->addAction(ajouter_acteur);
    //Placer l'evenement clic sur sous menu ajouter action
    connect(ajouter_acteur,SIGNAL(triggered(bool)),new Form_new_acteur,SLOT(show()));

    acteur->addAction(recherche);
    connect(recherche,SIGNAL(triggered(bool)),new Form_Search_Update,SLOT(show()));

    acteur->addAction(affichage);
   // connect(affichage,SIGNAL(triggered(bool)),new Affichage,SLOT(show()));
}

FenetrePrincipal::~FenetrePrincipal()
{
    delete ui;
}
