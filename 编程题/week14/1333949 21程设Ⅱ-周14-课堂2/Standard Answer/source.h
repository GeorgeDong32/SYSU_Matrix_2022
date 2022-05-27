#include <iostream>
using namespace std;
class Shape {
	public:
        virtual double GetArea() = 0;
        virtual double GetPerim() = 0;
};

class Rectangle: public Shape {
	private:
		double length;
		double height;
	public:
		Rectangle(double l, double h) {
			length = l;
			height = h;
		}
		virtual double GetArea() {
			return length * height;
		}
		virtual double GetPerim() {
			return 2*(length + height);
		}
};

class Circle: public Shape {
	private:
		double radius;
	public:
		Circle(double r) {
			radius = r;
		}
		virtual double GetArea() {
			return 3.14 * radius * radius;
		}
		virtual double GetPerim() {
			return 6.28 * radius;
		}
};
