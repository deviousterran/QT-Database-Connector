#include <QCoreApplication>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include <dbconnector.h>
#include <QSqlRecord>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString databasePath = "C:/Users/dan/workspace/RouteImporter/src/Routes.db";
    QString querybs = "Select invoiceNumber, shipQuantity, salesRep from route WHERE salesRep = 'JJ'";
    QSqlQuery results;

    DBConnector dbc(databasePath);

    results = dbc.rawQuery(querybs);
    //dbc.rawQuery(querybs).record().

       qDebug() << results.size();
    while(results.next()){
        qDebug() << "invoiceNumber is:" << results.value(0).toString();
        qDebug() << "Ship Quantity is" << results.value(1).toString();
        qDebug() << "Sales Rep is:" << results.value(2).toString();
    }

    return a.exec();
}
