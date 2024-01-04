#ifndef SERVICEDB_H
#define SERVICEDB_H
#include<QSqlDatabase>
#include<QSqlQuery>
#include<QMessageBox>
#include<QString>

class ServiceDB
{
public:
    ServiceDB();
    bool requeteInsert(QString);
    QSqlQuery requeteSearch(QString);
    bool requeteUpdate(QString);
};

#endif // SERVICEDB_H
