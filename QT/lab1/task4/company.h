#ifndef COMPANY_H
#define COMPANY_H


#include <QString>


class Company
{
public:
    Company(QString title = "none", QString positionInCompany = "none", int salaryInCompany = 0, int vacation = 0,
            QString educationInCompany = "none", int minAge = 0, int maxAge = 0, int experienceInCompany = 0);
    ~Company();

    QString getTitle() const;
    QString getPositionInCompany() const;
    int getSalaryInCompany() const;
    int getVacation() const;
    QString getEducationInCompany() const;
    int getMinAge() const;
    int getMaxAge() const;
    int getExperienceInCompany() const;

private:
    QString title;
    QString positionInCompany;
    int salaryInCompany;
    int vacation;
    QString educationInCompany;
    int minAge;
    int maxAge;
    int experienceInCompany;
};

#endif // COMPANY_H
