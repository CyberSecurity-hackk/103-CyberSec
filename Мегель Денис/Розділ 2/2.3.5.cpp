#include <iostream>

using namespace std;

int main(void) {
	int n;
	cin >> n;
	n -= 2;
	cout << '+';
	for (int i = 0; i < n; i++)
		cout << '-';
	cout << '+' << endl;
	for (int i = 0; i < n; i++) {
		cout << '|';
		for (int j = 0; j < n; j++)
			cout << ' ';
		cout << '|' << endl;
	}
	cout << '+';
	for (int i = 0; i < n; i++)
		cout << '-';
	cout << '+' << endl;
	system("pause");
	return 0;
}