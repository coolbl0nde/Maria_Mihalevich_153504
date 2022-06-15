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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *mainLabel;
    QSpinBox *spin1;
    QSpinBox *spin2;
    QSpinBox *spin3;
    QSpinBox *spin4;
    QSpinBox *spin5;
    QLabel *mainRingLabel;
    QLabel *secondaryRingLabel;
    QPushButton *setupButton;
    QPushButton *createRingsButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *headAddress;
    QLabel *headPrev;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(431, 362);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        mainLabel = new QLabel(centralwidget);
        mainLabel->setObjectName(QString::fromUtf8("mainLabel"));
        mainLabel->setGeometry(QRect(200, 80, 251, 20));
        spin1 = new QSpinBox(centralwidget);
        spin1->setObjectName(QString::fromUtf8("spin1"));
        spin1->setGeometry(QRect(70, 30, 42, 22));
        spin2 = new QSpinBox(centralwidget);
        spin2->setObjectName(QString::fromUtf8("spin2"));
        spin2->setGeometry(QRect(120, 30, 42, 22));
        spin3 = new QSpinBox(centralwidget);
        spin3->setObjectName(QString::fromUtf8("spin3"));
        spin3->setGeometry(QRect(170, 31, 42, 21));
        spin4 = new QSpinBox(centralwidget);
        spin4->setObjectName(QString::fromUtf8("spin4"));
        spin4->setGeometry(QRect(220, 30, 42, 22));
        spin5 = new QSpinBox(centralwidget);
        spin5->setObjectName(QString::fromUtf8("spin5"));
        spin5->setGeometry(QRect(270, 30, 42, 22));
        mainRingLabel = new QLabel(centralwidget);
        mainRingLabel->setObjectName(QString::fromUtf8("mainRingLabel"));
        mainRingLabel->setGeometry(QRect(200, 120, 251, 16));
        secondaryRingLabel = new QLabel(centralwidget);
        secondaryRingLabel->setObjectName(QString::fromUtf8("secondaryRingLabel"));
        secondaryRingLabel->setGeometry(QRect(200, 160, 251, 16));
        setupButton = new QPushButton(centralwidget);
        setupButton->setObjectName(QString::fromUtf8("setupButton"));
        setupButton->setGeometry(QRect(70, 200, 111, 61));
        QFont font;
        font.setPointSize(7);
        setupButton->setFont(font);
        createRingsButton = new QPushButton(centralwidget);
        createRingsButton->setObjectName(QString::fromUtf8("createRingsButton"));
        createRingsButton->setGeometry(QRect(190, 200, 111, 61));
        createRingsButton->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 80, 81, 21));
        QFont font1;
        label->setFont(font1);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 120, 81, 21));
        label_2->setFont(font1);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 159, 111, 21));
        label_3->setFont(font1);
        headAddress = new QLabel(centralwidget);
        headAddress->setObjectName(QString::fromUtf8("headAddress"));
        headAddress->setGeometry(QRect(140, 250, 56, 16));
        headAddress->setFont(font1);
        headPrev = new QLabel(centralwidget);
        headPrev->setObjectName(QString::fromUtf8("headPrev"));
        headPrev->setGeometry(QRect(140, 310, 56, 16));
        headPrev->setFont(font1);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 431, 26));
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
        mainLabel->setText(QString());
        mainRingLabel->setText(QString());
        secondaryRingLabel->setText(QString());
        setupButton->setText(QCoreApplication::translate("MainWindow", "Set up list", nullptr));
        createRingsButton->setText(QCoreApplication::translate("MainWindow", "Create rings", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Main list", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Main ring", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "External ring", nullptr));
        headAddress->setText(QString());
        headPrev->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
