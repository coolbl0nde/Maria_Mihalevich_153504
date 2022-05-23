#include "book.h"

Book::Book()
{

}
Book::Book(int number, QString author, QString name, int Date, QString publishing, int pages)
{
    this->number = number;
    this->author = author;
    this->name = name;
    this->Date = Date;
    this->publishing = publishing;
    this->pages=pages;
}
