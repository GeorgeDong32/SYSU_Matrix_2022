#include <iostream>
#include <string>
using namespace std;

#include "source.cpp"

void print_cat(const Cat & cat) {
	cout << "This is my cat:" << endl;
	cout << cat.get_name() << endl;
	cout << cat.get_age() << endl;
}

int main() {
	int age;
	string name;
	cin >> name >> age;
	Cat cat;
	cat.set_name(name);
	cat.set_age(age);
	print_cat(cat);
}