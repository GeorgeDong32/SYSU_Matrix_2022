#pragma once
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Book
{
	string name;
	string code;
	double cost;
public:
	Book(string s, string c, double co) :name(s), code(c), cost(co) {}
	friend ostream& operator << (ostream& os, const Book& b) {
		os << setw(15) << b.name << setw(15) << b.code << setw(15) <<fixed<< b.cost << endl;
		return os;
	}
};

ostream& leftform(ostream& strm)
{
	strm << "left :";
	strm << left << setprecision(2);
	return strm;
}

ostream& rightform(ostream& strm)
{
	strm << "right:";
	strm << right << setprecision(2);
	return strm;
}
