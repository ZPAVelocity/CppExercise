#include "Complex.h"
#include <iostream>
using namespace std;

int main()
{
    Complex a(1, -7);
    Complex b(3, 3);
    (a + b).show();
    (a - b).show();
    (a * b).show();
    (a / b).show();
    return 0;
}