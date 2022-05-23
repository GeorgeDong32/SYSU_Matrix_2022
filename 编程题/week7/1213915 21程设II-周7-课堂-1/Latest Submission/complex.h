#ifndef __COMPLEX_H__
#define __COMPLEX_H__
#include <iostream>
using namespace std;

double invert(double a)
{
	if(a >=  0)
		return a;
	else
		return -a;
}

class Complex
{
public:
 double re; //real part of a complex number
 double im; //imaginary part of a complex number
	Complex(){re = 0;	im = 0;}
	Complex(double r, double i){ re = r; im = i;}
	Complex(double r){ re = r;}
 double real() const { return re; }
 double imag() const { return im; }
 // add any other function needed here
Complex operator + (const Complex& c){
	return Complex(real() + c.real(), imag() + c.imag());
}

Complex operator += (const Complex& c){
	re = re +c.re; im = im+ c.im;
	return *this;
}
	
Complex operator - (const Complex& c){
	return Complex(real() - c.real(), imag() - c.imag());
}

Complex operator -= (const Complex& c){
	re = re -c.re; im = im- c.im;
	return *this;
}
	
Complex operator -(){
	return Complex(-real(), -imag());
}

Complex operator * (const Complex& c)
{
	double m1, m2, m3, m4;
	m1 = (double) re * c.re; m2 = (double) re * c.im; m3 = (double) im * c.re; m4 =-( (double) im * c.im);
	return Complex(m1 + m4, m2 + m3);
}

Complex operator / (const Complex& c)
{
	double m1, m2, m3, m4;
	double k1, k2 , k;
	k1 = c.re*c.re; k2 = c.im * c.im;
	k = k1 + k2;
	m1 = (double) re * c.re; m2 = (double) re * (-c.im); m3 = (double) im * c.re; m4 =-( (double) im * (-c.im));
	return Complex((m1 + m4)/k, (m2 + m3)/k);
}

Complex operator *= (const Complex& c)
{
	double m1, m2, m3, m4;
	m1 = (double) re * c.re; m2 = (double) re * c.im; m3 = (double) im * c.re; m4 =-( (double) im * c.im);
	re=m1 + m4; im = m2 + m3;
	return *this;
}

Complex operator /= (const Complex& c)
{
	double m1, m2, m3, m4;
	double k1, k2 , k;
	k1 = c.re*c.re; k2 = c.im * c.im;
	k = k1 + k2;
	m1 = (double) re * c.re; m2 = (double) re * (-c.im); m3 = (double) im * c.re; m4 =-( (double) im * (-c.im));
	re = (m1 + m4)/k; im = (m2 + m3)/k;
	return *this;
}

bool operator ==(const Complex& c){
	double check1, check2;
	check1 = re - c.re;
	check2 = im - c.im;
	check1 = invert(check1);
	check2 = invert(check2);
	if(check1 < 0.001)
	{
		if(check2 < 0.001)
			return true;
		else
			return false;
	}
	else
		return false;
}

bool operator !=(const Complex& c){
	double check1, check2;
	check1 = re - c.re;
	check2 = im - c.im;
	check1 = invert(check1);
	check2 = invert(check2);
	if(check1 < 0.001)
	{
		if(check2 < 0.001)
			return false;
		else
			return true;
	}
	else
		return true;
}
};

Complex operator*(const double a,const Complex& c)
{
	return Complex(c.re * a, c.im * a);
}
Complex operator/(const double a,const Complex& c)
{
	return Complex(c.re / a,c.im / a);
}
bool operator == (const double a,const Complex& c)
{
	double check = 0;
	check = a - c.re;
	if(check < 0)
		check = 0-check;
	if(check < 0.0001)
		return true;
	else
		return false;
}
bool operator != (const double a,const Complex& c)
{
	double check = 0;
	check = a - c.re;
	if(check < 0)
		check = 0-check;
	if(check < 0.0001)
		return false;
	else
		return true;
}

Complex operator + (const double& d, const Complex& c){
	return Complex(c.real() + d, c.imag());
}
	
Complex operator - (const double& d, const Complex& c){
	return Complex(d - c.re,- c.im);
}

ostream& operator << (ostream& os,const Complex& c)
{
	os << "(" << c.real() << "," << c.imag() << ")";
}

istream& operator >> (istream&is, const Complex& c)
{
	char a;
	is >> a >> c.re >> a >> c.im >> a;
	return is;
}
#endif