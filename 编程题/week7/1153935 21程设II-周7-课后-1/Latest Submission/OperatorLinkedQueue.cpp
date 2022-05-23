#include "OperatorLinkedQueue.h"
//Copyright (c) GeorgeDong32(Github). All rights reserved.
OperatorLinkedQueue::OperatorLinkedQueue()
{
	arr = new int[100];
	front = 0;
	back = 0;
	size = 0;
}

OperatorLinkedQueue::OperatorLinkedQueue(const OperatorLinkedQueue& o)
{
	size = o.GetSize();
	arr = new int[size];
	front = o.front;
	back = o.back;
	for (int i = 0; i < size; i++)
	{
		arr[i] = o.arr[i];
	}
}

OperatorLinkedQueue::~OperatorLinkedQueue()
{
	delete[] arr;
}

int OperatorLinkedQueue::GetSize() const
{
	return size;
}

int& OperatorLinkedQueue::operator[](const int& index)
{
	return arr[index];
}

int OperatorLinkedQueue::operator[](const int& index) const
{
	return arr[index];
}

OperatorLinkedQueue OperatorLinkedQueue::operator=(const OperatorLinkedQueue& right)
{
	return OperatorLinkedQueue(right);
}

OperatorLinkedQueue OperatorLinkedQueue::operator+=(const int& ele)
{
	if (size < 100)
	{
		arr[size] = ele;
		size++;
	}
	return *this;
}

OperatorLinkedQueue OperatorLinkedQueue::operator--()
{
	if (size >= 1)
	{
		for (int i = 0; i < size - 1; i++)
		{
			arr[i] = arr[i + 1];
		}
		size--;
	}
	return *this;
}

OperatorLinkedQueue OperatorLinkedQueue::operator--(int)
{
	OperatorLinkedQueue* re = new OperatorLinkedQueue(*this);
	--(*this);
	return *re;
}

ostream& operator<<(ostream& os, const OperatorLinkedQueue& o)
{
	for (int i = 0; i < o.GetSize() - 1; i++)
	{
		os << o.arr[i] << "->";
	}
	os << o.arr[o.GetSize() - 1] << endl;
	return os;
}
//Copyright (c) GeorgeDong32(Github). All rights reserved.