#include <iostream>

using namespace std;

int main(void) {
	double s, v = 1;

	cin >> s;

	for (int i = 0; i < s; i++)
		v /= 2;

	cout.precision(20);
	cout << v << endl;

	system("pause");
	return 0;
}