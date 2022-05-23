#include <iostream>
#include <string>
#include "source.h"
using namespace std;
int main()
{
  MyPoint pa1, pa2(1,1);
  ThreeDPoint pb1, pb2(1,2,3), pb3(10,30,25.5);
  cout << pa1.distance(pa2) << endl;
  cout << pb1.distance(pb2) << endl;
  cout << pb1.distance(pb3) << endl;
  return 0;
}
