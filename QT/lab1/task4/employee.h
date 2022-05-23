#ifndef EMPLOYEE_H
#define EMPLOYEE_H


#include <QString>
#include "company.h"

class Employee
{
public:
    Employee(QString fullName = "none", QString birthday = "none",
             QString higherEducation = "none", QString position = "none",
             int salary = 0, int experience = 0);
    ~Employee();


    Company* company = 0;

    QString getFullName() const;
    QString getBirthday() const;
    QString getHigherEducation() const;
    QString getPosition() const;
    int getSalary() const;
    int getExperience() const;


private:
    QString fullName;
    QString birthday;
    //int birthYear;
    QString higherEducation;
    QString position;
    int salary;
    int experience;
};

#endif // EMPLOYEE_H
