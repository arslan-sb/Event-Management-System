#include <iostream>
#include <string>
#include "Event.h"
#include "Conference.h"
#include "E:\Coding C++\assignment4\Utitily Classes\Date.h"
#include "E:\Coding C++\assignment4\Utitily Classes\Time.h"
using namespace std;


//Conference Class Function Definition
//Constructors
Conference::Conference()
	:Event(), days(0), ratePerDay(0) {}
Conference::Conference(string n, Date held, Time start, int id, int part, int days, int rate) :
	Event(n, held, start, id, part), days(days), ratePerDay(rate) {}

//Getters and setters of Data Members
void Conference::setDays(int days) { this->days = days; }
int Conference::getDays() { return days; }
void Conference::setRatePerDay(int rate) { this->ratePerDay = rate; }
int Conference::getRatePerDay() { return ratePerDay; }

//Set Data Functionality of Conference Class
void Conference::setDetails() {
	cout << "Please give Conference event details" << endl;
	Event::setDetails();
	int days, rate;
	cout << "Number of days: ";
	cin >> days;
	setDays(days);
	cout << "Rate Per Day: ";
	cin >> rate;
	setRatePerDay(rate);
}
//Calculating bill using provide formula
int Conference::calculateBill()
{
	int result;
	result = ratePerDay * days;
	return result;
}
//Printing data of Conference and calling event display as well
void Conference::display() {
	cout << "Conference Details are:" << endl;
	Event::display();
	cout << "Number of Days:	" << days << endl;
	cout << "Per Day Cost:	" << ratePerDay << endl;
}
