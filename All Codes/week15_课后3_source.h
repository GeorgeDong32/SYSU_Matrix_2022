#ifndef __SOURCE_H__
#define __SOURCE_H__
#include <iostream>
using namespace std;
/*********************************************************
*                                                        *
* Copyright(c) GeorgeDong32(Github).All rights reserved. *
*                                                        *
**********************************************************/
template <typename T>
class Counter
{
public:
	int objn;
	T* c_obj;
	int* c_count;
	Counter() : objn(0)
	{
		c_obj = new T[1002];
		c_count = new int[1002];
		for (int i = 0; i < 1002; i++)
		{
			c_count[i] = -1;
		}
	}
	~Counter()
	{
		objn = 0;
		delete[]c_obj;
		delete[]c_count;
	}
	void count(T input)
	{
		if (objn == 0)
		{
			c_obj[0] = input;
			objn++;
			c_count[0] = 1;
		}
		else
		{
			for (int i = 0; i < objn; i++)
			{
				if (input == c_obj[i])
				{
					c_count[i]++;
					return;
				}
			}
			c_obj[objn] = input;
			c_count[objn] = 1;
			objn++;
		}
	}
	void discard_less_than(int t)
	{
		for (int i = 0; i < objn; i++)
		{
			if (c_count[i] < t)
			{
				c_count[i] = -1;
				c_obj[i] = "";
			}
		}
		//this->sort();
	}
	void sort()
	{
		int sc = objn;
		for (int i = 0; i < objn; i++)
		{
			if (c_count[i] == -1)
			{
				sc--;
			}
		}
		for (int i = 0; i < objn; i++)
		{
			for (int j = i; j < objn; j++)
			{
				if (c_count[i] < c_count[j])
				{
					T tempt = c_obj[i];
					c_obj[i] = c_obj[j];
					c_obj[j] = tempt;
					int tempi = c_count[i];
					c_count[i] = c_count[j];
					c_count[j] = tempi;
				}
				else if (c_count[i] == c_count[j])
				{
					if (c_obj[i] > c_obj[j])
					{
						T tempt = c_obj[i];
						c_obj[i] = c_obj[j];
						c_obj[j] = tempt;
						int tempi = c_count[i];
						c_count[i] = c_count[j];
						c_count[j] = tempi;
					}
				}
			}
		}
		objn = sc;
	}
	friend ostream& operator << (ostream& os, Counter& c)
	{
		c.sort();
		for (int i = 0; i < c.objn; i++)
		{
			os << c.c_obj[i] << " " << c.c_count[i] << endl;
		}
		return os;
	}
};


#endif
