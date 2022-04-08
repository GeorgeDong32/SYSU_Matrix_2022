#include<iostream>
#include<string>
#include "swap.h"
using namespace std;



int main(){
	int a, b;
	cin >> a >> b;
	cout << "Original Value" << endl;
	cout << a << " " << b  << endl;
	
	cout << "Swap by using value" << endl;
	use_value(a, b);
	cout << a << " " << b << endl;
	
	cout << "Swap by using pointer" << endl;
	use_pointer(&a, &b);
	cout << a << " " << b << endl;
	
	cout << "Swap by using reference" << endl;
	use_reference(a, b);
	cout << a << " " << b << endl;
	
	return 0;
}

