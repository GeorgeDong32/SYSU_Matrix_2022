#include<iostream>
#define eps 1e-9
// #define double long double
using namespace std;

class Complex   {
public:
    double i,r;
    Complex(double re=0)	{
    	r=re,i=0;
    }
    Complex(double re, double im)	{
    	r=re,i=im;
    }
    const double real(void) const	{	return r;	}
    const double imag(void) const	{	return i;	}

	Complex operator - () const {	return Complex(-r,-i);	}

    Complex operator+(const Complex& C)	 const {	return Complex(r+C.r,i+C.i);	}
    Complex operator-(const Complex& C)	 const {	return Complex(r-C.r,i-C.i);	}
    Complex operator*(const Complex& C)	 const {	return Complex(r*C.r-i*C.i,r*C.i+i*C.r);	}
    Complex operator/(const Complex& C)	 const {	
		Complex t=(*this)*Complex(C.r,-C.i);
		double q=C.r*C.r+C.i*C.i;	
		return Complex(t.r/q,t.i/q);
	}
    
    Complex& operator+=(const Complex& C)	{	return *this=*this+C;	}
    Complex& operator-=(const Complex& C)	{	return *this=*this-C;	}
    Complex& operator*=(const Complex& C)	{	return *this=*this*C;	}
    Complex& operator/=(const Complex& C)	{	return *this=*this/C;	}

    bool operator == (const Complex& C)  const  {
         return abs(r-C.r)<eps&&abs(i-C.i)<eps;
    }
    bool operator != (const Complex& C)  const  {
         return !(*this==C);
    }
};

Complex operator+(const double a,const Complex& C)	  {	return Complex(a+C.r,C.i);	}
Complex operator-(const double a,const Complex& C)	  {	return Complex(a-C.r,-C.i);	}
Complex operator*(const double a,const Complex& C)	  {	return Complex(a*C.r,a*C.i);	}
Complex operator/(const double a,const Complex& C)	  {	
	Complex t=a*Complex(C.r,-C.i);
	double q=C.r*C.r+C.i*C.i;	
	return Complex(t.r/q,t.i/q);
}
bool operator == (const double a,const Complex& C)  {
		return abs(a-C.r)<eps&&abs(-C.i)<eps;
}
bool operator != (const double a,const Complex& C)  {
		return !(a==C);
}


istream& operator>>(istream& is, Complex& C)	{
	 char c;
     is>>c>>C.r>>c>>C.i>>c;
	return is;
}
ostream& operator<<(ostream& os,const Complex& C)	{
	// os<<setiosflags(ios::fixed)<<"("<<C.r<<","<<C.i<<")"<<endl;
	// os<<setprecision(1)<<setiosflags(ios::fixed)<<"("<<C.r<<","<<C.i<<")"<<endl;
	os<<"("<<C.r<<","<<C.i<<")";
	return os;
}
