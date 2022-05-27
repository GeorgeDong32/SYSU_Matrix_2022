#ifndef __SOURCE_H__
#define __SOURCE_H__
#include <iostream>
using namespace std;

class B
{
public:
	B():s1(11),s2(22) {}
	B(int a): s1(a), s2(22){}
	B(int a, int c):s1(a), s2(c) {}
	void showA()
	{
		s1.showA();
	}
	void showC()
	{
		s2.showC();
	}
private:
	A s1;
	C s2;
};

#endif