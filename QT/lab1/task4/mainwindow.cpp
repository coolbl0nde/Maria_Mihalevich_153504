#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QStringList>
#include <QMessageBox>
#include <QKeyEvent>
#include <QTime>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->resize(1300,650);          // Устанавливаем размеры окна приложения
    this->setFixedSize(1300,650);


    connect(ui->CompanyButton, SIGNAL(clicked()), this, SLOT(CompanyButton_clicked()));
    connect(ui->EmployeeButton, SIGNAL(clicked()), this, SLOT(EmployeeButton_clicked()));
    connect(ui->addEmployeeButton, SIGNAL(clicked()), this, SLOT(addEmployeeButton_clicked()));
    connect(ui->addCompanyButton, SIGNAL(clicked()), this, SLOT(addCompanyButton_clicked()));
    connect(ui->changeCompanyButton, SIGNAL(clicked()), this, SLOT(changeCompanyButton_clicked()));
    connect(ui->changeEmployeeButton, SIGNAL(clicked()), this, SLOT(changeEmployeeButton_clicked()));
    connect(ui->deleteCompanyButton, SIGNAL(clicked()), this, SLOT(deleteCompanyButton_clicked()));
    connect(ui->deleteEmployeeButton, SIGNAL(clicked()), this, SLOT(deleteEmployeeButton_clicked()));
    connect(ui->findEmployeeForCompanyButton, SIGNAL(clicked()), this, SLOT(findEmployeeForCompany_clicked()));
    connect(ui->noEmployeeForPositionButton, SIGNAL(clicked()), this, SLOT(noEmployeeForPosition_clicked()));
    connect(ui->noPositionForEmployeeButton, SIGNAL(clicked()), this, SLOT(noPositionForEmployee_clicked()));
    connect(ui->readCompanyFromFileButton, SIGNAL(clicked()), this, SLOT(readCompanyFromFile_clicked()));
    connect(ui->readEmployeeFromFileButton, SIGNAL(clicked()), this, SLOT(readEmployeeFromFile_clicked()));


    ui->titleEdit->setMaxLength(12);
    ui->positionInCompanyEdit->setMaxLength(20);
    ui->salaryInCompanyEdit->setMaxLength(25);
    ui->vacationEdit->setMaxLength(8);
    ui->educationInCompanyEdit->setMaxLength(12);
    ui->minAgeEdit->setMaxLength(12);
    ui->maxAgeEdit->setMaxLength(12);
    ui->experienceInCompanyEdit->setMaxLength(12);


    ui->fullNameEdit->setMaxLength(15);
    ui->birthdayEdit->setMaxLength(30);
    ui->higherEducationEdit->setMaxLength(14);
    ui->positionEdit->setMaxLength(14);
    ui->salaryEdit->setMaxLength(14);
    ui->experienceEdit->setMaxLength(14);


    //this->readCompanyFromFile_clicked();
    //this->readEmployeeFromFile_clicked();
}

MainWindow::~MainWindow()
{
    if(CompanyAmount != 0)  delete [] CompanyList;
    if(EmployeeAmount != 0) delete [] EmployeeList;
    delete ui;
}

void MainWindow::findEmployeeForCompany_clicked()
{
    QFile file(filename_company);
    QFile employee(filename_employee);

    if(file.open(QIODevice::ReadWrite) && employee.open(QIODevice::ReadWrite)){
        for(int i = 0; i < ui->tableWidget->rowCount(); i++){
            for(int k = 0; k < ui->tableWidget->columnCount(); k++){
                ui->tableWidget->item(i, k)->setBackground(Qt::white);  //clear table
            }
        }

        QString title = ui->CompanyComboBox->currentText();
        for(int i = 0; i < CompanyAmount; i++){
            if(CompanyList[i].getTitle() == title){
                for (int k = 0; k < EmployeeAmount; k++){
                    if(CompanyList[i].getEducationInCompany() == EmployeeList[k].getHigherEducation() &&
                            CompanyList[i].getPositionInCompany() == EmployeeList[k].getPosition() &&
                            CompanyList[i].getExperienceInCompany() <= EmployeeList[k].getExperience() &&
                            CompanyList[i].getSalaryInCompany() >= EmployeeList[k].getSalary() &&
                            CompanyList[i].getMaxAge() >= (2022 - (1000 * EmployeeList[k].getBirthday()[6].digitValue() + 100 * EmployeeList[k].getBirthday()[7].digitValue() + 10 * EmployeeList[k].getBirthday()[8].digitValue() + EmployeeList[k].getBirthday()[9].digitValue())) &&
                            CompanyList[i].getMinAge() <= (2022 - (1000 * EmployeeList[k].getBirthday()[6].digitValue() + 100 * EmployeeList[k].getBirthday()[7].digitValue() + 10 * EmployeeList[k].getBirthday()[8].digitValue() + EmployeeList[k].getBirthday()[9].digitValue()))) {
                        for(int j = 0; j < 6; j++) ui->tableWidget->item(k, j)->setBackground(Qt::yellow);
                    }
                }
            }
        }
    } else {
        QMessageBox::warning(this, "Error", "Files are not opened!");
    }
}

