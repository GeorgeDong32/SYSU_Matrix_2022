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
	//检查是否有非法字符
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
	//调用库中stoi函数
	try
	{
		re = stoi(dnum);
	}
	catch (std::invalid_argument&)//系统判定非法输入
	{
		throw MyException("Exception : invalid stoi argument").what();
	}
	catch (std::out_of_range&)//系统判定越界
	{
		throw MyException("Exception : stoi argument out of range").what();
	}
	catch (...)//防止其他出错
	{
		return re;
	}
	//如有特殊字符且stio未报错，主动报错（依题意）
	if (checks == 0)
	{
		throw MyException("Exception : invalid stoi argument").what();
	}
	return re;
}
