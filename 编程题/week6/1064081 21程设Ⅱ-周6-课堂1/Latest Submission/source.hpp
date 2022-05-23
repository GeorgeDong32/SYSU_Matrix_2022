#ifndef _SOURCE_H_
#define _SOURCE_H_
#include <iostream>
using namespace std;

void addxy(int x,int y,int t)
{
	int sum = x + y + t;
	cout << "Total from inside addxy: " << sum << endl;
}

void subxy(int &x, int &y,int &t)
{
	t = x - y;
	if(t < 0)
		t = 0 - t;
	cout << "Total from inside subxy: " << t << endl;
}

#endif