#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	long int n, summ = 0;
	cout << "Enter n: ";
	cin >> n;
	if (n >= 1 && n <= 1000000)
	{
		for (int i = 1; i < n + 1; i++)
			summ = summ + i;

		cout << summ << endl;
	}
	else
		cout << "Error" << endl;
	return 0;
}
