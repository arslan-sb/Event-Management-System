#include <iostream>
#include <string>
#include "Event.h"
#include "EntryTest.h"
#include "E:\Coding C++\assignment4\Utitily Classes\Date.h"
#include "E:\Coding C++\assignment4\Utitily Classes\Time.h"

using namespace std;
//EntryTest Class Function Definition
//Constructors
EntryTest::EntryTest() 
	:Event(), costPerPerson(0), hallCharges(0) {}
EntryTest::EntryTest(string n, Date held, Time start, int id, int part, int cost, int hall) 
	:Event(n, held, start, id, part), costPerPerson(cost), hallCharges(hall) {}

//Getters and setters of Data Members
void EntryTest::setCostPerPerson(int rate) { this->costPerPerson = rate; }
int EntryTest::getCostPerPerson() { return costPerPerson; }
void EntryTest::setHallCharges(int hallCharges) { this->hallCharges = hallCharges; }
int EntryTest::getHallCharges() { return hallCharges; }
//***************************************

//Set Data Functionality of EntryTest Class
void EntryTest::setDetails() {
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
//calculating bill of Entry test event by client provided formula
int EntryTest::calculateBill() { 
	int result;
	result = costPerPerson * participants + hallCharges;
	return result;
}
//Print details of data members of event class object and parent class
void EntryTest::display() {
	cout << "Entry Test Details are: " << endl;
	Event::display();
	cout << "Cost per person: " << costPerPerson << endl;
	cout << "Hall Charges: " << hallCharges << endl;
}