#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float a1, a2, a3, a4, a5;
	cout << "1 value= ";
	cin >> a1;
	cout << "2 value= ";
	cin >> a2;
	cout << "3 value= ";
	cin >> a3;
	cout << "4 value= ";
	cin >> a4;
	cout << "5 value= ";
	cin >> a5;
	cout << "\n1 value - " << a1;
	cout << fixed;
	cout << "\n2 value - " << setprecision(2) << a2;
	cout << "\n3 value - " << setprecision(6) << a3;
	cout << "\n4 value - " << setprecision(2) << a4;
	cout << "\n5 value - " << (int)a5;
	cout << endl;

	system("pause");
	return 0;
}