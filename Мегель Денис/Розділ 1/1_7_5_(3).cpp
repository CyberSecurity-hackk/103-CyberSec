#include <iostream>

using namespace std;

int main(){
	int a1, a2, a3, a4;
	cout << "1 value - ";
	cin >> a1;
	cout << "2 value - ";
	cin >> a2;
	cout << "3 value - ";
	cin >> a3; 
	cout << "4 value - ";
	cin >> a4;
	if ((a1 >= 0 && a1 <= 255) &&
		(a2 >= 0 && a2 <= 255) &&
		(a3 >= 0 && a3 <= 255) &&
		(a4 >= 0 && a4 <= 255))
		cout << a1 << "." << a2 << "." << a3 << "." << a4 << endl;
	else
		cout << "Incorrect values \n";

	system("pause");
	return 0;

}