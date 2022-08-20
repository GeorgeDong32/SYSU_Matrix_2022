#include "Points.h"

TwoDPoint::TwoDPoint() : x(0),y(0) {}
TwoDPoint::TwoDPoint(double x, double y) : x(x), y(y) {}

double TwoDPoint::getX() const {
	return x;
}

double TwoDPoint::getY() const {
	return y;
}

TwoDPoint TwoDPoint::middlePoint(const TwoDPoint &point) {
	TwoDPoint pa2((x + point.x)/2,(y + point.y)/2);
	return pa2;
}

ThreeDPoint::ThreeDPoint() : TwoDPoint(0, 0), z(0) {}
ThreeDPoint::ThreeDPoint(double x, double y, double z) : TwoDPoint(x, y), z(z) {}
double ThreeDPoint::getZ() const {
			return z;
		}

//display the middlePoint between two points in Three-dimensional space.
ThreeDPoint ThreeDPoint::middlePoint(const ThreeDPoint &point) {
	ThreeDPoint pa2((getX()+point.getX())/2,(getY() + point.getY())/2,(z+point.z)/2);
	return pa2;
}