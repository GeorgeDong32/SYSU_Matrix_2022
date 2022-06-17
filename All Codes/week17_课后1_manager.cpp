#include "manager.h"
#include <iostream>
#include <map>
#include <set>
#include <string>
using namespace std;
/*********************************************************
*                                                        *
* Copyright(c) GeorgeDong32(Github).All rights reserved. *
*                                                        *
**********************************************************/
bool RoomManager::InsertAppointment(const int& date)
{
	// Insert an appointment to the smaller Conference Room (1).
	int amb = _room1.count(date);
	_room1.insert(date);
	int ama = _room1.count(date);
	if (amb == ama)
	{
		return false;
	}
	else
	{
		return true;
	}
	//return true;
}

bool RoomManager::InsertAppointment(const int& date, const string& event)
{
	// Insert an appointment to the bigger Conference Room (2).
	int amb = _room2.count(date);
	_room2.insert({date,event});
	int ama = _room2.count(date);
	if (amb == ama)
	{
		return false;
	}
	else
	{
		return true;
	}
	//return true;
}

bool RoomManager::CancelAppointment(const int& room_id, const int& date)
{
	// Cancel an appointment on designated date.
	// If room_id == 1, cancel the corresponding appointment of _room1.
	// If room_id == 2, cancel the corresponding appointment of _room2.
	if (room_id == 1)
	{
		int amb = _room1.count(date);
		_room1.erase(date);
		int ama = _room1.count(date);
		if (amb == ama)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	else if (room_id == 2)
	{
		int amb = _room2.count(date);
		_room2.erase(date);
		int ama = _room2.count(date);
		if (amb == ama)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	return true;
}

void RoomManager::PrintAppointments(const int& room_id) const
{
	// Print all existing appointments in chronological order.
	// If room_id == 1, just print the date information. Each piece of information is separated by ' '.
	// If room_id == 2, print the information in form of "date(event)". Each piece of information is separated by ' '.
	// If there is no even one existing appointment yet, print "No Appointment".
	if (room_id == 1)
	{
		set<int>::iterator sp;
		for (sp = _room1.begin(); sp != _room1.end(); sp++)
		{
			cout << *sp << " ";
		}
		//cout << endl;
	}
	else if (room_id == 2)
	{
		//map<int, string>::iterator mp = _room2.begin();
		for (auto mp = _room2.begin(); mp != _room2.end(); mp++)
		{
			cout << (*mp).first << "(" << (*mp).second << ")" << " ";
		}
		//cout << endl;
	}
}
