#include <iostream>

using namespace std;

int main(void) {
	int s, v = 1;
	cin >> s;

	for (int i = 0; i < s; i++)
		v *= 2;

	cout << v << endl;

	system("pause");
	return 0;
}