#ifndef __SOURCE_H__
#define __SOURCE_H__
#include <iostream>
#include <string>
using std::cout; using std::endl; using std::string;

int myplus(int a, int b)
{
	return a + b;
}

double myplus(double a, double b)
{
	return a + b;
}


string myplus(string s1, string s2)
{
	return s1 + s2;
}
#endif