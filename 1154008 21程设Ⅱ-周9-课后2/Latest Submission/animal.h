#ifndef __ANIMAL_H__
#define __ANIMAL_H__
/*********************************************************
*                                                        *
* Copyright(c) GeorgeDong32(Github).All rights reserved. *
*                                                        *
**********************************************************/
#include <string>
#include <iostream>
using std::string; using std::cout; using std::endl;
class animal
{
private:
	string  _species;
	int  _eyes;
public:
	animal(string s, int ne) : _species(s), _eyes(ne){}
	void print_eyes()
	{
		cout << _species <<" has " << _eyes << " eyes." << endl;
	}
};

#endif