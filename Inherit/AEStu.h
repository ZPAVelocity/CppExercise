// Automation Engineering 自动化专业学生类
#ifndef __AESTU_H__
#define __AESTU_H__
#include "../StudentClass/Student.h"

class AEStu : public Student
{
protected:
    const string majorName = "Automation Engineering";
    const string majorId = "001";
    int pacScore; // Principle of Automatic Control Score

public:
    AEStu();
    AEStu(const AEStu &stu);
    AEStu(string id, string name, short age, string gender, int pacScore);

    void showInfo();

    string getMajorName();

    string getMajorId();

    int getpacScore();
    void setpacScore(int score);
};

#endif