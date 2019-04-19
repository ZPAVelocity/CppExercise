#include <cstring>
#include "String.h"

String::String()
{
    this->strLen = 0;
    this->strPtr = new char[this->strLen + 1];
}

String::String(const String &s)
{
    this->strLen = s.strLen;
    this->strPtr = new char[this->strLen + 1];
    strcpy(this->strPtr, s.strPtr);
}

String::String(const char *s)
{
    this->strLen = strlen(s);
    this->strPtr = new char[this->strLen + 1];
    strcpy(this->strPtr, s);
}

String::~String()
{
    delete this->strPtr;
}

void String::show()
{
    cout << this->strPtr << endl;
}

void String::operator=(const String &s)
{
    delete this->strPtr;
    this->strLen = s.strLen;
    this->strPtr = new char[this->strLen + 1];
    strcpy(this->strPtr, s.strPtr);
}

void String::operator=(const char *s)
{
    delete this->strPtr;
    this->strLen = strlen(s);
    this->strPtr = new char[this->strLen + 1];
    strcpy(this->strPtr, s);
}

String String::operator+(const String &s)
{
    char *str = new char(this->strLen + s.strLen);
    strcpy(str, this->strPtr);
    strcat(str, s.strPtr);
    String ss(str);
    return ss;
}

String String::operator+(const char *s)
{
    char *str = new char(this->strLen + strlen(s));
    strcpy(str, this->strPtr);
    strcat(str, s);
    String ss(str);
    return ss;
}

char &String::operator[](int index)
{
    if (index >= this->strLen)
        return this->strPtr[this->strLen - 1];
    else if (index < 0)
        return this->strPtr[0];
    else
        return this->strPtr[index];
}
