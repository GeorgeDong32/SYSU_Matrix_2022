#include <iostream>
#include "alu.hpp"
using namespace std;

int& add(int a, int b, int &c);
const int& sub(int a, int b, const int&c);

int main() {
    int a, b;
    cin >> a >> b;
    int s1 = 0, s2 = 0;

    int &p = add(a, b, s1);
    cout << (p==a+b) << endl;
    cout << (&p==&s1) << endl;
    
    const int &q = sub(a, b, s2);
    cout << (q==a-b) << endl;
    cout << (&q==&s2) << endl;
    return 0;
}