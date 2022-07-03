#include <iostream>
#include <cmath>

using namespace std;

class Land {
	public:
		Land():price_(0) {}
		explicit Land(int price) {
			price_ = price;
		}
		virtual double CalMoney() = 0;
	protected:
		int price_;
};

class Square: public Land {
	public:
		Square(double len, int price) {
			len_ = len;
			price_ = price;
		}
		double CalMoney() {
			return pow(len_, 2) * price_;
		}
	private:
		double len_;
};

class Circle:public Land {
	public:
		Circle(double radius, int price) {
			radius_ = radius;
			price_ = price;
		}
		double CalMoney() {
			return acos(-1) * pow(radius_, 2) * price_;
		}
	private:
		double radius_;
};

class Accountant {
	public:
		Accountant():money_(0) {}
		void DevelopEstate(Land* land) {
			money_ += land -> CalMoney();
		}
		double CheckMoney() {
			return money_;
		}
	private:
		double money_;
};
