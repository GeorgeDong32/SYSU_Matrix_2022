#ifndef __SOURCE_H__
#define __SOURCE_H__
/***************************************************************
*                                                              *
* Copyright(c) GeorgeDong32(Github).All rights reserved.       *
*                                                              *
***************************************************************/
#include <iostream>
#include <string>
#include <cmath>
using std::cout; using std::endl; using std::string;

class land
{
private:
	double price;
	double a;
public:
	land(): price(0), a(0) {}
	land(int p, double na): price(p), a(na) {}
	double getprice() { return price; }
	virtual double area()
	{
		return a;
	}
};

class Square: public land
{
private:
	double sidel;
public:
	Square(): land(), sidel(0){}
	Square(double sl, int p): land(p, sl*sl), sidel(sl){}
	double area()
	{
		return sidel * sidel;
	}
};

class Circle : public land
{
private:
	double r;
public:
	Circle(): land(), r(0){}
	Circle(int nr, int p): land(p, r* r* acos(-1)), r(nr){}
	double area()
	{
		return r * r * acos(-1);
	}
};

class Accountant
{
private:
	double income;
public:
	Accountant(): income(0){}
	void DevelopEstate(land* p)
	{
		income += p->area() * p->getprice();
	}
	double CheckMoney()
	{
		return income;
	}
};

#endif