#include <iostream>
#include <string>
using namespace std;
class Cat
{
	int age;
	string name;
public:
	string get_name() const {
		return name;
	}
	int get_age() const {
		return age;
	}
	void set_name(const string & n) {
		name = n;
	}
	void set_age(int a) {
		age = a;
	}
};