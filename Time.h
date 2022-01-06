#pragma once
#include <iostream>
using namespace std;
class Time {
private:
	int hour;
	int min;
public:
	Time(int h = 0, int m = 0) : hour(h), min(m) {}
	void setHour(int h) {
		if (h < 0 || h>24) {
			cout << "Error!!\nEnter hour again: " << endl;
			cin >> h;
			setHour(h);
		}
		else
			hour = h;
	}
	int getHour() { return hour; }
	void setMin(int m) {
		if (m < 0 || m>60) {
			cout << "Error!!\nEnter minute again: " << endl;
			cin >> m;
			setHour(m);
		}
		else
			min = m;
	}
	int getMin() { return min; }
	void setData() {
		int hours, minute;
		cout << "Enter Time in 24-Hour formate " << endl;
		cin >> hours >> minute;
		setHour(hours);
		setMin(minute);
	}
	void showTime() {
		cout << hour << " : " << min << endl;
	}

};