#include <iostream>
using namespace std;

int main(void)
{
	int n;
	cout << "Enter a side please: ";
	cin >> n;
	if (n < 2)
	{
		cout << "Try again, Side should be 2 or greater" << endl;
		return 0;
	}
	else if (n > 50)
	{
		cout << "Sorry, the side size is too big" << endl;
		return 0;
	}
	cout << '+';
	for (int i = 0; i < n - 2; i++)
		cout << '-';
	cout << '+' << endl;
	for (int i = 0; i < n - 2; i++) {
		cout << '|';
		for (int j = 0; j < n - 2; j++)
			cout << ' ';
		cout << '|' << endl;
	}
	cout << '+';
	for (int i = 0; i < n - 2; i++)
		cout << '-';
	cout << '+' << endl;
	return 0;
}
