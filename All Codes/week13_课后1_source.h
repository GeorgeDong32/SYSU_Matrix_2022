#ifndef __SOURCE_H__
#define __SOURCE_H__
/***************************************************************
*                                                              *
* Copyright(c) GeorgeDong32(Github).All rights reserved.       *
*                                                              *
***************************************************************/
#include <iostream>
#include <string>
using std::cout; using std::endl; using std::string;

class Number
{
private:
	int data;
public:
	Number(): data(0) {}
	Number(int d): data(d){}
	Number& sub(int b)
	{
		data -= b;
		return *this;
	}
	Number& add(int b)
	{
		data += b;
		return *this;
	}
	void print()
	{
		cout << data << endl;
	}
};

#endif