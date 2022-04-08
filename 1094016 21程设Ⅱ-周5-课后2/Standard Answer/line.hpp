#include <cmath>
#include "point.hpp"

class Line {
public:
	Line(Point xp1, Point xp2): p1(xp1), p2(xp2) {
		double x = (p1.getX() - p2.getX());
		double y = (p1.getY() - p2.getY());
		len = sqrt(x * x + y * y);
    }
	double getLen() const { 
		return len; 
 	}
	
private:
	Point p1, p2;
	double len;
};
