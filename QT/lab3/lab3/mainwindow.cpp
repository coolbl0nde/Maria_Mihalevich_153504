#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_unique_clicked()
{
    ui->unique->setEnabled(false);
    QString text = "";

    //1 Создание
    uniquePtr<int> u_ptr1(new int(5));
    text+="Объект u_ptr1 создан\n*u_ptr1 = ";
    text+=QString::number(*u_ptr1);
    text+="\n";

    uniquePtr<int> u_ptr2(new int(10));
    text+="Объект u_ptr2 создан\n*u_ptr2 = ";
    text+=QString::number(*u_ptr2);
    text+="\n";

    //2 Swap
    u_ptr1.swap(u_ptr2);
    text+="Метод Swap:\n";

    text+="u_ptr1 = ";
    text+=QString::number(*u_ptr1);
    text+="\n";

    text+="u_ptr1 = ";
    text+=QString::number(*u_ptr2);
    text+="\n";

    //3 Reset
    text+="Метод Reset:\n";
    u_ptr1.reset();
    if (u_ptr1.get() == nullptr) {
        text+="u_ptr1 = nullptr\n";
    }

    //3 Release
    text+="Метод Release:\n";
    u_ptr2.release();
    if (!(u_ptr2.operator bool())) {
        text+="u_ptr2 пустой\n";
    }

    //3 Get
    uniquePtr<int> u_ptr3(new int(20));
    text+="Метод Get:\n";
    text+="u_ptr1.get() = ";
    text+=QString::number(*(u_ptr3.get()));
    text+="\n";

    ui->uniqueText->appendPlainText(text);
}

void MainWindow::on_shared_clicked()
{
    ui->shared->setEnabled(false);
    QString text = "";

    sharedPtr<int> s_ptr1(new int(5));
    text+="Объект s_ptr1 создан\ns_ptr1 = ";
    text+=QString::number(*s_ptr1);
    text+="\n";

    sharedPtr<int> s_ptr2;
    sharedPtr<int> temp (new int (10));
    text+="Пустой объект s_ptr2 создан\nОбъект temp создан\ntemp = ";
    text+=QString::number(*temp);
    text+="\n";
    s_ptr2 = temp;
    text+="Объекту s_ptr2 присвоен объект temp\nОбъект u_ptr2 = ";
    text+=QString::number(*s_ptr2);
    text+="\n";
    text+="Объект temp = ";
    text+=QString::number(*temp.get());
    text+="\n";

    s_ptr1.swap(s_ptr2);
    text+="Метод Swap:\n";

    text+="u_ptr1 = ";
    text+=QString::number(*s_ptr1);
    text+="\n";

    text+="u_ptr2 = ";
    text+=QString::number(*s_ptr2);
    text+="\n";

    text+="Метод Release:\n";
    s_ptr2.release();
    if (!(s_ptr2.operator bool())) {
        text+="s_ptr2 пустой\n";
    }

    text+="Метод Reset:\n";
    s_ptr1.reset();
    if (s_ptr1.get() == nullptr) {
        text+="s_ptr1 = nullptr\n";
    }


    sharedPtr<int> s_ptr3(new int(20));

    text+="Метод Get:\n";
    text+="*(s_ptr3.get()) = ";
    text+=QString::number(*(s_ptr3.get()));
    text+="\n";

    text+="Метод Use_count:\n";
    text+="count = ";
    text+=QString::number(s_ptr3.use_count());
    text+="\n";

    //7 Use_count_w
    text+="Метод Use_count_weak:\n";
    text+="countWeak = ";
    text+=QString::number(s_ptr3.use_count_weak());
    text+="\n";

    ui->sharedText->appendPlainText(text);
}


void MainWindow::on_weak_clicked()
{
    ui->weak->setEnabled(false);
    QString text = "";

    sharedPtr<int> s_ptr1(new int(5));
    text+="Объект s_ptr1 создан\s_ptr1 = ";
    text+=QString::number(*s_ptr1);
    text+="\n";
    weakPtr<int> w_ptr1(s_ptr1);
    text+="Объект w_ptr1 создан";
    text+="\n";

    sharedPtr<int> s_ptr2(new int(10));
    text+="Объект s_ptr2 создан\s_ptr2 = ";
    text+=QString::number(*s_ptr2);
    text+="\n";
    weakPtr<int> w_ptr2;   //2 конструктор
    text+="Пустой объект PointerWeak_2 создан\nOбъект PointerWeak_2 присвоен объект PointerShared_2";
    w_ptr2 = s_ptr2;
    text+="\n";

    text+="Метод Swap/Метод Lock:\n";
    w_ptr1.swap(w_ptr2);

    text+="w_ptr1.lock() = ";
    text+=QString::number(*w_ptr1.lock());
    text+="\n";

    text+="w_ptr2.lock() = ";
    text+=QString::number(*w_ptr2.lock());
    text+="\n";

    text+="Метод Expired:\n";

    if (!w_ptr1.expired()){
        text+="w_ptr1 не удален\n";
    }

    if (!w_ptr2.expired()){
        text+="w_ptr2 не удален\n";
    }

    text+="Метод Use_count:\n";
    text+="count = ";
    text+=QString::number(w_ptr1.use_count());
    text+="\n";

    ui->weakText->appendPlainText(text);
}

