#include <iostream>
#include <string>
#include <vector>
using namespace std;


class A
{
public:
 A(int a0):a(a0) {}
 void showA() { cout<<a<<endl; }
protected:
 int a;
};

class C
{
public:
 C(int c0):c(c0) {}
 void showC() { cout<<c<<endl; }
protected:
 int c;
};

#include "source.h"

int main()
{
// freopen("test01.in", "r", stdin);
// freopen("test01.out", "w", stdout);
 {
  B b;
  b.showA();
  b.showC();
 }
 {
  B b(33);
  b.showA();
  b.showC();
 }
 {
  B b(33,44);
  b.showA();
  b.showC();
 }

    return 0;
}