#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QFileDialog>
#include <QMainWindow>
#include <list.h>
#include "order.h"

#include <QDebug>
#include <QMessageBox>
#include <QRegularExpression>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void quickSort();

private slots:
    void on_addFile_clicked();
    void readFile ();
    void showInfo();
    void on_exit_clicked();
    void on_pushButton_clicked();
    void on_deleteEl_clicked();
    void editEl();
    void on_tableWidget_itemSelectionChanged();
    void on_pushButton_2_clicked();

    void on_search_clicked();

    void on_deleteEl_2_clicked();

    void on_done_clicked();

    void on_done_2_clicked();

private:
    Ui::MainWindow *ui;
    QString FilePath;
    List* done;
    List* not_done;
    bool d=true, n_d=true;
    Order *o[100]={};
    int amount=64;
};
#endif // MAINWINDOW_H
