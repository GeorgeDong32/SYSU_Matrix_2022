#ifndef __SOURCE_H__
#define __SOURCE_H__
/*********************************************************
*                                                        *
* Copyright(c) GeorgeDong32(Github).All rights reserved. *
*                                                        *
**********************************************************/
#include <math.h>

class MyPoint
{
private:
    double x, y;
public:
    // The no-arg constructor that constructs a point with coordinates(0,0)
    MyPoint(): x(0), y(0){}
    MyPoint(double newx, double newy): x(newx), y(newy){}
    double getX() const
    {
        return x;
    }
    double getY() const
    {
        return y;
    }
    //display the distance between two points in two-dimensional space.
    double distance(const MyPoint& op)
    {
        double dx = (double)x - op.getX();
        if (dx < 0)
            dx = -dx;
        double dy = (double)y - op.getY();
        if (dy < 0)
            dy = -dy;
        dx = (double)dx * dx;
        dy = (double)dy * dy;
        double re = sqrt(dx + dy);
        return re;
    }
};

class ThreeDPoint : public MyPoint
{
private:
    double z;
public:
    // The no-arg constructor that constructs a point with coordinates(0,0,0)  
    ThreeDPoint(): MyPoint(), z(0) {}

    ThreeDPoint(double nx, double ny, double nz): MyPoint(nx,ny), z(nz){}
    double getZ() const
    {
        return z;
    }

    //display the distance between two points in Three-dimensional space.
    double distance(const ThreeDPoint& op)
    {
        double dx = (double)getX() - op.getX();
        if (dx < 0)
            dx = -dx;
        double dy = (double)getY() - op.getY();
        if (dy < 0)
            dy = -dy;
        double dz = (double)getZ() - op.getZ();
        if (dz < 0)
            dz = -dz;
        dx = (double)dx * dx;
        dy = (double)dy * dy;
        dz = (double)dz * dz;
        double re = sqrt(dx + dy + dz);
        return re;
    }
};


#endif