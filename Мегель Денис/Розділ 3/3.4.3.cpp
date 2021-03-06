#include <iostream>
using namespace std;
struct Date {
	int year;
	int month;
	int day;
};
bool isLeap(int year) {
	// The code you've inserted already
	if (year % 400 == 0)
		return true;

	if (year % 4 == 0)
		return true;

	return false;
}
int monthLength(int year, int month) {
	// The code you've inserted already
	if (month<1 || month>12)
		return 0;
	int arr[]{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (isLeap(year) && month == 2)
		return (arr[month - 1] + 1);
	return arr[month - 1];
}
int dayOfYear(Date date) {
	// Insert your code here
	int sum = 0;
	for (int i = 1; i<date.month; i++) {
		sum += monthLength(date.year, i);
	}
	return sum + date.day;
}
int main(void) {
	Date d;
	cout << "Enter year month day: ";
	cin >> d.year >> d.month >> d.day;
	cout << dayOfYear(d) << endl;
	system("pause");
	return 0;
}