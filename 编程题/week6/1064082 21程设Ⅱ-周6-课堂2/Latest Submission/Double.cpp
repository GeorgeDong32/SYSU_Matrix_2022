#include "Double.h"
#include <iostream>
using namespace std;

Double::Double()
{
	data = 0;
}

Double::Double(double d)
{
	data = d;
}
     
double Double::getDouble() const
{
	return data;
}

void Double::setDouble(double d)
{
	data = d;
}

void Double::add(const Double &other)
{
	data = (double) data + other.getDouble();
}

void Double::sub(const Double &other)
{
	data = (double) data - other.getDouble();
}

void Double::mul(const Double &other)
{
	data = (double) data * other.getDouble();
}

bool Double::div(const Double &other)
{
	if(other.getDouble() != 0)
	{
		data = (double) data / other.getDouble();
		return true;
	}
	else 
	return false;
}