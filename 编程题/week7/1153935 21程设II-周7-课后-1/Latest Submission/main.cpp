#include "OperatorLinkedQueue.h"


int main() {
	
	int n;
	cin >> n;
	
	OperatorLinkedQueue queue1;
	for(int i=0; i<n; ++i) {
		int var;
		cin >> var;
		queue1 += var;
	}
	
	cout << queue1 << endl;
	
	OperatorLinkedQueue queue4(queue1);
	
	OperatorLinkedQueue queue2 = queue1--;
	cout << queue2 << endl;
	
	OperatorLinkedQueue queue3 = --queue1;
	cout << queue3 << endl;
	
	cout << queue4 << endl;

	return 0;
}

