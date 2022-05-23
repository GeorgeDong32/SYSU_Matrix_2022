#include <iostream>
#include <string>
using namespace std;

#include "source.cpp"

int main_menu() {
	cout << "1. Add a cat" << endl;
	cout << "2. Remove a cat" << endl;
	cout << "3. Find a cat" << endl;
	cout << "4. Print all cats" << endl;
	cout << "0. Exit this game" << endl;
	int choice;
	cin >> choice;
	return choice;
}

void add_a_cat(CatFamily & cat_family) {
	string cat_name;
	int cat_age;
	cin >> cat_name >> cat_age;
	if (cat_family.add_a_cat(cat_name, cat_age)) 
		cout << "Successfully added cat: " << cat_name << endl;
	else 
		cout << "Fail to add cat: " << cat_name << endl;
}

void remove_a_cat(CatFamily & cat_family) {
	string cat_name;
	cin >> cat_name;
	if (cat_family.remove_a_cat(cat_name))
		cout << "Successfully removed cat: " << cat_name << endl;
	else
		cout << "Fail to remove cat: " << cat_name << endl;
}

void find_a_cat(CatFamily & cat_family) {
	string cat_name;
	cin >> cat_name;
	if (cat_family.has_cat(cat_name)) {
		cout << "Here is your cat: " 
			<< cat_family.get_cat(cat_name).cat_name 
			<< " of " << cat_family.get_cat(cat_name).cat_age << "years old" << endl;
	}
	else
		cout << "No such cat: " << cat_name << endl;
}

void print_all_cats(CatFamily & cat_family) {
	cout << "We have these cats:" << endl;
	for (int i = 0; i < cat_family.number_of_cats(); ++ i) {
		string cat_name = cat_family[i];
		cout << '\t' << cat_family.get_cat(cat_name).cat_name 
			<< " of " << cat_family.get_cat(cat_name).cat_age << "years old" << endl;		
	} 
}

int main() {
	CatFamily cat_family;
	while (true) {
		int choice = main_menu();
		switch (choice) {
			case 0: cout << "See you" << endl; exit(0);
			case 1: add_a_cat(cat_family); break;
			case 2: remove_a_cat(cat_family); break;
			case 3: find_a_cat(cat_family); break;
			case 4: print_all_cats(cat_family);
		}
	}
}