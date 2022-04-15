#include "DERIVED.h"
/*********************************************************
*                                                        *
* Copyright(c) GeorgeDong32(Github).All rights reserved. *
*                                                        *
**********************************************************/
DERIVED::DERIVED(int x1, int x2, int x3, int x4, int x5): BASE(x1, x2), mem4(x3, x4), mem3(x5) {}

int DERIVED::inc1()
{
	BASE::inc1();
	return 1;
}

void DERIVED::display() const
{
	BASE::display();
	mem4.display();
	cout << "mem3=" << mem3 << endl;
}
