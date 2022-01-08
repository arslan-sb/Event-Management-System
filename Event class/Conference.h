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
	Conference() :Event(), days(0), ratePerDay(0) {}
	Conference(string n, Date held, Time start, int id, int part, int days, int rate) :
		Event(n, held, start, id, part), days(days), ratePerDay(rate) {}
	void setDays(int days) { this->days = days; }
	int getDays() { return days; }
	void setRatePerDay(int rate) { this->ratePerDay = rate; }
	int getRatePerDay() { return ratePerDay; }

	void setDetails() {
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
	int calculateBill()
	{
		int result;
		result = ratePerDay * days;
		return result;
	}

	void display() {
		cout << "Conference Details are:" << endl;
		Event::display();
		cout << "Number of Days:	" << days << endl;
		cout << "Per Day Cost:	" << ratePerDay << endl;
	}

};

