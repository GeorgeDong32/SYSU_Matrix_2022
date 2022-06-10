#include <iostream>
#include <vector>
using namespace std;
/*********************************************************
*                                                        *
* Copyright(c) GeorgeDong32(Github).All rights reserved. *
*                                                        *
**********************************************************/
int main() {
	vector<int> ivec(10, 2);             // 创建含10个值为2的元素的vector容器
	vector<int>::iterator iter;	         // 声明迭代器对象
	vector<int>::reverse_iterator riter;          // 声明迭代器对象

	// your code
	//用 iter 将第0个元素的值加10
	iter = ivec.begin();
	(* iter) += 10;
	//用 riter 将第0个元素的值加10
	riter = ivec.rend();
	riter--;
	(*riter) += 10;
	//用 iter 将最后一个元素的值改为100
	iter = ivec.end();
	iter--;
	(*iter) = 100;
	//用 riter 将最后一个元素的值减20
	riter = ivec.rbegin();
	(*riter) -= 20;
	//用 iter 正序输出所有元素
	for (iter = ivec.begin(); iter != ivec.end(); iter++)
	{
		cout << (*iter) << " ";
	}
	cout << endl;
	//用 riter 反向输出所有元素
	for (riter = ivec.rbegin(); riter != ivec.rend(); riter++)
	{
		cout << (*riter) << " ";
	}
	cout << endl;
}