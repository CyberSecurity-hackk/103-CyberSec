#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int year, month, day;
    cout <<"Enter a year: ";
    cin >> year;
    cout << "Enter a month: ";
    cin >> month;
    cout << "Enter a day: ";
    cin >> day;

	if (year >=1000 && month >= 1 && month <= 12 && day >= 1) {
	    month -= 2;
	    if (month <= 0)
	    {
			month += 12;
			year -= 1;
		}
		month = month * 83 / 32;
		month += day;
		month += year;
		month += year / 4;
		month -= year / 100;
		month += year / 400;
		int answer = month % 7;
		if (answer == 0)
		cout << "Your day is " << answer << " Sunday" << endl;
		if (answer == 1)
		cout << "Your day is " << answer << " Monday" << endl;
		if (answer == 2)
		cout << "Your day is " << answer << " Tuesday" << endl;
		if (answer == 3)
		cout << "Your day is " << answer << " Wednesday" << endl;
		if (answer == 4)
		cout << "Your day is " << answer << " Thursday" << endl;
		if (answer == 5)
		cout << "Your day is " << answer << " Friday" << endl;
		if (answer == 6)
		cout << "Your day is " << answer << " Suttarday" << endl;
		if (answer < 0 || answer > 6)
		cout << "Error: " << answer << endl;
	}
	else
	{
		cout << "EROR!!!";
	}

	
	return 0;
}