void MainWindow::noEmployeeForPosition_clicked()
{
    QFile file(filename_company);
    QFile employee(filename_employee);

    if(file.open(QIODevice::ReadWrite) && employee.open(QIODevice::ReadWrite)){
        for(int i = 0; i < ui->tableWidget->rowCount(); i++){
            for(int j = 0; j < ui->tableWidget->columnCount(); j++){
                ui->tableWidget->item(i, j)->setBackground(Qt::white);  //clear table
            }
        }

        for(int i = 0; i < CompanyAmount; i++){
            int count = 0;
            for (int k = 0; k < EmployeeAmount; k++){
                if(CompanyList[i].getEducationInCompany() == EmployeeList[k].getHigherEducation() &&
                        CompanyList[i].getPositionInCompany() == EmployeeList[k].getPosition() &&
                        CompanyList[i].getExperienceInCompany() <= EmployeeList[k].getExperience() &&
                        CompanyList[i].getSalaryInCompany() >= EmployeeList[k].getSalary() &&
                        CompanyList[i].getMaxAge() >= (2022 - (1000 * EmployeeList[k].getBirthday()[6].digitValue() + 100 * EmployeeList[k].getBirthday()[7].digitValue() + 10 * EmployeeList[k].getBirthday()[8].digitValue() + EmployeeList[k].getBirthday()[9].digitValue())) &&
                        CompanyList[i].getMinAge() <= (2022 - (1000 * EmployeeList[k].getBirthday()[6].digitValue() + 100 * EmployeeList[k].getBirthday()[7].digitValue() + 10 * EmployeeList[k].getBirthday()[8].digitValue() + EmployeeList[k].getBirthday()[9].digitValue()))) {
                    count++;
                }
            }
            if (!count) {
                ui->tableWidget->item(i, 1)->setBackground(Qt::red);
            }
        }
    } else {
        QMessageBox::warning(this, "Error", "Files are not opened!");
    }
}

void MainWindow::noPositionForEmployee_clicked()
{
    QFile file(filename_company);
    QFile employee(filename_employee);

    if(file.open(QIODevice::ReadWrite) && employee.open(QIODevice::ReadWrite)){
        for(int i = 0; i < ui->tableWidget->rowCount(); i++){
                for(int j = 0; j < ui->tableWidget->columnCount(); j++){
                    ui->tableWidget->item(i, j)->setBackground(Qt::white);  //clear table
                }
            }

            for(int i = 0; i < EmployeeAmount; i++){
                int count = 0;
                for (int k = 0; k < CompanyAmount; k++){
                    if(CompanyList[k].getEducationInCompany() == EmployeeList[i].getHigherEducation() &&
                            CompanyList[k].getPositionInCompany() == EmployeeList[i].getPosition() &&
                            CompanyList[k].getExperienceInCompany() <= EmployeeList[i].getExperience() &&
                            CompanyList[k].getSalaryInCompany() >= EmployeeList[i].getSalary() &&
                            CompanyList[k].getMaxAge() >= (2022 - (1000 * EmployeeList[i].getBirthday()[6].digitValue() + 100 * EmployeeList[i].getBirthday()[7].digitValue() + 10 * EmployeeList[i].getBirthday()[8].digitValue() + EmployeeList[i].getBirthday()[9].digitValue())) &&
                            CompanyList[k].getMinAge() <= (2022 - (1000 * EmployeeList[i].getBirthday()[6].digitValue() + 100 * EmployeeList[i].getBirthday()[7].digitValue() + 10 * EmployeeList[i].getBirthday()[8].digitValue() + EmployeeList[i].getBirthday()[9].digitValue()))) {
                        count++;
                    }
                }
                if (!count) {
                    ui->tableWidget->item(i, 0)->setBackground(Qt::red);
                }
            }
    } else {
        QMessageBox::warning(this, "Error", "Files are not opened!");
    }
}

