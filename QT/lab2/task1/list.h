#ifndef LIST_H
#define LIST_H
#include <node.h>
#include "order.h"

class List                              //Создаем тип данных Список
{
    Node *Head, *Tail;                 //Указатели на адреса начала списка и его конца
public:
    List():Head(nullptr),Tail(nullptr){};    //Инициализируем адреса как пустые
    ~List();                           //Прототип деструктора
    void Show();                       //Прототип функции отображения списка на экране
    void Add(Order* x);                   //Прототип функции добавления элементов в список
    QString Print();
};


#endif // LIST_H

