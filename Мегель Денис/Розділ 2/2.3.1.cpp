#include <iostream>

using namespace std;

int main(void) {
	int c0, c = 0;

	cout << "c0: ";
	cin >> c0;

	while (c0 != 1)
		if (c0 > 0 && c0 != 1)
			if (c0 % 2 == 0)
			{
				c++;
				c0 = c0 / 2;
				cout << c0 << endl;
			}
			else
			{
				c++;
				c0 = 3 * c0 + 1;
				cout << c0 << endl;
			}
		else
			cout << "Error" << endl;

	cout << "steps = " << c << endl;

	system("pause");
	return 0;
}