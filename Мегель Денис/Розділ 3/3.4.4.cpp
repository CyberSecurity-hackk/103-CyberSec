#include <iostream>
using namespace std;

struct Date
{
	int year, month, day;
};
bool isLeap(int year) {
	if (year % 400 == 0)
		return true;

	if (year % 4 == 0)
		return true;

	return false;
}

int monthLength(int year, int month) {
	if (month<1 || month>12)
		return 0;
	int arr[]{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (isLeap(year) && month == 2)
		return (arr[month - 1] + 1);
	return arr[month - 1];
	
}
int dayOfYear(Date date) {
	int counter = 0;

	for (int mo = 0; mo <= date.month - 1; mo++)
		counter += monthLength(date.year, mo);
	counter += date.day;

	return counter;
}
int daysBetween(Date d1, Date d2) {
	int dd1 = 0, dd2;
	if (d2.year<d1.year)
		return -1;
	for (int i = d1.year; i<d2.year; i++) {
		if (isLeap(i))
			dd1 += 366;
		else
			dd1 += 365;
	}
	dd1 += dayOfYear(d2) - dayOfYear(d1);
	if (dd1<0)
		return -1;
	return dd1;
}

int main(void) {
	Date since, till;
	cout << "Enter first date (y m d): ";
	cin >> since.year >> since.month >> since.day;
	cout << "Enter second date (y m d): ";
	cin >> till.year >> till.month >> till.day;
	cout << daysBetween(since, till) << endl;


	system("pause");
	return 0;
}