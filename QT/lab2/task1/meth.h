#ifndef METH_H
#define METH_H

#include <QFile>
#include "order.h"
#include "list.h"


class Methods
{
public:
    Methods();
    QFile file;
    int countOfTrips=3;
    Order* orders[100]={};
    void LoadData();
    QString PrintData();
    QString searchOrder(int number);
};

#endif // METH_H