void MainWindow::readCompanyFromFile_clicked()
{
    filename_company = QFileDialog::getOpenFileName(this, "Open a File", "D://", "*.txt");
    QFile file(filename_company);
    //QFile file("D:\\CompanyList.txt");

    if(!file.open(QIODevice::ReadWrite))
        {
            QMessageBox::information(this, tr("Unable to open file"), file.errorString());
            return;
        } else {
        QTextStream stream(&file);


        QString line; //temporary string
        int count = 0;
        while(!stream.atEnd()){
            line = stream.readLine();   //count lines in file
            if(line != "") count++;
        }

        CompanyAmount = count;

        stream.seek(0); //set at the begin
        QString _title;
        QString _positionInCompany;
        int _salaryInCompany;
        int _vacation;
        QString _educationInCompany;
        int _minAge;
        int _maxAge;
        int _experienceInCompany;
        CompanyList = new Company[CompanyAmount];    //allocate memory

        QStringList list;

        for (int i = 0; i < CompanyAmount; i++) {
            list = stream.readLine().split('|');
            /*if(salaryInCompany.toInt() > 0 && vacation.toInt() > 0 && !containsDigit(positionInCompany) && !containsDigit(title)
                            && !containsDigit(educationInCompany) && !educationInCompany.contains(' ') && (educationInCompany == "yes" || educationInCompany == "no")
                            && minAge.toInt() > 0 && MaxAge.toInt() > 0 && experienceInCompany.toInt() > 0)*/
            if (containsDigit(list[0]) || containsDigit(list[1]) || list[2].toInt() < 0 || list[3].toInt() < 0 ||
                    containsDigit(list[4]) || list[4].contains(' ') || (list[4] != "yes" && list[4] != "no") ||
                     list[5].toInt() < 0 || list[6].toInt() < 0 || list[7].toInt() < 0) {
                QMessageBox::warning(this, "Error", "Incorrect file!");
                break;
            } else {
                _title = list[0];
                _positionInCompany = list[1];
                _salaryInCompany = list[2].toInt();
                _vacation = list[3].toInt();
                _educationInCompany = list[4];
                _minAge = list[5].toInt();
                _maxAge = list[6].toInt();
                _experienceInCompany = list[7].toInt();

                ui->CompanyComboBox->addItem(_title);

                CompanyList[i] = Company(_title, _positionInCompany, _salaryInCompany, _vacation, _educationInCompany, _minAge, _maxAge, _experienceInCompany);
            }
        }

        /*for(int i = 0; i < CompanyAmount; i++){         //write data from file to array
            list = stream.readLine().split('|');
            _title = list[0];
            _positionInCompany = list[1];
            _salaryInCompany = list[2].toInt();
            _vacation = list[3].toInt();
            _educationInCompany = list[4];
            _minAge = list[5].toInt();
            _maxAge = list[6].toInt();
            _experienceInCompany = list[7].toInt();

            ui->CompanyComboBox->addItem(_title);

            CompanyList[i] = Company(_title, _positionInCompany, _salaryInCompany, _vacation, _educationInCompany, _minAge, _maxAge, _experienceInCompany);
        }*/
        file.close();
    }
}

