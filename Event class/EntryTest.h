#pragma once
#include <iostream>
#include <string>
#include "Event.h"
#include "E:\Coding C++\assignment4\Utitily Classes\Date.h"
#include "E:\Coding C++\assignment4\Utitily Classes\Time.h"


using namespace std;
class EntryTest :public Event {
private:
	int costPerPerson;
	int hallCharges;
public:
	EntryTest() :Event(), costPerPerson(0), hallCharges(0) {}
	EntryTest(string n, Date held, Time start, int id, int part, int cost, int hall) :Event(n, held, start, id, part), costPerPerson(cost), hallCharges(hall) {}
	void setCostPerPerson(int rate) { this->costPerPerson = rate; }
	int getCostPerPerson() { return costPerPerson; }
	void setHallCharges(int hallCharges) { this->hallCharges = hallCharges; }
	int getHallCharges() { return hallCharges; }

	void setDetails() {
		cout << "Give Entry test event details " << endl;
		Event::setDetails();
		int rate, hall;
		cout << "Cost Per Participant: ";
		cin >> rate;
		setCostPerPerson(rate);
		cout << "Hall Charges for entry test: ";
		cin >> hall;
		setHallCharges(hall);
	}
	int calculateBill() {
		int result;
		result = costPerPerson * participants + hallCharges;
		return result;
	}
	void display() {
		cout << "Entry Test Details are: " << endl;
		Event::display();
		cout << "Cost per person: " << costPerPerson << endl;
		cout << "Hall Charges: " << hallCharges << endl;
	}
};