#ifndef __HUMAN_H__
#define __HUMAN_H__
/*********************************************************
*                                                        *
* Copyright(c) GeorgeDong32(Github).All rights reserved. *
*                                                        *
**********************************************************/
#include "animal.h"

class human: public animal {
private:
	string _name;
public:
	human(string n): animal("Human", 2), _name(n){}
	void greeting() const
	{
		cout << "Hello, I'm " << _name << "." << endl;
	}
};

#endif