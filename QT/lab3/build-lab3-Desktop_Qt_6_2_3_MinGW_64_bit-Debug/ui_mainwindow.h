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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *unique;
    QPushButton *shared;
    QPushButton *weak;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_5;
    QPlainTextEdit *uniqueText;
    QPlainTextEdit *sharedText;
    QPlainTextEdit *weakText;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *uniquePtr;
    QLabel *sharedPtr;
    QLabel *weakPtr;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1092, 622);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget_3 = new QWidget(centralwidget);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(0, 540, 1091, 31));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        unique = new QPushButton(layoutWidget_3);
        unique->setObjectName(QString::fromUtf8("unique"));

        horizontalLayout_6->addWidget(unique);

        shared = new QPushButton(layoutWidget_3);
        shared->setObjectName(QString::fromUtf8("shared"));

        horizontalLayout_6->addWidget(shared);

        weak = new QPushButton(layoutWidget_3);
        weak->setObjectName(QString::fromUtf8("weak"));

        horizontalLayout_6->addWidget(weak);

        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(0, 60, 1091, 481));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        uniqueText = new QPlainTextEdit(layoutWidget_2);
        uniqueText->setObjectName(QString::fromUtf8("uniqueText"));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Light")});
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(true);
        uniqueText->setFont(font);
        uniqueText->setReadOnly(true);

        horizontalLayout_5->addWidget(uniqueText);

        sharedText = new QPlainTextEdit(layoutWidget_2);
        sharedText->setObjectName(QString::fromUtf8("sharedText"));
        sharedText->setFont(font);
        sharedText->setReadOnly(true);

        horizontalLayout_5->addWidget(sharedText);

        weakText = new QPlainTextEdit(layoutWidget_2);
        weakText->setObjectName(QString::fromUtf8("weakText"));
        weakText->setFont(font);
        weakText->setReadOnly(true);

        horizontalLayout_5->addWidget(weakText);

        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 1091, 64));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        uniquePtr = new QLabel(layoutWidget);
        uniquePtr->setObjectName(QString::fromUtf8("uniquePtr"));
        uniquePtr->setFont(font);

        horizontalLayout_4->addWidget(uniquePtr);

        sharedPtr = new QLabel(layoutWidget);
        sharedPtr->setObjectName(QString::fromUtf8("sharedPtr"));
        sharedPtr->setFont(font);

        horizontalLayout_4->addWidget(sharedPtr);

        weakPtr = new QLabel(layoutWidget);
        weakPtr->setObjectName(QString::fromUtf8("weakPtr"));
        weakPtr->setFont(font);

        horizontalLayout_4->addWidget(weakPtr);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1092, 26));
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
        unique->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\321\202\321\214 \320\277\321\200\320\276\320\262\320\265\321\200\320\272\321\203", nullptr));
        shared->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\321\202\321\214 \320\277\321\200\320\276\320\262\320\265\321\200\320\272\321\203", nullptr));
        weak->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\321\202\321\214 \320\277\321\200\320\276\320\262\320\265\321\200\320\272\321\203", nullptr));
        uniquePtr->setText(QCoreApplication::translate("MainWindow", "Unique pointer", nullptr));
        sharedPtr->setText(QCoreApplication::translate("MainWindow", "Shared pointer", nullptr));
        weakPtr->setText(QCoreApplication::translate("MainWindow", "Weak pointer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
