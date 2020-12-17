#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int n;
	int i;
	int f;

	cout << "Введите число - ";
	cin >> n;
	f = 1;
	for (i = 1; i <= n; i++) {
		f = f * i;
	}
	cout << "Факториал - " << f << endl;

	return 0;
}
