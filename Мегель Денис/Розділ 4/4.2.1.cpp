#include <iostream>
#include "stdafx.h"

using namespace std;

int main() {
		long int N, Factorial = 0;
		cout << "Enter N: ";
		cin >> N;
		if (N >= 1 && N <= 100000)
		{
			for (int i = 1; i < N + 1; i++) {
				Factorial += i;
				cout << Factorial << endl;
			}
		}
		else
			cout << "Enter 1<N<100000" << endl;

		system("pause");
		return 0;
	}