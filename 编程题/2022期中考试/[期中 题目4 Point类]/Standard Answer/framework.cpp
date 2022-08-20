#include <iostream>
#include <string>
#include "Points.h"
using namespace std;

ostream& operator<<(ostream& out, const TwoDPoint& point)
{
    out << '(' << point.getX() << ',' << point.getY() << ')';
    return out;
}
ostream& operator<<(ostream& out, const ThreeDPoint& point)
{
    out << '(' << point.getX() << ',' << point.getY() << ',' << point.getZ() << ')';
    return out;
}

int main()
{
  //2-D Point
  TwoDPoint pa1, pa;
  int pa2_x, pa2_y;
  cin >> pa2_x >> pa2_y;
  TwoDPoint pa2(pa2_x,pa2_y);
  TwoDPoint pa3 = pa1.middlePoint(pa2);
  cout << "MiddlePoint between " << pa1 << " and " << pa2 <<" is "<<"("<<pa3.getX()<<","<<pa3.getY()<<")" << endl;
  
  //3-D Point
  ThreeDPoint pb1;
  int pb2_x, pb2_y, pb2_z, pb3_x, pb3_y, pb3_z;
  cin >> pb2_x >> pb2_y >> pb2_z;
  cin >> pb3_x >> pb3_y >> pb3_z;
  ThreeDPoint pb2(pb2_x, pb2_y, pb2_z), pb3(pb3_x, pb3_y, pb3_z);
  
  ThreeDPoint pb4 = pb1.middlePoint(pb2);
  ThreeDPoint pb5 = pb1.middlePoint(pb3);
  cout << "MiddlePoint between " << pb1 << " and " << pb2 <<" is "<<"("<<pb4.getX()<<","<<pb4.getY()<<","<<pb4.getZ()<<")" << endl;
  cout << "MiddlePoint between " << pb1 << " and " << pb3 <<" is "<<"("<<pb5.getX()<<","<<pb5.getY()<<","<<pb5.getZ()<<")" << endl;
  return 0;
}
