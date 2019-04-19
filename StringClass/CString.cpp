#include <cstring>
#include "CString.h"

CString::CString()
{
    this->lenStr = 0;
    this->ptrStr = new char[this->lenStr + 1];
}

CString::CString(const CString &s)
{
    this->lenStr = s.lenStr;
    this->ptrStr = new char[this->lenStr + 1];
    strcpy(this->ptrStr, s.ptrStr);
}

CString::CString(const char *s)
{
    this->lenStr = strlen(s);
    this->ptrStr = new char[this->lenStr + 1];
    strcpy(this->ptrStr, s);
}

CString::~CString()
{
    delete this->ptrStr;
}

int CString::getLenStr()
{
    return this->lenStr;
}

char *CString::getPtrStr()
{
    return this->ptrStr;
}

void CString::show()
{
    cout << this->ptrStr << endl;
}

void CString::operator=(const CString &s)
{
    delete this->ptrStr;
    this->lenStr = s.lenStr;
    this->ptrStr = new char[this->lenStr + 1];
    strcpy(this->ptrStr, s.ptrStr);
}

void CString::operator=(const char *s)
{
    delete this->ptrStr;
    this->lenStr = strlen(s);
    this->ptrStr = new char[this->lenStr + 1];
    strcpy(this->ptrStr, s);
}

CString CString::operator+(const CString &s)
{
    char *str = new char(this->lenStr + s.lenStr);
    strcpy(str, this->ptrStr);
    strcat(str, s.ptrStr);
    CString ss(str);
    return ss;
}

CString CString::operator+(const char *s)
{
    char *str = new char(this->lenStr + strlen(s));
    strcpy(str, this->ptrStr);
    strcat(str, s);
    CString ss(str);
    return ss;
}

char &CString::operator[](int index)
{
    if (index >= this->lenStr)
        return this->ptrStr[this->lenStr - 1];
    else if (index < 0)
        return this->ptrStr[0];
    else
        return this->ptrStr[index];
}

CString operator+(const char *s1, const CString &s2)
{
    CString str(s1);
    return str + s2;
}
