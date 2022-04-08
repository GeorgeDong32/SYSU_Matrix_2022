#include "Double.h"
#include<iostream>
using namespace std;

int main()
{
    double num1, num2;
    cin >> num1 >> num2;

    Double a;
    Double b(num1);
    
    cout << a.getDouble() << endl;
    cout << b.getDouble() << endl;


	a.setDouble(num1);
    b.setDouble(num2);
	a.add(b);
    cout << a.getDouble() << endl;

	a.setDouble(num1);
    b.setDouble(num2);    
    a.sub(b);
    cout << a.getDouble() << endl;

	a.setDouble(num1);
    b.setDouble(num2);    
    a.mul(b);
    cout << a.getDouble() << endl;

	a.setDouble(num1);
    b.setDouble(num2);   
    if(a.div(b))
    {
        cout << a.getDouble() << endl;
    }
    else
    {
        cout << "The denominator is zero." << endl;
    }


	return 0;
} 