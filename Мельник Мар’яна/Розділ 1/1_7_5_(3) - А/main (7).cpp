#include <iostream>

using namespace std;

int main()
{

	int number1, number2, number3, number4;
	
	cout << "number 1 : ";
	cin >> number1; 
	
	cout << "number 2 : ";
	cin >> number2;
	
	cout << "number 3 : ";
	cin >> number3; 
	
	cout << "number 4 : ";
	cin >> number4; 

	if (number1 <= 255 && number2 <= 255 && number3 <= 255 && number4 <= 255)
	{
		cout << "Ip number : " << number1 << "." << number2 << "." << number3 << "." << number4;
	}
	else
	{
		cout << "ERROR!\nSome number is greater 255!!!";
	}

	return 0;
}

