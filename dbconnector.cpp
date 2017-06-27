#include "dbconnector.h"


DBConnector::DBConnector(QString &path)
{

    m_db = QSqlDatabase::addDatabase("QSQLITE");
    m_db.setDatabaseName(path);

    if(!m_db.open()){
        qDebug() << "error: connection failed";
    }else{
        qDebug() << "connected";
    }


}

QSqlQuery DBConnector::rawQuery(QString &query){

    QSqlQuery rQuery;
    bool success = false;
    rQuery.prepare(query);
    if(rQuery.exec())
    {
        success = true;
    }
    else
    {
         qDebug() << "query error:  "
                  << rQuery.lastError();
    }
    return rQuery;


}
