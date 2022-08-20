#include <iostream>
using namespace std;


int& add(int a, int b, int &c) {
    c = a+b;
    cout << "a + b = " << c << endl;
    return c;
}

const int& sub(int a, int b, const int &c) {
    cout << "a - b = " << a-b << endl;
    return c;
}