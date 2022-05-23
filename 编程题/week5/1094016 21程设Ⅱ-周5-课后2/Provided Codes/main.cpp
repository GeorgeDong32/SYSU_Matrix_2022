#include<iostream>
#include "point.hpp"
#include "line.hpp"

using namespace std;

int main() {
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    Point myp1(x1, y1), myp2(x2, y2);
    Line line(myp1, myp2);
    Line line2(line);

    cout << "The length of the origin line is: ";
    cout << line.getLen() << endl;
    cout << "The length of the copyed line is: ";
    cout << line2.getLen() << endl;
    
    return 0;
}
