#include <iostream>

using namespace std;
void Gizah(int k)
{
	if (k >= 2 && k <= 9)
	{
		for (int i = 0; i < k - (k / 10); i++)
			cout << ' ';

		cout << "*";
		cout << endl;

		for (int j = 0; j < k - 2; j++)
		{
			for (int i = 1; i < k - j; i++)
				cout << ' ';
			cout << '*';
			for (int x = k - 2 * j; x <= k; x++)
				cout << ' ';
			cout << '*';
			cout << endl;
		}

		double a;
		a = k * 1.6;
		if (k > 2 && k < 6)
			a += 1;
		if (k > 5 && k < 8)
			a += 2;
		if (k > 7 && k <= 9)
			a += 3;

		cout << " ";

		for (int j = 0; j < a-1; j++)
			cout << "*";

		cout << endl;
	}
	else
		cout << "incorrect value";

	cout << endl;
}
int main(void) {

	int size;

	cin >> size;

	Gizah(size);
	Gizah(size);
	Gizah(size);

	system("pause");
	return 0;
}