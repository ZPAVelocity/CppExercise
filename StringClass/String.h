#ifndef __STRING_H__
#define __STRING_H__

#include <iostream>
using namespace std;

class String
{
private:
    int len;

public:
    String();
    String(const String &s);
    String(char *s);
    ~String();

    void show();
    void operator=(const String &s);
    void operator=(char *s);
    String operator+(const String &s);
    String operator+(const char *s);
    char &operator[](int index);
};

#endif