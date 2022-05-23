#ifndef ORDER_H
#define ORDER_H

#include <QString>
#include <QDateTime>

class Order{
public:
    Order ();
    Order(QString group, QString brand, QDate Date, QString condition);
    QString toString();
    int getDate();
    int number;
    QString group;
    QString brand;
    QDate Date = QDate::fromString("01.01.2000","dd.MM.yyyy");
    QString condition;

};

#endif // ORDER_H
