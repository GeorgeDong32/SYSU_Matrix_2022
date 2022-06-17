#include "SQueue.h"
/*********************************************************
*                                                        *
* Copyright(c) GeorgeDong32(Github).All rights reserved. *
*                                                        *
**********************************************************/
int Squeue::Size() const
{
	int size = 0;
	size = s1.size();
	return size;
}

bool Squeue::Empty() const
{
	return s1.empty();
}

void Squeue::Push(const int& ele)
{
	s1.push(ele);
}

void Squeue::Pop()
{
	if (s1.size() == 0)
		return;
	while (!s1.empty()) {
		s2.push(s1.top());
		s1.pop();
	}
	s2.pop();
	while (!s2.empty())
	{
		s1.push(s2.top());
		s2.pop();
	}
}

int Squeue::Front()
{
	if (s1.size() == 0)
		return 0;
	while (!s1.empty()) {
		s2.push(s1.top());
		s1.pop();
	}
	int re = s2.top();
	while (!s2.empty())
	{
		s1.push(s2.top());
		s2.pop();
	}
	return re;
}

int Squeue::Back() const
{
	if (s1.size() == 0)
		return 0;
	return s1.top();
}
