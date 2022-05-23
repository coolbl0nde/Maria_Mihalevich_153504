/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *AddRect;
    QPushButton *AddSquare;
    QPushButton *AddTriangle;
    QPushButton *AddRhombus;
    QPushButton *AddCircle;
    QPushButton *AddPie;
    QPushButton *AddHexagon;
    QPushButton *AddStar;
    QGraphicsView *graphicsView;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1393, 740);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        AddRect = new QPushButton(centralwidget);
        AddRect->setObjectName(QString::fromUtf8("AddRect"));
        AddRect->setGeometry(QRect(0, 0, 181, 51));
        AddSquare = new QPushButton(centralwidget);
        AddSquare->setObjectName(QString::fromUtf8("AddSquare"));
        AddSquare->setGeometry(QRect(180, 0, 181, 51));
        AddTriangle = new QPushButton(centralwidget);
        AddTriangle->setObjectName(QString::fromUtf8("AddTriangle"));
        AddTriangle->setGeometry(QRect(530, 0, 171, 51));
        AddRhombus = new QPushButton(centralwidget);
        AddRhombus->setObjectName(QString::fromUtf8("AddRhombus"));
        AddRhombus->setGeometry(QRect(360, 0, 171, 51));
        AddCircle = new QPushButton(centralwidget);
        AddCircle->setObjectName(QString::fromUtf8("AddCircle"));
        AddCircle->setGeometry(QRect(700, 0, 171, 51));
        AddPie = new QPushButton(centralwidget);
        AddPie->setObjectName(QString::fromUtf8("AddPie"));
        AddPie->setGeometry(QRect(1210, 0, 171, 51));
        AddHexagon = new QPushButton(centralwidget);
        AddHexagon->setObjectName(QString::fromUtf8("AddHexagon"));
        AddHexagon->setGeometry(QRect(1040, 0, 171, 51));
        AddStar = new QPushButton(centralwidget);
        AddStar->setObjectName(QString::fromUtf8("AddStar"));
        AddStar->setGeometry(QRect(870, 0, 171, 51));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(50, 120, 1311, 571));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(490, 60, 451, 51));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1393, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        AddRect->setText(QCoreApplication::translate("MainWindow", "\320\277\321\200\321\217\320\274\320\276\321\203\320\263\320\276\320\273\321\214\320\275\320\270\320\272", nullptr));
        AddSquare->setText(QCoreApplication::translate("MainWindow", "\320\272\320\262\320\260\320\264\321\200\320\260\321\202", nullptr));
        AddTriangle->setText(QCoreApplication::translate("MainWindow", "\321\202\321\200\320\265\321\203\320\263\320\276\320\273\321\214\320\275\320\270\320\272", nullptr));
        AddRhombus->setText(QCoreApplication::translate("MainWindow", "\321\200\320\276\320\274\320\261", nullptr));
        AddCircle->setText(QCoreApplication::translate("MainWindow", "\320\272\321\200\321\203\320\263", nullptr));
        AddPie->setText(QCoreApplication::translate("MainWindow", "\320\272\321\203\321\201\320\276\320\272 \321\201\321\213\321\200\320\260", nullptr));
        AddHexagon->setText(QCoreApplication::translate("MainWindow", "\321\210\320\265\321\201\321\202\320\270\321\203\320\263\320\276\320\273\321\214\320\275\320\270\320\272", nullptr));
        AddStar->setText(QCoreApplication::translate("MainWindow", "\320\267\320\262\320\265\320\267\320\264\320\260", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\275\320\260\321\200\320\270\321\201\320\276\320\262\320\260\321\202\321\214 \321\204\320\270\320\263\321\203\321\200\321\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
