#include "OperatorLinkedQueue.h"
#include <cstring>


OperatorLinkedQueue::OperatorLinkedQueue() {
	arr = new int[100];
	size = 0;
	front = 0;
	back = 0;
}


OperatorLinkedQueue::OperatorLinkedQueue(const OperatorLinkedQueue &other) {
	this->arr = new int[100];
	this->size = other.size;
	this->front = 0;
	this->back = this->size;
	for(int i=0; i<this->size; ++i) {
		this->arr[i] = other[i];
	}
}


OperatorLinkedQueue::~OperatorLinkedQueue() {
	delete[] arr;
}


int OperatorLinkedQueue::GetSize() const {
	return this->size;
}


int & OperatorLinkedQueue::operator[] (const int &index) {
	return this->arr[(this->front+index) % 100];
}


int OperatorLinkedQueue::operator[] (const int &index) const {
	return this->arr[(this->front+index) % 100];
}


OperatorLinkedQueue OperatorLinkedQueue::operator= (const OperatorLinkedQueue &right) {
	if (this != &right) {
		delete []arr;
		this->arr = new int[100];
		this->size = right.size;
		this->front = 0;
		this->back = this->size;
		for(int i=0; i<this->size; ++i) {
			this->arr[i] = right[i];
		}
	}
	return *this;
}


OperatorLinkedQueue OperatorLinkedQueue::operator+= (const int &ele) {
	if(this->size < 100) {
		this->arr[this->back++] = ele;
		this->back %= 100;
		++ this->size;
	}
	return *this;
}


OperatorLinkedQueue OperatorLinkedQueue::operator-- () {
	if(this->size > 0) {
		++ this->front;
		this->front %= 100;
		-- this->size;
	}
	return *this;
}


OperatorLinkedQueue OperatorLinkedQueue::operator-- (int) {
	OperatorLinkedQueue result(*this);
	-- *this;
	return result;
}


ostream & operator << (ostream &os, const OperatorLinkedQueue &object) {
	if(object.GetSize() > 0) {
		for(int i=0; i<object.GetSize()-1; ++i) {
			os << object[i] << "->";
		}
		os << object[object.GetSize()-1];
	}
	return os;
}

