#ifndef ROUTE_H
#define ROUTE_H

#include <QObject>

class Route
{
public:


    Route();

    int warehouse() const;
    void setWarehouse(int warehouse);

    int customerNumber() const;
    void setCustomerNumber(int customerNumber);

    QString salesRep() const;
    void setSalesRep(const QString &salesRep);

private:
    int mWarehouse;
    int mCustomerNumber;
    QString mSalesRep;
    QString mRoute;
    int mStopNumber;
    QString mCreditOrder;
    int mInvoiceNumber;
    QString mInvoiceDate;
    double mInvoiceAmount;
    double mQuantityOrdered;
    double mCube;
    double mWeight;
    QString mTimeOfOrder;
    QString mShipDate;
    QString mOrderDate;
    QString mSalesRepName;
    int mQuantityShipped;
    double mNetSales;
    double mActualCost;
    double mProfit;
    double mProfitPercent;

};

#endif // ROUTE_H
