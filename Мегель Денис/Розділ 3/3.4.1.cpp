#include <iostream>

using namespace std;

bool isLeap(int year) {
	// Insert your code here
	if (year % 400 == 0)
		return true;

	if (year % 4 == 0)
		return true;

	return false;
}
int main(void) {
	for (int yr = 1995; yr < 2017; yr++)
		cout << yr << " -> " << isLeap(yr) << endl;

	system("pause");
	return 0;
}