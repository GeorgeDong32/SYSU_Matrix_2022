#include "rectangle.h"

double Rectangle::getWidth() const
{
	return Rectangle::width;
}

double Rectangle::getHeight() const
{
	return Rectangle::height;
}

void Rectangle::setWidth(double width)
{
	Rectangle::width = width;
}

void Rectangle::setHeight(double height)
{
	Rectangle::height = height;
}

double Rectangle::getArea() const
{
	double a = 0;
	a = (double)Rectangle::width * Rectangle::height;
	return a;
}

double Rectangle::getPerimeter() const
{
	double p = 0;
	p = (double)(Rectangle::width + Rectangle::height) * 2;
	return p;
}
