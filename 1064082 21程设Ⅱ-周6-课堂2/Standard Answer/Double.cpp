#include "Double.h"


Double::Double()
{
	data = 0;
}

Double::Double(double data)
{
	Double::data = data;
}

double Double::getDouble()const						
{
	return data;
}


void Double::setDouble(double data)
{
	Double::data = data;
}


void Double::add(const Double &other)					
{
	double temp1 = Double::getDouble();
	double temp2 = other.getDouble();
	temp1 = temp1 + temp2;
	Double::setDouble(temp1);
}


void Double::sub(const Double &other)
{
	double temp1 = Double::getDouble();
	double temp2 = other.getDouble();
	temp1 = temp1 - temp2;
	Double::setDouble(temp1);
}

void Double::mul(const Double &other)
{
	double temp1 = Double::getDouble();
	double temp2 = other.getDouble();
	temp1 = temp1 * temp2;
	Double::setDouble(temp1);
}

bool Double::div(const Double &other)
{
	if (other.data  == 0)
		return false;
	else
	{
		double temp1 = Double::getDouble();
		double temp2 = other.getDouble();
		temp1 = temp1 / temp2;
		Double::setDouble(temp1);
	return true;
	}
}