void MainWindow::readEmployeeFromFile_clicked()
{
    filename_employee = QFileDialog::getOpenFileName(this, "Open a File", "D://", "*.txt");
    QFile employee(filename_employee);
    //QFile employee("D:\\EmployeeList.txt");

    /*if(!employee.open(QIODevice::ReadOnly))
        {
            QMessageBox::warning(this, "Error", "Incorrect input!");
            return;
        }*/

    if(!employee.open(QIODevice::ReadWrite)) {
            QMessageBox::information(this, tr("Unable to open file"), employee.errorString());
            return;
        } else {
        QTextStream stream(&employee);


        QString line; //temporary string
        int count = 0;
        while(!stream.atEnd()){
            line = stream.readLine();
            if(line != "") count++;
        }
        EmployeeAmount = count;


        stream.seek(0); //set at the begin

        QString _fullName;
        QString _birthday;
        QString _higherEducation;
        QString _position;
        int _salary;
        int _experience;
        EmployeeList = new Employee[EmployeeAmount];

        QStringList list;

        for(int i = 0; i < EmployeeAmount; i++){
            list = stream.readLine().split('|');

            /*if(experience.toInt() > 0 && salary.toInt() > 0 && !containsDigit(higherEducation) && !isExist && correctDate(birthday) &&
                            !containsDigit(fullName) && !containsDigit(position) && (higherEducation == "yes" || higherEducation == "no") &&
                            containsDigit(birthday))*/

            if (containsDigit(list[0]) || !correctDate(list[1]) ||
                    containsDigit(list[3]) || (list[2] != "yes" && list[2] != "no") ||
                     list[4].toInt() < 0 || list[5].toInt() < 0) {
                QMessageBox::warning(this, "Error", "Incorrect file!");
                break;
            } else {
                _fullName = list[0];
                _birthday = list[1];
                _higherEducation = list[2];
                _position = list[3];
                _salary = list[4].toInt();
                _experience = list[5].toInt();

                ui->EmployeeComboBox->addItem(_fullName);

                EmployeeList[i] = Employee(_fullName, _birthday, _higherEducation, _position, _salary, _experience);
            }
        }
        employee.close();
    }
}

void MainWindow::clearTable()
{
    ui->tableWidget->clear();   //clear table
    ui->tableWidget->setColumnCount(0);
    ui->tableWidget->setRowCount(0);
}

void MainWindow::CompanyButton_clicked()
{
    QFile file(filename_company);
    //QFile file("D:\\CompanyList.txt");

    if(file.open(QIODevice::ReadWrite)){
        this->clearTable();
        ui->tableWidget->setColumnCount(8);
        ui->tableWidget->setHorizontalHeaderLabels(QStringList() << ("title")
                                                                 << ("position")
                                                                 << ("salary")
                                                                 <<  ("vacation")
                                                                 <<  ("education")
                                                                 <<  ("min age")
                                                                 <<  ("max age")
                                                                 <<  ("experience"));
        ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

        for(int i = 0; i < CompanyAmount; i++){
            ui->tableWidget->insertRow(i);
            ui->tableWidget->setItem(i, 0, new QTableWidgetItem(CompanyList[i].getTitle())); //add data to table
            ui->tableWidget->setItem(i, 1, new QTableWidgetItem(CompanyList[i].getPositionInCompany()));
            ui->tableWidget->setItem(i, 2, new QTableWidgetItem(QString::number(CompanyList[i].getSalaryInCompany())));
            ui->tableWidget->setItem(i, 3, new QTableWidgetItem(QString::number(CompanyList[i].getVacation())));
            ui->tableWidget->setItem(i, 4, new QTableWidgetItem(CompanyList[i].getEducationInCompany()));
            ui->tableWidget->setItem(i, 5, new QTableWidgetItem(QString::number(CompanyList[i].getMinAge())));
            ui->tableWidget->setItem(i, 6, new QTableWidgetItem(QString::number(CompanyList[i].getMaxAge())));
            ui->tableWidget->setItem(i, 7, new QTableWidgetItem(QString::number(CompanyList[i].getExperienceInCompany())));
        }
    } else {
        QMessageBox::warning(this, "Error", "File is not opened!");
    }
}

