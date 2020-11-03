#include <iostream>
using namespace std;
int main(void) {
	int a, b, c, d, e, year;

	cout << "Enter year: ";
	cin >> year;

	a = year % 19;
	b = year % 4;
	c = year % 7;
	d = (a * 19 + 24) % 30;
	e = ((2 * b) + (4 * c) + (6 * d) + 5) % 7;

	if (e + d < 10)
		cout << "March " << d + e + 22 << endl;
	else
		cout << "April " << d + e - 9 << endl;
	system("pause");
	return 0;
}