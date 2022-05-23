#ifndef NODE_H
#define NODE_H
#include "order.h"

struct Node                             //Структура, являющаяся звеном списка
 {
     Order* x;                             //Значение x будет передаваться в список
     Node *Next, *Prev;                 //Указатели на адреса следующего и предыдущего элементов списка
 };

#endif // NODE_H
