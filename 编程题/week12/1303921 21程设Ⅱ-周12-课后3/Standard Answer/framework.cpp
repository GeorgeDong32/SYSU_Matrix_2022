#include <iostream>

using namespace std;

#include "ab.h"

void fun(A *a) {
 delete a;
}
int main() {
 A *a = new B(10);
 a->Prin();
 fun(a);
 B *b =  new B(20);
 fun(b);
 return 0;
}