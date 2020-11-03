#include <iostream>

using namespace std;

int main() {
	int plussar, counter = -1, m[500];

	cout << "Enter money: ";
	cin >> plussar;

	while (plussar >= 50)
	{
		if (plussar >= 50)
		{
			counter++;
			plussar -= 50;
			m[counter] = 50;
		}
		
	}
	while (plussar >= 20)
	{
		if (plussar > 20)
		{
			counter++;
			plussar -= 20;
			m[counter] = 20;
		}

	}
	while (plussar >= 10)
	{
		if (plussar > 10)
		{
			counter++;
			plussar -= 10;
			m[counter] = 10;
		}

	}
	while (plussar >= 5)
	{
		counter++;
		plussar -= 5;
		m[counter] = 5;

	}
	while (plussar >= 1)
	{
		counter++;
		plussar -= 1;
		m[counter] = 1;

	}

	for (int i = 0; i <= counter; i++)
		cout << m[i] << "\t";
	system("pause");
}