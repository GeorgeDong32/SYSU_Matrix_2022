#ifndef __SOURCE_H__
#define __SOURCE_H__
#include <iostream>
using namespace std;

extern const double PI;

class Shape
{
public:
	virtual double GetArea() = 0;
	virtual double GetPerim() = 0;
};

class Rectangle : public Shape
{
public:
	double k;
	double c;
	Rectangle(double nk, double nc): k(nk), c(nc){}
	double GetArea()
	{
		return (double)k * c;
	}
	double GetPerim()
	{
		return (double)2 * k + 2 * c;
	}
};

class Circle : public Shape
{
public:
	double bj;
	Circle (double nbj) : bj(nbj) {}
	double GetArea()
	{
		return (double)PI * bj * bj;
	}
	double GetPerim()
	{
		return (double)2 * PI * bj;
	}
};

#endif