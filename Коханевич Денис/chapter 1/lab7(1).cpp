#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	float c1 = 2.3;
	float c2 = 2.3;
	float c3 = 2.123456;
	float c4 = 2.123456;
	float c5 = 2.123456;
	cout<< c1<<endl;
	cout<< fixed <<setprecision(2)<<c2<<endl;
	cout << setprecision(6)<< c3 << endl;
	cout << setprecision(2)<< c4 << endl;
	cout << setprecision(0)<< c5 << endl;
	return 0;
}
