#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <iostream>
#include <fstream>

using namespace std;

class Student
{
    // 内部变量外部不能访问
private:
    string id;     // 学号
    string name;   // 姓名
    short age;     // 年龄
    string gender; // 性别

    // 类提供的接口用来访问内部变量
public:
    Student();
    Student(const Student &stu);
    Student(string id, string name, short age, string gender);
    ~Student();

    string getId();     // 返回对象的id
    string getName();   // 返回对象的name
    short getAge();     // 返回对象的age
    string getGender(); // 返回对象的gender

    void showInfo(); // 显示对象的所有属性

    void setId(string id);         // 设置对象的id
    void setName(string name);     // 设置对象的name
    void setAge(short age);        // 设置对象的age
    void setGender(string gender); // 设置对象的gender

    void writeStuToFile(const char *filename);  // 将对象的信息写入文件
    void readStuFromFile(const char *filename); // 将文件中的学生信息读入对象
};

bool writeStuArrayToFile(const char *filename, Student *stu, int num);  // 将学生对象数组的学生信息写入文件
bool readStuArrayFromFile(const char *filename, Student *stu, int num); // 将文件中的学生信息读入学生对象数组

#endif