#include "mySqrt.hpp"
#include "MyException.hpp"
#include <math.h>
/*********************************************************
*                                                        *
* Copyright(c) GeorgeDong32(Github).All rights reserved. *
*                                                        *
**********************************************************/
double mySqrt(double dnum)
{
	if (dnum < 0)
	{
		throw MyException();
	}
	else
	{
		return sqrt(dnum);
	}
}
