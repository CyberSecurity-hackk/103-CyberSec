#include <iostream>
#include<cmath>
#include<cstdlib>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int a, b, c;
	int z;
	do {
		cout << "Первое число: ";
		cin >> a;
		cout << "Второе число: ";
		cin >> b;
		
		cout << "Действие: " << endl;
		cout << "0 - выход" << endl;
		cout << "1 - добавление" << endl;
		cout << "2 - вычитание" << endl;
		cout << "3- умножение" << endl;
		cout << "4 - деление" << endl;
		cin >> z;
		
		
		switch (z)
		{
		case 0:
			cout << "Вы вышли!"; break;
		case 1:
		{
			c = a + b;
			cout << "результат: " << c << endl;

			break;
		}
		case 2:
		{
			c = a - b;
			cout << "результат: " << c << endl;
			break;
		}
		case 3:
		{
			c = a * b;
			cout << "результат: " << c << endl;
			break;
		}
		case 4:
		{
			c = a / b;
			cout << "результат: " << c << endl;
			break;
		}
		default:
			cout << "Не верное значение." << endl;
		}
	} while (z != 0);
	return(0);
}
