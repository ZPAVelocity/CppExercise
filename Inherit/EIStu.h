// Electronic Information Student 电子信息专业学生类
#ifndef __EISTU_H__
#define __EISTU_H__
#include "../StudentClass/Student.h"

class EIStu : public Student
{
private:
    const string majorName = "Electronic Information Student";
    const string majorId = "002";
    int ssScore; // Signals and Systems Score

public:
    EIStu();
    EIStu(const EIStu &stu);
    EIStu(string id, string name, short age, string gender, int ssScore);

    void showInfo();

    string getMajorName();
    string getMajorId();

    int getssScore();
    void setssScore(int score);
};

#endif