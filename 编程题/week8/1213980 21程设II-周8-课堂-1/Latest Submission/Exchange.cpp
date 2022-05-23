#include "Exchange.h"

void Exchange::operator()(int&a, int&b)
{
	int mid = a;
	a = b;
	b = mid;
}
