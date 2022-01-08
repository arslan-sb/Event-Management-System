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
	//Function Prototypes of class
	EntryTest();   //Default Constructor
	EntryTest(string , Date , Time , int , int , int , int );   //parameterized Constructor
	//Getters and Setters of EntryTest Class
	void setCostPerPerson(int );
	int getCostPerPerson();
	void setHallCharges(int );
	int getHallCharges();
	//*********************

	void setDetails();//setting value of data members and calling parent class set function
	int calculateBill(); //calculating bill of Entry test event by client provided formula
	void display(); //Print details of data members of event class object and parent class
};