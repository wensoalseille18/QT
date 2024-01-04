#include "acteur.h"
#include"servicedb.h"
Acteur::Acteur(QString c, QString n, QString pr, QString tel)
{
    code=c;
    nom=n;
    prenom=pr;
    telephone=tel;

}
bool Acteur::Enregistrer(Acteur acteur)
{
    //Creation d'un objet connexion
    ServiceDB service;
    QString req1="INSERT INTO (Code,Nom,Prenom,Telephone) VALUES ('"+acteur.getCode()+"','"+acteur.getNom()+"','"+acteur.getPrenom()+"','"+acteur.getTelephone()+"')";
    return service.requeteInsert(req1);
}
QSqlQuery Acteur::Rechercher(QString code)
{
    //Creation d'un objet connexion
    ServiceDB service;
    QString req2="select* from acteur where code='"+code+"'";
    return service.requeteSearch(req2);
}

bool Acteur::Modifier(Acteur acteur)
{
    //Creation d'un objet connexion
    ServiceDB service;
    QString req3="update acteur set nom='"+acteur.getNom()+"',prenom='"+acteur.getPrenom()+"',telephone='"+acteur.getTelephone()+"' where code='"+acteur.getCode()+"'";
    return service.requeteUpdate(req3);
}
