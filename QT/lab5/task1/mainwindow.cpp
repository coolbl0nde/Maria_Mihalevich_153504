#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->createRingsButton->setDisabled(true);
    ui->spin1->setRange(-10,10);
    ui->spin2->setRange(-10,10);
    ui->spin3->setRange(-10,10);
    ui->spin4->setRange(-10,10);
    ui->spin5->setRange(-10,10);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setUp()
{
    mainList.delall();
    mainList.push_back(ui->spin1->text().toInt());
    mainList.push_back(ui->spin2->text().toInt());
    mainList.push_back(ui->spin3->text().toInt());
    mainList.push_back(ui->spin4->text().toInt());
    mainList.push_back(ui->spin5->text().toInt());

    QString initList = "";

    for (int i =0;i<5;i++){
        initList+=QString::number(mainList[i]->item);
        initList+=", ";
    }
    ui->mainLabel->setText(initList);
    ui->createRingsButton->setDisabled(false);
}

void MainWindow::getAnswer()
{
    List_class<int> mainRing;
    List_class<int> externalRing;

    int maxIndex = 0 ;
    int minIndex = 0;

    for (int i = 0;i<5;i++){
        if (mainList[i]->item<mainList[minIndex]->item){
            minIndex = i;
        }
        if (mainList[i]->item>mainList[maxIndex]->item){
            maxIndex = i;
        }
    }

    List_class<int> copiedMain;
    for (int i = 0;i<5;i++){
        copiedMain.push_back(mainList[i]->item);
    }

    int firstIndex = min(maxIndex,minIndex);
    int secondIndex = max(maxIndex,minIndex);

    for (int i = firstIndex+1,j=firstIndex+1;i<secondIndex;i++){
        mainRing.push_back(copiedMain[j]->item);
        copiedMain.del(j+1);
    }
    for (int i = 0;i<copiedMain.size();i++){
        externalRing.push_back(copiedMain[i]->item);
    }

    QString mainStr = "";
    QString extStr = "";

    if (mainRing.size()==1){
         mainRing[0]->next = mainRing[0];
         mainRing[0]->prev = mainRing[0];
         mainStr = QString::number(mainRing[0]->item);
    }
    else if(mainRing.size()>1){
        mainRing[mainRing.size()-1]->next = mainRing[0];
        mainRing[0]->prev = mainRing[mainRing.size()-1];
        for (int i = 0;i<mainRing.size();i++){
            mainStr+=QString::number(mainRing[i]->item);
            mainStr+=", ";
        }
    }

    if (externalRing.size()==1){
         externalRing[0]->next = externalRing[0];
         externalRing[0]->prev = externalRing[0];
         extStr = QString::number(externalRing[0]->item);
    }
    else if(externalRing.size()>1){
        externalRing[externalRing.size()-1]->next = externalRing[0];
        externalRing[0]->prev = externalRing[externalRing.size()-1];
        for (int i = 0;i<externalRing.size();i++){
            extStr+=QString::number(externalRing[i]->item);
            extStr+=", ";
        }
    }
    qDebug() << externalRing.getfront() << " " << externalRing.getback();



    QString headPtr = QString::number((int)(size_t)externalRing.getfront(),16);
    QString tailPtr = QString::number((int)(size_t)externalRing.getback(),16);
    QString headprev = QString::number((int)(size_t)externalRing.getfront()->prev,16);
    QString tailNext = QString::number((int)(size_t)externalRing.getback()->next,16);
    //ui->headPrev->setText(headprev);
    //ui->tailNext->setText(tailNext);
    //ui->headAddress->setText(headPtr);
    //ui->tailAddress->setText(tailPtr);
    externalRing.delall();
    mainRing.delall();
    mainList.delall();
    ui->mainRingLabel->setText(mainStr);
    ui->secondaryRingLabel->setText(extStr);


}

void MainWindow::on_setupButton_clicked()
{
    setUp();
}

void MainWindow::on_createRingsButton_clicked()
{
    getAnswer();
    ui->createRingsButton->setDisabled(true);
}

