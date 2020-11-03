#include <iostream>

using namespace std;

int main(void){

	int year, month, day, result;

cout << "Enter date (year, mounth, day): ";
cin >> year;
cin >> month;
cin >> day;

if ((month <= 12 && month > 0) && (year >= 1900 && year < 2100))
{
	month -= 2;
	if (month < 0)
	{
		month += 12;
		year -= 1;
	}
	month = (month * 83) / 32;
	month += day;
	month += year;
	month += year / 4;
	month -= year / 100;
	month += year / 400;
	result = month % 7;

	if (result == 0)
		cout << "0 Sunday" << endl;
	if (result == 1)
		cout << "1 Monday" << endl;
	if (result == 2)
		cout << "2 Tuesday" << endl;
	if (result == 3)
		cout << "3 Wednesday" << endl;
	if (result == 4)
		cout << "4 Thursday" << endl;
	if (result == 5)
		cout << "5 Friday" << endl;
	if (result == 6)
		cout << "6 Suttarday" << endl;
	if (result < 0 || result > 6)
		cout << "Error: " << result << endl;
}
else
cout << "Incorrect!" << endl;
system("pause");
return 0;
	}