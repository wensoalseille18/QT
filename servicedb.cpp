#include "servicedb.h"
#include<QSqlError>
#include<QString>
#include<QSqlQuery>
ServiceDB::ServiceDB()
{
    QSqlDatabase db=QSqlDatabase::addDatabase("QODBC");
            db.setDatabaseName("datasourcetest"); //DSN que nous venons de creer.
            db.setUserName("root");
            db.setPassword("");
            if(db.open()==false)
                QMessageBox::information(NULL, "message",""+db.lastError().text());
}
/*Fonction pour executer une requete insert*/
bool ServiceDB::requeteInsert(QString req)
{
    QSqlQuery query;
    bool etat=false;
    if(query.exec(req))
        etat=true;
    else
        QMessageBox::information(NULL,"information",""+query.lastError().text());
                return etat;

}

/*Fonction pour executer une requet select*/
 QSqlQuery ServiceDB::requeteSearch(QString req)
{
    QSqlQuery query;
    if(query.exec(req)==false)
        QMessageBox::information(NULL,"information",""+query.lastError().text());
                return query;

}
bool ServiceDB::requeteUpdate(QString req)
{
    QSqlQuery query;
    if(query.exec(req))
        return false;
    else
        return true;

}
