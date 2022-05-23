#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->doneOrders->setVisible(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

/*void MainWindow::quickSort()
{
    int j, step;
    double buff;
    Order tmp;
    for (step = amount / 2; step > 0; step /= 2)
        for (int i = step; i < amount; i++) {
            tmp = o[i];
            //buff = o[i].getStudentAverageGrade();
            for (j = i; j >= step; j -= step)
                //if (buff < o[j - step].getStudentAverageGrade()) o[j] = o[j - step];
                //else break;

            o[j] = tmp;
        }
}
*/
void MainWindow::on_addFile_clicked()
{
    FilePath = QFileDialog::getOpenFileName(this, "Выбрать файл",
                                            "D://filetask1.txt","*.txt");
    if (!FilePath.isEmpty()&& FilePath == "D:/filetask1.txt") {
        ui->addFile->setText(FilePath);
        ui->pushButton->setEnabled(true);
        ui->addFile->setText(FilePath);
        ui->search->setEnabled(true);
        ui->done->setEnabled(true);
        ui->done_2->setEnabled(true);
        readFile();
    }else {
        QMessageBox::critical(this,"","Неккоректный файл!");
    }
}

void MainWindow::readFile()
{
    //    QRegularExpression reg ("[0-9]{2}\\.[0-9]{2}\\.[0-9]{4}");
    //    QRegularExpression dig ("[0-9]{1}");
    QFile file(FilePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))return;
    QTextStream in(&file);
    QString *arr=new QString [amount];
    done=new List();
    not_done=new List();
    int i=0;
    bool error=true;
    while (!in.atEnd()){
        arr[i]=in.readLine();
        //        if (i%3==0 && arr[i].contains(reg)==false) {
        //            QMessageBox::warning(this, "Ошибка", "Некорректный файл!");
        //            error=false;
        //            break;
        //        }
        i++;
    }
    file.close();
    int j=0;
    if (error==true){
        for (int i=0; i<amount; i+=4, j++){
            o[j]=new Order (arr[i], arr[i+1], QDate::fromString(arr[i+2], "dd.MM.yyyy"), arr[i+3]);
            if (arr[i+3].contains("Готово") && arr[i+3].isEmpty()==false) done->Add(o[j]);
            if (arr[i+3].contains("Не готово") && arr[i+3].isEmpty()==false) not_done->Add(o[j]);
        }
        showInfo();
    }
}

