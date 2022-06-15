#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <cmath>
#include <QDebug>
using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE



template <class T>
class Node {
public:
    T item;

    Node<T>* next;
    Node<T>* prev;

    Node(T item);

};

template <class T>
Node<T>::Node(T t) : item(t) {

}

template <class T>
class List_class {
private:
    Node<T>* Head;
    Node<T>* Tail;

    int List_size;

public:
    List_class();

    bool is_empty();

    void push_begin(T item);
    void push_back(T item);
    void insert(int pos, T item);
    void del(int del_pos);
    void delall();

    void deleAllNodes();

    int size();


    Node<T>* getfront();
    Node<T>* getback();

    Node<T>* operator[](const int index);
};



template <class T>
List_class<T>::List_class() : Head(nullptr), Tail(nullptr), List_size(0) {

}

template <class T>
bool List_class<T>::is_empty() {
    return Head == nullptr;
}

template <class T>
void List_class<T>::push_begin(T item) {
    Node<T>* new_node = new Node<T>(item);

    new_node->prev = nullptr;
    new_node->next = Head;

    if (is_empty()) {
        Head = new_node;
        Tail = new_node;
        List_size++;
        return;
    }

    Head->prev = new_node;
    Head = new_node;

    List_size++;
}

template <class T>
void List_class<T>::push_back(T item) {
    Node<T>* new_node = new Node<T>(item);

    new_node->next = nullptr;
    new_node->prev = Tail;

    if (is_empty()) {
        Head = new_node;
        Tail = new_node;
        List_size++;
        return;
    }

    Tail->next = new_node;
    Tail = new_node;

    List_size++;
}

template <class T>
void List_class<T>::insert(int pos, T item) {
    if (pos < 1 || pos > List_size + 1) {
        return;
    }

    if (pos == List_size + 1) {
        push_back(item);
        return;
    }
    else if (pos == 1) {
        push_begin(item);
        return;
    }


    Node<T>* Ins = Head;
    for (int i = 1; i < pos; i++) {
        Ins = Ins->next;
    }

    Node<T>* PrevIns = Ins->prev;
    Node<T>* NewIns = new Node<T>(item);

    if (PrevIns != 0 && List_size != 1)
        PrevIns->next = NewIns;

    NewIns->next = Ins;
    NewIns->prev = PrevIns;
    Ins->prev = NewIns;

    List_size++;
}
template <class T>
void List_class<T>::del(int del_pos) {
    if (del_pos < 1 || del_pos > List_size) {
        return;
    }

    Node<T>* Del = Head;

    int i = 1;
    for (i; i < del_pos; i++) {
        Del = Del->next;
    }

    Node<T>* AfterDel = Del->next;
    Node<T>* BeforeDel = Del->prev;

    if (BeforeDel != nullptr && List_size != 1) {
        BeforeDel->next = AfterDel;
    }
    if (AfterDel != nullptr && List_size != i) {
        AfterDel->prev = BeforeDel;
    }

    if (del_pos == 1)
        Head = AfterDel;
    if (del_pos == List_size)
        Tail = BeforeDel;

    delete Del;

    List_size--;
}

template <class T>
void List_class<T>::delall() {
    while (List_size != 0)
        del(1);
}

template<class T>
void List_class<T>::deleAllNodes()
{
    if (Head!= NULL){
        Node<T>* temp, *current;
        current = Head->next;

        while(current!=Head){
            temp = current->next;
            delete current;
            current = temp;
        }
        delete Head;
        Head = NULL;
    }
}

template <class T>
Node<T>* List_class<T>::getfront() {
    return Head;
}

template <class T>
Node<T>* List_class<T>::getback() {
    return Tail;
}

template <class T>
int List_class<T>::size() {
    return List_size;
}

template <class T>
Node<T>* List_class<T>::operator[](const int index) {
    if (is_empty())
        return nullptr;

    Node<T>* p = Head;
    for (int i = 0; i < index; i++) {
        p = p->next;

        if (!p)
            return nullptr;
    }

    return p;
}

void setUp();


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void setUp();

private slots:
    void on_setupButton_clicked();



    void on_createRingsButton_clicked();
    void getAnswer();

private:
    Ui::MainWindow *ui;
    List_class<int> mainList;
    //List_class<int> mainRing;
    //List_class<int> externalRing;
};

#endif // MAINWINDOW_H
