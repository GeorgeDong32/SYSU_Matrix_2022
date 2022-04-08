#ifndef Points_hpp
#define Points_hpp

#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

class TwoDPoint {
	private:
		double x, y;
	public:
		// The no-arg constructor that contruccts a point with coordinates(0,0)
		TwoDPoint();
		TwoDPoint(double x, double y);
		double getX() const;
		double getY() const;
		//display the distance between two points in two-dimensional space.
		double distance(const TwoDPoint &point);
        friend ostream& operator<<(ostream& out, const TwoDPoint& point);
};

class ThreeDPoint : public TwoDPoint {
	private:
		double z;
	public:
		// The no-arg constructor that contruccts a point with coordinates(0,0,0)
		ThreeDPoint();

		ThreeDPoint(double x, double y, double z);
		double getZ() const;

		//display the distance between two points in Three-dimensional space.
		double distance(const ThreeDPoint &point);
        friend ostream& operator<<(ostream& out, const ThreeDPoint& point);
};

#endif