#include <iostream>
#include <string>
#include "Event.h"
#include "E:\Coding C++\assignment4\Utitily Classes\Date.h"
#include "E:\Coding C++\assignment4\Utitily Classes\Time.h"
using namespace std;

//Event Class Function Definitions
//Event Class constructors
Event::Event() 
	:name(), ID(0), participants(0), heldOn(), startTime() {}
Event::Event(string n, Date held, Time start, int id, int part) 
	:name(n), heldOn(held), startTime(start), ID(id), participants(part) {}

//Getters and Setters of Data Members
void Event::setName(string n) { this->name = n; }
string Event::getName() { return name; }
void Event::setHeldOn(Date held) { this->heldOn = held; }
Date Event::getHeldOn() { return heldOn; }
void Event::setStartTime(Time start) { this->startTime = start; }
void Event::setID(int ID) { this->ID = ID; }
int Event::getID() { return ID; }
void Event::setParticipants(int participants) { this->participants = participants; }
int Event::getParticipants() { return participants; }

//Lookup function To search for details of a specific event in array
//Event Could be searched using index number or Unique event id 
void Event::lookup(Event* arr[], int index ) {
	int choice;
	cout << "Select searching method\n1 using index\n2 using unique ID" << endl;
	cin >> choice;

	switch (choice)
	{
		int input;
	case 1:
		cout << "Enter index: ";
		cin >> input;
		if (input<0 || input>index || input > 49) {
			cout << "Index not found" << endl;
		}
		else {
			arr[input]->display();
			cout << "Total Bill:	" << arr[input]->calculateBill() << endl;
		}
		break;
	case 2:
		cout << "Enter Unique Event ID: ";
		cin >> input;
		for (int i = 0; i <= index; i++)
		{
			if (arr[i]->getID() == input)
			{
				arr[i]->display();
				cout << "Total Bill: " << arr[i]->calculateBill() << endl;
				break;
			}
			else {
				cout << "ID NOT FOUND!!" << endl;
				break;
			}
		}
		break;
	default:
		cout << "INVAlID INPUT" << endl;
		break;
	}
}

//Set functionality form abstract class to child classes
 void Event::setDetails() {
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
 //Function to print Details of events
 void Event::display() 
{
	cout << "Name:		" << name << endl;
	cout << "Event ID:	" << ID << endl;
	cout << "Number of Participants:	" << participants << endl;
	cout << "Scheduled for:	"; heldOn.display();
	cout << "Start Time:	"; startTime.showTime();
}