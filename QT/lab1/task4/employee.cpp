#include "employee.h"

#include <QStringList>

Employee::Employee(QString fullName, QString birthday, QString higherEducation, QString position, int salary, int experience)
    : fullName(fullName), birthday(birthday), higherEducation(higherEducation), position(position),
                                                                                    salary(salary), experience(experience)
{

}

Employee::~Employee()
{

}

QString Employee::getFullName() const
{
    return fullName;
}

QString Employee::getBirthday() const
{
    return birthday;
}

QString Employee::getHigherEducation() const
{
    return higherEducation;
}

QString Employee::getPosition() const
{
    return position;
}

int Employee::getSalary() const
{
    return salary;
}

int Employee::getExperience() const
{
    return experience;
}
