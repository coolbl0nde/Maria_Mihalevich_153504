#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_addFile_clicked()
{
    FilePath = QFileDialog::getOpenFileName(this, "Выбрать файл",
                                            "D://books.txt","AllFiles(*.txt)");
    if (!FilePath.isEmpty()&& FilePath == "D:/books.txt") {
        ui->addFile->setText(FilePath);
        ui->pushButton->setEnabled(true);
        ui->addFile->setText(FilePath);
        ui->search->setEnabled(true);
        readFile();
    }else {
        QMessageBox::critical(this,"","Неккоректный файл!");
    }
}

void MainWindow::readFile()
{
    QFile file(FilePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))return;
    QTextStream in(&file);
    QString *arr=new QString [amount];
    int i=0;
    while (!in.atEnd()){
        arr[i]=in.readLine();
        i++;
    }
    file.close();
    int j=0;
    for (int i=0; i<amount; i+=6, j++){
        b[j]=new Book (arr[i].toInt(), arr[i+1], arr[i+2], arr[i+3].toInt(), arr[i+4], arr[i+5].toInt());
}
    showInfo();
}

void MainWindow::showInfo()
{
    ui->tableWidget->setRowCount(amount/6);
    ui->tableWidget->setColumnCount(6);
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget->verticalHeader()->hide();
    QStringList hLabels;
    hLabels << "Номер книги" << "Автор" << "Название" << "Год издания" << "Издательство" << "Количество страниц";
    ui->tableWidget->setHorizontalHeaderLabels(hLabels);

    for (int i = 0; i < ui->tableWidget->rowCount(); i++){
        QTableWidgetItem *item;
        for (int j = 0; j < ui->tableWidget->columnCount(); j++){
            item = new QTableWidgetItem;
            if(j==0){
                item->setText(QString::number(b[i]->number));
            }
            if (j==1){
                item->setText(b[i]->author);
            }
            if (j==2){
                item->setText(b[i]->name);
            }
            if (j==3){
                item->setText(QString::number(b[i]->Date));
            }
            if (j==4){
                item->setText(b[i]->publishing);
            }
            if (j==5){
                item->setText(QString::number(b[i]->pages));
            }
            item->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
            ui->tableWidget->setItem(i, j, item);
        }
    }
}


void MainWindow::on_exit_clicked()
{
    QWidget::close();
}


void MainWindow::on_pushButton_clicked()
{
    QRegularExpression reg ("[0-9]{4}");
    if (ui->lineEdit->displayText().isEmpty() || ui->lineEdit_2->displayText().isEmpty() || ui->lineEdit_3->displayText().isEmpty() || ui->lineEdit_4->displayText().isEmpty()|| ui->lineEdit_13->displayText().isEmpty()|| ui->lineEdit_14->displayText().isEmpty())
        QMessageBox::warning(this, "Предупреждение", "Заполните все поля!");
    else if (ui->lineEdit_4->text().contains(reg)==false) QMessageBox::critical(this, "Предупреждение", "Введён некорректный год издания!");
    else  {   QFile file(FilePath);
        if(file.open(QIODevice::Append | QIODevice::Text))
        {
            QTextStream writeStream(&file);
            QString s=ui->lineEdit->text()+"\n"+ui->lineEdit_2->text()+"\n"+ui->lineEdit_3->text()+"\n"+ui->lineEdit_4->text()+"\n"+ui->lineEdit_13->text()+"\n"+ui->lineEdit_14->text()+"\n";
            writeStream << s;
            file.close();
            QMessageBox::information(this, "Инфо", "Заказ успешно добавлен!");
            ui->lineEdit->clear();
            ui->lineEdit_2->clear();
            ui->lineEdit_3->clear();
            ui->lineEdit_4->clear();
            ui->lineEdit_13->clear();
            ui->lineEdit_14->clear();
            readFile();
        }
    }
}

void MainWindow::on_deleteEl_clicked()
{
    int index =ui->tableWidget->selectionModel()->currentIndex().row();
    QFile file(FilePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))return;
    QString buff="", del="";
    int temp=0;
    QTextStream in(&file);
    QTextStream writeStream(&file);
    while (!in.atEnd()){
        temp++;
        qDebug()<<temp;
        if (temp<6*index+1 || temp>6*index+6){
            buff+=in.readLine()+"\n";
        }else{
            del+=in.readLine()+"\n";
        }
    }
    file.close();
    file.open(QIODevice::WriteOnly);
    writeStream<<buff;
    ui->deleteEl->setEnabled(false);
    file.close();
    readFile();
}

