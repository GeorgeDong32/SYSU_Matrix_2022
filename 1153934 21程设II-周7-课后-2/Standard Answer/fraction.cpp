#include <iostream>
#include "fraction.h"
using namespace std;
typedef long long LL;

#ifndef __FRACTION__
#define __FRACTION__

	#define P _numerator
	#define Q _denominator
	#define _NaN fraction(0,0)

#endif

LL gcd(LL a,LL b)	{	return !b?a:gcd(b,a%b);	}
int fraction::gcd(const int &a, const int &b) const	{
	return !b?a:gcd(b,a%b);
}
void fraction::simp()	{
	if (!P&&!Q)	return ;
	int g=gcd(P,Q);
	P/=g,Q/=g;
	if (Q<0)
		P=-P,Q=-Q;
}

fraction f(LL p,LL q)	{
	if (!p&&!q)	return _NaN;
	LL g=gcd(p,q);
	p/=g,q/=g;
	if (q<0)
		p=-p,q=-q;
	return fraction(p,q);
}

fraction::fraction(const int & p, const int & q)	{	
	P=p,Q=q;
	simp();
}
fraction::fraction(const fraction &F)	{
	P=F.P,Q=F.Q;	
}

void fraction::operator=(const fraction &F)	{
	P=F.P,Q=F.Q;
}

fraction fraction::operator+(const fraction &F) const	{
	if (!Q||!F.Q)	return _NaN;
	return  f(1LL*P*F.Q+1LL*Q*F.P,1LL*Q*F.Q);
} 
fraction fraction::operator-(const fraction &F) const	{
	if (!Q||!F.Q)	return _NaN;
	return  f(1LL*P*F.Q-1LL*Q*F.P,1LL*Q*F.Q);
}
fraction fraction::operator*(const fraction &F) const	{
	if (!Q||!F.Q)	return _NaN;
	return  f(1LL*P*F.P,1LL*Q*F.Q);
}
fraction fraction::operator/(const fraction &F) const	{
	if (!Q||!F.Q)	return _NaN;
	return  f(1LL*P*F.Q,1LL*Q*F.P);
}

void fraction::operator+=(const fraction &F)	{	*this=*this+F;	}
void fraction::operator-=(const fraction &F)	{	*this=*this-F;	}
void fraction::operator*=(const fraction &F)	{	*this=*this*F;	}
void fraction::operator/=(const fraction &F)	{	*this=*this/F;	}

bool fraction::operator==(const fraction &F) const	{
	return (!Q&&!F.Q)||(Q&&F.Q&&1LL*P*F.Q==1LL*Q*F.P); 
}
bool fraction::operator!=(const fraction &F) const	{	return !(*this==F);	}
bool fraction::operator<(const fraction &F) const	{
	return Q&&F.Q&&1LL*P*F.Q<1LL*F.P*Q;
}
bool fraction::operator>(const fraction &F) const	{	
	return Q&&F.Q&&1LL*P*F.Q>1LL*F.P*Q;
}
bool fraction::operator<=(const fraction &F) const	{
	return Q&&F.Q&&1LL*P*F.Q<=1LL*F.P*Q;
}
bool fraction::operator>=(const fraction &F) const	{	
	return Q&&F.Q&&1LL*P*F.Q>=1LL*F.P*Q;
}

std::istream & operator>>(std::istream &is, fraction &F)	{
	is>>F.P>>F.Q;
	F.simp();
	return is;
} 
std::ostream & operator<<(std::ostream &os, const fraction &F)	{
	if (!F.Q)
		os<<"NaN";
	else	{
		os<<F.P;
		if (F.Q!=1)
			os<<"/"<<F.Q; 
	}
	return os;
}


