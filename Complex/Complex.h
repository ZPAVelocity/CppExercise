#ifndef __COMPLEX_H__
#define __COMPLEX_H__

class Complex
{
public:
    double im;
    double re;

    Complex();
    Complex(double re);
    Complex(double re, double im);
    Complex(const Complex &c);

    Complex operator+(const Complex c);
    Complex operator+(const double c);

    Complex operator-(const Complex c);
    Complex operator-(const double c);

    Complex operator*(const Complex c);
    Complex operator*(const double c);

    Complex operator/(const Complex c);
    Complex operator/(const double c);
    void show();
};


Complex operator+(const double c1, Complex c2);
Complex operator-(const double c1, Complex c2);

#endif