void MainWindow::editEl()
{
    int index =ui->tableWidget->selectionModel()->currentIndex().row();
    for (int i=0; i<6;i++){
        QString f = ui->tableWidget->item(index, i)->text();
        if (i==0){
            ui->lineEdit_5->setText(f);
        }
        if (i==1){
           ui->lineEdit_6->setText(f);
        }
        if (i==2){
           ui->lineEdit_7->setText(f);
        }
        if (i==3){
           ui->lineEdit_8->setText(f);
        }
        if (i==4){
           ui->lineEdit_21->setText(f);
        }
        if (i==5){
           ui->lineEdit_22->setText(f);
        }
      }
}


void MainWindow::on_tableWidget_itemSelectionChanged()
{
    ui->deleteEl->setEnabled(true);
    ui->pushButton_2->setEnabled(true);
    editEl();
}


void MainWindow::on_pushButton_2_clicked()
{
    int index =ui->tableWidget->selectionModel()->currentIndex().row();
    QRegularExpression reg ("[0-9]{4}");
    if (ui->lineEdit_5->displayText().isEmpty() || ui->lineEdit_6->displayText().isEmpty() || ui->lineEdit_7->displayText().isEmpty() || ui->lineEdit_8->displayText().isEmpty()|| ui->lineEdit_21->displayText().isEmpty()|| ui->lineEdit_22->displayText().isEmpty())
        QMessageBox::warning(this, "Предупреждение", "Заполните все поля!");
    else if (ui->lineEdit_8->text().contains(reg)==false) QMessageBox::critical(this, "Предупреждение", "Введён некорректный год издания!");
    else {for (int i=0; i<6;i++){
        QString f = ui->tableWidget->item(index, i)->text();
        if (i==0){
            b[index]->number=ui->lineEdit_5->text().toInt();
        }
        if (i==1){
            b[index]->author=ui->lineEdit_6->text();
        }
        if (i==2){
            b[index]->name=ui->lineEdit_7->text();
        }
        if (i==3){
            b[index]->Date=ui->lineEdit_8->text().toInt();
        }
        if (i==4){
            b[index]->publishing=ui->lineEdit_21->text();
        }
        if (i==5){
            b[index]->pages=ui->lineEdit_22->text().toInt();
        }
    }
    }
    QFile file(FilePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))return;
    QString buff="";
    QTextStream writeStream(&file);
    for (int i=0;i<amount/6;i++){
        buff+=QString::number(b[i]->number)+"\n"+b[i]->author+"\n"+b[i]->name+"\n"+QString::number(b[i]->Date)+"\n"+b[i]->publishing+"\n"+QString::number(b[i]->pages)+"\n";
    }
    file.close();
    file.open(QIODevice::WriteOnly);
    writeStream<< buff;
    file.close();
    readFile();
}

void MainWindow::on_search_clicked()
{
    bool a=false;
    for (int i = 0; i < ui->tableWidget->rowCount(); i++){
        for (int j = 0; j < ui->tableWidget->columnCount(); j++){
            ui->tableWidget->item(i,j)->setBackground(Qt::white);
        }
    }
    QString search = ui->lineSearch->text();
    for (int i = 0; i < ui->tableWidget->rowCount(); i++){
        for (int j = 0; j < ui->tableWidget->columnCount(); j++){
            if (ui->tableWidget->item(i,j)->text().contains(search)) {
                ui->tableWidget->item(i,j)->setBackground(Qt::yellow);
                ui->deleteEl_2->setEnabled(true);
                a=true;
            }
        }
    }
    if (!a) QMessageBox::information(this, "Инфо", "Совпадений не найдено!");
}

void MainWindow::on_deleteEl_2_clicked()
{
    for (int i = 0; i < ui->tableWidget->rowCount(); i++){
        for (int j = 0; j < ui->tableWidget->columnCount(); j++){
            ui->tableWidget->item(i,j)->setBackground(Qt::white);
        }
    }
    ui->lineSearch->clear();
    ui->deleteEl_2->setEnabled(false);
}

