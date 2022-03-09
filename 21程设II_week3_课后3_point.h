#pragma once
class ThreeDPoint
{
private:
	int x;
	int y;
	int z;
public:
	ThreeDPoint()
	{
		x = 0;
		y = 0;
		z = 0;
	}
	ThreeDPoint(int nx, int ny, int nz);
	int getX()const;
	int getY()const;
	int getZ()const;
	double distance(ThreeDPoint& p2);
};

class TwoDPoint
{
private:
	int x;
	int y;
public:
	TwoDPoint()
	{
		x = 0;
		y = 0;
	}
	TwoDPoint(int nx, int ny);
	int getX()const;
	int getY()const;
	double distance(TwoDPoint& p2);
};
