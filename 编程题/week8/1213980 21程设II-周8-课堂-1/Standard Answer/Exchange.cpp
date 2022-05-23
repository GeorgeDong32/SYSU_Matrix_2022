#include"Exchange.h"
	void Exchange::operator()(int&a, int&b)   {
        int t=a;a=b,b=t;
    }
