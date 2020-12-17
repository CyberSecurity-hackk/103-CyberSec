#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL,"RUS");
	int y, a, b, c, d, e, p;
	cout << "Введите год: ";
	cin >> y;
	a = y % 19;
	b = y % 4;
	c = y % 7;
	d = (a * 19 + 24) % 30;
	e = (2 * b + 4 * c + 6 * d + 5) % 7;
	if ((d + e) < 10)
	{
		p = d + e + 22;
		cout << p << " марта!" << endl;
	}
	else
	{
		p = d + e - 9;
		cout << p << " апреля!" << endl;
	}
	return 0;
}
