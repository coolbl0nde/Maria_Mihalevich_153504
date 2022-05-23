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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *exit;
    QTableWidget *tableWidget;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *deleteEl;
    QPushButton *addFile;
    QLabel *label_6;
    QPushButton *pushButton_2;
    QPushButton *search;
    QLineEdit *lineSearch;
    QPushButton *deleteEl_2;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_3;
    QLabel *label_7;
    QLineEdit *lineEdit_5;
    QLabel *label_8;
    QLineEdit *lineEdit_6;
    QLabel *label_9;
    QLineEdit *lineEdit_7;
    QLabel *label_10;
    QLineEdit *lineEdit_8;
    QLabel *label_23;
    QLineEdit *lineEdit_21;
    QLabel *label_24;
    QLineEdit *lineEdit_22;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QLabel *label_15;
    QLineEdit *lineEdit_13;
    QLabel *label_16;
    QLineEdit *lineEdit_14;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1169, 763);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        exit = new QPushButton(centralwidget);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setGeometry(QRect(1050, 680, 101, 31));
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(380, 80, 761, 541));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 60, 351, 51));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setEnabled(false);
        pushButton->setGeometry(QRect(270, 350, 91, 31));
        deleteEl = new QPushButton(centralwidget);
        deleteEl->setObjectName(QString::fromUtf8("deleteEl"));
        deleteEl->setEnabled(false);
        deleteEl->setGeometry(QRect(690, 640, 141, 31));
        addFile = new QPushButton(centralwidget);
        addFile->setObjectName(QString::fromUtf8("addFile"));
        addFile->setGeometry(QRect(530, 640, 141, 31));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 360, 241, 51));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setEnabled(false);
        pushButton_2->setGeometry(QRect(270, 640, 91, 31));
        search = new QPushButton(centralwidget);
        search->setObjectName(QString::fromUtf8("search"));
        search->setEnabled(false);
        search->setGeometry(QRect(1030, 30, 111, 31));
        lineSearch = new QLineEdit(centralwidget);
        lineSearch->setObjectName(QString::fromUtf8("lineSearch"));
        lineSearch->setEnabled(true);
        lineSearch->setGeometry(QRect(380, 30, 641, 31));
        deleteEl_2 = new QPushButton(centralwidget);
        deleteEl_2->setObjectName(QString::fromUtf8("deleteEl_2"));
        deleteEl_2->setEnabled(false);
        deleteEl_2->setGeometry(QRect(850, 640, 141, 31));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 420, 351, 205));
        gridLayout_3 = new QGridLayout(layoutWidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_3->addWidget(label_7, 0, 0, 1, 1);

        lineEdit_5 = new QLineEdit(layoutWidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        gridLayout_3->addWidget(lineEdit_5, 0, 1, 1, 1);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_3->addWidget(label_8, 1, 0, 1, 1);

        lineEdit_6 = new QLineEdit(layoutWidget);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        gridLayout_3->addWidget(lineEdit_6, 1, 1, 1, 1);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_3->addWidget(label_9, 2, 0, 1, 1);

        lineEdit_7 = new QLineEdit(layoutWidget);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));

        gridLayout_3->addWidget(lineEdit_7, 2, 1, 1, 1);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_3->addWidget(label_10, 3, 0, 1, 1);

        lineEdit_8 = new QLineEdit(layoutWidget);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));

        gridLayout_3->addWidget(lineEdit_8, 3, 1, 1, 1);

        label_23 = new QLabel(layoutWidget);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout_3->addWidget(label_23, 4, 0, 1, 1);

        lineEdit_21 = new QLineEdit(layoutWidget);
        lineEdit_21->setObjectName(QString::fromUtf8("lineEdit_21"));

        gridLayout_3->addWidget(lineEdit_21, 4, 1, 1, 1);

        label_24 = new QLabel(layoutWidget);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout_3->addWidget(label_24, 5, 0, 1, 1);

        lineEdit_22 = new QLineEdit(layoutWidget);
        lineEdit_22->setObjectName(QString::fromUtf8("lineEdit_22"));

        gridLayout_3->addWidget(lineEdit_22, 5, 1, 1, 1);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 133, 351, 205));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        lineEdit = new QLineEdit(layoutWidget1);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        lineEdit_2 = new QLineEdit(layoutWidget1);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        lineEdit_3 = new QLineEdit(layoutWidget1);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 2, 1, 1, 1);

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        lineEdit_4 = new QLineEdit(layoutWidget1);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        gridLayout->addWidget(lineEdit_4, 3, 1, 1, 1);

        label_15 = new QLabel(layoutWidget1);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout->addWidget(label_15, 4, 0, 1, 1);

        lineEdit_13 = new QLineEdit(layoutWidget1);
        lineEdit_13->setObjectName(QString::fromUtf8("lineEdit_13"));

        gridLayout->addWidget(lineEdit_13, 4, 1, 1, 1);

        label_16 = new QLabel(layoutWidget1);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout->addWidget(label_16, 5, 0, 1, 1);

        lineEdit_14 = new QLineEdit(layoutWidget1);
        lineEdit_14->setObjectName(QString::fromUtf8("lineEdit_14"));

        gridLayout->addWidget(lineEdit_14, 5, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1169, 26));
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
        exit->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\264\320\260\320\275\320\275\321\213\320\265 \320\275\320\276\320\262\320\276\320\271 \320\272\320\275\320\270\320\263\320\270 \320\267\320\264\320\265\321\201\321\214 :</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\223\320\276\321\202\320\276\320\262\320\276", nullptr));
        deleteEl->setText(QCoreApplication::translate("MainWindow", "\320\241\320\277\320\270\321\201\320\260\321\202\321\214  \320\272\320\275\320\270\320\263\321\203", nullptr));
        addFile->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\204\320\260\320\271\320\273", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\264\320\260\320\275\320\275\321\213\320\265 \320\272\320\275\320\270\320\263\320\270 :</span></p></body></html>", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\223\320\276\321\202\320\276\320\262\320\276", nullptr));
        search->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        deleteEl_2->setText(QCoreApplication::translate("MainWindow", "\320\241\320\261\321\200\320\276\321\201 \320\277\320\276\320\270\321\201\320\272\320\260", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">\320\235\320\276\320\274\320\265\321\200 \320\272\320\275\320\270\320\263\320\270 :</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">\320\220\320\262\321\202\320\276\321\200</span></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 :</span></p></body></html>", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">\320\223\320\276\320\264 \320\270\320\267\320\264\320\260\320\275\320\270\321\217 :</span></p></body></html>", nullptr));
        lineEdit_8->setInputMask(QString());
        label_23->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">\320\230\320\267\320\264\320\260\321\202\320\265\320\273\321\214\321\201\321\202\320\262\320\276 :</span></p></body></html>", nullptr));
        lineEdit_21->setInputMask(QString());
        label_24->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">\320\241\321\202\321\200\320\260\320\275\320\270\321\206\321\213 :</span></p></body></html>", nullptr));
        lineEdit_22->setInputMask(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">\320\235\320\276\320\274\320\265\321\200 \320\272\320\275\320\270\320\263\320\270 :</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">\320\220\320\262\321\202\320\276\321\200</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 :</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">\320\223\320\276\320\264 \320\270\320\267\320\264\320\260\320\275\320\270\321\217 :</span></p></body></html>", nullptr));
        lineEdit_4->setInputMask(QString());
        label_15->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">\320\230\320\267\320\264\320\260\321\202\320\265\320\273\321\214\321\201\321\202\320\262\320\276 :</span></p></body></html>", nullptr));
        lineEdit_13->setInputMask(QString());
        label_16->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">\320\241\321\202\321\200\320\260\320\275\320\270\321\206\321\213 :</span></p></body></html>", nullptr));
        lineEdit_14->setInputMask(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
