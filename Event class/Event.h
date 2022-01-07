#pragma once
#include <iostream>
#include <string>
#include "E:\Coding C++\assignment4\Utitily Classes\Date.h"
#include "E:\Coding C++\assignment4\Utitily Classes\Time.h"
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
	void setHeldOn(Date held) { this->heldOn = held; }
	Date getHeldOn() { return heldOn; }
	void setStartTime(Time start) { this->startTime = start; }
	void setID(int ID) { this->ID = ID; }
	int getID() { return ID; }
	void setParticipants(int participants) { this->participants = participants; }
	int getParticipants() { return participants; }
	virtual int calculateBill() = 0;
	virtual void setDetails() = 0 {
		string n;
		int id, participants;
		cin.ignore();
		cout << "Name: ";
		getline(cin, n);
		setName(n);
		heldOn.setData();
		startTime.setData();
		cout << "ID: ";
		cin >> id;
		setID(id);
		cout << "No of Participants: ";
		cin >> participants;
		setParticipants(participants);
	}

	virtual void display() = 0
	{
		cout << "Name: " << name << endl;
		cout << "Event ID: " << ID << endl;
		cout << "Number of Participants: " << participants << endl;
		cout << "Scheduled for: "; heldOn.display();
		cout << "Start Time: "; startTime.showTime();
	}

};