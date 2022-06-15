#include "widget.h"
#include <deque>
#include <QApplication>
#include <iostream>
#include "deque.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    return a.exec();
}
