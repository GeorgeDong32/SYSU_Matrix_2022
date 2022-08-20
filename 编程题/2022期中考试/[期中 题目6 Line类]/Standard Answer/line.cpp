#include<cmath>
#include<string.h>
#include "line.h"

Line::Line(Point xp1, Point xp2, char* name): p1(xp1), p2(xp2) {
	double x = (p1.getX() - p2.getX());
	double y = (p1.getY() - p2.getY());
	len = sqrt(x * x + y * y);
	this->name = new char[strlen(name)+1];
	strcpy(this->name, name);
}
double Line::getLen() const { 
	return len; 
}
char* Line::getName() const{
	return name;
}
Line::~Line(){
	delete[] name;
	name=NULL; 
}
