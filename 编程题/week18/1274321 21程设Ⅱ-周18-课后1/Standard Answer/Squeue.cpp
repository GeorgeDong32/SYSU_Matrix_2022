/* Implement */
#include "SQueue.h"

int Squeue::Size() const {
	return s1.size();
}

bool Squeue::Empty() const {
	return s1.empty();
}

void Squeue::Push(const int &ele) {
	s1.push(ele);
}

void Squeue::Pop() {
	if(Empty()) {
		return;
	}
	while(!s1.empty()) {
		s2.push(s1.top());
		s1.pop();
	}
	s2.pop();
	while(!s2.empty()) {
		s1.push(s2.top());
		s2.pop();
	}
}

int Squeue::Front() {
	if(Empty()) {
		return 0;
	}
	while(!s1.empty()) {
		s2.push(s1.top());
		s1.pop();
	}
	int result = s2.top();
	while(!s2.empty()) {
		s1.push(s2.top());
		s2.pop();
	}
	return result;
}

int Squeue::Back() const {
	if(Empty()) {
		return 0;
	}
	return s1.top();
}