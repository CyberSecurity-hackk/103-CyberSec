#include<iostream>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "RUS");
	int a, i;
	double n;
	n = 1;
	cout << "Введите степень - ";
	cin >> a;
	for (i = 0; i <= a-1; i++)
	{
		n *= 2;
	}
	n = 1 / n;
	cout.precision(20);
	cout << "Ваше число во второе степени - " << n << endl;
	
	return 0;
}
