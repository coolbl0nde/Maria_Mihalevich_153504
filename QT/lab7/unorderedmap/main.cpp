#include "mainwindow.h"
#include"unorderedmap.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    UnorderedMap<int> b;
    b.insert(113,213);
    b.insert(114,564);
    b.insert(123,213);
    b.insert(124,564);
    b.insert(125,324);
    b.insert(126,657);
    b.insert(128,657);
    b.insert(127,657);
    b.insert(129,657);
    b.insert(133,213);
    b.insert(134,564);
    b.insert(135,324);
    b.insert(136,657);
    b.insert(138,657);
    b.insert(137,657);
    b.insert(139,657);
    b.insert(143,213);
    b.insert(144,564);
    b.insert(145,324);
    b.insert(146,657);
    b.insert(148,657);
    b.insert(147,657);
    b.insert(149,657);
    qDebug() <<b.contains(123) << " " << b.contains(127);

    return a.exec();
}