void MainWindow::EmployeeButton_clicked()
{
    QFile employee(filename_employee);
    //QFile employee("D:\\EmployeeList.txt");

    /*if(!employee.open(QIODevice::ReadOnly))
        {
            QMessageBox::warning(this, "Error", "Incorrect input!");
            return;
        }*/

    if(employee.open(QIODevice::ReadWrite)){
        this->clearTable();

        ui->tableWidget->setColumnCount(6);
        ui->tableWidget->setHorizontalHeaderLabels(QStringList() << ("full name")
                                                                 << ("birthday")
                                                                 << ("education")
                                                                 << ("position")
                                                                 << ("salary")
                                                                 << ("experience"));
        ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

        for(int i = 0; i < EmployeeAmount; i++){
            ui->tableWidget->insertRow(i);
            ui->tableWidget->setItem(i, 0, new QTableWidgetItem(EmployeeList[i].getFullName())); //add data to table
            ui->tableWidget->setItem(i, 1, new QTableWidgetItem(EmployeeList[i].getBirthday()));
            ui->tableWidget->setItem(i, 2, new QTableWidgetItem(EmployeeList[i].getHigherEducation()));
            ui->tableWidget->setItem(i, 3, new QTableWidgetItem(EmployeeList[i].getPosition()));
            ui->tableWidget->setItem(i, 4, new QTableWidgetItem(QString::number(EmployeeList[i].getSalary())));
            ui->tableWidget->setItem(i, 5, new QTableWidgetItem(QString::number(EmployeeList[i].getExperience())));

        }
    } else {
        QMessageBox::warning(this, "Error", "File is not opened!");
    }
}

void MainWindow::addCompanyButton_clicked()
{
    QFile file(filename_company);
    //QFile file("D:\\CompanyList.txt");

    if(file.open(QIODevice::ReadWrite)){
        QString title = ui->titleEdit->text();
        QString positionInCompany = ui->positionInCompanyEdit->text();
        QString salaryInCompany = ui->salaryInCompanyEdit->text();
        QString vacation = ui->vacationEdit->text();
        QString educationInCompany = ui->educationInCompanyEdit->text();
        QString minAge = ui->minAgeEdit->text();
        QString MaxAge = ui->maxAgeEdit->text();
        QString experienceInCompany = ui->experienceInCompanyEdit->text();

        bool isExist = false;
        for(int i = 0; i < CompanyAmount; i++){
            if(CompanyList[i].getTitle() == title) isExist = true;
        }
        if(isExist){
            QMessageBox::warning(this, "Error", "Company with this name already exists.");
        }
        else if(salaryInCompany.toInt() > 0 && vacation.toInt() > 0 && !containsDigit(positionInCompany) && !containsDigit(title)
                && !containsDigit(educationInCompany) && !educationInCompany.contains(' ') && (educationInCompany == "yes" || educationInCompany == "no")
                && minAge.toInt() > 0 && MaxAge.toInt() > 0 && experienceInCompany.toInt() > 0){

            Company* tmp = new Company[CompanyAmount];
            for(int i = 0; i < CompanyAmount; i++){
                tmp[i] = CompanyList[i];
            }
            delete [] CompanyList;

            CompanyList = new Company[CompanyAmount + 1];   //reallocate memory

            for(int i = 0; i < CompanyAmount; i++){
                CompanyList[i] = tmp[i];
            }
            delete [] tmp;

            CompanyList[CompanyAmount] = Company(title, positionInCompany, salaryInCompany.toInt(), vacation.toInt(), educationInCompany,
                                                 minAge.toInt(), MaxAge.toInt(), experienceInCompany.toInt());

            CompanyAmount += 1;


            //filename_company = QFileDialog::getOpenFileName(this, "Open a File", "D://", "*.txt");
            QFile file(filename_company);
            //QFile file("D:\\CompanyList.txt");
            if(file.open(QIODevice::ReadWrite | QIODevice::Append)){
                QTextStream stream(&file);

                stream << title + "|";
                stream << positionInCompany + "|";
                stream << salaryInCompany + "|";
                stream << vacation + "|";
                stream << educationInCompany + "|";
                stream << minAge + "|";
                stream << MaxAge + "|";
                stream << experienceInCompany + "\n";

                file.close();
                ui->titleEdit->clear();
                ui->positionInCompanyEdit->clear();
                ui->salaryInCompanyEdit->clear();
                ui->vacationEdit->clear();
                ui->educationInCompanyEdit->clear();
                ui->minAgeEdit->clear();
                ui->maxAgeEdit->clear();
                ui->experienceInCompanyEdit->clear();
            }

            this->CompanyButton_clicked();    //rewrite table

            ui->CompanyComboBox->addItem(title);
        } else {
            QMessageBox::warning(this, "Error", "Incorrect input!");
        }
    } else {
        QMessageBox::warning(this, "Error", "File is not opened!");
    }
}

