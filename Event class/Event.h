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
	Event();
	Event(string n, Date held, Time start, int id, int part);
	void setName(string n);
	string getName();
	void setHeldOn(Date held);
	Date getHeldOn();
	void setStartTime(Time start);
	void setID(int ID);
	int getID();
	void setParticipants(int participants);
	int getParticipants();
	virtual int calculateBill() = 0;
	void lookup(Event* arr[], int index );
	virtual void setDetails() = 0;

	virtual void display() = 0;

};