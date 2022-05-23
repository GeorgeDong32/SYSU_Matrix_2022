#ifndef __HEAD_H__
#define __HEAD_H__
/*********************************************************
*                                                        *
* Copyright(c) GeorgeDong32(Github).All rights reserved. *
*                                                        *
**********************************************************/
#include <string>
using namespace std;

class FriendsFinder3
{
public:
	string person[10];
	string friends[10][10];
	FriendsFinder3(string p[], string f[][10])
	{
		for (int i = 0; i < 10; i++)
		{
			person[i] = p[i];
		}
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				friends[i][j] = f[i][j];
			}
		}
	}
	void operator ()(void)
	{
		string pool[100]; int pc = 0;
		int check[10][10] = { 0, };
		//检查主循环
		for (int i = 0; i < 10; i++)//外层循环，遍历每个人
		{
			for (int j = 0; j < 10; j++)//外层循环遍历每个朋友
			{
				for (int k = 0; k < 10; k++)//内层遍历其他人
				{
					for (int l = 0; l < 10; l++)//内层遍历每个朋友
					{
						if (friends[i][j] == friends[k][l])
						{
							if (i != k && j != l)
							{
								(check[i][j])++; (check[k][l])++;
							}
							else
							{
								check[i][j]++;
							}
						}
					}
				}
			}
		}
		//入池循环
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				if (check[i][j] == 1)
				{
					pool[pc] = friends[i][j];
					pc++;
				}
			}
		}
		//池内排序
		string mid;
		for (int i = 0; i < pc; i++)
		{
			for (int j = 0; j < pc - 1; j++)
			{
				if (pool[j] > pool[j + 1])
				{
					mid = pool[j];
					pool[j] = pool[j + 1];
					pool[j + 1] = mid;
				}
			}
		}
		for (int i = 0; i < pc; i++)
		{
			cout << pool[i] << " ";
		}
		cout << endl;
	}
};

#endif