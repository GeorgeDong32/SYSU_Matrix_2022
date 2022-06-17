#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
/*********************************************************
*                                                        *
* Copyright(c) GeorgeDong32(Github).All rights reserved. *
*                                                        *
**********************************************************/
int requeue(priority_queue<int>& pq, queue<int>& q, int pos);//重新排队

int main()
{
	int opc = 0;
	cin >> opc;
	while (opc)
	{
		//input
		int num = 0; int myp = 0; int temp = 0; int time = 0;
		queue<int> q;
		priority_queue<int> qv;
		cin >> num >> myp;
		for (int i = 0; i < num; i++)
		{
			cin >> temp;
			q.push(temp);
			qv.push(temp);
		}
		//processing
		while (1)
		{
			myp = requeue(qv, q, myp);
			time++;
			if (myp == 0)
			{
				cout << time << endl;
				break;
			}
			else
			{
				myp--;
				qv.pop();
				q.pop();
			}
		}

		//控制区
		opc--;
	}
	return 0;
}

int requeue(priority_queue<int>& pq, queue<int>& q, int pos)
{
	int size = q.size();
	while (q.front() != pq.top())//检测队首是否为最大值
	{
		int tm = q.front();
		q.pop();
		q.push(tm);
		//作业位置重排
		if (pos == 0)
			pos = size - 1;
		else pos--;
	}
	//返回我的文档所在位置
	return pos;
}