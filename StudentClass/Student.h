#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <iostream>
#include <fstream>

using namespace std;

class Student
{
  // 内部变量外部不能访问
private:
  string id;
  string name;
  string gender;
  short age;

  // 类提供的接口用来访问内部变量
public:
  Student();
  Student(string id, string name, short age, string gender);
  ~Student();
  
  void getId();
  void getName();
  void getAge();
  void getGender();
  void setId(string id);
  void setName(string name);
  void setAge(short age);
  void setGender(string gender);

  void writeStutoFile(const char *filename, Student *stu);
  Student readStufromFile(const char *filename, Student *stu);
};

#endif