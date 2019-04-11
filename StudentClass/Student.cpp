#include <string>
#include <fstream>
#include "Student.h"

using namespace std;

Student::Student()
{
    this->id = id;
    this->name = name;
    this->age = age;
    this->gender = gender;
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

void Student::getId()
{
    cout << this->id << endl;
}

void Student::getName()
{
    cout << this->name << endl;
}

void Student::getAge()
{
    cout << this->age << endl;
}

void Student::getGender()
{
    cout << this->gender << endl;
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

void Student::writeStutoFile(const char *filename, Student *stu)
{
    ofstream outfile;
    outfile.open("stu.dat");
    outfile << stu << endl;
    outfile.close();
}

Student Student::readStufromFile(const char *filename, Student *stu)
{
    ifstream infile;
    infile.open("stu.dat");
    //infile >> stu;
    infile.close();
}