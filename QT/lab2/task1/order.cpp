#include "order.h"

Order::Order()
{

}
Order::Order(QString group, QString brand, QDate Date, QString condition)
{
    this->group = group;
    this->brand = brand;
    this->Date = Date;
    this->condition = condition;
}


QString Order::toString()
{
    QString result = "";
    result = "\nНаименование изделия : " + group + "\nФирма : " + brand + "\nДата поступления : " + Date.toString("dd.MM.yyyy") + "\nСостояние : " + condition + "\n\n";
    return result;
}

int Order::getDate()
{
    QString date = Date.toString("dd.MM.yyyy");

    int day, month,year;
}


