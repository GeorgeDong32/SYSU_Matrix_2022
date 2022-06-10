#include "manager.h"


int main() {
	
	RoomManager manager;
	
	int num_operations;
	string operation;
	
	cin >> num_operations; // How many operations in total.
	cout << endl;
	
	for(int i=1; i<=num_operations; ++i) {
		cin >> operation;
		
		if(operation == "InsertRoom1") {
			int date;
			cin >> date;
			cout << "Succeed?: " << boolalpha << manager.InsertAppointment(date) << endl;
		}
		
		else if(operation == "InsertRoom2") {
			int date;
			string event;
			cin >> date;
			getline(cin, event);
			event.erase(0, 1);
			cout << "Succeed?: " << boolalpha << manager.InsertAppointment(date, event) << endl;
		}
		
		else if(operation == "CancelRoom1") {
			int date;
			cin >> date;
			cout << "Succeed?: " << boolalpha << manager.CancelAppointment(1, date) << endl;
		}
		
		else if(operation == "CancelRoom2") {
			int date;
			cin >> date;
			cout << "Succeed?: " << boolalpha << manager.CancelAppointment(2, date) << endl;
		}
		
		else if(operation == "PrintRoom1") {
			manager.PrintAppointments(1);
			cout << endl;
		}
		
		else {
			manager.PrintAppointments(2);
			cout << endl;
		}
	}
	
	return 0;
}
