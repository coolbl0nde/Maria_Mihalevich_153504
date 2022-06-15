#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>

#include <hashTable.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void print();

private slots:
    void on_insert_clicked();

    void on_remove_clicked();

    void on_find_clicked();

    void on_findMin_clicked();

    void on_empty_clicked();

private:
    Ui::MainWindow *ui;
    HashTable table;
};
#endif // MAINWINDOW_H
