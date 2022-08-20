#include<iostream>
#include "point.hpp"
#include "line.h"

using namespace std;

int main() {
    double x1, y1, x2, y2;
    char name[20];
    cin >> x1 >> y1 >> x2 >> y2;
	cin >> name;
    Point myp1(x1, y1), myp2(x2, y2);
    
    Line line(myp1, myp2, name);
	cout << "The name of the line is: ";
    cout << line.getName() << endl;
    cout << "The length of the line is: ";
    cout << line.getLen() << endl;
    
    return 0;
}

