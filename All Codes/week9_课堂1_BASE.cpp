#include "BASE.h"
/*********************************************************
*                                                        *
* Copyright(c) GeorgeDong32(Github).All rights reserved. *
*                                                        *
**********************************************************/
BASE::BASE(int p1, int p2)
{
	mem1 = p1;
	mem2 = p2;
}

int BASE::inc1()
{
	mem1++;
	return 1;
}

void BASE::display() const
{
	cout << "mem1=" << mem1 << ",";
	cout << "mem2=" << mem2 << endl;
}
