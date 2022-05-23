#include <iostream>
#include <string>
using namespace std;

#include "Cat.h"

int main() {
	Cat cats[10];
	int num_of_cats;
	cin >> num_of_cats;
	for (int i = 0; i < num_of_cats; ++ i) {
		string name;
		cin >> name;
		cats[i] = Cat(name);
	}
	CatFamily family;
	for (int i = 2; i < num_of_cats; ++ i) 
		family.add_family(cats[i]);
	
	CatFamily f1 = cats[0] + cats[1];
	f1.print();
	CatFamily f2 = cats[0] + family;
	f2.print();
	CatFamily f3 = family + cats[1];
	f3.print();
	CatFamily f4 = family + family;
	f4.print();	

	return 0;
}

