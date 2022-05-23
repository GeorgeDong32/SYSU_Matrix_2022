#include "complex.h"
#include <iostream>
COMPLEX::COMPLEX(double r, double i)
{
	real = r;
	image = i;
}

COMPLEX::COMPLEX(const COMPLEX& other)
{
	real = other.real;
	image = other.image;
}




COMPLEX COMPLEX::operator+(const COMPLEX &other)
{
    COMPLEX temp;
    temp.real = real + other.real;
    temp.image = image + other.image;
    return temp;
}

COMPLEX COMPLEX::operator-(const COMPLEX &other)
{
    COMPLEX temp;
    temp.real = real - other.real;
    temp.image = image - other.image;
    return temp;
}
COMPLEX COMPLEX::operator-()
{
    COMPLEX temp;

    temp.real = -real;
    temp.image = -image;
    return temp;
}

COMPLEX COMPLEX::operator=(const COMPLEX &other)
{
    real = other.real;
    image = other.image;
    return *this;
}

void COMPLEX::print()
{
    std::cout << real;
    if (image > 0)
        std::cout << "+" << image << "i";
    else if (image < 0)
        std::cout << image << "i";
    std::cout << std::endl;
}

COMPLEX& COMPLEX::operator++()      //COMPLEX.CPP
{
	real += 1;
	image += 1;
	return *this;
}

COMPLEX COMPLEX::operator++(int)
{
	COMPLEX before = *this;
	real += 1;
	image += 1;

	return before;
}
COMPLEX& COMPLEX::operator--()      //COMPLEX.CPP
{
	real -= 1;
	image -= 1;
	return *this;
}

COMPLEX COMPLEX::operator -- (int)
{
	COMPLEX before = *this;
	real -= 1;
	image -= 1;

	return before;
}


