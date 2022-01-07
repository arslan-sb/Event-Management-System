#include <iostream>
#include "Event class/Event.h"
#include "Event class/Conference.h"
#include "Event class/EntryTest.h"
#include "Utitily Classes/Date.h"
#include "Utitily Classes/Time.h"
using namespace std;



int main()
{
	Event* e;
	Event* c;
	e = new EntryTest;
	e->setDetails();
	system("CLS");
	c = new Conference;
	c->setDetails();
	system("CLS");
	e->display();
	cout << "Total billed ammount: " << e->calculateBill() << endl << endl;
	c->display();
	cout << "Total billed ammount: " << c->calculateBill() << endl << endl;

	delete e, c;
	system("pause");
	return 0;
}