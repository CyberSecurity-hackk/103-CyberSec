#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int n, i, a;
	int count = 0;
	cout << "Введите число - ";
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		n = n / 2;
		a = n % 2;
		cout << a << " ";
		if (a != 0)
		{
			count++;
			
		}
	}
	cout << 1;
	cout << endl;
	cout << "Число имеет " << count + 1 << " бит(а) " << endl;
	return(0);
}
