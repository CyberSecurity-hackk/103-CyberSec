#include <iostream>

using namespace std;

int main(void) {
	int n, factorial = 1;

	cin >> n;

	for (int i = 1; i <= n; i++)
		factorial *= i;

	cout << factorial << endl;

	system("pause");
	return 0;
}