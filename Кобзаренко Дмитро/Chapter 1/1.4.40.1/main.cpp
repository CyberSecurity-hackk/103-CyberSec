﻿#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
	float z = 3.1415926535;
	float x, y;

	cout << "Enter value for x: ";
	cin >> x;

	

y = (x * x) / ((pow(z, 2)) * (pow(x, 2) + 0.5)) *  ( 1+ (pow(x,2)) / (pow(z, 2 )* (pow( (x * x - 0.5), 2))) ) ;



	cout << "y = " << y;
	return 0;
}