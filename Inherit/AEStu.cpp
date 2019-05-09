#include "AEStu.h"

AEStu::AEStu()
{
    this->pacScore = -1;
}

AEStu::AEStu(const AEStu &stu)
{
    this->pacScore = stu.pacScore;
}

AEStu::AEStu(string id, string name, short age, string gender, int pacScore)
{
    this->setId(id);
    this->setName(name);
    this->setAge(age);
    this->setGender(gender);
    this->pacScore = pacScore;
}

void AEStu::showInfo()
{
    Student::showInfo();
    cout << "major id: " << this->majorId << endl;
    cout << "major name: " << this->majorName << endl;
    cout << "Principle of Automatic Control Score: " << this->pacScore << endl;
}

string AEStu::getMajorName()
{
    return this->majorName;
}

string AEStu::getMajorId()
{
    return this->majorId;
}

int AEStu::getpacScore()
{
    return this->pacScore;
}

void AEStu::setpacScore(int score)
{
    this->pacScore = score;
}