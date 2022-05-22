#include <iostream>
#include "swap.h"
using namespace std;

void use_reference(int& a, int& b)
{
	int mid = 0;
	mid = a;
	a = b;
	b = mid;
}

void use_pointer(int* a, int* b)
{
	int mid = *(a);
	*(a) = *(b);
	*(b) = mid;
}

void use_value(int a, int b)
{
	int mid = 0;
	mid = a;
	a = b; 
	b = mid;
}
