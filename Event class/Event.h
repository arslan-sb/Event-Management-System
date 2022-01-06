#pragma once
#include <iostream>
#include <string>
#include "Date.h"
#include "Time.h"
using namespace std;

class Event {
protected:
	string name;
	Date heldOn;
	Time startTime;
	int ID;
	int participants;

public:
	Event() :name(), ID(0), participants(0), heldOn(), startTime() {}
	Event(string n, Date held, Time start, int id, int part) :name(n), heldOn(held), startTime(start), ID(id), participants(part) {}
	void setName(string n) { this->name = n; }

	string getName() { return name; }
	void setID(int ID) { this->ID = ID; }
	int getID() { return ID; }
	void setParticipants(int participants) { this->participants = participants; }
	int getParticipants() { return participants; }
	void display() {
		cout << "Name: " << name << endl;
		cout << "Event ID: " << ID << endl;
		cout << "Number of Participants: " << participants << endl;
	}

};