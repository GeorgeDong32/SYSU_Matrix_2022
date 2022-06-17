#ifndef __SQUEUE__
#define __SQUEUE__

#include <iostream>
#include <stack>
using namespace std;


class Squeue {
	private:
		stack<int> s1; // The stack used for data storage.
		stack<int> s2; // The stack used for supporting operation "Pop" and "Front".
		
	public:
		int Size() const; // Get the size of Squeue.
		bool Empty() const; // Judge whether Squeue is empty.
		void Push(const int &ele); // Push operation of Squeue.
		void Pop(); // Pop operation of Squeue.
		int Front(); // Get the first element of Squeue, return 0 if empty.
		int Back() const; // Get the last element of Squeue, return 0 if empty.
		
		friend void DisplaySqueue(Squeue &sq); // Notice: You NEED NOT to implement this function.
};

#endif
