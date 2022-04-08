#include<iostream>
#include<string>
#include"complex.h"
using namespace std;
void f()
{
  Complex a;  
  cout << a << endl;  
  Complex b = Complex(1,1.5); 
  cout << b << endl;   
  Complex c(3.5); 
  cout << c << endl;   
  c += a; 
  cout << c << endl; 
  
  c = c + a; 
  cout << c << endl; 
  
  c = c + 2.5; 
  cout << c << endl; 
  
  c = 2.5 + c; 
  cout << c << endl; 

  c -= a;
  cout << c << endl; 
  
  c = c - a;
  cout << c << endl; 

  c = c - 2.5;
  cout <<  c << endl; 
  
  c = 2.5 - b;
  cout << c << endl; 
  
  c *= b;
  cout << c << endl; 
  
  c = c * b;
  //cout << c << endl; 

  c = c * 2.5;
  //cout << c << endl; 
  
  c = 2.5 * c;
  //cout << c << endl; 
  
  c /= b;
  //cout << c << endl; 
  
  c = c / b;
  //cout << c << endl; 

  c = c / 2.5;
  //cout << c << endl; 
  
  c = 2.5 / c;
  //cout << c << endl; 
  
  c = -b;
  cout << c << endl;
   
  cout << (a==a) << endl; //output 1
  cout << (a==0.0) << endl; //output 1
  cout << (0.0==a) << endl; //output 1
  cout << (a!=a) << endl; //output 0 
  cout << (a!=0.0) << endl; //output 0
  cout << (0.0!=a) << endl; //output 0  
  
  //cout << a+2.5 << endl;
  //cout << 2.5+a << endl;
  //cout << a+b << endl;
  //c = a+2.5+a + b*2.5*b;
  while (cin >> c)
  {
    cout << c << endl;
    //cout << "(" << c.real() << "," << c.imag() << ")" << endl;
  }
}

int main()
{
  f();

  return 0;
}
