// =====================
// framework source code
// =====================
#include <iostream>
#include <iomanip>
#include "rectangle.h"
using namespace std;
void print(const Rectangle &obj)
{
  cout << fixed << setprecision(2) 
  << obj.getWidth() << " " << obj.getHeight() << " " << obj.getArea() << " " << obj.getPerimeter() << endl;
}

int main() {
	Rectangle obj1;
	print(obj1);
	obj1.setWidth(4);
	obj1.setHeight(40);
	print(obj1);
	Rectangle obj2(3.5, 35.9);
	print(obj2);

	return 0;
}
                                
