#include "widget.h"

#include <QPushButton>
#include <QTimer>

myGraphicsView::myGraphicsView(QWidget *parent) : QGraphicsView(parent){

    scene = new QGraphicsScene(0, 0, 1000, 600, this);
    scene->addRect(scene->sceneRect());
    setScene(scene);

    QPushButton *button = new QPushButton(this), *start = new QPushButton(this);

    balloon = new Balloon(90, 130, 200, 300);
    scene->addItem(balloon);
    balloonString();

    button->setGeometry(QRect(600, 30, 150, 65));
    start->setGeometry(QRect(600, 100, 150, 65));
    button->setText("Лопнуть");
    start->setText("Старт");
    scene->addWidget(button);
    scene->addWidget(start);

    connect(button, SIGNAL(clicked()), balloon, SLOT(burstBalloon()));
    connect(start, SIGNAL(clicked()), this, SLOT(myTimerEllipse()));
}

void myGraphicsView::balloonString()
{
    line = new QGraphicsLineItem(45, 230, 45, 130, balloon);
}

Balloon :: Balloon(int w, int h, int x, int y){
    QColor colorBalloon = QColor(255, 142, 198);
    setBrush(colorBalloon);
    setRect(0, 0, w, h);
    setPos(x, y);
}

void myGraphicsView::myTimerEllipse(){
    myEllipseTimer = new QTimer(this);
    myEllipseTimer->start(1000/100);
    connect(myEllipseTimer, SIGNAL(timeout()), this, SLOT(StartAnimation()));
}

void myGraphicsView::StartAnimation(){
    balloon->start();
}

MovingEllipse::MovingEllipse()
{
    QTimer* time = new QTimer();
    time -> start(1000/40);
    connect(time, SIGNAL(timeout()), this, SLOT(moviton()));
}

void MovingEllipse::start(){
   static int y = 0;
   y++;
   if (y < 300) {
        moveBy(0, -1);
   }
}

void MovingEllipse::moviton()
{
    k++;

    if (k == 40) {
        if (ph == true) {
            ph = false;
            k = 0;
        } else {
            ph = true;
            k = 0;
        }
    }

    if (ph) {
        moveBy(1, 0);
    } else {
        moveBy(-1, 0);
    }
}

void Balloon :: burstBalloon(){
    this->hide();
}

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    myLayoutScene = new QHBoxLayout(this);
    myGraphics = new myGraphicsView;
    myLayoutScene->addWidget(myGraphics);
    setLayout(myLayoutScene);
}

Widget::~Widget()
{
}

