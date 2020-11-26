#include <iostream>

using namespace std;

int main(void) {
	int vector[] = { 3, -5, 7, 10, -4, 14, 5, 2, -13 }, *p = new int, index;
	int n = sizeof(vector) / sizeof(vector[0]);
	// Insert your code here

	*p = 100;

	for (int i = 0; i < n; i++)
		if (vector[i] < *p)
		{
			*p = vector[i];
			index = i + 1;
		}

	cout << "The smallest element is number: " << index <<" value "<< "(" << *p << ")" << endl;
	system("pause");
	return 0;
}
