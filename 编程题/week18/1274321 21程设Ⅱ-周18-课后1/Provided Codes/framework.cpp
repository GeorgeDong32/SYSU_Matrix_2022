#include "SQueue.h"


void DisplaySqueue(Squeue &sq) {
	cout << "Head->";
	while(!sq.s1.empty()) {
		sq.s2.push(sq.s1.top());
		sq.s1.pop();
	}
	while(!sq.s2.empty()) {
		cout << sq.s2.top() << "->";
		sq.s1.push(sq.s2.top());
		sq.s2.pop();
	}
	cout << "Tail" << endl;
}


int main() {
	
	Squeue sq;
	
	int num_commands;
	cin >> num_commands;
	
	string command_type;
	int command_value;
	
	for(int i=1; i<=num_commands; ++i) {
		cout << "No." << i << " Command: ";
		cin >> command_type;
		if(command_type == "Push") {
			cin >> command_value;
			sq.Push(command_value);
			cout << "Squeue after Push(" << command_value << "): ";
			DisplaySqueue(sq);
		}
		else if(command_type == "Pop") {
			sq.Pop();
			cout << "Squeue after Pop(): ";
			DisplaySqueue(sq);
		}
		else if(command_type == "Front") {
			command_value = sq.Front();
			cout << "Front element of Squeue: " << command_value << endl;
		}
		else if(command_type == "Back") {
			command_value = sq.Back();
			cout << "Back element of Squeue: " << command_value << endl;
		}
		else if(command_type == "Size") {
			command_value = sq.Size();
			cout << "Size of Squeue: " << command_value << endl;
		}
	}
	
}
