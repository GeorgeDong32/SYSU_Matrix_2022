#include <iostream>
using namespace std;

class Number {
	private:
		int num;
	public:
		Number(int n) {
			num = n;
		}
		Number& add(int n) {
			num += n;
			return *this;
		}
		Number& sub(int n) {
			num -= n;
			return *this;
		}
		void print() {
			cout << num << endl;
		}
};
