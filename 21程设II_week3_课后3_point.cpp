#include "Points.h"
#include <math.h>
using namespace std;

TwoDPoint::TwoDPoint(int nx, int ny)
{
	x = nx; y = ny;
}

int TwoDPoint::getX()const
{
	return TwoDPoint::x;
}

int TwoDPoint::getY()const
{
	return TwoDPoint::y;
}

double TwoDPoint::distance(TwoDPoint& p2)
{
	int dx = x - p2.getX();
	if (dx < 0)
		dx = 0 - dx;
	int dy = y - p2.getY();
	if (dy < 0)
		dy = 0 - dy;
	dx *= dx; dy *= dy;
	double d = (double)sqrt((double)dx + dy);
	return d;
}

ThreeDPoint::ThreeDPoint(int nx, int ny, int nz)
{
	x = nx; y = ny; z = nz;
}

int ThreeDPoint::getX()const
{
	return x;
}

int ThreeDPoint::getY()const
{
	return y;
}

int ThreeDPoint::getZ()const
{
	return z;
}

double ThreeDPoint::distance(ThreeDPoint& p2)
{
	int dx = x - p2.getX();
	if (dx < 0)
		dx = 0 - dx;
	int dy = y - p2.getY();
	if (dy < 0)
		dy = 0 - dy;
	int dz = z - p2.getZ();
	dx *= dx; dy *= dy; dz *= dz;
	double d = (double)sqrt((double)dx + dy + dz);
	return d;
}
