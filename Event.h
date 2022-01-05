#pragma once
#include <iostream>
#include <string>
using namespace std;

class Event {
protected:
	string name;
	int ID;
	int participants;

public:
	Event() :name(), ID(0), participants(0) {}
	Event(string n, int id, int part) :name(n), ID(id), participants(part) {}
	void setName(string n) { this->name = n; }
	string getName() { return name; }
	void setID(int ID) { this->ID = ID; }
	int getID() { return ID; }
	void setParticipants(int participants) { this->participants = participants; }
	int getParticipants() { return participants; }
	void display() {

	}

};