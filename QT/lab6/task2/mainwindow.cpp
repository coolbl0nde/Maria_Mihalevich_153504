#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->textEdit->setWordWrapMode(QTextOption::NoWrap);
    ui->textEdit->setReadOnly(true);

    srand(time(NULL));

    for (int i = 0; i < 20; i++)
        table.insert(rand() % 364);

   ui->textEdit->setText(table.printTable());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::print(){
    ui->textEdit->setText(table.printTable());
}

void MainWindow::on_insert_clicked(){
    int tmp;
    tmp = ui->lineEdit->text().toInt();

    if (ui->lineEdit->text().size() == 0){
        QMessageBox::warning(this, "Message","you didn't enter key");
        return;
    }

    ui->textEdit->clear();
    table.insert(tmp);
    print();

}

void MainWindow::on_remove_clicked(){
    int tmp;
    tmp = ui->lineEdit_2->text().toInt();

    if (ui->lineEdit_2->text().size() == 0){
        QMessageBox::warning(this, "Message","you didn't enter key");
        return;
    }

    ui->textEdit->clear();
    table.remove(tmp);
    print();
}


void MainWindow::on_find_clicked(){
    int tmp;
    tmp = ui->lineEdit_3->text().toInt();

    if (ui->lineEdit_3->text().size() == 0){
        QMessageBox::warning(this, "Message","you didn't enter key");
        return;
    }

    int index = table.find(tmp);

    if (index == -1){
        QMessageBox::warning(this, "Message", "no such key");
    }else{
        QMessageBox::warning(this, "Message", "index of stack with such key: " + QString::number(index));
    }
}


void MainWindow::on_findMin_clicked(){
    int index = table.findMin();

    QMessageBox::warning(this, "Message", "index of stack with minimum key: " + QString::number(index));
}


void MainWindow::on_empty_clicked(){
    if(!table.empty()){
        QMessageBox::warning(this, "Message", "not empty ");
    }else{
        QMessageBox::warning(this, "Message", "empty");
    }
}

