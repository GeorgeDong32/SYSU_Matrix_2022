#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

class MyPoint {
	private:
		double x, y;
	public:
		// The no-arg constructor that contruccts a point with coordinates(0,0)
		MyPoint() : x(0),y(0) {}
		MyPoint(double x, double y) : x(x), y(y) {}
		double getX() const;
		double getY() const;
		//display the distance between two points in two-dimensional space.
		double distance(const MyPoint &point) {
			return sqrt((x - point.x)*(x - point.x) + (y - point.y)*(y - point.y));
		}
};

class ThreeDPoint : public MyPoint {
	private:
		double z;
	public:
		// The no-arg constructor that contruccts a point with coordinates(0,0,0)
		ThreeDPoint() : MyPoint(0, 0), z(0) {}

		ThreeDPoint(double x, double y, double z) : MyPoint(x, y), z(z) {}
		double getZ() const {
			return z;
		}

		//display the distance between two points in Three-dimensional space.
		double distance(const ThreeDPoint &point) {
			return sqrt((getX()-point.getX())*(getX() - point.getX())+ (getY() - point.getY())*(getY() - point.getY()) +(z-point.z)*(z-point.z));
		}
};
double MyPoint::getX() const {
	return x;
}

double MyPoint::getY() const {
	return y;
}

