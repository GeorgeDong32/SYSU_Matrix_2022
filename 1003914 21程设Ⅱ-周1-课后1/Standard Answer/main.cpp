#include<iostream>
#include<string>
#include<iomanip>
using namespace std;


int main() {

	cout << "control the format of numeric value, 123456789.9876543" << endl;
	double a = 123456789.9876543;
	cout << "Default:" << a << endl;
	cout << "Using fixed:" << fixed << a << endl;
	cout << "With precision 7:" << setprecision(7) << a << endl;
	cout << "Scientific with precision 3:" << setprecision(3) << scientific << a << endl;
	cout << "---------------------------" << endl;

	cout << "control the base of numeric value, 16" << endl;
	int b = 16;
	cout << "Hex:" << hex << b << endl;
	cout << "Oct:" << oct << b << endl;
	cout << "Dec:" << dec << b << endl;
	cout << "---------------------------" << endl;

	cout << "control the width and alignment, and the width is 6 spaces" << endl;
	cout << "right aligned" << endl;
	int num = 1;
	for (int i = 1; i <= 16; i++) {
		cout << setw(6) << num;
		if (i % 4 == 0) {
			cout << endl;
		}
		num *= 2;
	}
	cout << "left aligned" << endl;
	num = 1;
	for (int i = 1; i <= 16; i++) {
		cout << left << setw(6) << num;
		if (i % 4 == 0) {
			cout << endl;
		}
		num *= 2;
	}

	cout << "---------------------------" << endl;
	cout << "control the fillment of 123456" << endl;
	int value = 123456;
	cout << right << setw(9) << "Original:" << setw(8) << value << endl;
	cout << right << setw(9) << "Filled:" << setfill('*') << setw(8) << value << endl;
	return 0;
}

