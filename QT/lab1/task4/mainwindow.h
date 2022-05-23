#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableWidgetItem>
#include "company.h"
#include "employee.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void clearTable();

    //void readCompanyFromFile_clicked();

    //void readEmployeeFromFile();

    void rewriteCompanyInFile();

    void rewriteEmployeeInFile();


    int CompanyAmount;
    int EmployeeAmount;

private slots:
    void CompanyButton_clicked();

    void EmployeeButton_clicked();

    void addCompanyButton_clicked();

    void addEmployeeButton_clicked();

    void changeCompanyButton_clicked();

    void changeEmployeeButton_clicked();

    void deleteCompanyButton_clicked();

    void deleteEmployeeButton_clicked();

    void findEmployeeForCompany_clicked();

    void noEmployeeForPosition_clicked();

    void noPositionForEmployee_clicked();

    void readCompanyFromFile_clicked();

    void readEmployeeFromFile_clicked();

private:
    Ui::MainWindow *ui;
    Company* CompanyList;
    Employee* EmployeeList;
    QString filename_company;
    QString filename_employee;
};

bool containsDigit(const QString& string);
bool correctDate(QString date);

#endif // MAINWINDOW_H
