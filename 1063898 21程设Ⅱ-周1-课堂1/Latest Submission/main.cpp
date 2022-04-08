#include <iostream>
using namespace std;

int main()
{
	int a = 0; int b = 0;
	cin >> a;
	cin >> b;
	int plus = a + b; 
	int j =  a - b; 
	int c = a * b; 
	double ch = 0;
	if (b == 0)
		ch = 0;
	else
		ch = (double) a / b;
	cout << plus << endl;
	cout << j << endl;
	cout << c << endl;
	cout << ch << endl;
	return 0;
}