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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *insert;
    QLineEdit *keyLineEdit;
    QLineEdit *valueLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *remove;
    QLineEdit *keyLineEdit_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *getNofSymbols;
    QLineEdit *keyLineEdit_4;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *getValue;
    QLineEdit *keyLineEdit_3;
    QLabel *label;
    QLabel *label_2;
    QPushButton *createTree;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_5;
    QComboBox *comboBox;
    QPushButton *changeTraverse;
    QTableWidget *tableWidget;
    QTableWidget *tableForTree;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 50, 281, 208));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        insert = new QPushButton(verticalLayoutWidget);
        insert->setObjectName(QString::fromUtf8("insert"));

        horizontalLayout->addWidget(insert);

        keyLineEdit = new QLineEdit(verticalLayoutWidget);
        keyLineEdit->setObjectName(QString::fromUtf8("keyLineEdit"));

        horizontalLayout->addWidget(keyLineEdit);

        valueLineEdit = new QLineEdit(verticalLayoutWidget);
        valueLineEdit->setObjectName(QString::fromUtf8("valueLineEdit"));

        horizontalLayout->addWidget(valueLineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        remove = new QPushButton(verticalLayoutWidget);
        remove->setObjectName(QString::fromUtf8("remove"));

        horizontalLayout_2->addWidget(remove);

        keyLineEdit_2 = new QLineEdit(verticalLayoutWidget);
        keyLineEdit_2->setObjectName(QString::fromUtf8("keyLineEdit_2"));

        horizontalLayout_2->addWidget(keyLineEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        getNofSymbols = new QPushButton(verticalLayoutWidget);
        getNofSymbols->setObjectName(QString::fromUtf8("getNofSymbols"));

        horizontalLayout_4->addWidget(getNofSymbols);

        keyLineEdit_4 = new QLineEdit(verticalLayoutWidget);
        keyLineEdit_4->setObjectName(QString::fromUtf8("keyLineEdit_4"));

        horizontalLayout_4->addWidget(keyLineEdit_4);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        getValue = new QPushButton(verticalLayoutWidget);
        getValue->setObjectName(QString::fromUtf8("getValue"));

        horizontalLayout_3->addWidget(getValue);

        keyLineEdit_3 = new QLineEdit(verticalLayoutWidget);
        keyLineEdit_3->setObjectName(QString::fromUtf8("keyLineEdit_3"));

        horizontalLayout_3->addWidget(keyLineEdit_3);


        verticalLayout->addLayout(horizontalLayout_3);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 30, 71, 21));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(210, 30, 81, 21));
        label_2->setFont(font);
        createTree = new QPushButton(centralwidget);
        createTree->setObjectName(QString::fromUtf8("createTree"));
        createTree->setGeometry(QRect(300, 440, 261, 41));
        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(300, 490, 261, 41));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        comboBox = new QComboBox(horizontalLayoutWidget_2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_5->addWidget(comboBox);

        changeTraverse = new QPushButton(horizontalLayoutWidget_2);
        changeTraverse->setObjectName(QString::fromUtf8("changeTraverse"));

        horizontalLayout_5->addWidget(changeTraverse);

        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (tableWidget->rowCount() < 9)
            tableWidget->setRowCount(9);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(7, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(8, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setItem(1, 0, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setItem(1, 1, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setItem(2, 0, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setItem(2, 1, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setItem(3, 0, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget->setItem(3, 1, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget->setItem(4, 0, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget->setItem(4, 1, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget->setItem(5, 0, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget->setItem(5, 1, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget->setItem(6, 0, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget->setItem(6, 1, __qtablewidgetitem24);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(300, 20, 261, 401));
        tableForTree = new QTableWidget(centralwidget);
        if (tableForTree->columnCount() < 1)
            tableForTree->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableForTree->setHorizontalHeaderItem(0, __qtablewidgetitem25);
        if (tableForTree->rowCount() < 9)
            tableForTree->setRowCount(9);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableForTree->setVerticalHeaderItem(0, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableForTree->setVerticalHeaderItem(1, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableForTree->setVerticalHeaderItem(2, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableForTree->setVerticalHeaderItem(3, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableForTree->setVerticalHeaderItem(4, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableForTree->setVerticalHeaderItem(5, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableForTree->setVerticalHeaderItem(6, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableForTree->setVerticalHeaderItem(7, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tableForTree->setVerticalHeaderItem(8, __qtablewidgetitem34);
        tableForTree->setObjectName(QString::fromUtf8("tableForTree"));
        tableForTree->setGeometry(QRect(570, 20, 131, 401));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
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
        insert->setText(QCoreApplication::translate("MainWindow", "Insert", nullptr));
        keyLineEdit->setText(QString());
        remove->setText(QCoreApplication::translate("MainWindow", "Remove", nullptr));
        getNofSymbols->setText(QCoreApplication::translate("MainWindow", "Get number of symbols", nullptr));
        getValue->setText(QCoreApplication::translate("MainWindow", "Get Value", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "key:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "value:", nullptr));
        createTree->setText(QCoreApplication::translate("MainWindow", "Create Tree", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Traverse Inorder", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Traverse Preorder", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Traverse Postorder", nullptr));

        changeTraverse->setText(QCoreApplication::translate("MainWindow", "Change Traverse", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Key", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Value", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->item(0, 0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "123", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->item(0, 1);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "shdshds", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->item(1, 0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "4567", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->item(1, 1);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "cxcxc", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->item(2, 0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "21", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->item(2, 1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "xcxcxc", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->item(3, 0);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "345", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->item(3, 1);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "xcxcxc", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->item(4, 0);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "543", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->item(4, 1);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "vvvcvv", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->item(5, 0);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "234", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->item(5, 1);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "nb vbn", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->item(6, 0);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("MainWindow", "223", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->item(6, 1);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("MainWindow", "vcbvcbcv", nullptr));
        tableWidget->setSortingEnabled(__sortingEnabled);

        QTableWidgetItem *___qtablewidgetitem16 = tableForTree->horizontalHeaderItem(0);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("MainWindow", "Tree Keys", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
