#ifndef DBCONNECTOR_H
#define DBCONNECTOR_H

#include <QObject>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlError>

class DBConnector
{
public:
    DBConnector(QString& path);
    QSqlQuery rawQuery(QString& query);
private:
        QSqlDatabase m_db;
};

#endif // DBCONNECTOR_H
