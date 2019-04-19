#include "String.h"

int main()
{
    char c[10] = "hello";
    String s1(c), s2("2000"), s3;
    s3 = s1 + "fasdfas";
    s3.show();
    return 0;
}