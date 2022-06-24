#include <iostream>
#include "square.h"
using std::cout;
using std::endl;

int main() {
    int a = 2;
    int b = 3;
    int *c = &a;
    a = squarePassByValue(a);
    cout << "a square equals to: " << a << endl;
    squarePassByReference(b);
    cout << "b square equals to: " << b << endl;
    squarePassByPointer(c);
    cout << "(*c) square equals to: " << *c << endl;
    return 0;

}