#pragma once
#include <iostream>
using std::cout; using std::endl;

class A {
public:
	virtual void Prin() {
		cout << "Prin come form class A" << endl;
	}
	virtual ~A() { cout << "A::~A()called" << endl; }
};

class B: public A{
	char* buf;
public:
	void Prin() {
		cout << "Prin come from class B" << endl;
	}
	B() : A() { buf = nullptr; }
	B(int i) : A() {
		buf = (char*) new int;
		*buf = i;
	}
	~B() {
		cout << "B::~B()called" << endl;
		if (buf != nullptr)
			delete buf;
	}
};