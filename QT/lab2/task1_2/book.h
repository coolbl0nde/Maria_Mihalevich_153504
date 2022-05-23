#ifndef BOOK_H
#define BOOK_H

#include <QString>
#include <QDateTime>

class Book{
public:
    Book ();
    Book(int number, QString author, QString name, int Date, QString publishing, int pages);
    int number;
    QString author;
    QString name;
    int Date;
    QString publishing;
    int pages;
};

#endif // BOOK_H
