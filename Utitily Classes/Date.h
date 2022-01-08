#pragma once
#include <iostream>
using namespace std;
class Date {
private:
	int day;
	int month;
	int year;
public:
	Date(int dd = 01, int mm = 01, int yy = 2000) :day(dd), month(mm), year(yy)
	{
	}
	void setDay(int d) {
		if (d < 1 || d>31) {
			cout << "Error! Enter day again: ";
			cin >> d;
			setDay(d);
		}
		else
			day = d;
	}
	int getDay() { return day; }
	void setMonth(int m) {
		if (m < 1 || m>12) {
			cout << "Error! Enter month again: ";
			cin >> m;
			setMonth(m);
		}
		else
			month = m;
	}
	int getMonth() { return month; }
	void setYear(int y) {
		if (y < 1990) {
			cout << "Error! Enter year again: ";
			cin >> y;
			setYear(y);
		}
		else
			year = y;
	}
	int getYear() { return year; }
	void setData() {
		int d, m, y;
		cout << "Enter Date in formate (dd/mm/yy)" << endl;
		cin >> d >> m >> y;
		setDay(d);
		setMonth(m);
		setYear(y);
	}
	void display()
	{
		cout << day << "/" << month << "/" << year << endl;
	}
};


