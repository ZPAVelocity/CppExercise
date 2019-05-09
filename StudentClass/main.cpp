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
