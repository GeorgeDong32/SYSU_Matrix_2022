#ifndef LINE_HPP
#define LINE_HPP
#include "point.hpp"

class Line {
public:
	Line(Point xp1, Point xp2, char* name);
	double getLen() const;
 	char* getName() const;
	~Line();
	
private:
	Point p1, p2;
	double len;
	char *name;
};
#endif
