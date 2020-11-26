#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n) {
	// Insert your code here
	for (int i = 2; i <= n / 2; i++)
		if ((n % i) == 0)
			return false;
	return true;
}
int main(void) {
	for (int i = 2; i <= 21; i++)
		if (isPrime(i))
			cout << i << " ";
	cout << endl;

	system("pause");
	return 0;
}