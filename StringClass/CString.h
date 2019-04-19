#ifndef __STRING_H__
#define __STRING_H__

#include <iostream>
using namespace std;

class CString
{
private:
  int strLen;   // 字符串长度
  char *strPtr; // 指向字符串内容

public:
  CString();                // 默认构造，创建一个长度为零的字符串
  CString(const CString &s); // 拷贝构造器
  CString(const char *s);   //根据字符数组创建字符串对象
  ~CString();               // 析构函数

  void show();                       // 显示字符串
  void operator=(const CString &s);   // 对运算符=重载
  void operator=(const char *s);     // 对运算符=重载
  CString operator+(const CString &s); // 对运算符+重载返回String对象
  CString operator+(const char *s);   // 对运算符+重载返回String对象
  char &operator[](int index);       // 对运算符[]重载
};

#endif