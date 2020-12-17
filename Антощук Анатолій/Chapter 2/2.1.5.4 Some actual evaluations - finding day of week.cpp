#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL,"RUS");
	int d, m, y, k;
	
	
	cout << "Введите год: ";
	cin >> y;
	cout << endl;

	cout << "Введите месяц: ";
	cin >> m;
	cout << endl;

	cout << "Введите день: ";
	cin >> d;
	cout << endl;

	m = m - 2;
	if (m < 0)
	{
		
		m = m + 12;
		y = y - 1;
		m = (m * 83) / 32;
		m = m + d;
		m = m + y;
		m = m + (y / 4);
		m = m - (y / 100);
		m = m + (y / 400);
		m = m % 7;
	}
	else
	{
		m = (m * 83) / 32;
		m = m + d;
		m = m + y;
		m = m + (y / 4);
		m = m - (y / 100);
		m = m + (y / 400);
		m = m % 7;
	}

	cout << "День недели - " << m << endl;

return 0;
}