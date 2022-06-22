#ifndef __HEAD_H__
#define __HEAD_H__
/*********************************************************
*                                                        *
* Copyright(c) GeorgeDong32(Github).All rights reserved. *
*                                                        *
**********************************************************/
#include <string>
using namespace std;

class FriendsFinder2
{
public:
	string person[10];
	string friends[10][10];
	FriendsFinder2(string p[], string f[][10])
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
		//�����ѭ��
		for (int i = 0; i < 10; i++)//���ѭ��������ÿ����
		{
			for (int j = 0; j < 10; j++)//���ѭ������ÿ������
			{
				for (int k = 0; k < 10; k++)//�ڲ����������
				{
					for (int l = 0; l < 10; l++)//�ڲ����ÿ������
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
		//���ѭ��
		int ic = 0; int iflag = 0;
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				if (check[i][j] == 19)
				{
					ic = pc; iflag = 0;
					while (ic+1)
					{
						if (friends[i][j] == pool[ic])
							iflag = 1;
						ic--;
					}
					if (iflag == 0)
					{
						pool[pc] = friends[i][j];
						pc++;
					}
				}
			}
		}
		//��������
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