#include <iostream>
#include<cstdlib>
#include<string>
#include <algorithm>
using namespace std;
int main()
{
	string password;
	cout << "Enter a password:";
	getline(cin, password);
	char uc_letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char letters[] = "abcdefghijklmnopqrstuvwxyz";
	char digits[] = "1234567890";
	char symbols[] = "/<>,.$%[]{}^&*!@#_-+=;:?";
	if (password.length() < 8)
		cout << "\nThe password must be 8 characters long!\n";

	int k = 0;
	for (int i = 0; i < 26; i++)
		if (password.find(uc_letters[i]) != string::npos)
			k++;
	if (k == 0)
		cout << "\nThe password must have at least one upper case letter!" << endl;

	int x = 0;
	for (int i = 0; i < 26; i++)
		if (password.find(letters[i]) != string::npos)
			x++;
	if (x == 0)
		cout << "\nThe password must have at least one lower case letter!" << endl;
	int y = 0;
	for (int i = 0; i < 10; i++)
		if (password.find(digits[i]) != string::npos)
			y++;
	if (y == 0)
		cout << "\nThe password must have at least one digit!" << endl;

	int z = 0;
	for (int i = 0; i < 24; i++)
		if (password.find(symbols[i]) != string::npos)
			z++;

	if (z == 0)
		cout << "\nThe password must have at least one special character!" << endl;

	if ((password.length()) >= 8 && k != 0 && x != 0 && y != 0 && z != 0)
		cout << "\nThe password is valid" << endl;

	return 0;
}
