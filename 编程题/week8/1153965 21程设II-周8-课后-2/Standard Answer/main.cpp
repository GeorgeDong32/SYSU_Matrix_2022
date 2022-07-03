#include <iostream>
using namespace std;

#include "head.h"

int main() {
	string persons[10]; // persons
	string friends[10][10]; // friends per person
	string name;
	// input persons and friends
	for (int i = 0; i < 10; ++ i)  { // for each of the 10 person
		cin >> name;
		persons[i] = name;
		// input 10 friends per person
		for (int j = 0; j < 10; ++ j)  {
			cin >> name;
			friends[i][j] = name;
		}
	}
	FriendsFinder3 ff(persons, friends);
	ff();

	return 0;
}
