#include "rational.h"
#include <sstream>

bool rational::operator > (const rational& other) const {
	auto c = other.a;
	auto d = other.b;
	return (b * d > 0 && a * d > b * c) ||
		(b * d < 0 && a * d < b * c);
}

string rational::to_str() const {
	std::stringstream ss;
	ss << this->a << "/" << this->b;
	std::string s;
	ss >> s;
	return s;
}