#include <iostream>
using namespace std;
#include "Object.h"

Object* p[10010];

void TestObjects(int n)
{
	for (int i = 0; i < n; i++)
	{
		p[i+1] = new Object(i+1);
	}
	for (int i = 0; i < n; i++)
	{
		if((i + 1) % 2 != 0)
		{
			delete p[i+1];
		}
	}
	for (int i = 0; i < n; i ++)
	{
		if((i + 1) % 2 == 0)
		{
			delete p[i+1];
		}
	}
}