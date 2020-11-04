#include <iostream>

using namespace std;

int main()
{

	int chast1, chast2, chast3, chast4;
	cout << "Введите 1 часть ip : ";
	cin >> chast1;
	cout << "Введите 2 часть ip : ";
	cin >> chast2;
	cout << "Введите 3 часть ip : ";
	cin >> chast3;
	cout << "Введите 4 часть ip : ";
	cin >> chast4;

	if (chast1 <= 255 && chast2 <= 255 && chast3 <= 255 && chast4 <= 255)
	{
		cout << "Ip-адресс : " << chast1 << "." << chast2 << "." << chast3 << "." << chast4;
	}
	else
	{
		cout << "Единицы или более между вашими числами больше 255";
	}

	return 0;
}
