#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include "MySet.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_insert_clicked();

    void on_erase_clicked();

    void on_size_clicked();

private:
    void clear() ;

    Ui::MainWindow *ui;
    MySet<QString> *set;
};
#endif // MAINWINDOW_H
