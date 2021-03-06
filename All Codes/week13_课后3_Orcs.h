#ifndef __ORCS_H__
#define __ORCS_H__
/***************************************************************
*                                                              *
* Copyright(c) GeorgeDong32(Github).All rights reserved.       *
*                                                              *
***************************************************************/
#include <iostream>
#include <string>
using namespace std;

class Creature {

public:
	Creature(const int& hands, const int& legs):_hands(hands), _legs(legs) {
		cout << "A Creature has been created!" << endl;
		cout << "It has " << _hands << " hand(s)!" << endl;
		cout << "It has " << _legs << " leg(s)!" << endl;
	}
	virtual ~Creature() { cout << "Creature object exiled!" << endl; }
	int GetHands() const {return _hands; }
	int GetLegs() const { return _legs; }

private:
	int _hands;
	int _legs;
};
class Beast :virtual public Creature {

public:
	Beast(const int& hands, const int& legs, const string& name): Creature(hands, legs), _name(name) { cout << "Its beast name is " << _name << endl; }
	~Beast() { cout << "Beast object exiled!" << endl; }
	string GetName() const { return _name; }
	int GetHands() const { return Creature::GetHands(); }
	int GetLegs() const { return Creature::GetLegs(); }
private:
	string _name;
};
class Human :virtual public Creature {

public:
	Human(const int& hands, const int& legs, const string& name): Creature(hands, legs), _name(name) { cout << "Its human name is " << _name << endl; }
	~Human() { cout << "Human object exiled!" << endl; }
	string GetName() const { return _name; }
	int GetHands() const { return Creature::GetHands(); }
	int GetLegs() const { return Creature::GetLegs(); }
private:
	string _name;
};
class Orc :virtual public Beast, virtual public Human {

public:
	Orc(const int& hands, const int& legs, const string& beast_name, const string& human_name):Creature(hands, legs), Beast(hands, legs, beast_name), Human(hands, legs, human_name) {}
	~Orc() { cout << "Orc object exiled!" << endl; }
	string GetBeastName() const { return Beast::GetName(); }
	string GetHumanName() const { return Human::GetName(); }
	int GetHands() const { return Creature::GetHands(); }
	int GetLegs() const { return Creature::GetLegs(); }
};

#endif