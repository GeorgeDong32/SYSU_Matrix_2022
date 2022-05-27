#pragma once
#include <iostream>
using std::cout;
using std::endl;

class Writing {
public:
	Writing() {
		cout << "Writing constructor" << endl;
	}
	~Writing() {
		cout << "~Writing" << endl;
	}
};

class Racing {
public:
	Racing() {
		cout << "Racing constructor" << endl;
	}
	~Racing() {
		cout << "~Racing" << endl;
	}
};

class Workday : virtual Racing, virtual Writing
{
public:
	Workday() : Racing(), Writing() { cout << "Workday constructor" << endl; }
	~Workday()
	{
		cout << "~Workday" << endl;
	}
};

class Weekend : virtual Writing,virtual Racing
{
public:
	Weekend() : Writing(), Racing() { cout << "Weekend constructor" << endl; }
	~Weekend()
	{
		cout << "~Weekend" << endl;
	}
};

class Choseday : public Weekend, Workday
{
public:
	Choseday() : Workday(), Weekend() { cout << "Choseday constructor" << endl; }
	~Choseday()
	{
		cout << "~Choseday" << endl;
	}
};