#include <vector>
#include <deque>
#include <iostream>          // elementAccessDemo  8.4.cpp
using namespace std;
/*********************************************************
*                                                        *
* Copyright(c) GeorgeDong32(Github).All rights reserved. *
*                                                        *
**********************************************************/
int main() {
	vector<int> ivec;	      // 创建空的vector容器，用于存放int型对象
	deque<string> sdeq;       // 创建空的deque容器，用于存放string型对象
	int iarr[] = { 100, 100, 100 };

	// 在vector容器中增加元素：在尾端增加10个元素：值为1~10
	for (int i = 1; i <= 10; i++)
	{
		ivec.push_back(i);
	}
	// 在vector容器头端再增加一个元素，值为20
	ivec.insert(ivec.begin(), 20);

	// 在vector容器的第四个元素后再增加两个元素，值均为30
	ivec.insert(ivec.begin() + 4, 2, 30);

	//将数组iarr中的元素增加到vector容器尾端。注意：被插入的元素不包括
	//第三个参数所指向的元素因此，要插入iarr中的所有元素，第三个参数应
	//该为iarr加3
	ivec.insert(ivec.end(), iarr, iarr + 3);

	// 在deque容器中增加元素
	sdeq.push_back("is");
	sdeq.push_front("this");
	sdeq.insert(sdeq.end(), "an");
	sdeq.insert(sdeq.end(), "example");

	// 输出vector容器中的元素
	cout << "vector:" << endl;
	for (vector<int>::iterator it = ivec.begin(); it != ivec.end(); it++)
		cout << *it << ' ';
	cout << endl;

	// 输出deque容器中的元素
	cout << "double-ended queue:" << endl;
	for (deque<string>::iterator it = sdeq.begin(); it != sdeq.end(); it++)
		cout << *it << ' ';

	return 0;

}
