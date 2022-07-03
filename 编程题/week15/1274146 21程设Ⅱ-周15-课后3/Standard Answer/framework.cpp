#include "source.h"
#include <iostream>
using namespace std;

int main() {
	Counter<string> counter; // you need to implement this class
	while (cin) {
		string word;
		cin >> word;
		counter.count(word); // increase the counter for 'word'
	}
	counter.discard_less_than(2); // remove the words that occur less than twice
	cout << counter; // print the words and their counts in a decreasing order
}