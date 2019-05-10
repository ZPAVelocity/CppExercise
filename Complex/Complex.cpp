#include <iostream>
#include "Complex.h"

using namespace std;

Complex::Complex()
{
    this->re = 0.0;
    this->im = 0.0;
}

Complex::Complex(double re)
{
    this->re = re;
    this->im = 0.0;
}

Complex::Complex(double re, double im)
{
    this->re = re;
    this->im = im;
}

Complex::Complex(const Complex &c)
{
    this->im = c.im;
    this->re = c.re;
}

Complex Complex::operator+(const Complex c)
{
    return Complex(this->re + c.re, this->im + c.im);
}

Complex Complex::operator+(const double c)
{
    return Complex(this->re + c, this->im);
}

Complex Complex::operator-(const Complex c)
{
    return Complex(this->re - c.re, this->im - c.im);
}

Complex Complex::operator-(const double c)
{
    return Complex(this->re - c, this->im);
}

Complex Complex::operator*(const Complex comp)
{
    Complex cc = comp;
    double a = this->re;
    double b = this->im;
    double c = cc.re;
    double d = cc.im;
    return Complex(a * c - b * d, b * c + a * d);
}

Complex Complex::operator*(const double doub)
{
    Complex cc(doub);
    double a = this->re;
    double b = this->im;
    double c = cc.re;
    double d = cc.im;
    return Complex(a * c - b * d, b * c + a * d);
}

Complex Complex::operator/(const Complex comp)
{
    Complex cc = comp;
    double a = this->re;
    double b = this->im;
    double c = cc.re;
    double d = cc.im;
    return Complex((a * c + b * d) / (c * c + d * d), (b * c - a * d) / (c * c + d * d));
}

Complex Complex::operator/(const double doub)
{
    Complex cc(doub);
    double a = this->re;
    double b = this->im;
    double c = cc.re;
    double d = cc.im;
    return Complex((a * c + b * d) / (c * c + d * d), (b * c - a * d) / (c * c + d * d));
}

void Complex::show()
{
    if (this->im > 0.0)
        cout << this->re << " + j" << this->im << endl;
    else if (this->im < 0.0)
        cout << this->re << " - j" << -this->im << endl;
    else
        cout << this->re << endl;
}

Complex operator+(const double c1, Complex c2)
{
    return Complex(c1 + c2.re, c2.im);
}

Complex operator-(const double c1, Complex c2)
{
    return Complex(c1 + c2.re, c2.im);
}
