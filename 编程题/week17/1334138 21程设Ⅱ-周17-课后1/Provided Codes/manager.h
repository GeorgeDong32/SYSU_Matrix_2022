#ifndef __MANAGER__
#define __MANAGER__


#include <iostream>
#include <map>
#include <set>
using namespace std;


class RoomManager {
	
	private:
		
		// Conference Room 1, the smaller one.
		// Only require the date information for appointment.
		set<int> _room1; 
		
		// Conference Room 2, the bigger one.
		// Require both date and event information for appointment. 
		map<int, string> _room2; 
		
	public:
		
		// Insert an appointment to the smaller Conference Room (1).
		bool InsertAppointment(const int& date);
		
		// Insert an appointment to the bigger Conference Room (2).
		bool InsertAppointment(const int& date, const string& event);
		
		// Cancel an appointment on designated date.
		// If room_id == 1, cancel the corresponding appointment of _room1.
		// If room_id == 2, cancel the corresponding appointment of _room2.
		bool CancelAppointment(const int& room_id, const int& date);
		
		// Print all existing appointments in chronological order.
		// If room_id == 1, just print the date information. Each piece of information is separated by ' '.
		// If room_id == 2, print the information in form of "date(event)". Each piece of information is separated by ' '.
		// If there is no even one existing appointment yet, print "No Appointment".
		void PrintAppointments(const int& room_id) const;
	
};


#endif
