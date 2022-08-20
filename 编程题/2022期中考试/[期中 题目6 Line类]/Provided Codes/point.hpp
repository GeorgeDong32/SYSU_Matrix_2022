#ifndef POINT_HPP
#define POINT_HPP
class Point { //Point类定义
public:
    Point(double xx = 0, double yy = 0) {
        x = xx;
        y = yy;
    }

    Point(const Point &p) {
        x = p.x;
        y = p.y;
    }

    double getX() const { return x; }

    double getY() const { return y; }

private:
    double x, y;
};

#endif
