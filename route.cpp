#include "route.h"

Route::Route()
{




}

int Route::warehouse() const
{
    return mWarehouse;
}

void Route::setWarehouse(int warehouse)
{
    mWarehouse = warehouse;
}

int Route::customerNumber() const
{
    return mCustomerNumber;
}

void Route::setCustomerNumber(int customerNumber)
{
    mCustomerNumber = customerNumber;
}

QString Route::salesRep() const
{
    return mSalesRep;
}

void Route::setSalesRep(const QString &salesRep)
{
    mSalesRep = salesRep;
}
