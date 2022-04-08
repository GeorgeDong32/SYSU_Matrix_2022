#include <iostream>
#include "point.h"
using namespace std;

int point::count = 0;
void point::print()
{
	cout << "(" << x << "," << y << ")" << endl;
}

bool point::judge(const point& a, const point& b)
{
	float k1 = (float)(a.y - y) / (a.x - x);
	float k2 = (float)(b.y - y) / (b.x - x);
	if (k1 == k2) 
		return true;
	else
		return false;
}
