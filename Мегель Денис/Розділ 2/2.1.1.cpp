#include <iostream>

using namespace std;

int main(void) {
	int year;
	cout << "Enter a year: ";
	cin >> year;
	if (year >= 1582)
	  if ((year % 4) != 0)
		  cout << year << " is a common year ";
	  else if (year % 100 != 0 )
		  cout << year << " is a leap year ";
	  else if (year % 400 != 0)
		  cout << year << " is a common year ";
	  else 
		  cout << year << " is a leap year ";
	else
		cout << year << " is not in Gregorian calendar ";

	cout << endl;
	// Insert your code here
	system("pause");
	return 0;
}