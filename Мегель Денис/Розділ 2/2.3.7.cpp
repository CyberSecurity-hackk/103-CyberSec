#include <iostream>

using namespace std;


int main(void) {
	long int i = 0, hk, index = -1;

	cout << "Choose a number: ";
	cin >> hk;

	if (hk < 50 && hk > 0)
	{
		for (int i = 0; i < 50; ++i)
		{
			index++;
			if (index == hk)

				cout << (i - 1) + (i - 2) << endl;
		}
	}
	else
		cout << "Error" << endl;


	system("pause");
	return 0;
}