bool correctDate(QString date)
{
    int count_points = 0;
    QStringList list = date.split(QLatin1Char('.'));
    if(list.size() != 3) return false;
    for(int i = 0; i < date.size(); i++){
        if(date[i] == '.') count_points++;
        else if(!QChar(date[i]).isDigit()) return false;
    }
    if(count_points != 2) return false;

    int Day = list[0].toInt();
    int Month = list[1].toInt();
    int Year = list[2].toInt();
    if(Day <= 0 || Month <= 0 || Year <= 0){
        return false;
    }
    else if(Day > 31 || Month > 12 || Year > 9999){
        return false;
    }
    else if(Day == 31 && Month != 2 && Month != 3 && Month != 5
           && Month != 7 && Month != 8 && Month != 10 && Month != 12){
        return false;
    }
    else if(Day >= 29 && Month == 2 && !((Year % 100 != 0 && Year % 4 == 0) || Year % 400 == 0)) {
        return false;
    }
    else return true;
}

void MainWindow::addEmployeeButton_clicked()
{
    QFile employee(filename_employee);
    //QFile employee("D:\\EmployeeList.txt");

    /*if(!employee.open(QIODevice::ReadOnly))
        {
            QMessageBox::warning(this, "Error", "Incorrect input!");
            return;
        }*/

    if(employee.open(QIODevice::ReadWrite)){
        QString fullName = ui->fullNameEdit->text();
        QString birthday = ui->birthdayEdit->text();
        QString higherEducation = ui->higherEducationEdit->text();
        QString position = ui->positionEdit->text();
        QString salary = ui->salaryEdit->text();
        QString experience = ui->experienceEdit->text();

        bool isExist = false;
        for(int i = 0; i < EmployeeAmount; i++){
            if(EmployeeList[i].getFullName() == fullName) isExist = true;
        }
        if(isExist){
            QMessageBox::warning(this, "Error", "Employee with this name already exists.");
        }
        else if(experience.toInt() > 0 && salary.toInt() > 0 && !containsDigit(higherEducation) && !isExist && correctDate(birthday) &&
                !containsDigit(fullName) && !containsDigit(position) && (higherEducation == "yes" || higherEducation == "no") &&
                containsDigit(birthday)) {
            Employee* tmp = new Employee[EmployeeAmount];

            for(int i = 0; i < EmployeeAmount; i++){
                tmp[i] = EmployeeList[i];
            }

            delete [] EmployeeList;

            EmployeeList = new Employee[EmployeeAmount + 1];

            for(int i = 0; i < EmployeeAmount; i++){
                EmployeeList[i] = tmp[i];
            }
            delete [] tmp;

            EmployeeList[EmployeeAmount] = Employee(fullName, birthday, higherEducation, position, salary.toInt(), experience.toInt());

            ui->EmployeeComboBox->addItem(fullName);

            EmployeeAmount += 1;

            //filename_employee = QFileDialog::getOpenFileName(this, "Open a File", "D://", "*.txt");
            QFile Employee(filename_employee);
            //QFile Employee("D:\\EmployeeList.txt");
            if(Employee.open(QIODevice::ReadWrite | QIODevice::Append)){
                QTextStream stream(&Employee);

                stream << fullName + "|";
                stream << birthday + "|";
                stream << higherEducation + "|";
                stream << position + "|";
                stream << salary + "|";
                stream << experience + "\n";

                Employee.close();
                ui->fullNameEdit->clear();
                ui->birthdayEdit->clear();
                ui->higherEducationEdit->clear();
                ui->positionEdit->clear();
                ui->salaryEdit->clear();
                ui->experienceEdit->clear();
            }
            this->EmployeeButton_clicked();

        }
        else {
            QMessageBox::warning(this, "Error", "Incorrect input!");
        }
    } else {
        QMessageBox::warning(this, "Error", "File is not opened!");
    }
}

