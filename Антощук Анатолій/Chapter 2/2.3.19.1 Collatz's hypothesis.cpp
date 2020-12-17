#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int c0, count = 0;
	cout << "Введите любое неотрицательное и ненулевое целое число: ";
	cin >> c0;
	while (c0 != 1)
	{
		if (c0 % 2 == 0)
			c0 = c0 / 2;
		else
			c0 = 3 * c0 + 1;
		count += 1;
		cout << c0 << endl;
	}
	cout << "Количество шагов - " << count << endl;
	return 0;
}
