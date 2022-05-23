// Problem#: 17680
// Submission#: 4639413
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include <iostream>
using namespace std;


void addxy(int a, int b, int c) {
	c = a + b + c;
	cout << "Total from inside addxy: " << c << endl;
}

void subxy(int &a,int &b,int &c) {
	c = a - b;
    if(c < 0) c = -c;
	cout << "Total from inside subxy: " << c << endl;
}
