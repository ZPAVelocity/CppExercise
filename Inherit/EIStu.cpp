#include "EIStu.h"

EIStu::EIStu()
{
    this->ssScore = -1;
}

EIStu::EIStu(const EIStu &stu)
{
    this->ssScore = stu.ssScore;
}

EIStu::EIStu(string id, string name, short age, string gender, int ssScore)
{
    this->setId(id);
    this->setName(name);
    this->setAge(age);
    this->setGender(gender);
    this->ssScore = ssScore;
}

void EIStu::showInfo()
{
    Student::showInfo();
    cout << "major id: " << this->majorId << endl;
    cout << "major name: " << this->majorName << endl;
    cout << "Signals and Systems Score: " << this->ssScore << endl;
}

string EIStu::getMajorName()
{
    return this->majorName;
}

string EIStu::getMajorId()
{
    return this->majorId;
}

int EIStu::getssScore()
{
    return this->ssScore;
}

void EIStu::setssScore(int score)
{
    this->ssScore = score;
}
