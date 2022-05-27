#ifndef __ORDERLIST_HPP__
#define __ORDERLIST_HPP__
/*********************************************************
*                                                        *
* Copyright(c) GeorgeDong32(Github).All rights reserved. *
*                                                        *
**********************************************************/
#include <iostream>
using namespace std;

/*who needs linknodes?
class Linknode
{
public:
	int d;
	Linknode* next;
	Linknode() : d(0), next(nullptr) {}
	Linknode(int nd, Linknode* n) : d(nd), next(n) {}
	void show()
	{
		cout << d << " ";
	}
};
*/

void QuickSortA(int* p, int start, int end)
{
	if (start >= end)
		return;
	int standard = p[start];
	int i = start, j = end - 1;
	while (i != j)
	{
		for (; p[j] >= standard && j > i; j--);
		for (; p[i] <= standard && i < j; i++);
		if (j > i)
		{
			int temp = p[i];
			p[i] = p[j];
			p[j] = temp;
		}
	}
	int temp = p[start];
	p[start] = p[i];
	p[i] = temp;
	QuickSortA(p, start, i - 1);
	QuickSortA(p, i + 1, end);
}

int Partition(int arr[], int start, int end)
{
	int x = arr[start];
	int i = start - 1;
	int j = end + 1;
	while (1)  //一直到i>=j
	{
		do //从后面找到第一个不小于x(即arr[start])的元素
		{
			j--;
		} while (x > arr[j]);   //升序是 <
		do //从后面找到第一个不大于x(即arr[start])的元素
		{
			i++;
		} while (x < arr[i]);   //升序是 >
		if (i < j)
		{   //交换 arr[i] 、arr[j]
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
		else
		{   //分堆放至置后中间的标志位(不是正中间)
			return j;
		}
	}
}

void QuickSortD(int arr[], int start, int end)
{
	if (start < end)
	{
		int q = Partition(arr, start, end);
		//分治的思想，
		//start至q是大于等于arr[start]的元素，
		//(q+1)至end是小于等于arr[start]的元素
		QuickSortD(arr, start, q);
		QuickSortD(arr, q + 1, end);
	}
}

class OrderedList
{
public:
	int* ln;
	int len;
public:
	OrderedList() {
		ln = new int[1001];
		len = 0;
	}
	virtual void insert(int v) = 0;
	void printList() const
	{
		if (len > 0)
		{
			for (int i = 0; i < len; i++)
			{
				cout << ln[i] << " ";
			}
			cout << endl;
		}
	}
	~OrderedList()
	{
		delete[]ln;
		len = 0;
	}
};

class AscendOrderedList : public OrderedList
{
public:
	AscendOrderedList() : OrderedList() {}
	~AscendOrderedList()
	{
		OrderedList::~OrderedList();
	}
	void insert(int v)
	{
		if (len == 0)
		{
			ln[0] = v;
			len++;
		}
		else
		{
			ln[len] = v;
			len++;
			QuickSortA(ln, 0, len);
		}
	}
};

class DescendOrderedList : public OrderedList
{
public:
	DescendOrderedList() : OrderedList() {}
	~DescendOrderedList()
	{
		OrderedList::~OrderedList();
	}
	void insert(int v)
	{
		if (len == 0)
		{
			ln[0] = v;
			len++;
		}
		else
		{
			ln[len] = v;
			len++;
			QuickSortD(ln, 0, len);
		}
	}
};

#endif