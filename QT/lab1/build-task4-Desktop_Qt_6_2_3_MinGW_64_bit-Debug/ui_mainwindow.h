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
    QPushButton *CompanyButton;
    QPushButton *EmployeeButton;
    QPushButton *addEmployeeButton;
    QPushButton *addCompanyButton;
    QPushButton *changeCompanyButton;
    QPushButton *changeEmployeeButton;
    QPushButton *deleteCompanyButton;
    QPushButton *deleteEmployeeButton;
    QTableWidget *tableWidget;
    QComboBox *EmployeeComboBox;
    QComboBox *CompanyComboBox;
    QLineEdit *titleEdit;
    QLineEdit *positionInCompanyEdit;
    QLineEdit *salaryInCompanyEdit;
    QLineEdit *vacationEdit;
    QLineEdit *educationInCompanyEdit;
    QLineEdit *minAgeEdit;
    QLineEdit *maxAgeEdit;
    QLineEdit *experienceInCompanyEdit;
    QLineEdit *fullNameEdit;
    QLineEdit *birthdayEdit;
    QLineEdit *higherEducationEdit;
    QLineEdit *positionEdit;
    QLineEdit *salaryEdit;
    QLineEdit *experienceEdit;
    QPushButton *findEmployeeForCompanyButton;
    QPushButton *noEmployeeForPositionButton;
    QPushButton *noPositionForEmployeeButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QPushButton *readCompanyFromFileButton;
    QPushButton *readEmployeeFromFileButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1463, 644);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        CompanyButton = new QPushButton(centralwidget);
        CompanyButton->setObjectName(QString::fromUtf8("CompanyButton"));
        CompanyButton->setGeometry(QRect(20, 440, 121, 29));
        EmployeeButton = new QPushButton(centralwidget);
        EmployeeButton->setObjectName(QString::fromUtf8("EmployeeButton"));
        EmployeeButton->setGeometry(QRect(640, 440, 121, 29));
        addEmployeeButton = new QPushButton(centralwidget);
        addEmployeeButton->setObjectName(QString::fromUtf8("addEmployeeButton"));
        addEmployeeButton->setGeometry(QRect(640, 480, 121, 29));
        addCompanyButton = new QPushButton(centralwidget);
        addCompanyButton->setObjectName(QString::fromUtf8("addCompanyButton"));
        addCompanyButton->setGeometry(QRect(20, 480, 121, 29));
        changeCompanyButton = new QPushButton(centralwidget);
        changeCompanyButton->setObjectName(QString::fromUtf8("changeCompanyButton"));
        changeCompanyButton->setGeometry(QRect(20, 400, 121, 29));
        changeEmployeeButton = new QPushButton(centralwidget);
        changeEmployeeButton->setObjectName(QString::fromUtf8("changeEmployeeButton"));
        changeEmployeeButton->setGeometry(QRect(640, 400, 121, 29));
        deleteCompanyButton = new QPushButton(centralwidget);
        deleteCompanyButton->setObjectName(QString::fromUtf8("deleteCompanyButton"));
        deleteCompanyButton->setGeometry(QRect(20, 360, 121, 29));
        deleteEmployeeButton = new QPushButton(centralwidget);
        deleteEmployeeButton->setObjectName(QString::fromUtf8("deleteEmployeeButton"));
        deleteEmployeeButton->setGeometry(QRect(640, 360, 121, 29));
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 10, 1271, 291));
        EmployeeComboBox = new QComboBox(centralwidget);
        EmployeeComboBox->setObjectName(QString::fromUtf8("EmployeeComboBox"));
        EmployeeComboBox->setGeometry(QRect(641, 320, 121, 28));
        CompanyComboBox = new QComboBox(centralwidget);
        CompanyComboBox->setObjectName(QString::fromUtf8("CompanyComboBox"));
        CompanyComboBox->setGeometry(QRect(20, 320, 121, 28));
        titleEdit = new QLineEdit(centralwidget);
        titleEdit->setObjectName(QString::fromUtf8("titleEdit"));
        titleEdit->setGeometry(QRect(270, 320, 113, 28));
        positionInCompanyEdit = new QLineEdit(centralwidget);
        positionInCompanyEdit->setObjectName(QString::fromUtf8("positionInCompanyEdit"));
        positionInCompanyEdit->setGeometry(QRect(270, 360, 113, 28));
        salaryInCompanyEdit = new QLineEdit(centralwidget);
        salaryInCompanyEdit->setObjectName(QString::fromUtf8("salaryInCompanyEdit"));
        salaryInCompanyEdit->setGeometry(QRect(270, 400, 113, 28));
        vacationEdit = new QLineEdit(centralwidget);
        vacationEdit->setObjectName(QString::fromUtf8("vacationEdit"));
        vacationEdit->setGeometry(QRect(270, 440, 113, 28));
        educationInCompanyEdit = new QLineEdit(centralwidget);
        educationInCompanyEdit->setObjectName(QString::fromUtf8("educationInCompanyEdit"));
        educationInCompanyEdit->setGeometry(QRect(270, 480, 113, 28));
        minAgeEdit = new QLineEdit(centralwidget);
        minAgeEdit->setObjectName(QString::fromUtf8("minAgeEdit"));
        minAgeEdit->setGeometry(QRect(510, 320, 113, 28));
        maxAgeEdit = new QLineEdit(centralwidget);
        maxAgeEdit->setObjectName(QString::fromUtf8("maxAgeEdit"));
        maxAgeEdit->setGeometry(QRect(510, 360, 113, 28));
        experienceInCompanyEdit = new QLineEdit(centralwidget);
        experienceInCompanyEdit->setObjectName(QString::fromUtf8("experienceInCompanyEdit"));
        experienceInCompanyEdit->setGeometry(QRect(510, 400, 113, 28));
        fullNameEdit = new QLineEdit(centralwidget);
        fullNameEdit->setObjectName(QString::fromUtf8("fullNameEdit"));
        fullNameEdit->setGeometry(QRect(920, 320, 113, 28));
        birthdayEdit = new QLineEdit(centralwidget);
        birthdayEdit->setObjectName(QString::fromUtf8("birthdayEdit"));
        birthdayEdit->setGeometry(QRect(920, 360, 113, 28));
        higherEducationEdit = new QLineEdit(centralwidget);
        higherEducationEdit->setObjectName(QString::fromUtf8("higherEducationEdit"));
        higherEducationEdit->setGeometry(QRect(920, 400, 113, 28));
        positionEdit = new QLineEdit(centralwidget);
        positionEdit->setObjectName(QString::fromUtf8("positionEdit"));
        positionEdit->setGeometry(QRect(920, 440, 113, 28));
        salaryEdit = new QLineEdit(centralwidget);
        salaryEdit->setObjectName(QString::fromUtf8("salaryEdit"));
        salaryEdit->setGeometry(QRect(920, 480, 113, 28));
        experienceEdit = new QLineEdit(centralwidget);
        experienceEdit->setObjectName(QString::fromUtf8("experienceEdit"));
        experienceEdit->setGeometry(QRect(1170, 320, 113, 28));
        findEmployeeForCompanyButton = new QPushButton(centralwidget);
        findEmployeeForCompanyButton->setObjectName(QString::fromUtf8("findEmployeeForCompanyButton"));
        findEmployeeForCompanyButton->setGeometry(QRect(260, 560, 261, 29));
        noEmployeeForPositionButton = new QPushButton(centralwidget);
        noEmployeeForPositionButton->setObjectName(QString::fromUtf8("noEmployeeForPositionButton"));
        noEmployeeForPositionButton->setGeometry(QRect(550, 560, 271, 29));
        noPositionForEmployeeButton = new QPushButton(centralwidget);
        noPositionForEmployeeButton->setObjectName(QString::fromUtf8("noPositionForEmployeeButton"));
        noPositionForEmployeeButton->setGeometry(QRect(850, 560, 271, 29));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 330, 91, 20));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(160, 370, 101, 20));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(160, 400, 101, 20));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(150, 440, 121, 20));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(150, 480, 121, 20));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(400, 330, 111, 20));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(390, 370, 121, 20));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(400, 410, 101, 20));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(800, 330, 111, 20));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(770, 370, 141, 20));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(780, 410, 131, 20));
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(800, 450, 101, 20));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(800, 490, 111, 20));
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(1060, 330, 101, 20));
        readCompanyFromFileButton = new QPushButton(centralwidget);
        readCompanyFromFileButton->setObjectName(QString::fromUtf8("readCompanyFromFileButton"));
        readCompanyFromFileButton->setGeometry(QRect(22, 520, 141, 29));
        readEmployeeFromFileButton = new QPushButton(centralwidget);
        readEmployeeFromFileButton->setObjectName(QString::fromUtf8("readEmployeeFromFileButton"));
        readEmployeeFromFileButton->setGeometry(QRect(640, 520, 141, 29));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1463, 25));
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
        CompanyButton->setText(QCoreApplication::translate("MainWindow", "show companies", nullptr));
        EmployeeButton->setText(QCoreApplication::translate("MainWindow", "show employees", nullptr));
        addEmployeeButton->setText(QCoreApplication::translate("MainWindow", "add employee", nullptr));
        addCompanyButton->setText(QCoreApplication::translate("MainWindow", "add company", nullptr));
        changeCompanyButton->setText(QCoreApplication::translate("MainWindow", "change company", nullptr));
        changeEmployeeButton->setText(QCoreApplication::translate("MainWindow", "change employee", nullptr));
        deleteCompanyButton->setText(QCoreApplication::translate("MainWindow", "delete company", nullptr));
        deleteEmployeeButton->setText(QCoreApplication::translate("MainWindow", "delete employee", nullptr));
        birthdayEdit->setInputMask(QCoreApplication::translate("MainWindow", "99.99.9999", nullptr));
        findEmployeeForCompanyButton->setText(QCoreApplication::translate("MainWindow", "find employee for chosen company", nullptr));
        noEmployeeForPositionButton->setText(QCoreApplication::translate("MainWindow", "no employee for position", nullptr));
        noPositionForEmployeeButton->setText(QCoreApplication::translate("MainWindow", "no position for employee", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Title(string)", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Position(string)", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Salary(integer)", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Vacation(integer)", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Education(yes/no)", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Min age(integer)", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Max age(integer)", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Experience(int)", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Full name(string)", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Birthday(dd.mm.yy)", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Education(yes/no)", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Position(string)", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Salary(integer)", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Experience(int)", nullptr));
        readCompanyFromFileButton->setText(QCoreApplication::translate("MainWindow", "open file company", nullptr));
        readEmployeeFromFileButton->setText(QCoreApplication::translate("MainWindow", "open file employee", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
