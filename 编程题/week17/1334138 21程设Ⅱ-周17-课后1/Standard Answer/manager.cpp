#include "manager.h"


// Implements.

bool RoomManager::InsertAppointment(const int& date) {
	if(_room1.find(date) != _room1.end()) {
		return false;
	}
	else {
		_room1.insert(date);
		return true;
	}
}


bool RoomManager::InsertAppointment(const int& date, const string& event) {
	if(_room2.find(date) != _room2.end()) {
		return false;
	}
	else {
		_room2[date] = event;
		return true;
	}
}


bool RoomManager::CancelAppointment(const int& room_id, const int& date) {
	if(room_id == 1) {
		set<int>::iterator sit = _room1.find(date);
		if(sit == _room1.end()) {
			return false;
		}
		else {
			_room1.erase(sit);
			return true;
		}
	}
	else {
		map<int, string>::iterator mit = _room2.find(date);
		if(mit == _room2.end()) {
			return false;
		}
		else {
			_room2.erase(mit);
			return true;
		}
	}
}


void RoomManager::PrintAppointments(const int& room_id) const {
	if(room_id == 1) {
		if(_room1.empty()) {
			cout << "No Appointment";
		}
		else {
			for(auto sit=_room1.begin(); sit!=_room1.end(); ++sit) {
				cout << *sit << ' ';
			}
		}
	}
	else {
		if(_room2.empty()) {
			cout << "No Appointment";
		}
		else {
			for(auto mit=_room2.begin(); mit!=_room2.end(); ++mit) {
				cout << mit->first << '(' << mit->second << ')' << ' '; 
			}
		}
	}
}
