#ifndef __SOURCE_H__
#define __SOURCE_H__
/*********************************************************
*                                                        *
* Copyright(c) GeorgeDong32(Github).All rights reserved. *
*                                                        *
**********************************************************/
#include <iostream>
using namespace std;

int getchp(char a)
{
	if (a >= 'a' && a <= 'z')
	{
		return a - 'a';
	}
	else if (a >= 'A' && a <= 'Z')
		return a - 'A';
	else return -1;
}

template <typename T>
T maxValue(T a, T b)
{
	if (a >= b)
		return a;
	else
		return b;
}

template <>
char maxValue(char a, char b)
{
	int posa = getchp(a);
	int posb = getchp(b);
	if (posa != -1 && posb != -1)
	{
		if (posa > posb)
			return a;
		if (posa < posb)
			return b;
		else
		{
			if (a >= b)
				return b;
			else return a;
		}
	}
	else
	{
		if (a > b)
			return a;
		else
			return b;
	}
}

#endif