#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cmath>
#include "Points.h"
using namespace std;

TwoDPoint::TwoDPoint() : x(0),y(0) {}
TwoDPoint::TwoDPoint(double x, double y) : x(x), y(y) {}

double TwoDPoint::getX() const {
	return x;
}

double TwoDPoint::getY() const {
	return y;
}

double TwoDPoint::distance(const TwoDPoint &point) {
    return sqrt((x - point.x)*(x - point.x) + (y - point.y)*(y - point.y));
}

ThreeDPoint::ThreeDPoint() : TwoDPoint(0, 0), z(0) {}
ThreeDPoint::ThreeDPoint(double x, double y, double z) : TwoDPoint(x, y), z(z) {}
double ThreeDPoint::getZ() const {
			return z;
		}

//display the distance between two points in Three-dimensional space.
double ThreeDPoint::distance(const ThreeDPoint &point) {
    return sqrt((getX()-point.getX())*(getX() - point.getX())+ (getY() - point.getY())*(getY() - point.getY()) +(z-point.z)*(z-point.z));
}