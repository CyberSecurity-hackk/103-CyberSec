#include <iostream>

using namespace std;

int main(void) {
	float grossprice, taxrate, netprice, taxvalue;

	cout << "Enter a gross price: ";
	cin >> grossprice;
	cout << "Enter a tax rate: ";
	cin >> taxrate;

	if (taxrate > 0 && taxrate < 100 && grossprice > 0) {
		netprice = grossprice / (1 + (taxrate / 100));
		taxvalue = netprice * (taxrate / 100);
	}
	else
		cout << "Incorect value";

	cout << endl;
	cout << "Net price: " << netprice << endl;
	cout << "Tax value: " << taxvalue << endl;
	cout << endl;
	system("pause");
	return 0;
}