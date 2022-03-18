//Copyright (c) GeorgeDong32(Github). All rights reserved.
#pragma once
#include <cmath>
using namespace std;
class Line
{
private:
	Point p1;
	Point p2;
public:
	void printl()//for test
	{
		cout << "p1 = (" << p1.getX() << "," << p1.getY() << ")" << endl;
		cout << "p2 = (" << p2.getX() << "," << p2.getY() << ")" << endl;
	}
	Line(Point &a, Point &b)
	{
		p1 = a;
		p2 = b;
	}
	Line(const Line& l)
	{
		p1 = l.p1;
		p2 = l.p2;
	}
	double getLen()
	{
		double len = 0;
		double dx = (double) p1.getX() - p2.getX();
		double dy = (double) p1.getY() - p2.getY();
		if (dx < 0)
			dx = 0 - dx;
		if (dy < 0)
			dy = 0 - dy;
		cout << "dx = " << dx << "dy = " << dy << endl;
		len = sqrt((double)dx * dx + (double)dy * dy);
		return len;
	}
};