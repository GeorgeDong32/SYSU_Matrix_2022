#ifndef __SORT_H__
#define __SORT_H__

#include <vector>
#include <list>
#include <iostream>
using namespace std;

template <typename T>
void mySort(T s, T e)//从小到大
{
	T it; T itn;
	int count = 0;
	for (it = s; it != e; it++)
	{
		itn = it;
		for (itn; itn != e; itn++)
		{
			if (*it > *itn)
			{
				swap(*it, *itn);
			}
		}
	}
	
}

template <typename T,typename COM>
void mySort(T s, T e,COM cmp)//从大到小
{
	T it; T itn;
	int count = 0;
	for (it = s; it != e; it++)
	{
		itn = it;
		for (itn; itn != e; itn++)
		{
			if (cmp(*itn, *it))
			{
				swap(*it, *itn);
			}
		}
	}
}

#endif