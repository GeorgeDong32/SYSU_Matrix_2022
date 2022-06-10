# 21程设Ⅱ-周17-课堂1

# Description
Implement the following operations:
```cpp
#include <vector>
#include <deque>
#include <iostream>          // elementAccessDemo  8.4.cpp
using namespace std;

int main() {
	vector<int> ivec;	      // 创建空的vector容器，用于存放int型对象
	deque<string> sdeq;       // 创建空的deque容器，用于存放string型对象
	int iarr[] = {100, 100, 100};

	// 在vector容器中增加元素：在尾端增加10个元素：值为1~10
	// your code

	// 在vector容器头端再增加一个元素，值为20
	// your code

	// 在vector容器的第四个元素后再增加两个元素，值均为30
	// your code

	//将数组iarr中的元素增加到vector容器尾端。注意：被插入的元素不包括
	//第三个参数所指向的元素因此，要插入iarr中的所有元素，第三个参数应
	//该为iarr加3
	//your code

	// 在deque容器中增加元素
	sdeq.push_back("is");
	sdeq.push_front("this");
	sdeq.insert(sdeq.end(), "an");
	sdeq.insert(sdeq.end(), "example");

	// 输出vector容器中的元素
	cout << "vector:" << endl;
	for(vector<int>::iterator it = ivec.begin(); it != ivec.end(); it++)
		cout << *it << ' ';
	cout << endl;

	// 输出deque容器中的元素
	cout << "double-ended queue:" << endl;
	for(deque<string>::iterator it = sdeq.begin(); it != sdeq.end(); it++)
		cout << *it << ' ';

	return 0;

}

```

# Sample Output
```
vector:
20 1 2 3 30 30 4 5 6 7 8 9 10 100 100 100 
double-ended queue:
this is an example 
```