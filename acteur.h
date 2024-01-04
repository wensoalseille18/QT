#ifndef ACTEUR_H
#define ACTEUR_H
#include<QString>
#include<QSqlQuery>
class Acteur
{
public:
    Acteur(QString,QString,QString,QString);

//Les Setters et les Getters
    QString getCode(){return code;}
    QString getNom(){return nom;}
    QString getPrenom(){return prenom;}
    QString getTelephone(){return telephone;}

    void setNom(QString value){nom=value;}
    void setPrenom(QString value){prenom=value;}
    void setTelephone(QString value){telephone=value;}

//Methode
    static bool Enregistrer(Acteur);

    static QSqlQuery Rechercher(QString);
    static bool Modifier(Acteur);

//les attributs
private:
    QString code;
    QString nom;
    QString prenom;
    QString telephone;
};

#endif // ACTEUR_H
