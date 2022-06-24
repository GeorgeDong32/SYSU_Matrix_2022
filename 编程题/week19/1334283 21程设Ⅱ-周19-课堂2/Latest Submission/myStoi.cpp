#include "myStoi.h"
#include "myException.h"
/*********************************************************
*                                                        *
* Copyright(c) GeorgeDong32(Github).All rights reserved. *
*                                                        *
**********************************************************/
int myStoi(string dnum)
{
	int re = 0;
	int sl = dnum.length(); int checks = 1;
	for (int i = 0; i < sl; i++)
	{
		if (dnum[i] < '0' || dnum[i] > '9')
		{
			if (dnum[i] == '+' || dnum[i] == '-' || dnum[i] == ' ')
			{
				checks *= 1;
			}
			else
			{
				checks = 0;
			}
		}
		else
		{
			checks *= 1;
		}
	}
	try
	{
		re = stoi(dnum);
	}
	catch (std::invalid_argument&)
	{
		throw MyException("Exception : invalid stoi argument").what();
	}
	catch (std::out_of_range&)
	{
		throw MyException("Exception : stoi argument out of range").what();
	}
	catch (...)
	{
		return re;
	}
	if (checks == 0)
	{
		throw MyException("Exception : invalid stoi argument").what();
	}
	return re;
}
