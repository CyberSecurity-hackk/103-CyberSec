#include<iostream>
using namespace std;

int fib(int n)
{
	if (n < 3)
		return 1;
	return fib(n - 2) + fib(n - 1);
}

int main()
{
	setlocale(LC_ALL, "RUS");
	int n = 0;
	cout << "Введите номер числа в последовательности Фибоначчи -  ";
	cin >> n;
	cout << "Число -  " << fib(n) << endl;
	return 0;
}
