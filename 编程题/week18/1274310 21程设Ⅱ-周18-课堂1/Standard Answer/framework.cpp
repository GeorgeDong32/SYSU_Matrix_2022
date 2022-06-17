#include "BracketsMatch.h"
#include <iomanip>


int main() {
	
	string brackets;
	cin >> brackets;
	
	int length = brackets.length();
	
	cout << "Origin brackets are :" << endl;
	cout << ">>> " << brackets << endl;
	cout << "Your judge on whether those brackets are matched is :" << endl;
	cout << ">>> " << boolalpha << Matched(brackets, length) << endl;	
	
	return 0;
}
