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
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTableView *tableView;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushBack;
    QPushButton *popBack;
    QPushButton *clear;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *insert;
    QComboBox *inserBox;
    QHBoxLayout *horizontalLayout_16;
    QPushButton *erase;
    QComboBox *eraseBox;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *horizontalLayout_15;
    QPushButton *assign;
    QLineEdit *assginLine;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *emplace;
    QComboBox *emplaceBox;
    QLineEdit *emplaceLine;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *emplaceBack;
    QLineEdit *emplaceBackLine;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *size;
    QLineEdit *sizeLine;
    QHBoxLayout *horizontalLayout_8;
    QLabel *capacity;
    QLineEdit *capacityLine;
    QHBoxLayout *horizontalLayout_14;
    QLabel *empty;
    QLineEdit *emptyLine;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *begin;
    QLineEdit *beginLine;
    QHBoxLayout *horizontalLayout_2;
    QLabel *end;
    QLineEdit *endLine;
    QHBoxLayout *horizontalLayout_6;
    QLabel *rBegin;
    QLineEdit *rBeginLine;
    QHBoxLayout *horizontalLayout_4;
    QLabel *rEnd;
    QLineEdit *rEndLine;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_9;
    QLabel *number;
    QLineEdit *numberLine;
    QPushButton *getAnswer;
    QVBoxLayout *verticalLayout_10;
    QLabel *answer;
    QLineEdit *answerLine;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1281, 663);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 30, 121, 571));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        tableView = new QTableView(layoutWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout->addWidget(tableView);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(230, 30, 237, 335));
        verticalLayout_4 = new QVBoxLayout(layoutWidget1);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_3);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        pushBack = new QPushButton(layoutWidget1);
        pushBack->setObjectName(QString::fromUtf8("pushBack"));

        verticalLayout_3->addWidget(pushBack);

        popBack = new QPushButton(layoutWidget1);
        popBack->setObjectName(QString::fromUtf8("popBack"));

        verticalLayout_3->addWidget(popBack);

        clear = new QPushButton(layoutWidget1);
        clear->setObjectName(QString::fromUtf8("clear"));

        verticalLayout_3->addWidget(clear);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        insert = new QPushButton(layoutWidget1);
        insert->setObjectName(QString::fromUtf8("insert"));

        horizontalLayout_9->addWidget(insert);

        inserBox = new QComboBox(layoutWidget1);
        inserBox->setObjectName(QString::fromUtf8("inserBox"));
        inserBox->setMaximumSize(QSize(40, 16777215));

        horizontalLayout_9->addWidget(inserBox);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        erase = new QPushButton(layoutWidget1);
        erase->setObjectName(QString::fromUtf8("erase"));

        horizontalLayout_16->addWidget(erase);

        eraseBox = new QComboBox(layoutWidget1);
        eraseBox->setObjectName(QString::fromUtf8("eraseBox"));
        eraseBox->setMaximumSize(QSize(40, 16777215));

        horizontalLayout_16->addWidget(eraseBox);


        verticalLayout_3->addLayout(horizontalLayout_16);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        assign = new QPushButton(layoutWidget1);
        assign->setObjectName(QString::fromUtf8("assign"));

        horizontalLayout_15->addWidget(assign);

        assginLine = new QLineEdit(layoutWidget1);
        assginLine->setObjectName(QString::fromUtf8("assginLine"));

        horizontalLayout_15->addWidget(assginLine);


        horizontalLayout_10->addLayout(horizontalLayout_15);


        verticalLayout_3->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        emplace = new QPushButton(layoutWidget1);
        emplace->setObjectName(QString::fromUtf8("emplace"));

        horizontalLayout_11->addWidget(emplace);

        emplaceBox = new QComboBox(layoutWidget1);
        emplaceBox->setObjectName(QString::fromUtf8("emplaceBox"));
        emplaceBox->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_11->addWidget(emplaceBox);

        emplaceLine = new QLineEdit(layoutWidget1);
        emplaceLine->setObjectName(QString::fromUtf8("emplaceLine"));

        horizontalLayout_11->addWidget(emplaceLine);


        verticalLayout_3->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        emplaceBack = new QPushButton(layoutWidget1);
        emplaceBack->setObjectName(QString::fromUtf8("emplaceBack"));

        horizontalLayout_12->addWidget(emplaceBack);

        emplaceBackLine = new QLineEdit(layoutWidget1);
        emplaceBackLine->setObjectName(QString::fromUtf8("emplaceBackLine"));

        horizontalLayout_12->addWidget(emplaceBackLine);


        verticalLayout_3->addLayout(horizontalLayout_12);


        verticalLayout_4->addLayout(verticalLayout_3);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(470, 30, 231, 324));
        verticalLayout_8 = new QVBoxLayout(layoutWidget2);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        size = new QLabel(layoutWidget2);
        size->setObjectName(QString::fromUtf8("size"));

        horizontalLayout_7->addWidget(size);

        sizeLine = new QLineEdit(layoutWidget2);
        sizeLine->setObjectName(QString::fromUtf8("sizeLine"));

        horizontalLayout_7->addWidget(sizeLine);


        verticalLayout_6->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        capacity = new QLabel(layoutWidget2);
        capacity->setObjectName(QString::fromUtf8("capacity"));

        horizontalLayout_8->addWidget(capacity);

        capacityLine = new QLineEdit(layoutWidget2);
        capacityLine->setObjectName(QString::fromUtf8("capacityLine"));

        horizontalLayout_8->addWidget(capacityLine);


        verticalLayout_6->addLayout(horizontalLayout_8);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        empty = new QLabel(layoutWidget2);
        empty->setObjectName(QString::fromUtf8("empty"));

        horizontalLayout_14->addWidget(empty);

        emptyLine = new QLineEdit(layoutWidget2);
        emptyLine->setObjectName(QString::fromUtf8("emptyLine"));
        emptyLine->setReadOnly(true);

        horizontalLayout_14->addWidget(emptyLine);


        verticalLayout_6->addLayout(horizontalLayout_14);


        verticalLayout_7->addLayout(verticalLayout_6);


        verticalLayout_8->addLayout(verticalLayout_7);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        begin = new QLabel(layoutWidget2);
        begin->setObjectName(QString::fromUtf8("begin"));

        horizontalLayout->addWidget(begin);

        beginLine = new QLineEdit(layoutWidget2);
        beginLine->setObjectName(QString::fromUtf8("beginLine"));
        beginLine->setReadOnly(true);

        horizontalLayout->addWidget(beginLine);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        end = new QLabel(layoutWidget2);
        end->setObjectName(QString::fromUtf8("end"));

        horizontalLayout_2->addWidget(end);

        endLine = new QLineEdit(layoutWidget2);
        endLine->setObjectName(QString::fromUtf8("endLine"));
        endLine->setReadOnly(true);

        horizontalLayout_2->addWidget(endLine);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        rBegin = new QLabel(layoutWidget2);
        rBegin->setObjectName(QString::fromUtf8("rBegin"));

        horizontalLayout_6->addWidget(rBegin);

        rBeginLine = new QLineEdit(layoutWidget2);
        rBeginLine->setObjectName(QString::fromUtf8("rBeginLine"));
        rBeginLine->setReadOnly(true);

        horizontalLayout_6->addWidget(rBeginLine);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        rEnd = new QLabel(layoutWidget2);
        rEnd->setObjectName(QString::fromUtf8("rEnd"));

        horizontalLayout_4->addWidget(rEnd);

        rEndLine = new QLineEdit(layoutWidget2);
        rEndLine->setObjectName(QString::fromUtf8("rEndLine"));
        rEndLine->setReadOnly(true);

        horizontalLayout_4->addWidget(rEndLine);


        verticalLayout_2->addLayout(horizontalLayout_4);


        verticalLayout_5->addLayout(verticalLayout_2);


        verticalLayout_8->addLayout(verticalLayout_5);

        layoutWidget3 = new QWidget(centralwidget);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(230, 410, 1013, 177));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        number = new QLabel(layoutWidget3);
        number->setObjectName(QString::fromUtf8("number"));
        number->setFont(font);

        verticalLayout_9->addWidget(number);

        numberLine = new QLineEdit(layoutWidget3);
        numberLine->setObjectName(QString::fromUtf8("numberLine"));

        verticalLayout_9->addWidget(numberLine);

        getAnswer = new QPushButton(layoutWidget3);
        getAnswer->setObjectName(QString::fromUtf8("getAnswer"));
        getAnswer->setMinimumSize(QSize(100, 0));

        verticalLayout_9->addWidget(getAnswer);


        horizontalLayout_3->addLayout(verticalLayout_9);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        answer = new QLabel(layoutWidget3);
        answer->setObjectName(QString::fromUtf8("answer"));
        answer->setFont(font);

        verticalLayout_10->addWidget(answer);

        answerLine = new QLineEdit(layoutWidget3);
        answerLine->setObjectName(QString::fromUtf8("answerLine"));
        answerLine->setMinimumSize(QSize(900, 0));

        verticalLayout_10->addWidget(answerLine);


        horizontalLayout_3->addLayout(verticalLayout_10);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1281, 26));
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
        label->setText(QCoreApplication::translate("MainWindow", "Vector", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Functions", nullptr));
        pushBack->setText(QCoreApplication::translate("MainWindow", "Push_back", nullptr));
        popBack->setText(QCoreApplication::translate("MainWindow", "Pop_back", nullptr));
        clear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        insert->setText(QCoreApplication::translate("MainWindow", "Insert", nullptr));
        erase->setText(QCoreApplication::translate("MainWindow", "Erase", nullptr));
        assign->setText(QCoreApplication::translate("MainWindow", "Assign", nullptr));
        assginLine->setInputMask(QString());
        emplace->setText(QCoreApplication::translate("MainWindow", "Emplace", nullptr));
        emplaceBack->setText(QCoreApplication::translate("MainWindow", "Emplace_back", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Properties", nullptr));
        size->setText(QCoreApplication::translate("MainWindow", "Size", nullptr));
        capacity->setText(QCoreApplication::translate("MainWindow", "Capacity", nullptr));
        empty->setText(QCoreApplication::translate("MainWindow", "Empty", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Iterators", nullptr));
        begin->setText(QCoreApplication::translate("MainWindow", "Begin", nullptr));
        end->setText(QCoreApplication::translate("MainWindow", "End", nullptr));
        rBegin->setText(QCoreApplication::translate("MainWindow", "RBegin", nullptr));
        rEnd->setText(QCoreApplication::translate("MainWindow", "REnd", nullptr));
        number->setText(QCoreApplication::translate("MainWindow", "Number", nullptr));
        numberLine->setText(QString());
        getAnswer->setText(QCoreApplication::translate("MainWindow", "Get answer", nullptr));
        answer->setText(QCoreApplication::translate("MainWindow", "Answer", nullptr));
        answerLine->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
