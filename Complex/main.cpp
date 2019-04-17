#include <iostream>
using namespace std;

class Complex
{
public:
    double im;
    double re;
    Complex();
    Complex(double re, double im);
    Complex operator+(const Complex c);
    Complex operator+(const double c);
    void show();
};

Complex::Complex(double re, double )
{
    
}