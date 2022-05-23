#include "company.h"

#include <QStringList>

Company::Company(QString title, QString positionInCompany, int salaryInCompany, int vacation, QString educationInCompany,
                 int minAge, int maxAge, int experienceInCompany)
    :title(title), positionInCompany(positionInCompany), salaryInCompany(salaryInCompany), vacation(vacation),
      educationInCompany(educationInCompany), minAge(minAge), maxAge(maxAge), experienceInCompany(experienceInCompany)
{

}

Company::~Company()
{

}

int Company::getSalaryInCompany() const
{
    return salaryInCompany;
}

QString Company::getPositionInCompany() const
{
    return positionInCompany;
}

QString Company::getTitle() const
{
    return title;
}

int Company::getVacation() const
{
    return vacation;
}

int Company::getExperienceInCompany() const
{
    return experienceInCompany;
}

int Company::getMinAge() const
{
    return minAge;
}

int Company::getMaxAge() const
{
    return maxAge;
}

QString Company::getEducationInCompany() const
{
    return educationInCompany;
}
