#include <iostream>

using namespace std;

int main() {
	float a, b;
	int action, cs;

	cout << "Menu:\n 0 - exit\n 1 - addition\n 2 - subtraction\n 3 - multiplication\n 4 - division\n Your choice ? \n ";
	cin >> action;

	while (action != 0)
	{
		cs = action;
		cout << "Enter the first number: ";
		cin >> a;
		cout << "Enter the second number: ";
		cin >> b;

		switch (cs)
		{
		case 0:
			break;
		case 1:
		{
			a = a + b;
			break;
		}
		case 2:
		{
			a = a - b;
			break;
		}
		case 3:
		{
			a = a * a;
			break;
		}
		case 4:
		{
			if (b == 0)
				cout << "Error" << endl;
			else
				a = a / b;
			break;
		}
		}
		cout << "Result: " << a;
		cout << endl;
	}
	system ("pause");
}