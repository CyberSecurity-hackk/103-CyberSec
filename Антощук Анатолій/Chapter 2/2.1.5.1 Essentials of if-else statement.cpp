#include <iostream>
using namespace std;

int main(void) {
	int year;
	
	cout << "Enter a year: ";
	cin >> year;
	
	if (year % 4) {cout<<"Год обычный";} else
	if (year % 100){ cout<<"Год высокостный";}else 
	if (year % 400){cout<<"Год обычный";} else
	cout<<"Год высокостный";
	
	return 0;
}