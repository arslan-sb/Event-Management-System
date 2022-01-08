#pragma once
#include <iostream>
#include <string>
#include "Event.h"
#include "E:\Coding C++\assignment4\Utitily Classes\Date.h"
#include "E:\Coding C++\assignment4\Utitily Classes\Time.h"
using namespace std;

class Conference : public Event {
private:
	int days;
	int ratePerDay;
public:
	//Function Prototypes of class
	Conference(); //Default Constructor
	Conference(string , Date , Time , int , int , int , int ); //parameterized Constructor
	//getters and setters of data members
	void setDays(int );
	int getDays();
	void setRatePerDay(int );
	int getRatePerDay();
	//***********************
	void setDetails(); //setting value of data members and parent class
	int calculateBill(); //calculating bill of conference event by differnt formula
	void display();  //Printing details of members
};

