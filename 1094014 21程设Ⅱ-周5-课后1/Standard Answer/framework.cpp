#include <iostream>
#include <string>
using namespace std;
#include"Cat.h"


int main() {
	int num_of_cats;
	cin >> num_of_cats;
	Cat * cats = new Cat[num_of_cats];
	string name;
	for (int i = 0; i < num_of_cats; ++ i) {
		cin >> name;
		cats[i] = Cat(name); // operator =
	}
	for (int i = 1; i < num_of_cats; ++ i) {
		cats[0].add_family_member(&cats[i]);
	}
	Cat cat = cats[0]; // copy constructor
	cat.print_family();
	delete [] cats;
}