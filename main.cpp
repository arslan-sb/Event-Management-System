#include <iostream>
#include "Event class/Event.h"
#include "Event class/Conference.h"
#include "Event class/EntryTest.h"
#include "Utitily Classes/Date.h"
#include "Utitily Classes/Time.h"
using namespace std;


int main()
{
	Event* arr[50]; //User can enter the data of 50 different events

	char again;
	int index = 0;
	do
	{
		int choice;
		system("CLS");
		cout << "Select \n1 for Conference event\n2 for Entry test event\n3 Lookup an event details" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			arr[index] = new Conference;
			arr[index]->setDetails();
			index++;
			break;
		case 2:
			arr[index] = new EntryTest;
			arr[index]->setDetails();
			index++;
			break;
		case 3:
			arr[index]->lookup(arr, index);

			break;
		default:
			cout << "INVALID INPUT!!" << endl;
			break;
		}

		cout << "Do you want to enter data for another event: 'y' / 'n'  " << endl;
		cin >> again;
	} while (again == 'y' || again == 'Y' && index < 50);

	//*******************************************
	system("CLS");  //Clearing Screen
	for (int i = 0; i < index; i++)
	{
		arr[i]->display();
		cout << "Total Expense: " << arr[i]->calculateBill() << endl << endl;
		delete arr[i];
	}
	

	system("pause");
	return 0;
}