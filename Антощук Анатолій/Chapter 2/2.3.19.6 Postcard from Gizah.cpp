#include<iostream>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "RUS");
	int h;
	cout << "Введите размер треугольника - ";
	cin >> h;
		
		int l = h * 2 - 1;
		for (int i = 1; i <= l; i += 2)
		{

			for (int j = 0; j < (l - i) / 2; j++)
				cout << " ";
			for (int j = 0; j < i; j++)
				cout << "*";
			cout << endl;
		}
	return 0;
}
