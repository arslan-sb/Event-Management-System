#pragma once
#include <iostream>
#include <string>
#include "E:\Coding C++\assignment4\Utitily Classes\Date.h"
#include "E:\Coding C++\assignment4\Utitily Classes\Time.h"
using namespace std;

class Event {
protected:
	//Data Members that can be shared with Child Classes
	string name;
	Date heldOn;
	Time startTime;
	int ID;
	int participants;
public:
	//Event Class Function prototypes
	Event(); //Default Constructor
	Event(string , Date , Time , int , int ); //Paramerterized Constructor
	//***************************
	//Getters and setters of Data Members
	void setName(string );
	string getName();
	void setHeldOn(Date );
	Date getHeldOn();
	void setStartTime(Time );
	void setID(int );
	int getID();
	void setParticipants(int );
	int getParticipants();
	//**********************
	//Pure Virtual function for Child classes to calculate bill
	virtual int calculateBill() = 0; 
	//Lookup function To search for details of a specific event in array
	void lookup(Event* arr[], int index );
	//Pure virtual set details for child classes
	virtual void setDetails() = 0;
	virtual void display() = 0;
};