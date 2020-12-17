#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	char IP[16];
	char* ptr;
	long int a;

	cout << "Enter IP: ";
	cin >> IP;

	if (a = strtol(IP, &ptr, 10))
		if (a >= 0 && a <= 255)
		{
			int i;
			for (i = 0; i < 3; i++)
			{
				++ptr;
				if ((a = strtol(ptr, &ptr, 10)) || (a >= 0 && a <= 255))
				{ }
				else
				{
					cout << "Only digits and dots allowed";
					break;
				}
			}
			if (i < 3)
				cout << "IP isn't correct";
			else
				cout << "IP is correct";
		}
		else
			cout << "Too big a value of a part";
	else
		cout << "Too many characters in a part";
	cout << endl;

	system("pause");
    return 0;
}

