#include <iostream>
using namespace std;
bool isLeap(int year) {
	// The code you've inserted already
	if (year % 400 == 0)
		return true;

	if (year % 4 == 0)
		return true;

	return false;
}
int monthLength(int year, int month) {
	// Insert a new code here
	if (month<1 || month>12)
		return 0;
	int arr[]{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (isLeap(year) && month == 2)
		return (arr[month - 1] + 1);
	return arr[month - 1];
}
int main(void) {
	for (int yr = 2000; yr < 2002; yr++) {
		for (int mo = 1; mo <= 12; mo++)
			cout << monthLength(yr, mo) << " ";
		cout << endl;
	}
	system("pause");
	return 0;
}