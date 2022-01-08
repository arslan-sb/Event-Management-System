#include <iostream>
#include "Event class/Event.h"
#include "Event class/Conference.h"
#include "Event class/EntryTest.h"
#include "Utitily Classes/Date.h"
#include "Utitily Classes/Time.h"
using namespace std;



int main()
{
	
	Event* arr[50]; //can enter the data of 50 different events

	char again;
	int index = 0;
	do
	{
		int choice;
		cout << "Select \n1 for Conference event\n2 for Entry test event" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			arr[index] = new Conference;
			arr[index]->setDetails();
			break;
		case 2:
		default:
			break;
		}

		cout << "Do you want to enter data for another event: 'y' / 'n'  " << endl;
		cin >> again;
	} while (again == 'y' || again == 'Y' && index < 50);
	
	delete[] arr;
	system("pause");
	return 0;
}