void MainWindow::rewriteCompanyInFile()
{
    //filename_company = QFileDialog::getOpenFileName(this, "Open a File", "D://", "*.txt");
    QFile file(filename_company);
    //QFile file("D:\\CompanyList.txt");
    if(file.open(QIODevice::WriteOnly)){
        QTextStream stream(&file);
        for(int i = 0; i < CompanyAmount; i++){
            stream << CompanyList[i].getTitle() << "|"
                   << CompanyList[i].getPositionInCompany() << "|"
                   << CompanyList[i].getSalaryInCompany() << "|"
                   << CompanyList[i].getVacation() << "|"
                   << CompanyList[i].getEducationInCompany() << "|"
                   << CompanyList[i].getMinAge() << "|"
                   << CompanyList[i].getMaxAge() << "|"
                   << CompanyList[i].getExperienceInCompany() << "\n";
        }
        file.close();
    }
    else {
        QMessageBox::warning(this, "Error", "Incorrect input!");
    }
}

void MainWindow::rewriteEmployeeInFile()
{
    //filename_employee = QFileDialog::getOpenFileName(this, "Open a File", "D://", "*.txt");
    QFile Employee(filename_employee);
    //QFile Employee("D:\\EmployeeList.txt");
    if(Employee.open(QIODevice::WriteOnly)){
        QTextStream stream(&Employee);
        for(int i = 0; i < EmployeeAmount; i++){
            stream << EmployeeList[i].getFullName() << "|";
            stream << EmployeeList[i].getBirthday() << "|";
            stream << EmployeeList[i].getHigherEducation() << "|";
            stream << EmployeeList[i].getPosition() << "|";
            stream << EmployeeList[i].getSalary() << "|";
            stream << EmployeeList[i].getExperience() << "\n";
        }
    } else {
        QMessageBox::warning(this, "Error", "Incorrect input!");
    }
}

void MainWindow::changeCompanyButton_clicked()
{
    QFile file(filename_company);
    //QFile file("D:\\CompanyList.txt");

    if(file.open(QIODevice::ReadWrite)){
        QString _title = ui->CompanyComboBox->currentText();

        QString title = ui->titleEdit->text();
        QString positionInCompany = ui->positionInCompanyEdit->text();
        QString salaryInCompany = ui->salaryInCompanyEdit->text();
        QString vacation = ui->vacationEdit->text();
        QString educationInCompany = ui->educationInCompanyEdit->text();
        QString minAge = ui->minAgeEdit->text();
        QString MaxAge = ui->maxAgeEdit->text();
        QString experienceInCompany = ui->experienceInCompanyEdit->text();

        if(salaryInCompany.toInt() > 0 && vacation.toInt() > 0 && !containsDigit(positionInCompany) && !containsDigit(title)
                && !containsDigit(educationInCompany) && !educationInCompany.contains(' ') && (educationInCompany == "yes" || educationInCompany == "no")
                && minAge.toInt() > 0 && MaxAge.toInt() > 0 && experienceInCompany.toInt() > 0){
            for(int i = 0; i < CompanyAmount; i++){
                if(CompanyList[i].getTitle() == _title){
                    CompanyList[i] = Company(title, positionInCompany, salaryInCompany.toInt(), vacation.toInt(), educationInCompany,
                                             minAge.toInt(), MaxAge.toInt(), experienceInCompany.toInt());
                    break;
                }
            }

            ui->CompanyComboBox->insertItem(ui->CompanyComboBox->currentIndex(), title);
            ui->CompanyComboBox->removeItem(ui->CompanyComboBox->currentIndex());

            ui->titleEdit->clear();
            ui->positionInCompanyEdit->clear();
            ui->salaryInCompanyEdit->clear();
            ui->vacationEdit->clear();
            ui->educationInCompanyEdit->clear();
            ui->minAgeEdit->clear();
            ui->maxAgeEdit->clear();
            ui->experienceInCompanyEdit->clear();

            this->rewriteCompanyInFile();
            this->CompanyButton_clicked();
        }
        else {
            QMessageBox::warning(this, "Error", "Incorrect input!");
        }
    } else {
        QMessageBox::warning(this, "Error", "File is not opened!");
    }
}

