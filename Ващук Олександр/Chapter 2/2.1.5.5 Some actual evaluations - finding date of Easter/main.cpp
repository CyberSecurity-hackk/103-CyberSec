﻿#include <iostream>
#include <string>
using namespace std;
int main(void) 
{
	int year;
	cout << "Enter a year: ";
	cin >> year;
	if (year >= 1900 && year <= 2100)
	{
		int a = year % 19;
		int b = year % 4;
		int c = year % 7;
		int d = (a * 19 + 24) % 30;
		int e = (2 * b + 4 * c + 6 * d + 5) % 7;
		int EasterDate;
		if (d + e < 10)
		{
			EasterDate = d + e + 22;
			cout << "March " << EasterDate << endl;
		}
		else
		{
			EasterDate = d + e - 9;
			cout << "April " << EasterDate << endl;
		}
	}
	else
	{
		cout << "You entered invalid data";
	}
	return 0;
}

