#ifndef OPERATORLINKEDQUEUE_H
#define OPERATORLINKEDQUEUE_H
#include <iostream>
using namespace std;


class OperatorLinkedQueue {
	
private:
	int *arr;
	int size;
	int front;
	int back;
	
public:
	
	OperatorLinkedQueue();
	OperatorLinkedQueue(const OperatorLinkedQueue &other);
	~OperatorLinkedQueue();
	
	int GetSize() const;
	
	int & operator[] (const int &index);
	int operator[] (const int &index) const;
	OperatorLinkedQueue operator= (const OperatorLinkedQueue &right);
	OperatorLinkedQueue operator+= (const int &ele);
	OperatorLinkedQueue operator-- ();
	OperatorLinkedQueue operator-- (int);
	
	friend ostream & operator << (ostream &os, const OperatorLinkedQueue &object);
};

#endif