void MainWindow::changeEmployeeButton_clicked()
{
    QFile employee(filename_employee);
    //QFile employee("D:\\EmployeeList.txt");

    /*if(!employee.open(QIODevice::ReadOnly))
        {
            QMessageBox::warning(this, "Error", "Incorrect input!");
            return;
        }*/

    if(employee.open(QIODevice::ReadWrite)){
        QString _fullName = ui->EmployeeComboBox->currentText();

        QString fullName = ui->fullNameEdit->text();
        QString birthday = ui->birthdayEdit->text();
        QString higherEducation = ui->higherEducationEdit->text();
        QString position = ui->positionEdit->text();
        QString salary = ui->salaryEdit->text();
        QString experience = ui->experienceEdit->text();

        if(experience.toInt() > 0 && salary.toInt() > 0 && !containsDigit(higherEducation) && correctDate(birthday) &&
                !containsDigit(fullName) && !containsDigit(position) && (higherEducation == "yes" || higherEducation == "no") &&
                containsDigit(birthday)){
            for(int i = 0; i < EmployeeAmount; i++){
                if(EmployeeList[i].getFullName() == _fullName){
                    EmployeeList[i] = Employee(fullName, birthday, higherEducation, position, salary.toInt(), experience.toInt());
                    break;
                }
            }

            ui->EmployeeComboBox->insertItem(ui->EmployeeComboBox->currentIndex(), fullName);
            ui->EmployeeComboBox->removeItem(ui->EmployeeComboBox->currentIndex());

            ui->fullNameEdit->clear();
            ui->birthdayEdit->clear();
            ui->higherEducationEdit->clear();
            ui->positionEdit->clear();
            ui->salaryEdit->clear();
            ui->experienceEdit->clear();

            this->rewriteEmployeeInFile();
            this->EmployeeButton_clicked();

        }
        else {
            QMessageBox::warning(this, "Error", "Incorrect input!");
        }
    } else {
        QMessageBox::warning(this, "Error", "File is not opened!");
    }
}

bool containsDigit(const QString& string)
{
    for(int i = 0; i < string.size(); i++){
        if(string[i].isDigit()) return true;
    }
    return false;
}

void MainWindow::deleteCompanyButton_clicked()
{
    QFile file(filename_company);
    //QFile file("D:\\CompanyList.txt");

    if(file.open(QIODevice::ReadWrite)){
        if(CompanyAmount > 0){

            Company* tmp = new Company[CompanyAmount - 1];
            int count = 0;
            for(int i = 0; i < CompanyAmount; i++){
                if(CompanyList[i].getTitle() != ui->CompanyComboBox->currentText()){
                    tmp[count] = CompanyList[i];
                    count++;
                }
            }
            delete [] CompanyList;

            CompanyList = new Company[CompanyAmount - 1];   //reallocate memory

            for(int i = 0; i < CompanyAmount - 1; i++){
                CompanyList[i] = tmp[i];
            }
            delete [] tmp;


            CompanyAmount -= 1;

            ui->CompanyComboBox->removeItem(ui->CompanyComboBox->currentIndex());
            this->rewriteCompanyInFile();
            this->CompanyButton_clicked();
        } else {
            QMessageBox::warning(this, "Error", "The list is empty!");
        }
    } else {
        QMessageBox::warning(this, "Error", "File is not opened!");
    }
}

void MainWindow::deleteEmployeeButton_clicked()
{
    QFile employee(filename_employee);
    //QFile employee("D:\\EmployeeList.txt");

    /*if(!employee.open(QIODevice::ReadOnly))
        {
            QMessageBox::warning(this, "Error", "Incorrect input!");
            return;
        }*/

    if(employee.open(QIODevice::ReadWrite)){
        if(EmployeeAmount > 0){   //if Employee amount > 0
            Employee* tmp = new Employee[EmployeeAmount - 1];
            int count = 0;
            for(int i = 0; i < EmployeeAmount; i++){
                if(EmployeeList[i].getFullName() != ui->EmployeeComboBox->currentText()){
                    tmp[count] = EmployeeList[i];
                    count++;
                }
            }

            delete [] EmployeeList;

            EmployeeList = new Employee[EmployeeAmount - 1];

            for(int i = 0; i < EmployeeAmount - 1; i++){
                EmployeeList[i] = tmp[i];
            }
            delete [] tmp;

            ui->EmployeeComboBox->removeItem(ui->EmployeeComboBox->currentIndex());

            EmployeeAmount -= 1;
           this->EmployeeButton_clicked();
           this->rewriteEmployeeInFile();
        }
        else {
            QMessageBox::warning(this, "Error", "The list is empty!");
        }
    } else {
        QMessageBox::warning(this, "Error", "File is not opened!");
    }
}
