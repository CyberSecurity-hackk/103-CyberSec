#include <iostream>

using namespace std;

int main(void) {
	unsigned long n;
	int i, s;

	cin >> n;

	s = 0;
	for (int i = 0; i < 32; i++)
		s += ((n>> i) & 1);
	cout << s << endl;

	system("pause");
	return 0;
}