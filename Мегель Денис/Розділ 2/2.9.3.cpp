#include <iostream>

using namespace std;

int main() {
	int vector[] = { 1, 7, 3, 8, 3, 7, 1 }, vc = -1;
	bool ispalindrome = true;
	int n = sizeof(vector) / sizeof(vector[0]);
	int* v1 = new int[n / 2];
	int* v2 = new int[n / 2];

	if (n % 2 != 0)
	{
		for (int i = 0; i < n / 2; i++)
			v1[i] = vector[i];

		for (int j = n; j > n / 2; j--)
		{
			v2[vc] = vector[j];
			vc++;
		}
	}
	else
	{
		for (int i = 0; i < (n / 2) - 1; i++)
			v1[i] = vector[i];

		for (int j = n; j >(n / 2) - 1; j--)
		{
			v2[vc] = vector[j];
			vc++;
		}
	}

	for (int i = 0; i < n / 2; i++)
		cout << v2[i] << "\t";
	cout << endl;
	for (int i = 0; i < n / 2; i++)
		cout << v2[i] << "\t";
	cout << endl;

	if (n % 2 != 0)
		for (int i = 0; i < n / 2; i++)
			if (v1[i] == v2[i])
				ispalindrome = true;
			else
			{
				ispalindrome = false;
				break;
			}

	if (n % 2 == 0)
		for (int i = 0; i < (n / 2) - 1; i++)
			if (v1[i] == v2[i])
				ispalindrome = true;
			else
			{
				ispalindrome = false;
				break;
			}

	if (ispalindrome == 1)
		cout << "Palindrome" << endl;
	else
		cout << "Not a palindrome" << endl;
	system("pause");
}