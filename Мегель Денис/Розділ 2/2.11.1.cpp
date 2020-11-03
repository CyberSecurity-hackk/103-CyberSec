#include <iostream>

using namespace std;

struct timing
{
	int hours;
	int minutes;
	int MINUTES;
};

int main() {
	long int temp3, t;
	cout << "Enter the time: " << endl;
	timing* TM = new timing;
	cin >> TM->hours;
	cin >> TM->minutes;


	if (TM->hours <= 24 && TM->minutes <= 60)
	{
		cout << "Enter minutes: ";
		cin >> TM->MINUTES;

		if (TM->minutes + TM->MINUTES <= 60) 
		{
			TM->minutes = TM->minutes + TM->MINUTES;
			if (TM->hours == 24)
				TM->hours = 0;

			if (TM->minutes == 60) 
			{
				TM->hours++;
				TM->minutes = 0;
			}
			cout << "Time is: " << TM->hours << ":" << TM->minutes << endl;
		}

		if (TM->MINUTES + TM->minutes > 60) 
		{
			if (TM->MINUTES / 60 <= 1) 
				temp3 = 1;
			else 
				temp3 = TM->MINUTES / 60;

			t = TM->MINUTES % 60; 

			if (TM->minutes + t > 60) 
				TM->minutes = (TM->minutes + t) - 60;
			else 
				TM->minutes += t;

			if (TM->hours == 24) 
				TM->hours = 0;

			if (TM->minutes == 60) 
			{
				TM->hours++;
				TM->minutes = 0;
			}

			if (TM->hours + temp3 <= 24 && TM->minutes <= 60) 
			{
				if (TM->hours + temp3 < 24) 
					cout << "Time is: " << TM->hours + temp3 << ":" << TM->minutes << endl;
				if (TM->hours + temp3 == 24) 
					cout << "Time is: " << "00:" << TM->minutes << endl;
			}

			if (TM->hours + temp3 > 24 && TM->minutes + t <= 60)  
				cout << "Time is: " << (TM->hours + temp3) % 24 << ":" << TM->minutes << endl;
			if (TM->hours + temp3 > 24 && TM->minutes > 60) 
				cout << "Time is: " << (TM->hours + temp3) % 24 << ":" << TM->minutes % 60 << endl;

			if (TM->hours + temp3 <= 24 && TM->minutes > 60) 
			{
				if (TM->hours + temp3 < 24)
					cout << "Time is: " << TM->hours + temp3 << ":" << TM->minutes % 60 << endl;
				if (TM->hours + temp3 == 24) 
					cout << "Time is: " << "00:" << TM->minutes % 60 << endl;
			}
		}
	}
	else 
		cout << "Error" << endl;
}