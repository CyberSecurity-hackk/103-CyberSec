#include <iostream>

using namespace std;

int main(void) {

	int vector1[7] = {4, 7, 2, 8, 1, 3, 0};
	int vector2[7];

	for (int i =0; i < 7 - i - 1; i++)
	{
       int  x = vector1[i];
        vector1[i] = vector1[7 - i - 1];
        vector1[7 - i - 1] = x;
	}

	for(int i = 0; i < 7; i++)
		cout << vector1[i] << ' ';
	cout << endl;
	return 0;
}