#ifndef __CLASS_HPP__
#define __CLASS_HPP__
#include <iostream>
using std::cout; using std::endl;
/*********************************************************
*                                                        *
* Copyright(c) GeorgeDong32(Github).All rights reserved. *
*                                                        *
**********************************************************/
class Wheel
{
public:
	Wheel()
	{
		cout << "Construct a wheel" << endl;
	}
};

class Car
{
public:
	Car()
	{
		cout << "Construct a car" << endl;
	}

};

class RedCar : public Car {
public:
	RedCar()
	{
		wheels = new Wheel[4];
		cout << "Construct a red car" << endl;
	}
protected:
	Wheel* wheels;
};

#endif
