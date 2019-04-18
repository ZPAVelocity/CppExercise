/*
1、任务：
设计一个学生类，包括学生如下信息：学号、姓名、性别、年龄（或：出生日期、英语成绩、数据成绩、学生简历）。
2、要求：
1）提供相关成员函数实现学生信息的输入与输出。
给出类说明并实现相关成员函数
2）编写一个程序用于输入学生的相关信息，送入的学生存放在一个学生数组中，然后将其存放到文件中
3）编写一个程序读取文件中的学生，将其存放到一个学生数组中。
*/
#include <iostream>
#include "Student.h"
#define ARRAY_NUM 100

int main()
{
    Student stu1[ARRAY_NUM];

    string id;
    string name;
    short age;
    string gender;
    int n = 0;
    
    cout << "Input id, name, age and gender of stu1 student." << endl;
    for (n = 0; n < ARRAY_NUM; n++)
    {
        cin >> id >> name >> age >> gender;
        stu1[n].setId(id);
        stu1[n].setName(name);
        stu1[n].setAge(age);
        stu1[n].setGender(gender);

        cout << "Do you want to continue? (1 to yes and 0 to no)" << endl;
        bool flag = true;
        cin >> flag;
        if (flag == false)
            break;
        cout << "Input id, name, age and gender of stu1 student." << endl;
    }

    cout << "Write stu1 to file" << endl;
    for (int i = 0; i <= n; i++)
    {
        cout << "----------" << i + 1 << "----------" << endl;
        stu1[i].showInfo();
        cout << "---------------------" << endl;
    }

    writeStuArrayToFile("stu.dat", stu1, n);

    Student stu2[ARRAY_NUM];

    cout << "Read file info to stu2" << endl;
    readStuArrayFromFile("stu.dat", stu2, n);

    for (int i = 0; i <= n; i++)
    {
        cout << "----------" << i + 1 << "----------" << endl;
        stu2[i].showInfo();
        cout << "---------------------" << endl;
    }

    return 0;
}
