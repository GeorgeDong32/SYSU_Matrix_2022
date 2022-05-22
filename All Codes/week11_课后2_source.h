#ifndef __SOURCE_H__
#define __SOURCE_H__
/*********************************************************
*                                                        *
* Copyright(c) GeorgeDong32(Github).All rights reserved. *
*                                                        *
**********************************************************/
#include <iostream>
#include <math.h>
using std::cout; using std::endl;
class Writing {
public:
	Writing() {
		cout << "Writing constructor" << endl;
	}
	~Writing() {
		cout << "~Writing" << endl;
	}
};

class Racing {
public:
	Racing() {
		cout << "Racing constructor" << endl;
	}
	~Racing() {
		cout << "~Racing" << endl;
	}
};

class Weekend
{
public:
	Weekend() : w(), r() {
		cout << "Weekend constructor" << endl;
	}
	~Weekend()
	{
		cout << "~Weekend" << endl;
	}
private:
	Writing w;
	Racing r;
};
class Workday
{
public:
	Workday(): r(), w(){
		cout << "Workday constructor" << endl;
	}
	~Workday()
	{
		cout << "~Workday" << endl;
	}
private:
	Racing r;
	Writing w;
};
#endif