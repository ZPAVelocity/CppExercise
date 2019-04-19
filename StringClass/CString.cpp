#include <cstring>
#include "CString.h"

CString::CString()
{
    this->strLen = 0;
    this->strPtr = new char[this->strLen + 1];
}

CString::CString(const CString &s)
{
    this->strLen = s.strLen;
    this->strPtr = new char[this->strLen + 1];
    strcpy(this->strPtr, s.strPtr);
}

CString::CString(const char *s)
{
    this->strLen = strlen(s);
    this->strPtr = new char[this->strLen + 1];
    strcpy(this->strPtr, s);
}

CString::~CString()
{
    delete this->strPtr;
}

void CString::show()
{
    cout << this->strPtr << endl;
}

void CString::operator=(const CString &s)
{
    delete this->strPtr;
    this->strLen = s.strLen;
    this->strPtr = new char[this->strLen + 1];
    strcpy(this->strPtr, s.strPtr);
}

void CString::operator=(const char *s)
{
    delete this->strPtr;
    this->strLen = strlen(s);
    this->strPtr = new char[this->strLen + 1];
    strcpy(this->strPtr, s);
}

CString CString::operator+(const CString &s)
{
    char *str = new char(this->strLen + s.strLen);
    strcpy(str, this->strPtr);
    strcat(str, s.strPtr);
    CString ss(str);
    return ss;
}

CString CString::operator+(const char *s)
{
    char *str = new char(this->strLen + strlen(s));
    strcpy(str, this->strPtr);
    strcat(str, s);
    CString ss(str);
    return ss;
}

char &CString::operator[](int index)
{
    if (index >= this->strLen)
        return this->strPtr[this->strLen - 1];
    else if (index < 0)
        return this->strPtr[0];
    else
        return this->strPtr[index];
}
