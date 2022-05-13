#include <iostream>
#include <iomanip>
using namespace std;

#include "source.h"


int main(int argc, const char *argv[]) {
  Accountant py;
  Circle *a = new Circle(179, 2938);   //第一个参数为半径，第二个参数为单位面积价格
  Square *b = new Square(90.8, 1290);  //第一个参数为边长，第二个参数为单位面积价格
  py.DevelopEstate(a);
  cout << setprecision(10) << py.CheckMoney() << endl;
  py.DevelopEstate(b);
  cout << setprecision(10) << py.CheckMoney() << endl;

  return 0;
}
