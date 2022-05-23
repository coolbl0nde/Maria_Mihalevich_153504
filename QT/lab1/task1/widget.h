#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QTimer>
#include <QHBoxLayout>
#include <QPainter>

#include <QGraphicsRectItem>
#include <QGraphicsEllipseItem>
#include <QGraphicsLineItem>

class MovingEllipse : public QObject, public QGraphicsEllipseItem{
    Q_OBJECT
private:
    bool ph = true;
    int k = 0;
public:
    MovingEllipse();
    void start();
    void stop();

    // QGraphicsItem interface
public slots:
    void moviton();

};

class Balloon : public MovingEllipse{
    Q_OBJECT

public:
    Balloon(int w, int h, int x, int y);
public slots:
    void burstBalloon();
};

class myGraphicsView : public QGraphicsView{
    Q_OBJECT

public:
    myGraphicsView(QWidget *parent = 0);
private:
    QGraphicsScene *scene;
    Balloon *balloon;
    QTimer *myEllipseTimer;

    void balloonString();
    QGraphicsLineItem *line;

private slots:
    void myTimerEllipse();
    void StartAnimation();

};


class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
private:
    QHBoxLayout *myLayoutScene;
    myGraphicsView *myGraphics;
};


#endif // WIDGET_H
