#include <string>
#include <fstream>
#include "Student.h"

using namespace std;

Student::Student()
{
    this->id = "NULL";
    this->name = "NULL";
    this->age = -1;
    this->gender = "NULL";
}

Student::Student(const Student &stu)
{
    this->id = stu.id;
    this->name = stu.name;
    this->age = stu.age;
    this->gender = stu.gender;
}

Student::Student(string id, string name, short age, string gender)
{
    this->id = id;
    this->name = name;
    this->age = age;
    this->gender = gender;
}

Student::~Student()
{
}

string Student::getId()
{
    return this->id;
}

string Student::getName()
{
    return this->name;
}

short Student::getAge()
{
    return this->age;
}

string Student::getGender()
{
    return this->gender;
}

void Student::showInfo()
{
    cout << "id: " << this->getId() << endl;
    cout << "name: " << this->getName() << endl;
    cout << "age: " << this->getAge() << endl;
    cout << "gender: " << this->getGender() << endl;
}

void Student::setId(string id)
{
    this->id = id;
}

void Student::setName(string name)
{
    this->name = name;
}

void Student::setAge(short age)
{
    this->age = age;
}

void Student::setGender(string gender)
{
    this->gender = gender;
}

void Student::writeStuToFile(const char *filename)
{
    ofstream outfile;
    outfile.open("stu.dat", ios::app);
    outfile << id << endl
            << name << endl
            << age << endl
            << gender << endl;
    outfile.close();
}

void Student::readStuFromFile(const char *filename)
{
    ifstream infile;
    infile.open("stu.dat", ios::in);

    string id;
    infile >> id;
    this->setId(id);

    string name;
    infile >> name;
    this->setName(name);

    short age;
    infile >> age;
    this->setAge(age);

    string gender;
    infile >> gender;
    this->setGender(gender);

    infile.close();
}

bool writeStuArrayToFile(const char *filename, Student *stu, int num)
{
    ofstream outfile;
    outfile.open(filename, ios::app);

    for (int i = 0; i < num + 1; i++)
    {
        outfile << stu[i].getId() << endl;
        outfile << stu[i].getName() << endl;
        outfile << stu[i].getAge() << endl;
        outfile << stu[i].getGender() << endl;
    }

    outfile.close();

    return true;
}

bool readStuArrayFromFile(const char *filename, Student *stu, int num)
{
    ifstream infile;
    infile.open(filename, ios::app);
    for (int i = 0; i < num + 1; i++)
    {
        string id;
        infile >> id;
        stu[i].setId(id);

        string name;
        infile >> name;
        stu[i].setName(name);

        short age;
        infile >> age;
        stu[i].setAge(age);

        string gender;
        infile >> gender;
        stu[i].setGender(gender);
    }

    infile.close();

    return true;
}
