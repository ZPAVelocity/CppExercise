#include <iostream>
#include "CString.h"

int main()
{
    CString x("Hello, ");
    CString y;

    y = "World";
    y.show();

    CString z;
    z = x + y;
    z.show();

    z = x + "OOP. ";
    z.show();

    z = "OOP, " + y;
    z.show();

    x[0] = 'h';
    x.show();

    return 0;
}