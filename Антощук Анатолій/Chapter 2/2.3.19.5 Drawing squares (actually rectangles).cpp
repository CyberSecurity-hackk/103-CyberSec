#include<iostream>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "RUS");
	int a;
	cout << "Введите размер квадрата - ";
	cin >> a;
	if (a > 50)
		cout << "Извините размер слишком большой!" << endl;
	else
	{
		cout << endl;
		cout << "+";
		for (int i = 0; i < a - 2; i++)
			cout << '-';
		cout << '+' << endl;
		for (int i = 0; i < a - 2; i++)
		{
			cout << '|';
			for (int j = 0; j < a - 2; j++)
				cout << ' ';
			cout << '|' << endl;
		}
		cout << '+';
		for (int i = 0; i < a - 2; i++)
			cout << '-';
		cout << '+' << endl;
	}

	return 0;
}
