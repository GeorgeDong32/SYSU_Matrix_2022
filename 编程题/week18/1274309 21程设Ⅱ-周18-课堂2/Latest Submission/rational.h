#pragma once
#include <vector>
#include <string>
using std::vector;
using std::string;

class rational {
private:
	int a;
	int b; // value is \frac{a}{b}
public:
	rational(int a, int b) : a(a), b(b) {};
	bool operator > (const rational& other) const;
	string to_str() const;
};

void sortRational(vector<rational>& vec);