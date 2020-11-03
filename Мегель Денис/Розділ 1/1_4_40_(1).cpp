#include <iostream>
using namespace std;
int main(void) {
	float pi = 3.14159265359;
	float x, y, z;
	cout << "Enter value for x: ";
	cin >> x;
	z = x * x - 0.5;
	y = x * x / (pi * pi *(x * x + 0.5)) * (1 + x * x / (pi * pi * (z * z)));
	// put your code here
	cout << "y = " << y;

	system("pause");
	return 0;
}