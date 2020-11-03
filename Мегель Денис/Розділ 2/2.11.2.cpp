#include <iostream>

using namespace std;

struct timing
{
	int hours;
	int minutes;
	int MINUTES;
};

int main() {
	int h, m;

	cout << "Enter the end time: " << endl;
	timing* TM = new timing;
	cin >> TM->hours;
	cin >> TM->minutes;
	cout << "Enter the start time: " << endl;
	cin >> h;
	cin >> m;

	if (TM->hours <= 24 && TM->minutes <= 60 && h <= 24 && m <= 60)
	{
		if (TM->hours > h && TM->minutes > m)
		{
			TM->hours -= h;
			TM->minutes -= m;

			if (TM->hours == 24)
				TM->hours = 0;

			if (TM->minutes == 60)
			{
				TM->minutes = 0;
				TM->hours--;
			}

			cout << "Time was spent: " << TM->hours << " hours and " << TM->minutes << " minutes." << endl;
		}

		if (TM->hours > h && TM->minutes <= m)
		{
			TM->minutes = (TM->minutes + 60) - m;
			--TM->hours;
			TM->hours -= h;

			if (TM->hours == 24)
				TM->hours = 0;
			if (TM->minutes == 60)
			{
				TM->minutes = 0;
				TM->hours--;
			}

			cout << "Time was spent: " << TM->hours << " hours and " << TM->minutes << " minutes." << endl;
		}
	}
	else
		cout << "Error" << endl;
}



	system("pause");
	return 0;
}