void MainWindow::showInfo()
{
    ui->tableWidget->setRowCount(amount/4);
    ui->tableWidget->setColumnCount(5);
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget->verticalHeader()->hide();
    QStringList hLabels;
    hLabels << "№" << "Наименование" << "Марка" << "Дата поступления" << "Состояние заказа";
    ui->tableWidget->setHorizontalHeaderLabels(hLabels);

    for (int i = 0; i < ui->tableWidget->rowCount(); i++){
        QTableWidgetItem *item;
        for (int j = 0; j < ui->tableWidget->columnCount(); j++){
            item = new QTableWidgetItem;
            o[i]->number=i+1;
            if(j==0){
                QString num =QString::number(i+1);
                item->setText(num);
            }
            if (j==1){
                item->setText(o[i]->group);
            }
            if (j==2){
                item->setText(o[i]->brand);
            }
            if (j==3){
                item->setText(o[i]->Date.toString("dd.MM.yyyy"));
            }
            if (j==4){
                item->setText(o[i]->condition);
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
    QRegularExpression reg ("[0-9]{2}\\.[0-9]{2}\\.[0-9]{4}");
    if (ui->lineEdit->displayText().isEmpty() || ui->lineEdit_2->displayText().isEmpty() || ui->lineEdit_3->displayText().isEmpty() || ui->lineEdit_4->displayText().isEmpty())
        QMessageBox::warning(this, "Предупреждение", "Заполните все поля!");
    else if (ui->lineEdit_3->text().contains(reg)==false) QMessageBox::critical(this, "Предупреждение", "Введена некорректная дата!");
    else  {   QFile file(FilePath);
        if(file.open(QIODevice::Append | QIODevice::Text))
        {
            QTextStream writeStream(&file);
            QString s=ui->lineEdit->text()+"\n"+ui->lineEdit_2->text()+"\n"+ui->lineEdit_3->text()+"\n"+ui->lineEdit_4->text()+"\n";
            writeStream << s;
            file.close();
            QMessageBox::information(this, "Инфо", "Заказ успешно добавлен!");
            ui->lineEdit->clear();
            ui->lineEdit_2->clear();
            ui->lineEdit_3->clear();
            ui->lineEdit_4->clear();
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
        if (temp<4*index+1 || temp>4*index+4){
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
    for (int i=1; i<5;i++){
        QString f = ui->tableWidget->item(index, i)->text();
        if (i==1){
            ui->lineEdit_5->setText(f);
        }
        if (i==2){
            ui->lineEdit_6->setText(f);
        }
        if (i==3){
            ui->lineEdit_7->setText(f);
        }
        if (i==4){
            ui->lineEdit_8->setText(f);
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
    QRegularExpression reg ("[0-9]{2}\\.[0-9]{2}\\.[0-9]{4}");
    if (ui->lineEdit_5->displayText().isEmpty() || ui->lineEdit_6->displayText().isEmpty() || ui->lineEdit_7->displayText().isEmpty() || ui->lineEdit_8->displayText().isEmpty())
        QMessageBox::warning(this, "Предупреждение", "Заполните все поля!");
    else if (ui->lineEdit_7->text().contains(reg)==false) QMessageBox::critical(this, "Предупреждение", "Введена некорректная дата!");
    for (int i=0; i<4;i++){
        QString f = ui->tableWidget->item(index, i)->text();
        if (i==0){
            o[index]->group=ui->lineEdit_5->text();
        }
        if (i==1){
            o[index]->brand=ui->lineEdit_6->text();
        }
        if (i==2){
            o[index]->Date=QDate::fromString(ui->lineEdit_7->text(), "dd.MM.yyyy");
        }
        if (i==3){
            o[index]->condition=ui->lineEdit_8->text();
        }
    }
    QFile file(FilePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))return;
    QString buff="";
    QTextStream writeStream(&file);
    for (int i=0;i<amount/4;i++){
        buff+=o[i]->group+"\n"+o[i]->brand+"\n"+o[i]->Date.toString("dd.MM.yyyy")+"\n"+o[i]->condition+"\n";
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


void MainWindow::on_done_clicked()
{
    if (d){
        d=!d;
        ui->done_2->setEnabled(false);
        ui->pushButton_2->setEnabled(false);
        ui->search->setEnabled(false);
        ui->pushButton->setEnabled(false);
        ui->done->setText("Скрыть");
        ui->doneOrders->setVisible(true);
        QString output = done->Print();
        ui->doneOrders->setText(output);
    } else {
        d=!d;
        ui->search->setEnabled(true);
        ui->pushButton->setEnabled(true);
        ui->done_2->setEnabled(true);
        ui->done->setText("Готовые заказы");
        ui->doneOrders->setVisible(false);
    }

}


void MainWindow::on_done_2_clicked()
{
    if (n_d){
        n_d=!n_d;
        ui->done->setEnabled(false);
        ui->pushButton_2->setEnabled(false);
        ui->search->setEnabled(false);
        ui->pushButton->setEnabled(false);
        ui->done_2->setText("Скрыть");
        ui->doneOrders->setVisible(true);
        QString output = not_done->Print();
        ui->doneOrders->setText(output);
    } else {
        n_d=!n_d;
        ui->search->setEnabled(true);
        ui->pushButton->setEnabled(true);
        ui->done->setEnabled(true);
        ui->done_2->setText("Не готовые заказы");
        ui->doneOrders->setVisible(false);
    }
}

