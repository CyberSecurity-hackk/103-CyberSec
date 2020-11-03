#include <iostream>
#include <cmath>

using namespace std;

int main() {
	float a, b;
	cout << "1 integer value=";
	cin >> a;
	cout << "2 integer value=";
	cin >> b;
	a = 1 / a;
	b = 1 / b;
	if (abs(a - b) < 0.000001)
		cout << "Results are equal (by 0.000001 epsilon)\n";
	else
		cout << "Results are not equal (by 0.000001 epsilon)\n";

	system("pause");
	return 0;

}