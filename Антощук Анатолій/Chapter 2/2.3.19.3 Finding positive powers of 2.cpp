#include<iostream>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "RUS");
	int a, i, n;
	n = 1;
	cout << "Введите степень - ";
	cin >> a;
	for (i = 0; i <= a-1; i++)
	{
		n *= 2;
	}
	cout << "Ваше число во второе степени - " << n << endl;
	
	system("pause");
	return 0;
}
