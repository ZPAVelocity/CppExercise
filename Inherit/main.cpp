#include "AEStu.h"
#include "EIStu.h"
#include <iostream>

using namespace std;

int main()
{
    AEStu aestu1("101", "Alice", 22, "female", 98);
    aestu1.showInfo();
    cout << "---------------------" << endl;

    EIStu eistu1("201", "Bob", 23, "male", 89);
    eistu1.showInfo();
    cout << "---------------------" << endl;
    
    return 0;
}